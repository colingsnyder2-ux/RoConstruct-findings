// from server: 100% by king_originala
// roc 2008-06 0063bfe0  unit: RBX::DebrisService  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063bfe0
//
// 0063bfe0  6aff                 push -1
// 0063bfe2  68c0a67d00           push 0x7da6c0
// 0063bfe7  64a100000000         mov eax, dword ptr fs:[0]
// 0063bfed  50                   push eax
// 0063bfee  64892500000000       mov dword ptr fs:[0], esp
// 0063bff5  83ec08               sub esp, 8
// 0063bff8  56                   push esi
// 0063bff9  8bf1                 mov esi, ecx
// 0063bffb  57                   push edi
// 0063bffc  89742408             mov dword ptr [esp + 8], esi
// 0063c000  8dbe30010000         lea edi, [esi + 0x130]
// 0063c006  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0063c00e  897c240c             mov dword ptr [esp + 0xc], edi
// 0063c012  8bcf                 mov ecx, edi
// 0063c014  c644241801           mov byte ptr [esp + 0x18], 1
// 0063c019  e8b2f6ffff           call 0x63b6d0
// 0063c01e  8b3f                 mov edi, dword ptr [edi]
// 0063c020  57                   push edi
// 0063c021  e854460600           call 0x6a067a
// 0063c026  83c404               add esp, 4
// 0063c029  8bce                 mov ecx, esi
// 0063c02b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0063c033  e808f3ffff           call 0x63b340
// 0063c038  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063c03c  5f                   pop edi
// 0063c03d  5e                   pop esi
// 0063c03e  64890d00000000       mov dword ptr fs:[0], ecx
// 0063c045  83c414               add esp, 0x14
// 0063c048  c3                   ret 

void __cdecl operator delete(void*) throw();

struct Base
{
    char storage[0x130];
    ~Base();
};

struct Head
{
    void* pointer;
    ~Head();
};

struct Container
{
    Head head;
    char storage[0x1c];

    void clear();
    ~Container();
};

struct S : Base
{
    Container container;
    ~S();
};

__forceinline Head::~Head()
{
    delete static_cast<char*>(pointer);
}

__forceinline Container::~Container()
{
    clear();
}

S::~S()
{
}
