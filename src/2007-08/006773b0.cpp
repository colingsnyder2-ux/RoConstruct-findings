// from server: 76% by colin
// roc 2007-08 006773b0  unit: CXTPPopupBar  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006773b0
//
// 006773b0  56                   push esi
// 006773b1  8bf1                 mov esi, ecx
// 006773b3  8d8edc010000         lea ecx, [esi + 0x1dc]
// 006773b9  c706c4d27c00         mov dword ptr [esi], 0x7cd2c4
// 006773bf  c74654b4d27c00       mov dword ptr [esi + 0x54], 0x7cd2b4
// 006773c6  c7465c54d27c00       mov dword ptr [esi + 0x5c], 0x7cd254
// 006773cd  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006773d3  8bce                 mov ecx, esi
// 006773d5  5e                   pop esi
// 006773d6  e955fffcff           jmp 0x647330

struct CXTPPopupBar {
    char pad[0x1dc];
    void* field_1dc;
    void Destruct();
};

extern "C" void __stdcall sub_77ddbc(void*);
extern "C" void __stdcall sub_647330(void*);

void CXTPPopupBar::Destruct() {
    *(void**)this = (void*)0x7cd2c4;
    *(void**)((char*)this + 0x54) = (void*)0x7cd2b4;
    *(void**)((char*)this + 0x5c) = (void*)0x7cd254;
    sub_77ddbc((char*)this + 0x1dc);
    sub_647330(this);
}
