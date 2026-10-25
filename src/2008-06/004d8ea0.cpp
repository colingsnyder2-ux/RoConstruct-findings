// from server: 100% by tester
// roc 2008-06 004d8ea0  unit: RBX::VSky::?$FactoryProduct::Creator  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8ea0
//
// 004d8ea0  53                   push ebx
// 004d8ea1  55                   push ebp
// 004d8ea2  8bd9                 mov ebx, ecx
// 004d8ea4  33ed                 xor ebp, ebp
// 004d8ea6  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004d8ea9  7e3d                 jle 0x4d8ee8
// 004d8eab  56                   push esi
// 004d8eac  57                   push edi
// 004d8ead  8d4900               lea ecx, [ecx]
// 004d8eb0  8b4308               mov eax, dword ptr [ebx + 8]
// 004d8eb3  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004d8eb6  85f6                 test esi, esi
// 004d8eb8  7426                 je 0x4d8ee0
// 004d8eba  8d9b00000000         lea ebx, [ebx]
// 004d8ec0  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004d8ec3  8d4e08               lea ecx, [esi + 8]
// 004d8ec6  c701046c8200         mov dword ptr [ecx], 0x826c04
// 004d8ecc  e85fefffff           call 0x4d7e30
// 004d8ed1  56                   push esi
// 004d8ed2  e829ee0200           call 0x507d00
// 004d8ed7  83c404               add esp, 4
// 004d8eda  8bf7                 mov esi, edi
// 004d8edc  85ff                 test edi, edi
// 004d8ede  75e0                 jne 0x4d8ec0
// 004d8ee0  45                   inc ebp
// 004d8ee1  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004d8ee4  7cca                 jl 0x4d8eb0
// 004d8ee6  5f                   pop edi
// 004d8ee7  5e                   pop esi
// 004d8ee8  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004d8eeb  51                   push ecx
// 004d8eec  e82fee0200           call 0x507d20
// 004d8ef1  83c404               add esp, 4
// 004d8ef4  33c0                 xor eax, eax
// 004d8ef6  5d                   pop ebp
// 004d8ef7  894308               mov dword ptr [ebx + 8], eax
// 004d8efa  89430c               mov dword ptr [ebx + 0xc], eax
// 004d8efd  894304               mov dword ptr [ebx + 4], eax
// 004d8f00  5b                   pop ebx
// 004d8f01  c3                   ret 

namespace G3D {
struct System {
    static void __cdecl free(void*);
    static void __cdecl alignedFree(void*);
};
}

struct Payload {
    void* vtable;
    unsigned char data[12];
    void destroy();
};

struct Node {
    unsigned char data[8];
    Payload value;
    Node* next;
};

struct S {
    unsigned int field0;
    int size;
    Node** buckets;
    int bucketCount;
    void clear();
};

void S::clear()
{
    for (int i = 0; i < bucketCount; ++i) {
        Node* node = buckets[i];
        while (node) {
            Node* next = node->next;
            node->value.vtable = (void*)0x00826bf4;
            node->value.destroy();
            G3D::System::free(node);
            node = next;
        }
    }
    G3D::System::alignedFree(buckets);
    buckets = 0;
    bucketCount = 0;
    size = 0;
}
