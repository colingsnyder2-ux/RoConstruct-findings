// roc 2010-06 0052e060  unit: RBX::PartChunk  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052e060
//
// 0052e060  8b442404             mov eax, dword ptr [esp + 4]
// 0052e064  8b11                 mov edx, dword ptr [ecx]
// 0052e066  8910                 mov dword ptr [eax], edx
// 0052e068  8b5104               mov edx, dword ptr [ecx + 4]
// 0052e06b  895004               mov dword ptr [eax + 4], edx
// 0052e06e  8b5108               mov edx, dword ptr [ecx + 8]
// 0052e071  895008               mov dword ptr [eax + 8], edx
// 0052e074  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0052e077  89500c               mov dword ptr [eax + 0xc], edx
// 0052e07a  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0052e07d  895010               mov dword ptr [eax + 0x10], edx
// 0052e080  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0052e083  895014               mov dword ptr [eax + 0x14], edx
// 0052e086  8b5104               mov edx, dword ptr [ecx + 4]
// 0052e089  8b5218               mov edx, dword ptr [edx + 0x18]
// 0052e08c  895104               mov dword ptr [ecx + 4], edx
// 0052e08f  85d2                 test edx, edx
// 0052e091  7525                 jne 0x52e0b8
// 0052e093  56                   push esi
// 0052e094  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0052e097  57                   push edi
// 0052e098  ff01                 inc dword ptr [ecx]
// 0052e09a  8b11                 mov edx, dword ptr [ecx]
// 0052e09c  3bd6                 cmp edx, esi
// 0052e09e  7d12                 jge 0x52e0b2
// 0052e0a0  8b7910               mov edi, dword ptr [ecx + 0x10]
// 0052e0a3  8b1497               mov edx, dword ptr [edi + edx*4]
// 0052e0a6  895104               mov dword ptr [ecx + 4], edx
// 0052e0a9  85d2                 test edx, edx
// 0052e0ab  74eb                 je 0x52e098
// 0052e0ad  5f                   pop edi
// 0052e0ae  5e                   pop esi
// 0052e0af  c20800               ret 8
// 0052e0b2  5f                   pop edi
// 0052e0b3  c6411401             mov byte ptr [ecx + 0x14], 1
// 0052e0b7  5e                   pop esi
// 0052e0b8  c20800               ret 8
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