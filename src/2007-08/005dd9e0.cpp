// from server: 100% by colin
// roc 2007-08 005dd9e0  unit: RBX::VFaceInstance::?$EnumPropDescriptor  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dd9e0
//
// 005dd9e0  56                   push esi
// 005dd9e1  8bf1                 mov esi, ecx
// 005dd9e3  e848fcffff           call 0x5dd630
// 005dd9e8  c7066cc37b00         mov dword ptr [esi], 0x7bc36c
// 005dd9ee  c7460464c37b00       mov dword ptr [esi + 4], 0x7bc364
// 005dd9f5  c746105cc37b00       mov dword ptr [esi + 0x10], 0x7bc35c
// 005dd9fc  c746144cc37b00       mov dword ptr [esi + 0x14], 0x7bc34c
// 005dda03  c7462c3cc37b00       mov dword ptr [esi + 0x2c], 0x7bc33c
// 005dda0a  c746442cc37b00       mov dword ptr [esi + 0x44], 0x7bc32c
// 005dda11  c7465c1cc37b00       mov dword ptr [esi + 0x5c], 0x7bc31c
// 005dda18  c746740cc37b00       mov dword ptr [esi + 0x74], 0x7bc30c
// 005dda1f  c7868c000000fcc27b00 mov dword ptr [esi + 0x8c], 0x7bc2fc
// 005dda29  c786e8000000e4c27b00 mov dword ptr [esi + 0xe8], 0x7bc2e4
// 005dda33  8bc6                 mov eax, esi
// 005dda35  5e                   pop esi
// 005dda36  c3                   ret 

struct EnumPropertyDescriptor {
    void construct();
};

struct EnumPropDescriptor : EnumPropertyDescriptor {
    EnumPropDescriptor* construct();
};

EnumPropDescriptor* EnumPropDescriptor::construct() {
    EnumPropertyDescriptor::construct();
    *(int*)((char*)this + 0) = 0x7bc36c;
    *(int*)((char*)this + 4) = 0x7bc364;
    *(int*)((char*)this + 0x10) = 0x7bc35c;
    *(int*)((char*)this + 0x14) = 0x7bc34c;
    *(int*)((char*)this + 0x2c) = 0x7bc33c;
    *(int*)((char*)this + 0x44) = 0x7bc32c;
    *(int*)((char*)this + 0x5c) = 0x7bc31c;
    *(int*)((char*)this + 0x74) = 0x7bc30c;
    *(int*)((char*)this + 0x8c) = 0x7bc2fc;
    *(int*)((char*)this + 0xe8) = 0x7bc2e4;
    return this;
}
