// from server: 100% by colin
// roc 2008-06 00551600  unit: seg_00550000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00551600
//
// 00551600  55                   push ebp
// 00551601  8bec                 mov ebp, esp
// 00551603  51                   push ecx
// 00551604  894dfc               mov dword ptr [ebp - 4], ecx
// 00551607  6a00                 push 0
// 00551609  6a00                 push 0
// 0055160b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0055160e  e80d000000           call 0x551620
// 00551613  8b45fc               mov eax, dword ptr [ebp - 4]
// 00551616  8be5                 mov esp, ebp
// 00551618  5d                   pop ebp
// 00551619  c3                   ret 

struct S {
    S();
    void init(int, int);
};

#pragma optimize("", off)
S::S()
{
    init(0, 0);
}
#pragma optimize("", on)
