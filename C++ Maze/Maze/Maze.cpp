#include "pch.h"
#include <iostream>
#include "Location2D.h"
#include "Maze.h"
#include <Windows.h>

void main() {

	Maze maze; //미로 탐색 객체 생성
	maze.load("Maze.txt");
	maze.print();
	Sleep(5000);			//5초간 미로를 보여준 후 길찾기 실행.


	maze.searchExit();
	maze.printPath();		//미로를 탐색하면서 스택에 넣은 정보를 애니메이션으로 출력하는 함수.
	system("cls");

	maze.load("Maze.txt");	//위에서 미로 정보를 수정했으므로 새로 미로파일을 로드해온다.
	maze.searchExit();
	maze.resultPrint();		//실제 이동경로.


	freopen("result.txt", "w", stdout);	// 이 밑으로는 출력되지 않고 result.txt 파일로 저장됨.
	maze.load("Maze.txt");
	maze.printFile();		//미로
	maze.searchExit();
	maze.printFile();		//이동경로 표시된 미로
}