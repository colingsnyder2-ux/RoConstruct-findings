// from server: 56% by colin
// roc 2008-06 004cc7e0  unit: RBX::VInstance::?$NonFactoryProduct  size: 368 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cc7e0
//
// 004cc7e0  55                   push ebp
// 004cc7e1  8bec                 mov ebp, esp
// 004cc7e3  6aff                 push -1
// 004cc7e5  6800997c00           push 0x7c9900
// 004cc7ea  64a100000000         mov eax, dword ptr fs:[0]
// 004cc7f0  50                   push eax
// 004cc7f1  64892500000000       mov dword ptr fs:[0], esp
// 004cc7f8  83ec08               sub esp, 8
// 004cc7fb  8b5508               mov edx, dword ptr [ebp + 8]
// 004cc7fe  53                   push ebx
// 004cc7ff  56                   push esi
// 004cc800  57                   push edi
// 004cc801  8bf1                 mov esi, ecx
// 004cc803  8965f0               mov dword ptr [ebp - 0x10], esp
// 004cc806  8975ec               mov dword ptr [ebp - 0x14], esi
// 004cc809  85d2                 test edx, edx
// 004cc80b  7405                 je 0x4cc812
// 004cc80d  8d4a70               lea ecx, [edx + 0x70]
// 004cc810  eb02                 jmp 0x4cc814
// 004cc812  33c9                 xor ecx, ecx
// 004cc814  8b39                 mov edi, dword ptr [ecx]
// 004cc816  8bc7                 mov eax, edi
// 004cc818  3908                 cmp dword ptr [eax], ecx
// 004cc81a  740a                 je 0x4cc826
// 004cc81c  8d642400             lea esp, [esp]
// 004cc820  8b00                 mov eax, dword ptr [eax]
// 004cc822  3908                 cmp dword ptr [eax], ecx
// 004cc824  75fa                 jne 0x4cc820
// 004cc826  8938                 mov dword ptr [eax], edi
// 004cc828  8b0a                 mov ecx, dword ptr [edx]
// 004cc82a  8bc1                 mov eax, ecx
// 004cc82c  c1e803               shr eax, 3
// 004cc82f  03c1                 add eax, ecx
// 004cc831  33d2                 xor edx, edx
// 004cc833  f77608               div dword ptr [esi + 8]
// 004cc836  8b4614               mov eax, dword ptr [esi + 0x14]
// 004cc839  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004cc840  8bda                 mov ebx, edx
// 004cc842  8d3c98               lea edi, [eax + ebx*4]
// 004cc845  8b07                 mov eax, dword ptr [edi]
// 004cc847  3bc7                 cmp eax, edi
// 004cc849  746c                 je 0x4cc8b7
// 004cc84b  85c0                 test eax, eax
// 004cc84d  7405                 je 0x4cc854
// 004cc84f  8d5090               lea edx, [eax - 0x70]
// 004cc852  eb02                 jmp 0x4cc856
// 004cc854  33d2                 xor edx, edx
// 004cc856  3b0a                 cmp ecx, dword ptr [edx]
// 004cc858  7404                 je 0x4cc85e
// 004cc85a  8b00                 mov eax, dword ptr [eax]
// 004cc85c  ebe9                 jmp 0x4cc847
// 004cc85e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004cc861  8b4614               mov eax, dword ptr [esi + 0x14]
// 004cc864  8d0488               lea eax, [eax + ecx*4]
// 004cc867  3900                 cmp dword ptr [eax], eax
// 004cc869  7449                 je 0x4cc8b4
// 004cc86b  8b4508               mov eax, dword ptr [ebp + 8]
// 004cc86e  894e20               mov dword ptr [esi + 0x20], ecx
// 004cc871  50                   push eax
// 004cc872  8bce                 mov ecx, esi
// 004cc874  e8c7f6ffff           call 0x4cbf40
// 004cc879  32c0                 xor al, al
// 004cc87b  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004cc87e  64890d00000000       mov dword ptr fs:[0], ecx
// 004cc885  5f                   pop edi
// 004cc886  5e                   pop esi
// 004cc887  5b                   pop ebx
// 004cc888  8be5                 mov esp, ebp
// 004cc88a  5d                   pop ebp
// 004cc88b  c20400               ret 4
// 004cc88e  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004cc891  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004cc894  51                   push ecx
// 004cc895  8d4e08               lea ecx, [esi + 8]
// 004cc898  e853a8ffff           call 0x4c70f0
// 004cc89d  8b5508               mov edx, dword ptr [ebp + 8]
// 004cc8a0  52                   push edx
// 004cc8a1  8bce                 mov ecx, esi
// 004cc8a3  894620               mov dword ptr [esi + 0x20], eax
// 004cc8a6  e895f6ffff           call 0x4cbf40
// 004cc8ab  6a00                 push 0
// 004cc8ad  6a00                 push 0
// 004cc8af  e8d84c1d00           call 0x6a158c
// 004cc8b4  41                   inc ecx
// 004cc8b5  ebaa                 jmp 0x4cc861
// 004cc8b7  8b4508               mov eax, dword ptr [ebp + 8]
// 004cc8ba  50                   push eax
// 004cc8bb  8bce                 mov ecx, esi
// 004cc8bd  c745fc02000000       mov dword ptr [ebp - 4], 2
// 004cc8c4  e847f9ffff           call 0x4cc210
// 004cc8c9  84c0                 test al, al
// 004cc8cb  744e                 je 0x4cc91b
// 004cc8cd  8b4508               mov eax, dword ptr [ebp + 8]
// 004cc8d0  8b0f                 mov ecx, dword ptr [edi]
// 004cc8d2  83c070               add eax, 0x70
// 004cc8d5  8908                 mov dword ptr [eax], ecx
// 004cc8d7  8907                 mov dword ptr [edi], eax
// 004cc8d9  8b4620               mov eax, dword ptr [esi + 0x20]
// 004cc8dc  3bc3                 cmp eax, ebx
// 004cc8de  7618                 jbe 0x4cc8f8
// 004cc8e0  895e20               mov dword ptr [esi + 0x20], ebx
// 004cc8e3  b001                 mov al, 1
// 004cc8e5  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004cc8e8  64890d00000000       mov dword ptr fs:[0], ecx
// 004cc8ef  5f                   pop edi
// 004cc8f0  5e                   pop esi
// 004cc8f1  5b                   pop ebx
// 004cc8f2  8be5                 mov esp, ebp
// 004cc8f4  5d                   pop ebp
// 004cc8f5  c20400               ret 4
// 004cc8f8  730c                 jae 0x4cc906
// 004cc8fa  50                   push eax
// 004cc8fb  8d4e08               lea ecx, [esi + 8]
// 004cc8fe  e8eda7ffff           call 0x4c70f0
// 004cc903  894620               mov dword ptr [esi + 0x20], eax
// 004cc906  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004cc909  5f                   pop edi
// 004cc90a  5e                   pop esi
// 004cc90b  b001                 mov al, 1
// 004cc90d  64890d00000000       mov dword ptr fs:[0], ecx
// 004cc914  5b                   pop ebx
// 004cc915  8be5                 mov esp, ebp
// 004cc917  5d                   pop ebp
// 004cc918  c20400               ret 4
// 004cc91b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004cc91e  8bff                 mov edi, edi
// 004cc920  8b5614               mov edx, dword ptr [esi + 0x14]
// 004cc923  8d048a               lea eax, [edx + ecx*4]
// 004cc926  3900                 cmp dword ptr [eax], eax
// 004cc928  7408                 je 0x4cc932
// 004cc92a  894e20               mov dword ptr [esi + 0x20], ecx
// 004cc92d  e947ffffff           jmp 0x4cc879
// 004cc932  41                   inc ecx
// 004cc933  ebeb                 jmp 0x4cc920
// 004cc935  8b75ec               mov esi, dword ptr [ebp - 0x14]
// 004cc938  8b4620               mov eax, dword ptr [esi + 0x20]
// 004cc93b  50                   push eax
// 004cc93c  8d4e08               lea ecx, [esi + 8]
// 004cc93f  e8aca7ffff           call 0x4c70f0
// 004cc944  6a00                 push 0
// 004cc946  6a00                 push 0
// 004cc948  894620               mov dword ptr [esi + 0x20], eax
// 004cc94b  e83c4c1d00           call 0x6a158c

