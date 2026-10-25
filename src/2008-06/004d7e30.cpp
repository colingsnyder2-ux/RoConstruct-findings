// from server: 100% by king_originala
// roc 2008-06 004d7e30  unit: RBX::RenderBase::SimpleSceneManager  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7e30
//
// 004d7e30  53                   push ebx
// 004d7e31  55                   push ebp
// 004d7e32  8bd9                 mov ebx, ecx
// 004d7e34  33ed                 xor ebp, ebp
// 004d7e36  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004d7e39  7e41                 jle 0x4d7e7c
// 004d7e3b  56                   push esi
// 004d7e3c  57                   push edi
// 004d7e3d  8d4900               lea ecx, [ecx]
// 004d7e40  8b4308               mov eax, dword ptr [ebx + 8]
// 004d7e43  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004d7e46  85f6                 test esi, esi
// 004d7e48  742a                 je 0x4d7e74
// 004d7e4a  8d9b00000000         lea ebx, [ebx]
// 004d7e50  8b7e14               mov edi, dword ptr [esi + 0x14]
// 004d7e53  68702a5000           push 0x502a70
// 004d7e58  6a01                 push 1
// 004d7e5a  6a04                 push 4
// 004d7e5c  8d4e10               lea ecx, [esi + 0x10]
// 004d7e5f  51                   push ecx
// 004d7e60  e8f6971c00           call 0x6a165b
// 004d7e65  56                   push esi
// 004d7e66  e895fe0200           call 0x507d00
// 004d7e6b  83c404               add esp, 4
// 004d7e6e  8bf7                 mov esi, edi
// 004d7e70  85ff                 test edi, edi
// 004d7e72  75dc                 jne 0x4d7e50
// 004d7e74  45                   inc ebp
// 004d7e75  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004d7e78  7cc6                 jl 0x4d7e40
// 004d7e7a  5f                   pop edi
// 004d7e7b  5e                   pop esi
// 004d7e7c  8b5308               mov edx, dword ptr [ebx + 8]
// 004d7e7f  52                   push edx
// 004d7e80  e89bfe0200           call 0x507d20
// 004d7e85  83c404               add esp, 4
// 004d7e88  33c0                 xor eax, eax
// 004d7e8a  5d                   pop ebp
// 004d7e8b  894308               mov dword ptr [ebx + 8], eax
// 004d7e8e  89430c               mov dword ptr [ebx + 0xc], eax
// 004d7e91  894304               mov dword ptr [ebx + 4], eax
// 004d7e94  5b                   pop ebx
// 004d7e95  c3                   ret 

extern "C" void __cdecl free_node(void*);
extern "C" void __cdecl aligned_free(void*);
extern "C" void __stdcall destroy_value(void*);
extern "C" void __stdcall destroy_array(
    void*, unsigned int, int, void (__stdcall *)(void*));

struct Node
{
    unsigned char padding[16];
    unsigned int value;
    Node* next;
};

struct S
{
    unsigned int padding;
    int used;
    Node** buckets;
    int count;

    void clear();
};

void S::clear()
{
    for (int i = 0; i < count; ++i)
    {
        Node* node = buckets[i];
        while (node)
        {
            Node* next = node->next;
            destroy_array(&node->value, 4, 1, destroy_value);
            free_node(node);
            node = next;
        }
    }

    aligned_free(buckets);
    buckets = 0;
    count = 0;
    used = 0;
}
