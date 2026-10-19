// from server: 88% by colin
// from server: 86% by king_originala
// roc 2008-06 00650440  unit: RBX::ChatOutput  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00650440
//
// 00650440  6aff                 push -1
// 00650442  6874b57d00           push 0x7db574
// 00650447  64a100000000         mov eax, dword ptr fs:[0]
// 0065044d  50                   push eax
// 0065044e  64892500000000       mov dword ptr fs:[0], esp
// 00650455  51                   push ecx
// 00650456  56                   push esi
// 00650457  8bf1                 mov esi, ecx
// 00650459  57                   push edi
// 0065045a  89742408             mov dword ptr [esp + 8], esi
// 0065045e  c70684bb8400         mov dword ptr [esi], 0x84bb84
// 00650464  c7461078bb8400       mov dword ptr [esi + 0x10], 0x84bb78
// 0065046b  c7461470bb8400       mov dword ptr [esi + 0x14], 0x84bb70
// 00650472  c7462068bb8400       mov dword ptr [esi + 0x20], 0x84bb68
// 00650479  c7462458bb8400       mov dword ptr [esi + 0x24], 0x84bb58
// 00650480  c7464448bb8400       mov dword ptr [esi + 0x44], 0x84bb48
// 00650487  c7466438bb8400       mov dword ptr [esi + 0x64], 0x84bb38
// 0065048e  c7868400000028bb8400 mov dword ptr [esi + 0x84], 0x84bb28
// 00650498  c786a400000018bb8400 mov dword ptr [esi + 0xa4], 0x84bb18
// 006504a2  c786c400000008bb8400 mov dword ptr [esi + 0xc4], 0x84bb08
// 006504ac  c7863001000000bb8400 mov dword ptr [esi + 0x130], 0x84bb00
// 006504b6  c78644010000f4ba8400 mov dword ptr [esi + 0x144], 0x84baf4
// 006504c0  c78648010000e8ba8400 mov dword ptr [esi + 0x148], 0x84bae8
// 006504ca  83be9001000000       cmp dword ptr [esi + 0x190], 0
// 006504d1  c744241402000000     mov dword ptr [esp + 0x14], 2
// 006504d9  7415                 je 0x6504f0
// 006504db  eb03                 jmp 0x6504e0
// 006504dd  8d4900               lea ecx, [ecx]
// 006504e0  8bce                 mov ecx, esi
// 006504e2  e889f8ffff           call 0x64fd70
// 006504e7  83be9001000000       cmp dword ptr [esi + 0x190], 0
// 006504ee  75f0                 jne 0x6504e0
// 006504f0  8dbe74010000         lea edi, [esi + 0x174]
// 006504f6  8bcf                 mov ecx, edi
// 006504f8  e813f5ffff           call 0x64fa10
// 006504fd  8b3f                 mov edi, dword ptr [edi]
// 006504ff  57                   push edi
// 00650500  e875010500           call 0x6a067a
// 00650505  83c404               add esp, 4
// 00650508  8d8e54010000         lea ecx, [esi + 0x154]
// 0065050e  c644241400           mov byte ptr [esp + 0x14], 0
// 00650513  e8489b0100           call 0x66a060
// 00650518  8bce                 mov ecx, esi
// 0065051a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00650522  e81910dcff           call 0x411540
// 00650527  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065052b  5f                   pop edi
// 0065052c  5e                   pop esi
// 0065052d  64890d00000000       mov dword ptr fs:[0], ecx
// 00650534  83c410               add esp, 0x10
// 00650537  c3                   ret 

void __cdecl operator delete(void *);

struct Base {
    volatile unsigned long words[85];
    __declspec(dllimport) ~Base() throw();
};

struct Aux {
    unsigned char data[0x20];
    ~Aux();
};

struct Queue {
    void *storage;
    unsigned long data[6];
    volatile unsigned long count;
    void clear();
    ~Queue();
};

struct S : Base {
    Aux aux;
    Queue queue;
    void remove();
    ~S();
};

inline Queue::~Queue()
{
    clear();
    operator delete(storage);
}

S::~S()
{
    words[0] = 0x0084BB84;
    words[4] = 0x0084BB78;
    words[5] = 0x0084BB70;
    words[8] = 0x0084BB68;
    words[9] = 0x0084BB58;
    words[17] = 0x0084BB48;
    words[25] = 0x0084BB38;
    words[33] = 0x0084BB28;
    words[41] = 0x0084BB18;
    words[49] = 0x0084BB08;
    words[76] = 0x0084BB00;
    words[81] = 0x0084BAF4;
    words[82] = 0x0084BAE8;

    while (queue.count != 0)
        remove();
}
