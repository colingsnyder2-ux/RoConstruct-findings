// roc 2008-06 00773af0  unit: VCEdit::?$CXTMaskEditT  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773af0
//
// 00773af0  56                   push esi
// 00773af1  8bf1                 mov esi, ecx
// 00773af3  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00773af9  85c0                 test eax, eax
// 00773afb  743b                 je 0x773b38
// 00773afd  8b4020               mov eax, dword ptr [eax + 0x20]
// 00773b00  6a00                 push 0
// 00773b02  6a00                 push 0
// 00773b04  50                   push eax
// 00773b05  ff15182e8000         call dword ptr [0x802e18]
// 00773b0b  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 00773b11  85c9                 test ecx, ecx
// 00773b13  7419                 je 0x773b2e
// 00773b15  8b11                 mov edx, dword ptr [ecx]
// 00773b17  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 00773b1d  ffd0                 call eax
// 00773b1f  85c0                 test eax, eax
// 00773b21  750b                 jne 0x773b2e
// 00773b23  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 00773b29  e8facef2ff           call 0x6a0a28
// 00773b2e  c786ac00000001000000 mov dword ptr [esi + 0xac], 1
// 00773b38  5e                   pop esi
// 00773b39  c3                   ret 
// copied from an identical function in another client (function ?Invalidate@CXTMaskEditT@ns_ROCX000030@@QAEXXZ)

namespace ns_ROCX000030 {
struct CXTMaskEditT {
    char pad[0x9c];
    void* field_9c;
    void* field_a0;
    char pad2[0x8];
    int field_ac;
    void Invalidate();
};

extern "C" int (__stdcall *InvalidateRect)(void*, const void*, int);

extern "C" void __fastcall sub_00630004(void*);

void CXTMaskEditT::Invalidate()
{
    if (field_9c != 0) {
        InvalidateRect(*(void**)((char*)field_9c + 0x20), 0, 0);
        if (field_a0 != 0) {
            void** vtbl = *(void***)field_a0;
            int (__fastcall *fn)(void*) = (int (__fastcall *)(void*))vtbl[0x90 / 4];
            if (fn(field_a0) == 0) {
                sub_00630004(field_9c);
            }
        }
        field_ac = 1;
    }
}
}
