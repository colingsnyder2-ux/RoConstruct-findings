// roc 2009-06 007ec230  unit: VCEdit::?$CXTMaskEditT  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ec230
//
// 007ec230  56                   push esi
// 007ec231  8bf1                 mov esi, ecx
// 007ec233  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007ec239  85c0                 test eax, eax
// 007ec23b  743b                 je 0x7ec278
// 007ec23d  8b4020               mov eax, dword ptr [eax + 0x20]
// 007ec240  6a00                 push 0
// 007ec242  6a00                 push 0
// 007ec244  50                   push eax
// 007ec245  ff157cee8900         call dword ptr [0x89ee7c]
// 007ec24b  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 007ec251  85c9                 test ecx, ecx
// 007ec253  7419                 je 0x7ec26e
// 007ec255  8b11                 mov edx, dword ptr [ecx]
// 007ec257  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 007ec25d  ffd0                 call eax
// 007ec25f  85c0                 test eax, eax
// 007ec261  750b                 jne 0x7ec26e
// 007ec263  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 007ec269  e86ccbf2ff           call 0x718dda
// 007ec26e  c786ac00000001000000 mov dword ptr [esi + 0xac], 1
// 007ec278  5e                   pop esi
// 007ec279  c3                   ret 
// copied from an identical function in another client (function ?Invalidate@CXTMaskEditT@ns_ROCX00002b@@QAEXXZ)

namespace ns_ROCX00002b {
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
