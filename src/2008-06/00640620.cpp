// from server: 100% by king_originala
// roc 2008-06 00640620  unit: RBX::AxisMoveTool  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00640620
//
// 00640620  6aff                 push -1
// 00640622  6823aa7d00           push 0x7daa23
// 00640627  64a100000000         mov eax, dword ptr fs:[0]
// 0064062d  50                   push eax
// 0064062e  64892500000000       mov dword ptr fs:[0], esp
// 00640635  51                   push ecx
// 00640636  56                   push esi
// 00640637  8bf1                 mov esi, ecx
// 00640639  57                   push edi
// 0064063a  89742408             mov dword ptr [esp + 8], esi
// 0064063e  8d4e24               lea ecx, [esi + 0x24]
// 00640641  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00640649  c74648c4828200       mov dword ptr [esi + 0x48], 0x8282c4
// 00640650  ff1568248000         call dword ptr [0x802468]
// 00640656  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00640659  c644241400           mov byte ptr [esp + 0x14], 0
// 0064065e  85ff                 test edi, edi
// 00640660  7410                 je 0x640672
// 00640662  8bcf                 mov ecx, edi
// 00640664  e897e0fcff           call 0x60e700
// 00640669  57                   push edi
// 0064066a  e80b000600           call 0x6a067a
// 0064066f  83c404               add esp, 4
// 00640672  8bce                 mov ecx, esi
// 00640674  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0064067c  e8ff50fdff           call 0x615780
// 00640681  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00640685  5f                   pop edi
// 00640686  5e                   pop esi
// 00640687  64890d00000000       mov dword ptr fs:[0], ecx
// 0064068e  83c410               add esp, 0x10
// 00640691  c3                   ret 

extern void (__thiscall *destroyString)(void *);

struct Base {
    char storage[32];
    ~Base();
};

struct Item {
    ~Item();
};

void __cdecl operator delete(void *);

struct Owner {
    Item *pointer;
    ~Owner();
};

struct String {
    char storage[28];
    ~String();
};

struct VirtualPart {
    virtual ~VirtualPart();
};

struct S : Base {
    Owner owner;
    String text;
    char padding[8];
    VirtualPart part;
    ~S();
};

__forceinline Owner::~Owner()
{
    delete pointer;
}

__forceinline String::~String()
{
    destroyString(this);
}

__forceinline VirtualPart::~VirtualPart()
{
}

S::~S()
{
}
