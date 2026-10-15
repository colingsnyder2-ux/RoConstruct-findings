// from server: 100% by colin
// roc 2008-06 005e4c60  unit: RBX::VRotateP::?$FactoryProduct  size: 205 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e4c60
//
// 005e4c60  6aff                 push -1
// 005e4c62  683bf47b00           push 0x7bf43b
// 005e4c67  64a100000000         mov eax, dword ptr fs:[0]
// 005e4c6d  50                   push eax
// 005e4c6e  64892500000000       mov dword ptr fs:[0], esp
// 005e4c75  51                   push ecx
// 005e4c76  56                   push esi
// 005e4c77  57                   push edi
// 005e4c78  68c8000000           push 0xc8
// 005e4c7d  8bf1                 mov esi, ecx
// 005e4c7f  e89cbc0b00           call 0x6a0920
// 005e4c84  8bf8                 mov edi, eax
// 005e4c86  83c404               add esp, 4
// 005e4c89  897c2408             mov dword ptr [esp + 8], edi
// 005e4c8d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005e4c95  85ff                 test edi, edi
// 005e4c97  7417                 je 0x5e4cb0
// 005e4c99  8bcf                 mov ecx, edi
// 005e4c9b  e8d00d0600           call 0x645a70
// 005e4ca0  d9ee                 fldz 
// 005e4ca2  d99fc4000000         fstp dword ptr [edi + 0xc4]
// 005e4ca8  c7073ce18300         mov dword ptr [edi], 0x83e13c
// 005e4cae  eb02                 jmp 0x5e4cb2
// 005e4cb0  33ff                 xor edi, edi
// 005e4cb2  57                   push edi
// 005e4cb3  8bce                 mov ecx, esi
// 005e4cb5  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005e4cbd  e80ef5ffff           call 0x5e41d0
// 005e4cc2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e4cc6  c706dcf48300         mov dword ptr [esi], 0x83f4dc
// 005e4ccc  c74610d0f48300       mov dword ptr [esi + 0x10], 0x83f4d0
// 005e4cd3  c74614c8f48300       mov dword ptr [esi + 0x14], 0x83f4c8
// 005e4cda  c74620c0f48300       mov dword ptr [esi + 0x20], 0x83f4c0
// 005e4ce1  c74624b0f48300       mov dword ptr [esi + 0x24], 0x83f4b0
// 005e4ce8  c74644a0f48300       mov dword ptr [esi + 0x44], 0x83f4a0
// 005e4cef  c7466490f48300       mov dword ptr [esi + 0x64], 0x83f490
// 005e4cf6  c7868400000080f48300 mov dword ptr [esi + 0x84], 0x83f480
// 005e4d00  c786a400000070f48300 mov dword ptr [esi + 0xa4], 0x83f470
// 005e4d0a  c786c400000060f48300 mov dword ptr [esi + 0xc4], 0x83f460
// 005e4d14  c7863001000048f48300 mov dword ptr [esi + 0x130], 0x83f448
// 005e4d1e  5f                   pop edi
// 005e4d1f  8bc6                 mov eax, esi
// 005e4d21  5e                   pop esi
// 005e4d22  64890d00000000       mov dword ptr fs:[0], ecx
// 005e4d29  83c410               add esp, 0x10
// 005e4d2c  c3                   ret 

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
