// from server: 100% by colin
// roc 2008-06 004cc580  unit: RBX::VInstance::?$NonFactoryProduct  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cc580
//
// 004cc580  56                   push esi
// 004cc581  57                   push edi
// 004cc582  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004cc586  85ff                 test edi, edi
// 004cc588  7405                 je 0x4cc58f
// 004cc58a  8d5770               lea edx, [edi + 0x70]
// 004cc58d  eb02                 jmp 0x4cc591
// 004cc58f  33d2                 xor edx, edx
// 004cc591  8b32                 mov esi, dword ptr [edx]
// 004cc593  8bc6                 mov eax, esi
// 004cc595  3910                 cmp dword ptr [eax], edx
// 004cc597  740d                 je 0x4cc5a6
// 004cc599  8da42400000000       lea esp, [esp]
// 004cc5a0  8b00                 mov eax, dword ptr [eax]
// 004cc5a2  3910                 cmp dword ptr [eax], edx
// 004cc5a4  75fa                 jne 0x4cc5a0
// 004cc5a6  8930                 mov dword ptr [eax], esi
// 004cc5a8  8b5120               mov edx, dword ptr [ecx + 0x20]
// 004cc5ab  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004cc5ae  8d349500000000       lea esi, [edx*4]
// 004cc5b5  03c6                 add eax, esi
// 004cc5b7  3900                 cmp dword ptr [eax], eax
// 004cc5b9  750d                 jne 0x4cc5c8
// 004cc5bb  8b4114               mov eax, dword ptr [ecx + 0x14]
// 004cc5be  03c6                 add eax, esi
// 004cc5c0  83c004               add eax, 4
// 004cc5c3  42                   inc edx
// 004cc5c4  3900                 cmp dword ptr [eax], eax
// 004cc5c6  74f8                 je 0x4cc5c0
// 004cc5c8  57                   push edi
// 004cc5c9  895120               mov dword ptr [ecx + 0x20], edx
// 004cc5cc  e86ff9ffff           call 0x4cbf40
// 004cc5d1  5f                   pop edi
// 004cc5d2  5e                   pop esi
// 004cc5d3  c20400               ret 4


struct Node {
    Node* next;
};

struct Item {
    char padding[0x70];
    Node link;
};

struct S {
    char padding[0x14];
    Node* buckets;
    char padding2[8];
    unsigned int current;

    void finish(Item*);
    void f(Item*);
};

void S::f(Item* item)
{
    Node* link = item ? &item->link : 0;
    Node* first = link->next;
    Node* last = link->next;

    while (last->next != link)
        last = last->next;

    last->next = first;

    unsigned int index = current;
    while (buckets[index].next == &buckets[index])
        ++index;

    current = index;
    finish(item);
}
