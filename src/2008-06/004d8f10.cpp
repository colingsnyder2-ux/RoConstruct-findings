// from server: 100% by tester
// roc 2008-06 004d8f10  unit: RBX::VSky::?$FactoryProduct::Creator  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d8f10
//
// 004d8f10  53                   push ebx
// 004d8f11  55                   push ebp
// 004d8f12  8bd9                 mov ebx, ecx
// 004d8f14  33ed                 xor ebp, ebp
// 004d8f16  396b0c               cmp dword ptr [ebx + 0xc], ebp
// 004d8f19  7e3d                 jle 0x4d8f58
// 004d8f1b  56                   push esi
// 004d8f1c  57                   push edi
// 004d8f1d  8d4900               lea ecx, [ecx]
// 004d8f20  8b4308               mov eax, dword ptr [ebx + 8]
// 004d8f23  8b34a8               mov esi, dword ptr [eax + ebp*4]
// 004d8f26  85f6                 test esi, esi
// 004d8f28  7426                 je 0x4d8f50
// 004d8f2a  8d9b00000000         lea ebx, [ebx]
// 004d8f30  8b7e18               mov edi, dword ptr [esi + 0x18]
// 004d8f33  8d4e08               lea ecx, [esi + 8]
// 004d8f36  c7010c6c8200         mov dword ptr [ecx], 0x826c0c
// 004d8f3c  e8efeeffff           call 0x4d7e30
// 004d8f41  56                   push esi
// 004d8f42  e8b9ed0200           call 0x507d00
// 004d8f47  83c404               add esp, 4
// 004d8f4a  8bf7                 mov esi, edi
// 004d8f4c  85ff                 test edi, edi
// 004d8f4e  75e0                 jne 0x4d8f30
// 004d8f50  45                   inc ebp
// 004d8f51  3b6b0c               cmp ebp, dword ptr [ebx + 0xc]
// 004d8f54  7cca                 jl 0x4d8f20
// 004d8f56  5f                   pop edi
// 004d8f57  5e                   pop esi
// 004d8f58  8b4b08               mov ecx, dword ptr [ebx + 8]
// 004d8f5b  51                   push ecx
// 004d8f5c  e8bfed0200           call 0x507d20
// 004d8f61  83c404               add esp, 4
// 004d8f64  33c0                 xor eax, eax
// 004d8f66  5d                   pop ebp
// 004d8f67  894308               mov dword ptr [ebx + 8], eax
// 004d8f6a  89430c               mov dword ptr [ebx + 0xc], eax
// 004d8f6d  894304               mov dword ptr [ebx + 4], eax
// 004d8f70  5b                   pop ebx
// 004d8f71  c3                   ret 

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
