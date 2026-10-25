// from server: 100% by king_originala
// roc 2008-06 00496bc0  unit: RBX::Network::Players::Plugin  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496bc0
//
// 00496bc0  56                   push esi
// 00496bc1  6a28                 push 0x28
// 00496bc3  8bf1                 mov esi, ecx
// 00496bc5  e8569d2000           call 0x6a0920
// 00496bca  33d2                 xor edx, edx
// 00496bcc  83c404               add esp, 4
// 00496bcf  3bc2                 cmp eax, edx
// 00496bd1  741a                 je 0x496bed
// 00496bd3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00496bd7  8910                 mov dword ptr [eax], edx
// 00496bd9  895004               mov dword ptr [eax + 4], edx
// 00496bdc  895008               mov dword ptr [eax + 8], edx
// 00496bdf  894810               mov dword ptr [eax + 0x10], ecx
// 00496be2  895014               mov dword ptr [eax + 0x14], edx
// 00496be5  895020               mov dword ptr [eax + 0x20], edx
// 00496be8  895024               mov dword ptr [eax + 0x24], edx
// 00496beb  eb02                 jmp 0x496bef
// 00496bed  33c0                 xor eax, eax
// 00496bef  8b4e08               mov ecx, dword ptr [esi + 8]
// 00496bf2  3bca                 cmp ecx, edx
// 00496bf4  750a                 jne 0x496c00
// 00496bf6  894604               mov dword ptr [esi + 4], eax
// 00496bf9  894608               mov dword ptr [esi + 8], eax
// 00496bfc  5e                   pop esi
// 00496bfd  c20400               ret 4
// 00496c00  8901                 mov dword ptr [ecx], eax
// 00496c02  894608               mov dword ptr [esi + 8], eax
// 00496c05  5e                   pop esi
// 00496c06  c20400               ret 4

void* __cdecl operator new(unsigned int);

struct Node {
    Node* next;
    unsigned int field04;
    unsigned int field08;
    unsigned int field0C;
    void* value;
    unsigned int field14;
    unsigned int field18;
    unsigned int field1C;
    unsigned int field20;
    unsigned int field24;

    Node(void* p);
};

inline Node::Node(void* p)
    : next(0), field04(0), field08(0), value(p),
      field14(0), field20(0), field24(0)
{
}

struct S {
    unsigned int field00;
    Node* head;
    Node* tail;

    void append(void* p);
};

void S::append(void* p)
{
    Node* n = new Node(p);
    if (tail == 0) {
        head = n;
        tail = n;
    } else {
        tail->next = n;
        tail = n;
    }
}
