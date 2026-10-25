// from server: 100% by king_originala
// roc 2008-06 005535e0  unit: RBX::RenderBase::AggregateChunk  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005535e0
//
// 005535e0  55                   push ebp
// 005535e1  8bec                 mov ebp, esp
// 005535e3  51                   push ecx
// 005535e4  894dfc               mov dword ptr [ebp - 4], ecx
// 005535e7  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005535ea  50                   push eax
// 005535eb  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005535ee  51                   push ecx
// 005535ef  e85c000000           call 0x553650
// 005535f4  83c408               add esp, 8
// 005535f7  8be5                 mov esp, ebp
// 005535f9  5d                   pop ebp
// 005535fa  c20800               ret 8

#pragma optimize("", off)

extern "C" void __cdecl helper(void*, void*);

struct S {
    void f(void*, void*);
};

void S::f(void* a, void* b) {
    helper(a, b);
}
