// from server: 100% by colin
// roc 2007-08 0059d4c0  unit: RBX::StarterPackService  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d4c0
//
// 0059d4c0  c701841f7b00         mov dword ptr [ecx], 0x7b1f84
// 0059d4c6  c741047c1f7b00       mov dword ptr [ecx + 4], 0x7b1f7c
// 0059d4cd  c74110741f7b00       mov dword ptr [ecx + 0x10], 0x7b1f74
// 0059d4d4  c74114641f7b00       mov dword ptr [ecx + 0x14], 0x7b1f64
// 0059d4db  c7412c541f7b00       mov dword ptr [ecx + 0x2c], 0x7b1f54
// 0059d4e2  c74144441f7b00       mov dword ptr [ecx + 0x44], 0x7b1f44
// 0059d4e9  c7415c341f7b00       mov dword ptr [ecx + 0x5c], 0x7b1f34
// 0059d4f0  c74174241f7b00       mov dword ptr [ecx + 0x74], 0x7b1f24
// 0059d4f7  c7818c000000141f7b00 mov dword ptr [ecx + 0x8c], 0x7b1f14
// 0059d501  c781e80000000c1f7b00 mov dword ptr [ecx + 0xe8], 0x7b1f0c
// 0059d50b  e9f0f5ffff           jmp 0x59cb00

struct StarterPackService {
    void construct();
};

extern "C" void __stdcall sub_59cb00();

void StarterPackService::construct() {
    *(int*)((char*)this + 0x00) = 0x7b1f84;
    *(int*)((char*)this + 0x04) = 0x7b1f7c;
    *(int*)((char*)this + 0x10) = 0x7b1f74;
    *(int*)((char*)this + 0x14) = 0x7b1f64;
    *(int*)((char*)this + 0x2c) = 0x7b1f54;
    *(int*)((char*)this + 0x44) = 0x7b1f44;
    *(int*)((char*)this + 0x5c) = 0x7b1f34;
    *(int*)((char*)this + 0x74) = 0x7b1f24;
    *(int*)((char*)this + 0x8c) = 0x7b1f14;
    *(int*)((char*)this + 0xe8) = 0x7b1f0c;
    sub_59cb00();
}
