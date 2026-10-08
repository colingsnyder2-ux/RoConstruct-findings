// from server: 97% by colin
// roc 2007-08 005e1cf0  unit: RBX::VMotorFeature::?$FactoryProduct  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e1cf0
//
// 005e1cf0  56                   push esi
// 005e1cf1  8bf1                 mov esi, ecx
// 005e1cf3  8b4e08               mov ecx, dword ptr [esi + 8]
// 005e1cf6  85c9                 test ecx, ecx
// 005e1cf8  7407                 je 0x5e1d01
// 005e1cfa  e8f1ffffff           call 0x5e1cf0
// 005e1cff  eb0b                 jmp 0x5e1d0c
// 005e1d01  8b4620               mov eax, dword ptr [esi + 0x20]
// 005e1d04  85c0                 test eax, eax
// 005e1d06  7404                 je 0x5e1d0c
// 005e1d08  c6400401             mov byte ptr [eax + 4], 1
// 005e1d0c  8b761c               mov esi, dword ptr [esi + 0x1c]
// 005e1d0f  85f6                 test esi, esi
// 005e1d11  7404                 je 0x5e1d17
// 005e1d13  c6460401             mov byte ptr [esi + 4], 1
// 005e1d17  5e                   pop esi
// 005e1d18  c3                   ret 

struct FactoryProduct {
    void destroy();
    char pad[4];
    void* field8;
    char pad2[0x14];
    void* field1c;
    void* field20;
};

void FactoryProduct::destroy() {
    if (field8) {
        ((FactoryProduct*)field8)->destroy();
    } else {
        if (field20) {
            *((char*)field20 + 4) = 1;
        }
    }
    if (field1c) {
        *((char*)field1c + 4) = 1;
    }
}
