// roc 2009-06 005186c0  unit: RBX::PartChunk  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005186c0
//
// 005186c0  8b442404             mov eax, dword ptr [esp + 4]
// 005186c4  8b11                 mov edx, dword ptr [ecx]
// 005186c6  8910                 mov dword ptr [eax], edx
// 005186c8  8b5104               mov edx, dword ptr [ecx + 4]
// 005186cb  895004               mov dword ptr [eax + 4], edx
// 005186ce  8b5108               mov edx, dword ptr [ecx + 8]
// 005186d1  895008               mov dword ptr [eax + 8], edx
// 005186d4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005186d7  89500c               mov dword ptr [eax + 0xc], edx
// 005186da  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005186dd  895010               mov dword ptr [eax + 0x10], edx
// 005186e0  8b5114               mov edx, dword ptr [ecx + 0x14]
// 005186e3  895014               mov dword ptr [eax + 0x14], edx
// 005186e6  8b5104               mov edx, dword ptr [ecx + 4]
// 005186e9  8b5214               mov edx, dword ptr [edx + 0x14]
// 005186ec  895104               mov dword ptr [ecx + 4], edx
// 005186ef  85d2                 test edx, edx
// 005186f1  7525                 jne 0x518718
// 005186f3  56                   push esi
// 005186f4  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005186f7  57                   push edi
// 005186f8  ff01                 inc dword ptr [ecx]
// 005186fa  8b11                 mov edx, dword ptr [ecx]
// 005186fc  3bd6                 cmp edx, esi
// 005186fe  7d12                 jge 0x518712
// 00518700  8b7910               mov edi, dword ptr [ecx + 0x10]
// 00518703  8b1497               mov edx, dword ptr [edi + edx*4]
// 00518706  895104               mov dword ptr [ecx + 4], edx
// 00518709  85d2                 test edx, edx
// 0051870b  74eb                 je 0x5186f8
// 0051870d  5f                   pop edi
// 0051870e  5e                   pop esi
// 0051870f  c20800               ret 8
// 00518712  5f                   pop edi
// 00518713  c6411401             mov byte ptr [ecx + 0x14], 1
// 00518717  5e                   pop esi
// 00518718  c20800               ret 8
// copied from an identical function in another client (function ??ES@@QAE?AU0@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Node {
    char padding[20];
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