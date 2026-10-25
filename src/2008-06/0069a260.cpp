// from server: 100% by king_originala
// roc 2008-06 0069a260  unit: Ogre::RbxSceneManager  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0069a260
//
// 0069a260  6aff                 push -1
// 0069a262  683bf47b00           push 0x7bf43b
// 0069a267  64a100000000         mov eax, dword ptr fs:[0]
// 0069a26d  50                   push eax
// 0069a26e  64892500000000       mov dword ptr fs:[0], esp
// 0069a275  51                   push ecx
// 0069a276  56                   push esi
// 0069a277  57                   push edi
// 0069a278  6828020000           push 0x228
// 0069a27d  8bf9                 mov edi, ecx
// 0069a27f  e89c660000           call 0x6a0920
// 0069a284  8bf0                 mov esi, eax
// 0069a286  83c404               add esp, 4
// 0069a289  89742408             mov dword ptr [esp + 8], esi
// 0069a28d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0069a295  85f6                 test esi, esi
// 0069a297  7411                 je 0x69a2aa
// 0069a299  57                   push edi
// 0069a29a  8bce                 mov ecx, esi
// 0069a29c  ff15c4468000         call dword ptr [0x8046c4]
// 0069a2a2  c70634f98400         mov dword ptr [esi], 0x84f934
// 0069a2a8  eb02                 jmp 0x69a2ac
// 0069a2aa  33f6                 xor esi, esi
// 0069a2ac  8bce                 mov ecx, esi
// 0069a2ae  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0069a2b6  ff1584448000         call dword ptr [0x804484]
// 0069a2bc  50                   push eax
// 0069a2bd  8d8f98000000         lea ecx, [edi + 0x98]
// 0069a2c3  e84876fdff           call 0x671910
// 0069a2c8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069a2cc  8930                 mov dword ptr [eax], esi
// 0069a2ce  5f                   pop edi
// 0069a2cf  8bc6                 mov eax, esi
// 0069a2d1  5e                   pop esi
// 0069a2d2  64890d00000000       mov dword ptr fs:[0], ecx
// 0069a2d9  83c410               add esp, 0x10
// 0069a2dc  c3                   ret 

struct Manager;
struct Node;
struct Name;

extern void (__thiscall *sceneNodeConstructor)(Node *, Manager *);
extern const Name &(__thiscall *nodeGetName)(const Node *);
extern void *sceneNodeVtable[];

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Node
{
    void **vtable;
    unsigned char storage[0x224];

    Node(Manager *);
};

struct NodeMap
{
    Node *&operator[](const Name &);
};

struct Manager
{
    unsigned char storage[0x98];
    NodeMap nodes;

    Node *createNode();
};

__forceinline Node::Node(Manager *manager)
{
    sceneNodeConstructor(this, manager);
    vtable = sceneNodeVtable;
}

Node *Manager::createNode()
{
    Node *node = new Node(this);
    nodes[nodeGetName(node)] = node;
    return node;
}
