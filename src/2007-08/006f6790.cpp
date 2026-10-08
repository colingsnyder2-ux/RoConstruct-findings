// from server: 90% by colin
// roc 2007-08 006f6790  unit: VCEdit::?$CXTMaskEditT  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f6790
//
// 006f6790  56                   push esi
// 006f6791  8bf1                 mov esi, ecx
// 006f6793  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 006f679a  7431                 je 0x6f67cd
// 006f679c  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 006f67a3  7428                 je 0x6f67cd
// 006f67a5  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 006f67ab  8b01                 mov eax, dword ptr [ecx]
// 006f67ad  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 006f67b3  ffd2                 call edx
// 006f67b5  8bb69c000000         mov esi, dword ptr [esi + 0x9c]
// 006f67bb  85f6                 test esi, esi
// 006f67bd  740e                 je 0x6f67cd
// 006f67bf  8b4620               mov eax, dword ptr [esi + 0x20]
// 006f67c2  6a00                 push 0
// 006f67c4  6a00                 push 0
// 006f67c6  50                   push eax
// 006f67c7  ff15dcec7700         call dword ptr [0x77ecdc]
// 006f67cd  5e                   pop esi
// 006f67ce  c3                   ret 

struct CXTMaskEditT {
    char pad[0x9c];
    void* field_9c;
    void* field_a0;
    void Refresh();
};

extern "C" int __stdcall InvalidateRect(void*, const void*, int);

void CXTMaskEditT::Refresh()
{
    if (field_9c != 0 && field_a0 != 0) {
        void** vtbl = *(void***)field_a0;
        void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[0x9c / 4];
        fn(field_a0);
        void* p = field_9c;
        if (p != 0) {
            InvalidateRect(*(void**)((char*)p + 0x20), 0, 0);
        }
    }
}
