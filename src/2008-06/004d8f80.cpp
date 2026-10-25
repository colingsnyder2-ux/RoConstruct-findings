// from server: 100% by tester
// roc 2008-06 004d8f80  unit: RBX::VSky::?$FactoryProduct::Creator  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8f80
//
// 004d8f80  53                   push ebx
// 004d8f81  55                   push ebp
// 004d8f82  8bd9                 mov ebx, ecx
// 004d8f84  33ed                 xor ebp, ebp
// 004d8f86  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004d8f89  7e3d                 jle 0x4d8fc8
// 004d8f8b  56                   push esi
// 004d8f8c  57                   push edi
// 004d8f8d  8d4900               lea ecx, [ecx]
// 004d8f90  8b4308               mov eax, dword ptr [ebx + 8]
// 004d8f93  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004d8f96  85f6                 test esi, esi
// 004d8f98  7426                 je 0x4d8fc0
// 004d8f9a  8d9b00000000         lea ebx, [ebx]
// 004d8fa0  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004d8fa3  8d4e08               lea ecx, [esi + 8]
// 004d8fa6  c701146c8200         mov dword ptr [ecx], 0x826c14
// 004d8fac  e87feeffff           call 0x4d7e30
// 004d8fb1  56                   push esi
// 004d8fb2  e849ed0200           call 0x507d00
// 004d8fb7  83c404               add esp, 4
// 004d8fba  8bf7                 mov esi, edi
// 004d8fbc  85ff                 test edi, edi
// 004d8fbe  75e0                 jne 0x4d8fa0
// 004d8fc0  45                   inc ebp
// 004d8fc1  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004d8fc4  7cca                 jl 0x4d8f90
// 004d8fc6  5f                   pop edi
// 004d8fc7  5e                   pop esi
// 004d8fc8  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004d8fcb  51                   push ecx
// 004d8fcc  e84fed0200           call 0x507d20
// 004d8fd1  83c404               add esp, 4
// 004d8fd4  33c0                 xor eax, eax
// 004d8fd6  5d                   pop ebp
// 004d8fd7  894308               mov dword ptr [ebx + 8], eax
// 004d8fda  89430c               mov dword ptr [ebx + 0xc], eax
// 004d8fdd  894304               mov dword ptr [ebx + 4], eax
// 004d8fe0  5b                   pop ebx
// 004d8fe1  c3                   ret 

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
