// from server: 66% by colin
// roc 2007-08 00624110  unit: RBX::ArrowButton  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00624110
//
// 00624110  51                   push ecx
// 00624111  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00624115  56                   push esi
// 00624116  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062411a  66c7064800           mov word ptr [esi], 0x48
// 0062411f  8b08                 mov ecx, dword ptr [eax]
// 00624121  c744240400000000     mov dword ptr [esp + 4], 0
// 00624129  894e04               mov dword ptr [esi + 4], ecx
// 0062412c  ff1560e47700         call dword ptr [0x77e460]
// 00624132  8bc6                 mov eax, esi
// 00624134  5e                   pop esi
// 00624135  59                   pop ecx
// 00624136  c3                   ret 

struct ArrowButton {
    unsigned short vtable_marker;
    void* field_4;
    ArrowButton(void* arg);
};

extern "C" void __stdcall _Incref_facet(void* p);

ArrowButton::ArrowButton(void* arg) {
    this->vtable_marker = 0x48;
    this->field_4 = *(void**)arg;
    _Incref_facet(0);
}
