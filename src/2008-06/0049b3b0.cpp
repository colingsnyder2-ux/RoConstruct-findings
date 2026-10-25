// from server: 100% by king_originala
// roc 2008-06 0049b3b0  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049b3b0
//
// 0049b3b0  6aff                 push -1
// 0049b3b2  689ee37c00           push 0x7ce39e
// 0049b3b7  64a100000000         mov eax, dword ptr fs:[0]
// 0049b3bd  50                   push eax
// 0049b3be  64892500000000       mov dword ptr fs:[0], esp
// 0049b3c5  51                   push ecx
// 0049b3c6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0049b3ca  56                   push esi
// 0049b3cb  8bf1                 mov esi, ecx
// 0049b3cd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0049b3d1  50                   push eax
// 0049b3d2  51                   push ecx
// 0049b3d3  8974240c             mov dword ptr [esp + 0xc], esi
// 0049b3d7  e8c4f4ffff           call 0x49a8a0
// 0049b3dc  50                   push eax
// 0049b3dd  8bce                 mov ecx, esi
// 0049b3df  e8aca30f00           call 0x595790
// 0049b3e4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049b3e8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049b3ec  8d4e40               lea ecx, [esi + 0x40]
// 0049b3ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0049b3f7  c706a0298200         mov dword ptr [esi], 0x8229a0
// 0049b3fd  895638               mov dword ptr [esi + 0x38], edx
// 0049b400  89463c               mov dword ptr [esi + 0x3c], eax
// 0049b403  e8b8960f00           call 0x594ac0
// 0049b408  8d4e48               lea ecx, [esi + 0x48]
// 0049b40b  c644241001           mov byte ptr [esp + 0x10], 1
// 0049b410  e8ab960f00           call 0x594ac0
// 0049b415  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0049b419  8b542424             mov edx, dword ptr [esp + 0x24]
// 0049b41d  51                   push ecx
// 0049b41e  52                   push edx
// 0049b41f  8bce                 mov ecx, esi
// 0049b421  c644241802           mov byte ptr [esp + 0x18], 2
// 0049b426  e835abffff           call 0x495f60
// 0049b42b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049b42f  8bc6                 mov eax, esi
// 0049b431  5e                   pop esi
// 0049b432  64890d00000000       mov dword ptr fs:[0], ecx
// 0049b439  83c410               add esp, 0x10
// 0049b43c  c21800               ret 0x18

extern "C" void* __stdcall resolve_type(void*, void*);

struct Value
{
    void* type;
    unsigned int data;

    Value();
    ~Value();
};

struct Base
{
    unsigned char storage[52];

    Base(void*);
    virtual ~Base();
};

struct S : Base
{
    unsigned int first;
    unsigned int second;
    Value value1;
    Value value2;

    S(unsigned int, unsigned int, void*, void*, void*, void*);
    virtual ~S();
    void initialize(void*, void*);
};

S::S(unsigned int a, unsigned int b, void* c, void* d, void* e, void* f)
    : Base(resolve_type(c, f)), first(a), second(b), value1(), value2()
{
    initialize(d, e);
}
