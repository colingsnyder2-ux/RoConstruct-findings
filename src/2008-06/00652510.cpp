// from server: 100% by king_originala
// roc 2008-06 00652510  unit: RBX::ScoreHud  size: 238 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00652510
//
// 00652510  6aff                 push -1
// 00652512  6868817d00           push 0x7d8168
// 00652517  64a100000000         mov eax, dword ptr fs:[0]
// 0065251d  50                   push eax
// 0065251e  64892500000000       mov dword ptr fs:[0], esp
// 00652525  51                   push ecx
// 00652526  56                   push esi
// 00652527  8bf1                 mov esi, ecx
// 00652529  57                   push edi
// 0065252a  89742408             mov dword ptr [esp + 8], esi
// 0065252e  e89d14f2ff           call 0x5739d0
// 00652533  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00652537  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0065253f  c706b4bc8400         mov dword ptr [esi], 0x84bcb4
// 00652545  c74610a4bc8400       mov dword ptr [esi + 0x10], 0x84bca4
// 0065254c  c746149cbc8400       mov dword ptr [esi + 0x14], 0x84bc9c
// 00652553  c7462094bc8400       mov dword ptr [esi + 0x20], 0x84bc94
// 0065255a  c7462484bc8400       mov dword ptr [esi + 0x24], 0x84bc84
// 00652561  c7464474bc8400       mov dword ptr [esi + 0x44], 0x84bc74
// 00652568  c7466464bc8400       mov dword ptr [esi + 0x64], 0x84bc64
// 0065256f  c7868400000054bc8400 mov dword ptr [esi + 0x84], 0x84bc54
// 00652579  c786a400000044bc8400 mov dword ptr [esi + 0xa4], 0x84bc44
// 00652583  c786c400000034bc8400 mov dword ptr [esi + 0xc4], 0x84bc34
// 0065258d  c786300100002cbc8400 mov dword ptr [esi + 0x130], 0x84bc2c
// 00652597  c7864401000020bc8400 mov dword ptr [esi + 0x144], 0x84bc20
// 006525a1  c7864801000014bc8400 mov dword ptr [esi + 0x148], 0x84bc14
// 006525ab  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 006525b5  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 006525bf  85ff                 test edi, edi
// 006525c1  7409                 je 0x6525cc
// 006525c3  8bcf                 mov ecx, edi
// 006525c5  e8b606e0ff           call 0x452c80
// 006525ca  eb02                 jmp 0x6525ce
// 006525cc  33c0                 xor eax, eax
// 006525ce  89864c010000         mov dword ptr [esi + 0x14c], eax
// 006525d4  85ff                 test edi, edi
// 006525d6  7409                 je 0x6525e1
// 006525d8  8bcf                 mov ecx, edi
// 006525da  e8f1ffdbff           call 0x4125d0
// 006525df  eb02                 jmp 0x6525e3
// 006525e1  33c0                 xor eax, eax
// 006525e3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006525e7  898650010000         mov dword ptr [esi + 0x150], eax
// 006525ed  5f                   pop edi
// 006525ee  8bc6                 mov eax, esi
// 006525f0  5e                   pop esi
// 006525f1  64890d00000000       mov dword ptr fs:[0], ecx
// 006525f8  83c410               add esp, 0x10
// 006525fb  c20400               ret 4

struct Source {
    void *first();
    void *second();
};

struct Base {
    unsigned int storage[83];
    Base();
    ~Base();
};

struct S : Base {
    void *firstValue;
    void *secondValue;
    S(Source *);
};

S::S(Source *source) : Base()
{
    storage[0] = 0x0084bcb4;
    storage[4] = 0x0084bca4;
    storage[5] = 0x0084bc9c;
    storage[8] = 0x0084bc94;
    storage[9] = 0x0084bc84;
    storage[17] = 0x0084bc74;
    storage[25] = 0x0084bc64;
    storage[33] = 0x0084bc54;
    storage[41] = 0x0084bc44;
    storage[49] = 0x0084bc34;
    storage[76] = 0x0084bc2c;
    storage[81] = 0x0084bc20;
    storage[82] = 0x0084bc14;
    firstValue = 0;
    secondValue = 0;
    firstValue = source ? source->first() : 0;
    secondValue = source ? source->second() : 0;
}
