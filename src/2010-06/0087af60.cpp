// roc 2010-06 0087af60  unit: VCEdit::?$CXTMaskEditT  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087af60
//
// 0087af60  56                   push esi
// 0087af61  8bf1                 mov esi, ecx
// 0087af63  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0087af69  85c0                 test eax, eax
// 0087af6b  743b                 je 0x87afa8
// 0087af6d  8b4020               mov eax, dword ptr [eax + 0x20]
// 0087af70  6a00                 push 0
// 0087af72  6a00                 push 0
// 0087af74  50                   push eax
// 0087af75  ff1578ba9e00         call dword ptr [0x9eba78]
// 0087af7b  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0087af81  85c9                 test ecx, ecx
// 0087af83  7419                 je 0x87af9e
// 0087af85  8b11                 mov edx, dword ptr [ecx]
// 0087af87  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 0087af8d  ffd0                 call eax
// 0087af8f  85c0                 test eax, eax
// 0087af91  750b                 jne 0x87af9e
// 0087af93  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 0087af99  e8a4cdf2ff           call 0x7a7d42
// 0087af9e  c786ac00000001000000 mov dword ptr [esi + 0xac], 1
// 0087afa8  5e                   pop esi
// 0087afa9  c3                   ret 
// copied from an identical function in another client (function ?Invalidate@CXTMaskEditT@ns_ROCX000029@@QAEXXZ)

namespace ns_ROCX000029 {
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
