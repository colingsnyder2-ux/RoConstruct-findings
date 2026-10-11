// from server: 100% by colin
// roc 2009-06 00889c40  unit: seg_00880000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00889c40
//
// 00889c40  6894518d00           push 0x8d5194
// 00889c45  6888518d00           push 0x8d5188
// 00889c4a  6a74                 push 0x74
// 00889c4c  b9103fa400           mov ecx, 0xa43f10
// 00889c51  e80a76d4ff           call 0x5d1260
// 00889c56  68c0758900           push 0x8975c0
// 00889c5b  e89bfee8ff           call 0x719afb
// 00889c60  59                   pop ecx
// 00889c61  c3                   ret 

static const char a[]="child"; static const char b[]="ChildAdded";
struct Obj{void run(int,const char*,const char*);}; extern Obj obj; extern int e; extern "C" void tail(void*);
void func(){obj.run(0x74,b,a);tail((void*)&e);}
