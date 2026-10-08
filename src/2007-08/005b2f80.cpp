// from server: 83% by colin
// roc 2007-08 005b2f80  unit: RBX::Assembly  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b2f80
//
// 005b2f80  56                   push esi
// 005b2f81  8bf1                 mov esi, ecx
// 005b2f83  e8c8610500           call 0x609150
// 005b2f88  8b4e08               mov ecx, dword ptr [esi + 8]
// 005b2f8b  50                   push eax
// 005b2f8c  e8af8b0500           call 0x60bb40
// 005b2f91  8bce                 mov ecx, esi
// 005b2f93  5e                   pop esi
// 005b2f94  e9c7610500           jmp 0x609160

struct Assembly {
    char pad[8];
    void* field8;
    void onLowersChanged();
    void f();
};

extern "C" void* __stdcall sub_609150();
extern "C" void __stdcall sub_60bb40(void*);
extern "C" void __stdcall sub_609160();

void Assembly::f() {
    void* r = sub_609150();
    sub_60bb40(field8);
    sub_609160();
}
