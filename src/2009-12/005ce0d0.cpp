// roc 2009-12 005ce0d0  unit: RBX::PartChunk  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ce0d0
//
// 005ce0d0  8b442404             mov eax, dword ptr [esp + 4]
// 005ce0d4  8b11                 mov edx, dword ptr [ecx]
// 005ce0d6  8910                 mov dword ptr [eax], edx
// 005ce0d8  8b5104               mov edx, dword ptr [ecx + 4]
// 005ce0db  895004               mov dword ptr [eax + 4], edx
// 005ce0de  8b5108               mov edx, dword ptr [ecx + 8]
// 005ce0e1  895008               mov dword ptr [eax + 8], edx
// 005ce0e4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005ce0e7  89500c               mov dword ptr [eax + 0xc], edx
// 005ce0ea  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005ce0ed  895010               mov dword ptr [eax + 0x10], edx
// 005ce0f0  8b5114               mov edx, dword ptr [ecx + 0x14]
// 005ce0f3  895014               mov dword ptr [eax + 0x14], edx
// 005ce0f6  8b5104               mov edx, dword ptr [ecx + 4]
// 005ce0f9  8b5218               mov edx, dword ptr [edx + 0x18]
// 005ce0fc  895104               mov dword ptr [ecx + 4], edx
// 005ce0ff  85d2                 test edx, edx
// 005ce101  7525                 jne 0x5ce128
// 005ce103  56                   push esi
// 005ce104  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005ce107  57                   push edi
// 005ce108  ff01                 inc dword ptr [ecx]
// 005ce10a  8b11                 mov edx, dword ptr [ecx]
// 005ce10c  3bd6                 cmp edx, esi
// 005ce10e  7d12                 jge 0x5ce122
// 005ce110  8b7910               mov edi, dword ptr [ecx + 0x10]
// 005ce113  8b1497               mov edx, dword ptr [edi + edx*4]
// 005ce116  895104               mov dword ptr [ecx + 4], edx
// 005ce119  85d2                 test edx, edx
// 005ce11b  74eb                 je 0x5ce108
// 005ce11d  5f                   pop edi
// 005ce11e  5e                   pop esi
// 005ce11f  c20800               ret 8
// 005ce122  5f                   pop edi
// 005ce123  c6411401             mov byte ptr [ecx + 0x14], 1
// 005ce127  5e                   pop esi
// 005ce128  c20800               ret 8
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