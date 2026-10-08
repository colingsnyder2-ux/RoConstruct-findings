// from server: 94% by colin
// roc 2007-08 00497fd0  unit: RBX::Network::Players::Plugin  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00497fd0
//
// 00497fd0  8b442408             mov eax, dword ptr [esp + 8]
// 00497fd4  8b542404             mov edx, dword ptr [esp + 4]
// 00497fd8  8b4904               mov ecx, dword ptr [ecx + 4]
// 00497fdb  50                   push eax
// 00497fdc  52                   push edx
// 00497fdd  e8aef8ffff           call 0x497890
// 00497fe2  f6d8                 neg al
// 00497fe4  1bc0                 sbb eax, eax
// 00497fe6  f7d8                 neg eax
// 00497fe8  c20800               ret 8

struct Plugin {
    char pad[4];
    void* field4;
    bool method(void* a, void* b);
};

extern "C" bool __stdcall sub_497890(void* self, void* a, void* b);

bool Plugin::method(void* a, void* b) {
    void* self = field4;
    return sub_497890(self, a, b) != 0;
}
