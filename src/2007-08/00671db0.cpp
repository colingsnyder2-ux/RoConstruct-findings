// from server: 55% by colin
// roc 2007-08 00671db0  unit: CPropertyGridItemBrickColor  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671db0
//
// 00671db0  56                   push esi
// 00671db1  8bf1                 mov esi, ecx
// 00671db3  c70670b67c00         mov dword ptr [esi], 0x7cb670
// 00671db9  e8b2f4ffff           call 0x671270
// 00671dbe  8d4e04               lea ecx, [esi + 4]
// 00671dc1  5e                   pop esi
// 00671dc2  ff25bcdd7700         jmp dword ptr [0x77ddbc]

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD

extern "C" void __stdcall sub_671270();
extern "C" void __stdcall sub_77ddbc();

struct CPropertyGridItemBrickColor {
    void* vtable;
    void* field4;
    void destructor();
};

void CPropertyGridItemBrickColor::destructor() {
    vtable = (void*)0x7cb670;
    sub_671270();
    sub_77ddbc();
}
