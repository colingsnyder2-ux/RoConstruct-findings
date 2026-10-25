// from server: 55% by atomic.potato
// roc 2011-06 0043f6a0  unit: CDeclarationView  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043f6a0
//
// 0043f6a0  56                   push esi
// 0043f6a1  8b742408             mov esi, dword ptr [esp + 8]
// 0043f6a5  833e00               cmp dword ptr [esi], 0
// 0043f6a8  57                   push edi
// 0043f6a9  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0043f6ad  7e0d                 jle 0x43f6bc
// 0043f6af  68e888a600           push 0xa688e8
// 0043f6b4  8bcf                 mov ecx, edi
// 0043f6b6  ff15b004a400         call dword ptr [0xa404b0]
// 0043f6bc  8b442414             mov eax, dword ptr [esp + 0x14]
// 0043f6c0  8b00                 mov eax, dword ptr [eax]
// 0043f6c2  8d4804               lea ecx, [eax + 4]
// 0043f6c5  ff15cc04a400         call dword ptr [0xa404cc]
// 0043f6cb  50                   push eax
// 0043f6cc  8bcf                 mov ecx, edi
// 0043f6ce  ff15b004a400         call dword ptr [0xa404b0]
// 0043f6d4  ff06                 inc dword ptr [esi]
// 0043f6d6  5f                   pop edi
// 0043f6d7  5e                   pop esi
// 0043f6d8  c3                   ret 

extern "C" {
    int __stdcall G1_func_00a404b0();
    int __stdcall G1_func_00a404cc();
}

struct CDeclarationView {
};

void __cdecl f(int* a, void* b, int* c)
{
    if (*a > 0) {
        G1_func_00a404b0();
    }
    int v = *c;
    G1_func_00a404cc();
    G1_func_00a404b0();
    ++*a;
}
