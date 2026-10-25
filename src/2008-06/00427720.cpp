// from server: 100% by colin
// roc 2008-06 00427720  unit: CSelectionTreeCtrl  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00427720
//
// 00427720  6aff                 push -1
// 00427722  6859087d00           push 0x7d0859
// 00427727  64a100000000         mov eax, dword ptr fs:[0]
// 0042772d  50                   push eax
// 0042772e  64892500000000       mov dword ptr fs:[0], esp
// 00427735  83ec08               sub esp, 8
// 00427738  57                   push edi
// 00427739  8bf9                 mov edi, ecx
// 0042773b  8d44241c             lea eax, [esp + 0x1c]
// 0042773f  50                   push eax
// 00427740  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00427748  c70700000000         mov dword ptr [edi], 0
// 0042774e  e89d2b1e00           call 0x60a2f0
// 00427753  83c404               add esp, 4
// 00427756  84c0                 test al, al
// 00427758  753e                 jne 0x427798
// 0042775a  56                   push esi
// 0042775b  6a20                 push 0x20
// 0042775d  e8be912700           call 0x6a0920
// 00427762  8bf0                 mov esi, eax
// 00427764  83c404               add esp, 4
// 00427767  89742408             mov dword ptr [esp + 8], esi
// 0042776b  8974240c             mov dword ptr [esp + 0xc], esi
// 0042776f  c644241801           mov byte ptr [esp + 0x18], 1
// 00427774  85f6                 test esi, esi
// 00427776  7414                 je 0x42778c
// 00427778  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0042777c  8d542424             lea edx, [esp + 0x24]
// 00427780  890e                 mov dword ptr [esi], ecx
// 00427782  8d4e04               lea ecx, [esi + 4]
// 00427785  52                   push edx
// 00427786  ff155c248000         call dword ptr [0x80245c]
// 0042778c  897708               mov dword ptr [edi + 8], esi
// 0042778f  c707e8028100         mov dword ptr [edi], 0x8102e8
// 00427795  5e                   pop esi
// 00427796  eb06                 jmp 0x42779e
// 00427798  c70700000000         mov dword ptr [edi], 0
// 0042779e  8d4c2420             lea ecx, [esp + 0x20]
// 004277a2  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004277aa  ff1568248000         call dword ptr [0x802468]
// 004277b0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004277b4  8bc7                 mov eax, edi
// 004277b6  5f                   pop edi
// 004277b7  64890d00000000       mov dword ptr fs:[0], ecx
// 004277be  83c414               add esp, 0x14
// 004277c1  c22400               ret 0x24

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

inline void* __cdecl operator new(size_t, void* p)
{
    return p;
}

inline void __cdecl operator delete(void* p, void*)
{
    operator delete(p);
}

bool __cdecl func_0060a2f0();

struct String;
typedef void (__thiscall *StringCopy)(String*, const String&);
typedef void (__thiscall *StringDestroy)(String*);

extern StringCopy stringCopy;
extern StringDestroy stringDestroy;
extern unsigned char tableData[];

struct String
{
    unsigned char storage[28];
    String(const String&);
    ~String();
};

inline String::String(const String& other)
{
    stringCopy(this, other);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Node
{
    int value;
    String text;
    Node(int, const String&);
};

inline Node::Node(int value_, const String& text_)
    : value(value_), text(text_)
{
}

struct S
{
    void* table;
    unsigned int reserved;
    Node* node;
    S(int, String, int);
};

S::S(int value, String text, int)
{
    table = 0;
    if (!reinterpret_cast<bool (__cdecl *)(const int*)>(
            func_0060a2f0)(&value))
    {
        Node* p = static_cast<Node*>(operator new(sizeof(Node)));
        new (p) Node(value, text);
        node = p;
        table = tableData;
    }
    else
    {
        table = 0;
    }
}
