// from server: 100% by colin
// roc 2007-08 005e7000  unit: RBX::VFlag::?$FactoryProduct  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e7000
//
// 005e7000  8b442404             mov eax, dword ptr [esp + 4]
// 005e7004  898140020000         mov dword ptr [ecx + 0x240], eax
// 005e700a  c7442404346f8c00     mov dword ptr [esp + 4], 0x8c6f34
// 005e7012  e9f9d6e5ff           jmp 0x444710

struct VFlag {
    char pad[0x240];
    int field240;
    void set(int value);
};

extern "C" void __stdcall sub_444710(int);

void VFlag::set(int value) {
    field240 = value;
    sub_444710(0x008c6f34);
}
