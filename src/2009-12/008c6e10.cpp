// roc 2009-12 008c6e10  unit: VCEdit::?$CXTMaskEditT  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6e10
//
// 008c6e10  56                   push esi
// 008c6e11  8bf1                 mov esi, ecx
// 008c6e13  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 008c6e1a  7431                 je 0x8c6e4d
// 008c6e1c  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008c6e23  7428                 je 0x8c6e4d
// 008c6e25  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008c6e2b  8b01                 mov eax, dword ptr [ecx]
// 008c6e2d  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 008c6e33  ffd2                 call edx
// 008c6e35  8bb69c000000         mov esi, dword ptr [esi + 0x9c]
// 008c6e3b  85f6                 test esi, esi
// 008c6e3d  740e                 je 0x8c6e4d
// 008c6e3f  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c6e42  6a00                 push 0
// 008c6e44  6a00                 push 0
// 008c6e46  50                   push eax
// 008c6e47  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008c6e4d  5e                   pop esi
// 008c6e4e  c3                   ret 
// copied from an identical function in another client (function ?Invalidate@CXTMaskEditT@ns_ROCX000001@@QAEXXZ)

namespace ns_ROCX000001 {
// from server: 100% by tester
struct CXTMaskEditT {
    char pad[0x9c];
    void* field_9c;
    void* field_a0;
    void Invalidate();
};

extern "C" int (__stdcall *InvalidateRect)(void*, const void*, int);

void CXTMaskEditT::Invalidate()
{
    if (field_9c != 0 && field_a0 != 0) {
        (*(void (__thiscall**)(void*))(*(int*)field_a0 + 0x9c))(field_a0);
        void* p = field_9c;
        if (p != 0) {
            InvalidateRect(*(void**)((char*)p + 0x20), 0, 0);
        }
    }
}
}
