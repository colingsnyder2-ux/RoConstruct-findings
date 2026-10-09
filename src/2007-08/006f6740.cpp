// from server: 100% by colin
// roc 2007-08 006f6740  unit: VCEdit::?$CXTMaskEditT  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f6740
//
// 006f6740  56                   push esi
// 006f6741  8bf1                 mov esi, ecx
// 006f6743  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 006f6749  85c0                 test eax, eax
// 006f674b  743b                 je 0x6f6788
// 006f674d  8b4020               mov eax, dword ptr [eax + 0x20]
// 006f6750  6a00                 push 0
// 006f6752  6a00                 push 0
// 006f6754  50                   push eax
// 006f6755  ff15dcec7700         call dword ptr [0x77ecdc]
// 006f675b  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 006f6761  85c9                 test ecx, ecx
// 006f6763  7419                 je 0x6f677e
// 006f6765  8b11                 mov edx, dword ptr [ecx]
// 006f6767  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 006f676d  ffd0                 call eax
// 006f676f  85c0                 test eax, eax
// 006f6771  750b                 jne 0x6f677e
// 006f6773  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 006f6779  e88698f3ff           call 0x630004
// 006f677e  c786ac00000001000000 mov dword ptr [esi + 0xac], 1
// 006f6788  5e                   pop esi
// 006f6789  c3                   ret 

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
