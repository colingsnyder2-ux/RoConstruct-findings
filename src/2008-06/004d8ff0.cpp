// from server: 100% by king_originala
// roc 2008-06 004d8ff0  unit: RBX::VSky::?$FactoryProduct::Creator  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8ff0
//
// 004d8ff0  53                   push ebx
// 004d8ff1  55                   push ebp
// 004d8ff2  8bd9                 mov ebx, ecx
// 004d8ff4  33ed                 xor ebp, ebp
// 004d8ff6  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004d8ff9  7e3d                 jle 0x4d9038
// 004d8ffb  56                   push esi
// 004d8ffc  57                   push edi
// 004d8ffd  8d4900               lea ecx, [ecx]
// 004d9000  8b4308               mov eax, dword ptr [ebx + 8]
// 004d9003  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004d9006  85f6                 test esi, esi
// 004d9008  7426                 je 0x4d9030
// 004d900a  8d9b00000000         lea ebx, [ebx]
// 004d9010  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004d9013  8d4e08               lea ecx, [esi + 8]
// 004d9016  c7011c6c8200         mov dword ptr [ecx], 0x826c1c
// 004d901c  e80feeffff           call 0x4d7e30
// 004d9021  56                   push esi
// 004d9022  e8d9ec0200           call 0x507d00
// 004d9027  83c404               add esp, 4
// 004d902a  8bf7                 mov esi, edi
// 004d902c  85ff                 test edi, edi
// 004d902e  75e0                 jne 0x4d9010
// 004d9030  45                   inc ebp
// 004d9031  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004d9034  7cca                 jl 0x4d9000
// 004d9036  5f                   pop edi
// 004d9037  5e                   pop esi
// 004d9038  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004d903b  51                   push ecx
// 004d903c  e8dfec0200           call 0x507d20
// 004d9041  83c404               add esp, 4
// 004d9044  33c0                 xor eax, eax
// 004d9046  5d                   pop ebp
// 004d9047  894308               mov dword ptr [ebx + 8], eax
// 004d904a  89430c               mov dword ptr [ebx + 0xc], eax
// 004d904d  894304               mov dword ptr [ebx + 4], eax
// 004d9050  5b                   pop ebx
// 004d9051  c3                   ret 

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
