// from server: 100% by king_originala
// roc 2008-06 005531e0  unit: RBX::RenderBase::AggregateChunk  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005531e0
//
// 005531e0  55                   push ebp
// 005531e1  8bec                 mov ebp, esp
// 005531e3  51                   push ecx
// 005531e4  894dfc               mov dword ptr [ebp - 4], ecx
// 005531e7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005531ea  83c008               add eax, 8
// 005531ed  50                   push eax
// 005531ee  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 005531f1  51                   push ecx
// 005531f2  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005531f5  52                   push edx
// 005531f6  8b4508               mov eax, dword ptr [ebp + 8]
// 005531f9  50                   push eax
// 005531fa  e8e1010000           call 0x5533e0
// 005531ff  83c410               add esp, 0x10
// 00553202  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00553205  6bc028               imul eax, eax, 0x28
// 00553208  034508               add eax, dword ptr [ebp + 8]
// 0055320b  8be5                 mov esp, ebp
// 0055320d  5d                   pop ebp
// 0055320e  c20c00               ret 0xc

struct Item {
    char data[40];
};

extern "C" void __cdecl helper(Item *, int, int, void *);

struct S {
    char padding[8];
    char context;

    Item *f(Item *, int, int);
};

#pragma optimize("", off)
Item *S::f(Item *first, int count, int value)
{
    helper(first, count, value, &context);
    return first + count;
}
