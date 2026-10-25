// from server: 100% by king_originala
// roc 2008-06 0064d180  unit: RBX::SimJobStage  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064d180
//
// 0064d180  83ec08               sub esp, 8
// 0064d183  56                   push esi
// 0064d184  8b742410             mov esi, dword ptr [esp + 0x10]
// 0064d188  57                   push edi
// 0064d189  8bf9                 mov edi, ecx
// 0064d18b  837f2801             cmp dword ptr [edi + 0x28], 1
// 0064d18f  7608                 jbe 0x64d199
// 0064d191  56                   push esi
// 0064d192  e8e9e2e7ff           call 0x4cb480
// 0064d197  eb02                 jmp 0x64d19b
// 0064d199  33c0                 xor eax, eax
// 0064d19b  50                   push eax
// 0064d19c  56                   push esi
// 0064d19d  e8fe81f9ff           call 0x5e53a0
// 0064d1a2  8b4620               mov eax, dword ptr [esi + 0x20]
// 0064d1a5  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0064d1a8  83c408               add esp, 8
// 0064d1ab  50                   push eax
// 0064d1ac  51                   push ecx
// 0064d1ad  8d542410             lea edx, [esp + 0x10]
// 0064d1b1  52                   push edx
// 0064d1b2  8d4f10               lea ecx, [edi + 0x10]
// 0064d1b5  e836b7f3ff           call 0x5888f0
// 0064d1ba  8b06                 mov eax, dword ptr [esi]
// 0064d1bc  8b5008               mov edx, dword ptr [eax + 8]
// 0064d1bf  8bce                 mov ecx, esi
// 0064d1c1  ffd2                 call edx
// 0064d1c3  85c0                 test eax, eax
// 0064d1c5  7410                 je 0x64d1d7
// 0064d1c7  8b06                 mov eax, dword ptr [esi]
// 0064d1c9  8b5008               mov edx, dword ptr [eax + 8]
// 0064d1cc  8bce                 mov ecx, esi
// 0064d1ce  ffd2                 call edx
// 0064d1d0  c7404000000000       mov dword ptr [eax + 0x40], 0
// 0064d1d7  5f                   pop edi
// 0064d1d8  5e                   pop esi
// 0064d1d9  83c408               add esp, 8
// 0064d1dc  c20400               ret 4

struct Result {
    char padding[0x40];
    unsigned int state;
};

struct Node {
    virtual void slot0();
    virtual void slot1();
    virtual Result* getResult();

    char padding[0x18];
    void* first;
    void* second;
};

struct Pair {
    Pair();
    void* first;
    void* second;
};

struct Container {
    char padding[0x18];
    Pair insert(void* first, void* second);
};

extern "C" void __cdecl update(Node*, int);

struct S {
    char padding[0x10];
    Container container;
    unsigned int count;

    int lookup(Node*);
    void f(Node*);
};

void S::f(Node* node)
{
    int value = count > 1 ? lookup(node) : 0;
    update(node, value);
    container.insert(node->first, node->second);
    if (node->getResult())
        node->getResult()->state = 0;
}
