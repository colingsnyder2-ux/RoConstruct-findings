// roc 2007-03 006dd8e0  unit: seg_006d0000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006dd8e0
//
// 006dd8e0  56                   push esi
// 006dd8e1  8bf1                 mov esi, ecx
// 006dd8e3  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006dd8e9  85c0                 test eax, eax
// 006dd8eb  743b                 je 0x6dd928
// 006dd8ed  8b4020               mov eax, dword ptr [eax + 0x20]
// 006dd8f0  6a00                 push 0
// 006dd8f2  6a00                 push 0
// 006dd8f4  50                   push eax
// 006dd8f5  ff1554ee7700         call dword ptr [0x77ee54]
// 006dd8fb  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 006dd901  85c9                 test ecx, ecx
// 006dd903  7419                 je 0x6dd91e
// 006dd905  8b11                 mov edx, dword ptr [ecx]
// 006dd907  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 006dd90d  ffd0                 call eax
// 006dd90f  85c0                 test eax, eax
// 006dd911  750b                 jne 0x6dd91e
// 006dd913  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 006dd919  e8740bf4ff           call 0x61e492
// 006dd91e  c786ac00000001000000 mov dword ptr [esi + 0xac], 1
// 006dd928  5e                   pop esi
// 006dd929  c3                   ret 
// copied from an identical function in another client (function ?Invalidate@CXTMaskEditT@ns_ROCX000051@@QAEXXZ)

namespace ns_ROCX000051 {
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
