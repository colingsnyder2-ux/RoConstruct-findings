// from server: 100% by colin
// roc 2009-06 00889ca0  unit: seg_00880000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00889ca0
//
// 00889ca0  685c518d00           push 0x8d515c
// 00889ca5  68ac518d00           push 0x8d51ac
// 00889caa  6a7c                 push 0x7c
// 00889cac  b9983ea400           mov ecx, 0xa43e98
// 00889cb1  e8aa75d4ff           call 0x5d1260
// 00889cb6  68b0748900           push 0x8974b0
// 00889cbb  e83bfee8ff           call 0x719afb
// 00889cc0  59                   pop ecx
// 00889cc1  c3                   ret 

static const char a[]="descendant"; static const char b[]="DescendantAdded";
struct Obj{void run(int,const char*,const char*);}; extern Obj obj; extern int e; extern "C" void tail(void*);
void func(){obj.run(0x7c,b,a);tail((void*)&e);}
