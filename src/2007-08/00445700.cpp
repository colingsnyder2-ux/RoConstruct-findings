// from server: 100% by colin
// roc 2007-08 00445700  unit: RBX::VInstance::?$NonFactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00445700
//
// 00445700  c705a4af8b0000000000 mov dword ptr [0x8bafa4], 0
// 0044570a  c701bcfc7800         mov dword ptr [ecx], 0x78fcbc
// 00445710  c74104b4fc7800       mov dword ptr [ecx + 4], 0x78fcb4
// 00445717  c74110acfc7800       mov dword ptr [ecx + 0x10], 0x78fcac
// 0044571e  c741149cfc7800       mov dword ptr [ecx + 0x14], 0x78fc9c
// 00445725  c7412c8cfc7800       mov dword ptr [ecx + 0x2c], 0x78fc8c
// 0044572c  c741447cfc7800       mov dword ptr [ecx + 0x44], 0x78fc7c
// 00445733  c7415c6cfc7800       mov dword ptr [ecx + 0x5c], 0x78fc6c
// 0044573a  c741745cfc7800       mov dword ptr [ecx + 0x74], 0x78fc5c
// 00445741  c7818c0000004cfc7800 mov dword ptr [ecx + 0x8c], 0x78fc4c
// 0044574b  e960ab0f00           jmp 0x5402b0

struct RBXBaseClass {
    void construct();
};

struct NonFactoryProduct : RBXBaseClass {
    void init();
};

void NonFactoryProduct::init()
{
    *(int*)0x8bafa4 = 0;
    *(int*)((char*)this + 0x00) = 0x78fcbc;
    *(int*)((char*)this + 0x04) = 0x78fcb4;
    *(int*)((char*)this + 0x10) = 0x78fcac;
    *(int*)((char*)this + 0x14) = 0x78fc9c;
    *(int*)((char*)this + 0x2c) = 0x78fc8c;
    *(int*)((char*)this + 0x44) = 0x78fc7c;
    *(int*)((char*)this + 0x5c) = 0x78fc6c;
    *(int*)((char*)this + 0x74) = 0x78fc5c;
    *(int*)((char*)this + 0x8c) = 0x78fc4c;
    construct();
}
