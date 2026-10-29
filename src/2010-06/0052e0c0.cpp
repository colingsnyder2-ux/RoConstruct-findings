// roc 2010-06 0052e0c0  unit: RBX::PartChunk  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052e0c0
//
// 0052e0c0  8b442404             mov eax, dword ptr [esp + 4]
// 0052e0c4  8b11                 mov edx, dword ptr [ecx]
// 0052e0c6  8910                 mov dword ptr [eax], edx
// 0052e0c8  8b5104               mov edx, dword ptr [ecx + 4]
// 0052e0cb  895004               mov dword ptr [eax + 4], edx
// 0052e0ce  8b5108               mov edx, dword ptr [ecx + 8]
// 0052e0d1  895008               mov dword ptr [eax + 8], edx
// 0052e0d4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0052e0d7  89500c               mov dword ptr [eax + 0xc], edx
// 0052e0da  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0052e0dd  895010               mov dword ptr [eax + 0x10], edx
// 0052e0e0  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0052e0e3  895014               mov dword ptr [eax + 0x14], edx
// 0052e0e6  8b5104               mov edx, dword ptr [ecx + 4]
// 0052e0e9  8b5214               mov edx, dword ptr [edx + 0x14]
// 0052e0ec  895104               mov dword ptr [ecx + 4], edx
// 0052e0ef  85d2                 test edx, edx
// 0052e0f1  7525                 jne 0x52e118
// 0052e0f3  56                   push esi
// 0052e0f4  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0052e0f7  57                   push edi
// 0052e0f8  ff01                 inc dword ptr [ecx]
// 0052e0fa  8b11                 mov edx, dword ptr [ecx]
// 0052e0fc  3bd6                 cmp edx, esi
// 0052e0fe  7d12                 jge 0x52e112
// 0052e100  8b7910               mov edi, dword ptr [ecx + 0x10]
// 0052e103  8b1497               mov edx, dword ptr [edi + edx*4]
// 0052e106  895104               mov dword ptr [ecx + 4], edx
// 0052e109  85d2                 test edx, edx
// 0052e10b  74eb                 je 0x52e0f8
// 0052e10d  5f                   pop edi
// 0052e10e  5e                   pop esi
// 0052e10f  c20800               ret 8
// 0052e112  5f                   pop edi
// 0052e113  c6411401             mov byte ptr [ecx + 0x14], 1
// 0052e117  5e                   pop esi
// 0052e118  c20800               ret 8
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