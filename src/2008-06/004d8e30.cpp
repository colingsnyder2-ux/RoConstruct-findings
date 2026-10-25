// from server: 100% by tester
// roc 2008-06 004d8e30  unit: RBX::VSky::?$FactoryProduct::Creator  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8e30
//
// 004d8e30  53                   push ebx
// 004d8e31  55                   push ebp
// 004d8e32  8bd9                 mov ebx, ecx
// 004d8e34  33ed                 xor ebp, ebp
// 004d8e36  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004d8e39  7e3d                 jle 0x4d8e78
// 004d8e3b  56                   push esi
// 004d8e3c  57                   push edi
// 004d8e3d  8d4900               lea ecx, [ecx]
// 004d8e40  8b4308               mov eax, dword ptr [ebx + 8]
// 004d8e43  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004d8e46  85f6                 test esi, esi
// 004d8e48  7426                 je 0x4d8e70
// 004d8e4a  8d9b00000000         lea ebx, [ebx]
// 004d8e50  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004d8e53  8d4e08               lea ecx, [esi + 8]
// 004d8e56  c701fc6b8200         mov dword ptr [ecx], 0x826bfc
// 004d8e5c  e8cfefffff           call 0x4d7e30
// 004d8e61  56                   push esi
// 004d8e62  e899ee0200           call 0x507d00
// 004d8e67  83c404               add esp, 4
// 004d8e6a  8bf7                 mov esi, edi
// 004d8e6c  85ff                 test edi, edi
// 004d8e6e  75e0                 jne 0x4d8e50
// 004d8e70  45                   inc ebp
// 004d8e71  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004d8e74  7cca                 jl 0x4d8e40
// 004d8e76  5f                   pop edi
// 004d8e77  5e                   pop esi
// 004d8e78  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004d8e7b  51                   push ecx
// 004d8e7c  e89fee0200           call 0x507d20
// 004d8e81  83c404               add esp, 4
// 004d8e84  33c0                 xor eax, eax
// 004d8e86  5d                   pop ebp
// 004d8e87  894308               mov dword ptr [ebx + 8], eax
// 004d8e8a  89430c               mov dword ptr [ebx + 0xc], eax
// 004d8e8d  894304               mov dword ptr [ebx + 4], eax
// 004d8e90  5b                   pop ebx
// 004d8e91  c3                   ret 

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
