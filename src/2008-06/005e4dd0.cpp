// from server: 100% by king_originala
// roc 2008-06 005e4dd0  unit: RBX::VRotateV::?$FactoryProduct  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4dd0
//
// 005e4dd0  6aff                 push -1
// 005e4dd2  683bf47b00           push 0x7bf43b
// 005e4dd7  64a100000000         mov eax, dword ptr fs:[0]
// 005e4ddd  50                   push eax
// 005e4dde  64892500000000       mov dword ptr fs:[0], esp
// 005e4de5  51                   push ecx
// 005e4de6  56                   push esi
// 005e4de7  57                   push edi
// 005e4de8  68c8000000           push 0xc8
// 005e4ded  8bf1                 mov esi, ecx
// 005e4def  e82cbb0b00           call 0x6a0920
// 005e4df4  8bf8                 mov edi, eax
// 005e4df6  83c404               add esp, 4
// 005e4df9  897c2408             mov dword ptr [esp + 8], edi
// 005e4dfd  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005e4e05  85ff                 test edi, edi
// 005e4e07  7417                 je 0x5e4e20
// 005e4e09  8bcf                 mov ecx, edi
// 005e4e0b  e8600c0600           call 0x645a70
// 005e4e10  d9ee                 fldz 
// 005e4e12  d99fc4000000         fstp dword ptr [edi + 0xc4]
// 005e4e18  c7077ce18300         mov dword ptr [edi], 0x83e17c
// 005e4e1e  eb02                 jmp 0x5e4e22
// 005e4e20  33ff                 xor edi, edi
// 005e4e22  57                   push edi
// 005e4e23  8bce                 mov ecx, esi
// 005e4e25  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005e4e2d  e87ef4ffff           call 0x5e42b0
// 005e4e32  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e4e36  c706b4f58300         mov dword ptr [esi], 0x83f5b4
// 005e4e3c  c74610a8f58300       mov dword ptr [esi + 0x10], 0x83f5a8
// 005e4e43  c74614a0f58300       mov dword ptr [esi + 0x14], 0x83f5a0
// 005e4e4a  c7462098f58300       mov dword ptr [esi + 0x20], 0x83f598
// 005e4e51  c7462488f58300       mov dword ptr [esi + 0x24], 0x83f588
// 005e4e58  c7464478f58300       mov dword ptr [esi + 0x44], 0x83f578
// 005e4e5f  c7466468f58300       mov dword ptr [esi + 0x64], 0x83f568
// 005e4e66  c7868400000058f58300 mov dword ptr [esi + 0x84], 0x83f558
// 005e4e70  c786a400000048f58300 mov dword ptr [esi + 0xa4], 0x83f548
// 005e4e7a  c786c400000038f58300 mov dword ptr [esi + 0xc4], 0x83f538
// 005e4e84  c7863001000020f58300 mov dword ptr [esi + 0x130], 0x83f520
// 005e4e8e  5f                   pop edi
// 005e4e8f  8bc6                 mov eax, esi
// 005e4e91  5e                   pop esi
// 005e4e92  64890d00000000       mov dword ptr fs:[0], ecx
// 005e4e99  83c410               add esp, 0x10
// 005e4e9c  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct ConnectorBase {
    unsigned int words[49];
    ConnectorBase();
};

struct Connector : ConnectorBase {
    float value;
    Connector() : ConnectorBase(), value(0.0f) {
        words[0] = 0x0083e17c;
    }
};

struct FactoryBase {
    unsigned int words[77];
    FactoryBase(ConnectorBase*);
};

struct Factory : FactoryBase {
    Factory();
};

Factory::Factory() : FactoryBase(new Connector) {
    words[0]  = 0x0083f5b4;
    words[4]  = 0x0083f5a8;
    words[5]  = 0x0083f5a0;
    words[8]  = 0x0083f598;
    words[9]  = 0x0083f588;
    words[17] = 0x0083f578;
    words[25] = 0x0083f568;
    words[33] = 0x0083f558;
    words[41] = 0x0083f548;
    words[49] = 0x0083f538;
    words[76] = 0x0083f520;
}
