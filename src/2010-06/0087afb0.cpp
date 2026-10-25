// from server: 100% by tester
// roc 2010-06 0087afb0  unit: VCEdit::?$CXTMaskEditT  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087afb0
//
// 0087afb0  56                   push esi
// 0087afb1  8bf1                 mov esi, ecx
// 0087afb3  83be9c00000000       cmp dword ptr [esi + 0x9c], 0
// 0087afba  7431                 je 0x87afed
// 0087afbc  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 0087afc3  7428                 je 0x87afed
// 0087afc5  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0087afcb  8b01                 mov eax, dword ptr [ecx]
// 0087afcd  8b909c000000         mov edx, dword ptr [eax + 0x9c]
// 0087afd3  ffd2                 call edx
// 0087afd5  8bb69c000000         mov esi, dword ptr [esi + 0x9c]
// 0087afdb  85f6                 test esi, esi
// 0087afdd  740e                 je 0x87afed
// 0087afdf  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087afe2  6a00                 push 0
// 0087afe4  6a00                 push 0
// 0087afe6  50                   push eax
// 0087afe7  ff1578ba9e00         call dword ptr [0x9eba78]
// 0087afed  5e                   pop esi
// 0087afee  c3                   ret 

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
