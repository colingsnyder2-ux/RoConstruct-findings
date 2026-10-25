// from server: 100% by king_originala
// roc 2008-06 00578a20  unit: RBX::VTool::?$FactoryProduct::Creator  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00578a20
//
// 00578a20  6aff                 push -1
// 00578a22  6859087d00           push 0x7d0859
// 00578a27  64a100000000         mov eax, dword ptr fs:[0]
// 00578a2d  50                   push eax
// 00578a2e  64892500000000       mov dword ptr fs:[0], esp
// 00578a35  83ec08               sub esp, 8
// 00578a38  57                   push edi
// 00578a39  8bf9                 mov edi, ecx
// 00578a3b  8d44241c             lea eax, [esp + 0x1c]
// 00578a3f  50                   push eax
// 00578a40  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00578a48  c70700000000         mov dword ptr [edi], 0
// 00578a4e  e89d180900           call 0x60a2f0
// 00578a53  83c404               add esp, 4
// 00578a56  84c0                 test al, al
// 00578a58  753e                 jne 0x578a98
// 00578a5a  56                   push esi
// 00578a5b  6a20                 push 0x20
// 00578a5d  e8be7e1200           call 0x6a0920
// 00578a62  8bf0                 mov esi, eax
// 00578a64  83c404               add esp, 4
// 00578a67  89742408             mov dword ptr [esp + 8], esi
// 00578a6b  8974240c             mov dword ptr [esp + 0xc], esi
// 00578a6f  c644241801           mov byte ptr [esp + 0x18], 1
// 00578a74  85f6                 test esi, esi
// 00578a76  7414                 je 0x578a8c
// 00578a78  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00578a7c  8d542424             lea edx, [esp + 0x24]
// 00578a80  890e                 mov dword ptr [esi], ecx
// 00578a82  8d4e04               lea ecx, [esi + 4]
// 00578a85  52                   push edx
// 00578a86  ff155c248000         call dword ptr [0x80245c]
// 00578a8c  897708               mov dword ptr [edi + 8], esi
// 00578a8f  c70738008300         mov dword ptr [edi], 0x830038
// 00578a95  5e                   pop esi
// 00578a96  eb06                 jmp 0x578a9e
// 00578a98  c70700000000         mov dword ptr [edi], 0
// 00578a9e  8d4c2420             lea ecx, [esp + 0x20]
// 00578aa2  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00578aaa  ff1568248000         call dword ptr [0x802468]
// 00578ab0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00578ab4  8bc7                 mov eax, edi
// 00578ab6  5f                   pop edi
// 00578ab7  64890d00000000       mov dword ptr fs:[0], ecx
// 00578abe  83c414               add esp, 0x14
// 00578ac1  c22400               ret 0x24

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
