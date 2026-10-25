// from server: 100% by king_originala
// roc 2008-06 00614ac0  unit: RBX::RevoluteLink  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614ac0
//
// 00614ac0  6aff                 push -1
// 00614ac2  682b8e7d00           push 0x7d8e2b
// 00614ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00614acd  50                   push eax
// 00614ace  64892500000000       mov dword ptr fs:[0], esp
// 00614ad5  51                   push ecx
// 00614ad6  53                   push ebx
// 00614ad7  56                   push esi
// 00614ad8  8bf1                 mov esi, ecx
// 00614ada  57                   push edi
// 00614adb  8974240c             mov dword ptr [esp + 0xc], esi
// 00614adf  33db                 xor ebx, ebx
// 00614ae1  895c2418             mov dword ptr [esp + 0x18], ebx
// 00614ae5  395e14               cmp dword ptr [esi + 0x14], ebx
// 00614ae8  7406                 je 0x614af0
// 00614aea  53                   push ebx
// 00614aeb  e8c0fdffff           call 0x6148b0
// 00614af0  8b7e2c               mov edi, dword ptr [esi + 0x2c]
// 00614af3  3bfb                 cmp edi, ebx
// 00614af5  7410                 je 0x614b07
// 00614af7  8bcf                 mov ecx, edi
// 00614af9  e81289e6ff           call 0x47d410
// 00614afe  57                   push edi
// 00614aff  e876bb0800           call 0x6a067a
// 00614b04  83c404               add esp, 4
// 00614b07  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00614b0a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00614b0d  50                   push eax
// 00614b0e  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00614b16  e80532efff           call 0x507d20
// 00614b1b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00614b1f  83c404               add esp, 4
// 00614b22  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00614b25  895e20               mov dword ptr [esi + 0x20], ebx
// 00614b28  895e24               mov dword ptr [esi + 0x24], ebx
// 00614b2b  5f                   pop edi
// 00614b2c  5e                   pop esi
// 00614b2d  5b                   pop ebx
// 00614b2e  64890d00000000       mov dword ptr fs:[0], ecx
// 00614b35  83c410               add esp, 0x10
// 00614b38  c3                   ret 

void __cdecl alignedFree(void *);
void __cdecl operator delete(void *);

struct Object {
    ~Object();
};

struct Buffer {
    void *data;
    int size;
    int capacity;
    ~Buffer();
};

inline Buffer::~Buffer()
{
    alignedFree(data);
    data = 0;
    size = 0;
    capacity = 0;
}

struct S {
    unsigned char padding0[0x14];
    void *connection;
    unsigned char padding1[4];
    Buffer buffer;
    unsigned char padding2[4];
    Object *object;

    void disconnect(int);
    ~S();
};

S::~S()
{
    if (connection)
        disconnect(0);
    delete object;
    object = 0;
}
