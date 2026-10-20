// from server: 100% by colin
// roc 2008-06 004cb540  unit: RBX::VInstance::?$NonFactoryProduct  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cb540
//
// 004cb540  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004cb544  56                   push esi
// 004cb545  8bf1                 mov esi, ecx
// 004cb547  6a00                 push 0
// 004cb549  8d4c2414             lea ecx, [esp + 0x14]
// 004cb54d  51                   push ecx
// 004cb54e  68f8498200           push 0x8249f8
// 004cb553  6888498200           push 0x824988
// 004cb558  89442420             mov dword ptr [esp + 0x20], eax
// 004cb55c  e89f19feff           call 0x4acf00
// 004cb561  83c410               add esp, 0x10
// 004cb564  3df8498200           cmp eax, 0x8249f8
// 004cb569  7503                 jne 0x4cb56e
// 004cb56b  83e804               sub eax, 4
// 004cb56e  8b00                 mov eax, dword ptr [eax]
// 004cb570  8906                 mov dword ptr [esi], eax
// 004cb572  83c001               add eax, 1
// 004cb575  894608               mov dword ptr [esi + 8], eax
// 004cb578  740d                 je 0x4cb587
// 004cb57a  6a00                 push 0
// 004cb57c  50                   push eax
// 004cb57d  e8ce55f5ff           call 0x420b50
// 004cb582  83c408               add esp, 8
// 004cb585  eb02                 jmp 0x4cb589
// 004cb587  33c0                 xor eax, eax
// 004cb589  89460c               mov dword ptr [esi + 0xc], eax
// 004cb58c  8b16                 mov edx, dword ptr [esi]
// 004cb58e  8d0c90               lea ecx, [eax + edx*4]
// 004cb591  3bc1                 cmp eax, ecx
// 004cb593  7409                 je 0x4cb59e
// 004cb595  8900                 mov dword ptr [eax], eax
// 004cb597  83c004               add eax, 4
// 004cb59a  3bc1                 cmp eax, ecx
// 004cb59c  75f7                 jne 0x4cb595
// 004cb59e  8b0e                 mov ecx, dword ptr [esi]
// 004cb5a0  8b560c               mov edx, dword ptr [esi + 0xc]
// 004cb5a3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004cb5a7  89048a               mov dword ptr [edx + ecx*4], eax
// 004cb5aa  8b0e                 mov ecx, dword ptr [esi]
// 004cb5ac  8b560c               mov edx, dword ptr [esi + 0xc]
// 004cb5af  8d0c8a               lea ecx, [edx + ecx*4]
// 004cb5b2  8908                 mov dword ptr [eax], ecx
// 004cb5b4  8bc6                 mov eax, esi
// 004cb5b6  5e                   pop esi
// 004cb5b7  c20c00               ret 0xc

extern int bounds[30];

extern "C" int* __cdecl selectCount(const int*, const int*, const int*, int);

struct Node {
    Node* next;
};

extern "C" Node** __cdecl allocateSlots(unsigned int, int);

struct S {
    int count;
    int unused;
    unsigned int capacity;
    Node** slots;

    S(void*, Node*, int);
};

S::S(void*, Node* node, int requested)
{
    int key = requested;
    int* selected = selectCount(&bounds[1], &bounds[29], &key, 0);
    if (selected == &bounds[29])
        --selected;

    count = *selected;
    capacity = count + 1;
    Node** allocated = capacity ? allocateSlots(capacity, 0) : 0;
    Node** volatile* slot_ptr = reinterpret_cast<Node** volatile*>(&slots);
    *slot_ptr = allocated;

    Node** current = allocated;
    Node** end = allocated + count;
    while (current != end) {
        *current = reinterpret_cast<Node*>(current);
        ++current;
    }

    slots[count] = node;
    node->next = reinterpret_cast<Node*>(slots + count);
}
