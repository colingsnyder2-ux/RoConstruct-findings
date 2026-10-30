// roc 2009-06 00518660  unit: RBX::PartChunk  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00518660
//
// 00518660  8b442404             mov eax, dword ptr [esp + 4]
// 00518664  8b11                 mov edx, dword ptr [ecx]
// 00518666  8910                 mov dword ptr [eax], edx
// 00518668  8b5104               mov edx, dword ptr [ecx + 4]
// 0051866b  895004               mov dword ptr [eax + 4], edx
// 0051866e  8b5108               mov edx, dword ptr [ecx + 8]
// 00518671  895008               mov dword ptr [eax + 8], edx
// 00518674  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00518677  89500c               mov dword ptr [eax + 0xc], edx
// 0051867a  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0051867d  895010               mov dword ptr [eax + 0x10], edx
// 00518680  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00518683  895014               mov dword ptr [eax + 0x14], edx
// 00518686  8b5104               mov edx, dword ptr [ecx + 4]
// 00518689  8b5218               mov edx, dword ptr [edx + 0x18]
// 0051868c  895104               mov dword ptr [ecx + 4], edx
// 0051868f  85d2                 test edx, edx
// 00518691  7525                 jne 0x5186b8
// 00518693  56                   push esi
// 00518694  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00518697  57                   push edi
// 00518698  ff01                 inc dword ptr [ecx]
// 0051869a  8b11                 mov edx, dword ptr [ecx]
// 0051869c  3bd6                 cmp edx, esi
// 0051869e  7d12                 jge 0x5186b2
// 005186a0  8b7910               mov edi, dword ptr [ecx + 0x10]
// 005186a3  8b1497               mov edx, dword ptr [edi + edx*4]
// 005186a6  895104               mov dword ptr [ecx + 4], edx
// 005186a9  85d2                 test edx, edx
// 005186ab  74eb                 je 0x518698
// 005186ad  5f                   pop edi
// 005186ae  5e                   pop esi
// 005186af  c20800               ret 8
// 005186b2  5f                   pop edi
// 005186b3  c6411401             mov byte ptr [ecx + 0x14], 1
// 005186b7  5e                   pop esi
// 005186b8  c20800               ret 8
// copied from an identical function in another client (function ??ES@@QAE?AU0@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Node {
    char padding[24];
    Node* next;
};

struct S {
    int index;
    Node* current;
    int unknown;
    int count;
    Node** buckets;
    bool ended;

    S operator++(int);
};

S S::operator++(int)
{
    S previous = *this;
    current = current->next;
    if (current)
        return previous;

    int limit = count;
next_bucket:
    if (++index < limit) {
        current = buckets[index];
        if (!current)
            goto next_bucket;
        return previous;
    }
    ended = true;
    return previous;
}