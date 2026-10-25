// from server: 93% by colin
// roc 2010-06 009c3990  unit: seg_009c0000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 009c3990
//
// 009c3990  33c9                 xor ecx, ecx
// 009c3992  51                   push ecx
// 009c3993  6a0f                 push 0xf
// 009c3995  51                   push ecx
// 009c3996  b8a0c54400           mov eax, 0x44c5a0
// 009c399b  50                   push eax
// 009c399c  68e0554400           push 0x4455e0
// 009c39a1  68f8b7a000           push 0xa0b7f8
// 009c39a6  68e0b7a000           push 0xa0b7e0
// 009c39ab  b99014c000           mov ecx, 0xc01490
// 009c39b0  e8fb5aa8ff           call 0x4494b0
// 009c39b5  6830b79d00           push 0x9db730
// 009c39ba  e8a450deff           call 0x7a8a63
// 009c39bf  59                   pop ecx
// 009c39c0  c3                   ret 

static const char a[]="WindowSizePreference"; static const char b[]="Screen";
struct C{void m();}; extern void (C::*pmf)(); struct Obj{void run(const char*,const char*,void*,void(C::*)(),int,int,int);}; extern Obj obj; extern int e; extern "C" void tail(void*);
void func(){obj.run(a,b,(void*)0x4455e0,pmf,0,0xf,0);tail((void*)&e);}
