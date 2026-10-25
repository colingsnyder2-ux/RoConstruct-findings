// from server: 100% by king_originala
// roc 2008-06 0062c1c0  unit: RBX::VFlagStandService::?$FactoryProduct  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062c1c0
//
// 0062c1c0  56                   push esi
// 0062c1c1  8bf1                 mov esi, ecx
// 0062c1c3  57                   push edi
// 0062c1c4  8dbe30010000         lea edi, [esi + 0x130]
// 0062c1ca  8bcf                 mov ecx, edi
// 0062c1cc  c706ec618400         mov dword ptr [esi], 0x8461ec
// 0062c1d2  c74610dc618400       mov dword ptr [esi + 0x10], 0x8461dc
// 0062c1d9  c74614d4618400       mov dword ptr [esi + 0x14], 0x8461d4
// 0062c1e0  c74620cc618400       mov dword ptr [esi + 0x20], 0x8461cc
// 0062c1e7  c74624bc618400       mov dword ptr [esi + 0x24], 0x8461bc
// 0062c1ee  c74644ac618400       mov dword ptr [esi + 0x44], 0x8461ac
// 0062c1f5  c746649c618400       mov dword ptr [esi + 0x64], 0x84619c
// 0062c1fc  c786840000008c618400 mov dword ptr [esi + 0x84], 0x84618c
// 0062c206  c786a40000007c618400 mov dword ptr [esi + 0xa4], 0x84617c
// 0062c210  c786c40000006c618400 mov dword ptr [esi + 0xc4], 0x84616c
// 0062c21a  e821690500           call 0x682b40
// 0062c21f  8b07                 mov eax, dword ptr [edi]
// 0062c221  50                   push eax
// 0062c222  e853440700           call 0x6a067a
// 0062c227  83c404               add esp, 4
// 0062c22a  5f                   pop edi
// 0062c22b  8bce                 mov ecx, esi
// 0062c22d  5e                   pop esi
// 0062c22e  e93df8ffff           jmp 0x62ba70

extern "C" void __cdecl release(void *);

struct Storage {
    void *head;
    unsigned char padding[24];
    void clear();
};

struct S {
    unsigned long words[76];
    Storage storage;

    void f();
    void cleanup();
};

void S::f()
{
    words[0]  = 0x008461ec;
    words[4]  = 0x008461dc;
    words[5]  = 0x008461d4;
    words[8]  = 0x008461cc;
    words[9]  = 0x008461bc;
    words[17] = 0x008461ac;
    words[25] = 0x0084619c;
    words[33] = 0x0084618c;
    words[41] = 0x0084617c;
    words[49] = 0x0084616c;

    storage.clear();
    release(storage.head);
    cleanup();
}
