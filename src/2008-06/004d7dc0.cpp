// from server: 100% by king_originala
// roc 2008-06 004d7dc0  unit: RBX::RenderBase::SimpleSceneManager  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7dc0
//
// 004d7dc0  53                   push ebx
// 004d7dc1  55                   push ebp
// 004d7dc2  8bd9                 mov ebx, ecx
// 004d7dc4  33ed                 xor ebp, ebp
// 004d7dc6  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004d7dc9  7e41                 jle 0x4d7e0c
// 004d7dcb  56                   push esi
// 004d7dcc  57                   push edi
// 004d7dcd  8d4900               lea ecx, [ecx]
// 004d7dd0  8b4308               mov eax, dword ptr [ebx + 8]
// 004d7dd3  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004d7dd6  85f6                 test esi, esi
// 004d7dd8  742a                 je 0x4d7e04
// 004d7dda  8d9b00000000         lea ebx, [ebx]
// 004d7de0  8b7e20               mov edi, dword ptr [esi + 0x20]
// 004d7de3  68702a5000           push 0x502a70
// 004d7de8  6a04                 push 4
// 004d7dea  6a04                 push 4
// 004d7dec  8d4e10               lea ecx, [esi + 0x10]
// 004d7def  51                   push ecx
// 004d7df0  e866981c00           call 0x6a165b
// 004d7df5  56                   push esi
// 004d7df6  e805ff0200           call 0x507d00
// 004d7dfb  83c404               add esp, 4
// 004d7dfe  8bf7                 mov esi, edi
// 004d7e00  85ff                 test edi, edi
// 004d7e02  75dc                 jne 0x4d7de0
// 004d7e04  45                   inc ebp
// 004d7e05  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004d7e08  7cc6                 jl 0x4d7dd0
// 004d7e0a  5f                   pop edi
// 004d7e0b  5e                   pop esi
// 004d7e0c  8b5308               mov edx, dword ptr [ebx + 8]
// 004d7e0f  52                   push edx
// 004d7e10  e80bff0200           call 0x507d20
// 004d7e15  83c404               add esp, 4
// 004d7e18  33c0                 xor eax, eax
// 004d7e1a  5d                   pop ebp
// 004d7e1b  894308               mov dword ptr [ebx + 8], eax
// 004d7e1e  89430c               mov dword ptr [ebx + 0xc], eax
// 004d7e21  894304               mov dword ptr [ebx + 4], eax
// 004d7e24  5b                   pop ebx
// 004d7e25  c3                   ret 

extern "C" void __stdcall destroyElement(void *);
extern "C" void __stdcall destroyArray(
    void *, unsigned int, int, void (__stdcall *)(void *));
extern "C" void __cdecl freeNode(void *);
extern "C" void __cdecl alignedFree(void *);

struct Node
{
    char padding[16];
    unsigned int elements[4];
    Node *next;
};

struct S
{
    unsigned int unknown;
    int size;
    Node **buckets;
    int bucketCount;

    void clear();
};

void S::clear()
{
    for (int i = 0; i < bucketCount; ++i)
    {
        Node *node = buckets[i];
        while (node)
        {
            Node *next = node->next;
            destroyArray(node->elements, 4, 4, destroyElement);
            freeNode(node);
            node = next;
        }
    }

    alignedFree(buckets);
    buckets = 0;
    bucketCount = 0;
    size = 0;
}
