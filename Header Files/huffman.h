#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <queue>
#include <fstream>
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<time.h>
#include<stdlib.h>
#include <filesystem>

using namespace std;
#define Char_size 256

struct Node                                                                                     //Structure of a Node of a Huffman tree for decoding
{
	long long int Freq;
	unsigned char character;
	Node* left;
	Node* right;
	Node(char c, Node* l = NULL, Node* r = NULL)
	{
		character = c;
		left = l;
		right = r;
	}
	Node(unsigned char c, long long int f, Node* l = NULL, Node* r = NULL)
	{
		character = c;
		Freq = f;
		left = l;
		right = r;
	}

};
Node* Make_Huffman_tree(ifstream&);
void Mindownheap(vector<Node*>&, int, int);
Node* Extract_min(vector<Node*>&);
void Insert_MinHeap(vector<Node*> &, Node*);
void Build_Minheap(vector<Node*> &, int);
void store_codes(Node*, char[], int, vector<long long int>&);
void store_tree(ofstream &, Node*);
Node* Huffman(long long int[]);
void Write_compressed(ifstream&, ofstream&, vector<long long int >&);
void decode(ifstream&, string, Node*, long long int);
void Decompresing(string);
void compresing(string);

#endif // HUFFMAN_H_INCLUDED
#ifndef HUFFMAN_H
#define HUFFMAN_H

#include <queue>
#include <fstream>
#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<time.h>
#include<stdlib.h>
#include <filesystem>

using namespace std;
#define Char_size 256

struct Node                                                                                     //Structure of a Node of a Huffman tree for decoding
{
	long long int Freq;
	unsigned char character;
	Node* left;
	Node* right;
	Node(char c, Node* l = NULL, Node* r = NULL)
	{
		character = c;
		left = l;
		right = r;
	}
	Node(unsigned char c, long long int f, Node* l = NULL, Node* r = NULL)
	{
		character = c;
		Freq = f;
		left = l;
		right = r;
	}

};
Node* Make_Huffman_tree(ifstream&);
void Mindownheap(vector<Node*>&, int, int);
Node* Extract_min(vector<Node*>&);
void Insert_MinHeap(vector<Node*> &, Node*);
void Build_Minheap(vector<Node*> &, int);
void store_codes(Node*, char[], int, vector<long long int>&);
void store_tree(ofstream &, Node*);
Node* Huffman(long long int[]);
void Write_compressed(ifstream&, ofstream&, vector<long long int >&);
void decode(ifstream&, string, Node*, long long int);
void Decompresing(string);
void compresing(string);

#endif // HUFFMAN_H_INCLUDED

