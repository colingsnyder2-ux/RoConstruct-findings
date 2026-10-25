// from server: 100% by tester
// roc 2008-06 005cc420  unit: RBX::VCamera::?$FactoryProduct  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc420
//
// 005cc420  8b81dc010000         mov eax, dword ptr [ecx + 0x1dc]
// 005cc426  85c0                 test eax, eax
// 005cc428  7418                 je 0x5cc442
// 005cc42a  6a00                 push 0
// 005cc42c  6804839400           push 0x948304
// 005cc431  687c909200           push 0x92907c
// 005cc436  6a00                 push 0
// 005cc438  50                   push eax
// 005cc439  e888530d00           call 0x6a17c6
// 005cc43e  83c414               add esp, 0x14
// 005cc441  c3                   ret 
// 005cc442  33c0                 xor eax, eax
// 005cc444  c3                   ret 

struct S {
    char pad[0x1dc];
    int f1dc;
    int method();
};
extern char g92907c[], g948304[];
extern "C" int __cdecl sub_6A17C6(int, int, void*, void*, int);
int S::method() {
    if (f1dc != 0)
        return sub_6A17C6(f1dc, 0, g92907c, g948304, 0);
    return 0;
}
