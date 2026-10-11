// from server: 100% by colin
// roc 2009-06 00889c70  unit: seg_00880000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00889c70
//
// 00889c70  6894518d00           push 0x8d5194
// 00889c75  689c518d00           push 0x8d519c
// 00889c7a  6a78                 push 0x78
// 00889c7c  b9443fa400           mov ecx, 0xa43f44
// 00889c81  e8da75d4ff           call 0x5d1260
// 00889c86  6870748900           push 0x897470
// 00889c8b  e86bfee8ff           call 0x719afb
// 00889c90  59                   pop ecx
// 00889c91  c3                   ret 

static const char a[]="child"; static const char b[]="ChildRemoved";
struct Obj{void run(int,const char*,const char*);}; extern Obj obj; extern int e; extern "C" void tail(void*);
void func(){obj.run(0x78,b,a);tail((void*)&e);}
