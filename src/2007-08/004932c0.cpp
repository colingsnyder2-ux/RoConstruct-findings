// from server: 90% by colin
// roc 2007-08 004932c0  unit: RBX::VInstance::?$NonFactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004932c0
//
// 004932c0  56                   push esi
// 004932c1  57                   push edi
// 004932c2  8bf9                 mov edi, ecx
// 004932c4  8b4704               mov eax, dword ptr [edi + 4]
// 004932c7  8b30                 mov esi, dword ptr [eax]
// 004932c9  8900                 mov dword ptr [eax], eax
// 004932cb  8b4704               mov eax, dword ptr [edi + 4]
// 004932ce  894004               mov dword ptr [eax + 4], eax
// 004932d1  3b7704               cmp esi, dword ptr [edi + 4]
// 004932d4  c7470800000000       mov dword ptr [edi + 8], 0
// 004932db  741f                 je 0x4932fc
// 004932dd  53                   push ebx
// 004932de  8bff                 mov edi, edi
// 004932e0  8b1e                 mov ebx, dword ptr [esi]
// 004932e2  8d4e0c               lea ecx, [esi + 0xc]
// 004932e5  ff15ace67700         call dword ptr [0x77e6ac]
// 004932eb  56                   push esi
// 004932ec  e871c91900           call 0x62fc62
// 004932f1  83c404               add esp, 4
// 004932f4  3b5f04               cmp ebx, dword ptr [edi + 4]
// 004932f7  8bf3                 mov esi, ebx
// 004932f9  75e5                 jne 0x4932e0
// 004932fb  5b                   pop ebx
// 004932fc  5f                   pop edi
// 004932fd  5e                   pop esi
// 004932fe  c3                   ret 

struct Node {
    Node* next;
    Node* prev;
    char pad[4];
    void* str;
};

struct List {
    char pad0[4];
    Node* head;
    int count;
    void clear();
};

extern "C" void __stdcall sub_62FC62(void*);
extern "C" void (__stdcall *off_77E6AC)(void*);

void List::clear()
{
    Node* n = head->next;
    head->next = head;
    head->prev = head;
    count = 0;
    while (n != head) {
        Node* next = n->next;
        off_77E6AC((char*)n + 12);
        sub_62FC62(n);
        n = next;
    }
}
