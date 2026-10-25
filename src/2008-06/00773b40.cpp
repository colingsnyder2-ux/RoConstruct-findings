// from server: 100% by tester
// roc 2008-06 00773b40  unit: VCEdit::?$CXTMaskEditT  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773b40
//
// 00773b40  56                   push esi
// 00773b41  8bf1                 mov esi, ecx
// 00773b43  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 00773b4a  7431                 je 0x773b7d
// 00773b4c  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00773b53  7428                 je 0x773b7d
// 00773b55  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00773b5b  8b01                 mov eax, dword ptr [ecx]
// 00773b5d  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 00773b63  ffd2                 call edx
// 00773b65  8bb69c000000         mov esi, dword ptr [esi + 0x9c]
// 00773b6b  85f6                 test esi, esi
// 00773b6d  740e                 je 0x773b7d
// 00773b6f  8b4620               mov eax, dword ptr [esi + 0x20]
// 00773b72  6a00                 push 0
// 00773b74  6a00                 push 0
// 00773b76  50                   push eax
// 00773b77  ff15182e8000         call dword ptr [0x802e18]
// 00773b7d  5e                   pop esi
// 00773b7e  c3                   ret 

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