// from server: 75% by king_originala
struct Link {
    Link* next;
};

struct Node {
    unsigned key;
    char padding[108];
    Link link;
};

struct S {
    unsigned reserved0[2];
    unsigned bucketCount;
    unsigned reserved1[2];
    Link* buckets;
    unsigned reserved2[2];
    unsigned current;

    void release(Node*);
    bool insert(Node*);
};

bool S::insert(Node* node)
{
    Link* link = node ? &node->link : 0;
    Link* first = link->next;
    Link* last = first;
    while (last->next != link)
        last = last->next;
    last->next = first;

    unsigned key = node->key;
    unsigned bucket = (key + (key >> 3)) % bucketCount;

    try {
        Link* head = buckets + bucket;
        Link* p = head->next;
        while (p != head) {
            Node* entry = p
                ? reinterpret_cast<Node*>(reinterpret_cast<char*>(p) - 112)
                : 0;
            if (key == entry->key)
                break;
            p = p->next;
        }

        if (p != head) {
            unsigned index = current;
            while (buckets[index].next == buckets + index)
                ++index;
            current = index;
            release(node);
            return false;
        }

        Link* added = node ? &node->link : 0;
        added->next = head->next;
        head->next = added;
        if (bucket < current)
            current = bucket;
        return true;
    }
    catch (...) {
        release(node);
        throw;
    }
}
