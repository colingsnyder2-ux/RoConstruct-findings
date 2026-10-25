// from server: 100% by tester
// roc 2011-06 008dec80  unit: VCEdit::?$CXTMaskEditT  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dec80
//
// 008dec80  56                   push esi
// 008dec81  8bf1                 mov esi, ecx
// 008dec83  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 008dec8a  7431                 je 0x8decbd
// 008dec8c  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008dec93  7428                 je 0x8decbd
// 008dec95  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008dec9b  8b01                 mov eax, dword ptr [ecx]
// 008dec9d  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 008deca3  ffd2                 call edx
// 008deca5  8bb69c000000         mov esi, dword ptr [esi + 0x9c]
// 008decab  85f6                 test esi, esi
// 008decad  740e                 je 0x8decbd
// 008decaf  8b4620               mov eax, dword ptr [esi + 0x20]
// 008decb2  6a00                 push 0
// 008decb4  6a00                 push 0
// 008decb6  50                   push eax
// 008decb7  ff15ec19a400         call dword ptr [0xa419ec]
// 008decbd  5e                   pop esi
// 008decbe  c3                   ret 

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
