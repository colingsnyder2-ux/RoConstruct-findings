// from server: 100% by king_originala
// roc 2008-06 00671160  unit: RBX::AdornRbxGfx  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00671160
//
// 00671160  64a100000000         mov eax, dword ptr fs:[0]
// 00671166  6aff                 push -1
// 00671168  68a9c87d00           push 0x7dc8a9
// 0067116d  50                   push eax
// 0067116e  64892500000000       mov dword ptr fs:[0], esp
// 00671175  53                   push ebx
// 00671176  55                   push ebp
// 00671177  56                   push esi
// 00671178  57                   push edi
// 00671179  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0067117d  807f3500             cmp byte ptr [edi + 0x35], 0
// 00671181  8bd9                 mov ebx, ecx
// 00671183  8bf7                 mov esi, edi
// 00671185  7546                 jne 0x6711cd
// 00671187  8b4608               mov eax, dword ptr [esi + 8]
// 0067118a  50                   push eax
// 0067118b  8bcb                 mov ecx, ebx
// 0067118d  e8ceffffff           call 0x671160
// 00671192  8b36                 mov esi, dword ptr [esi]
// 00671194  8d6f0c               lea ebp, [edi + 0xc]
// 00671197  896c2420             mov dword ptr [esp + 0x20], ebp
// 0067119b  8d4d1c               lea ecx, [ebp + 0x1c]
// 0067119e  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006711a6  ff15a44c8000         call dword ptr [0x804ca4]
// 006711ac  8bcd                 mov ecx, ebp
// 006711ae  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 006711b6  ff1568248000         call dword ptr [0x802468]
// 006711bc  57                   push edi
// 006711bd  e8b8f40200           call 0x6a067a
// 006711c2  83c404               add esp, 4
// 006711c5  807e3500             cmp byte ptr [esi + 0x35], 0
// 006711c9  8bfe                 mov edi, esi
// 006711cb  74ba                 je 0x671187
// 006711cd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006711d1  5f                   pop edi
// 006711d2  5e                   pop esi
// 006711d3  5d                   pop ebp
// 006711d4  64890d00000000       mov dword ptr fs:[0], ecx
// 006711db  5b                   pop ebx
// 006711dc  83c40c               add esp, 0xc
// 006711df  c20400               ret 4

struct Mesh;
struct String;

extern void (__thiscall *destroyMesh)(Mesh *);
extern void (__thiscall *destroyString)(String *);

struct Mesh {
    char data[28];
    ~Mesh();
};

struct String {
    char data[12];
    ~String();
};

inline Mesh::~Mesh()
{
    destroyMesh(this);
}

inline String::~String()
{
    destroyString(this);
}

struct Value {
    Mesh mesh;
    String string;
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    char data[40];
    unsigned char color;
    unsigned char nil;
};

void __cdecl operator delete(void *) throw();

struct S {
    void clear(Node *);
};

void S::clear(Node *node)
{
    Node *current = node;
    for (; !current->nil; node = current) {
        clear(current->right);
        current = current->left;
        reinterpret_cast<Value *>(node->data)->~Value();
        operator delete(node);
    }
}
