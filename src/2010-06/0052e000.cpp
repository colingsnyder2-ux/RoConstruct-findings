// roc 2010-06 0052e000  unit: RBX::PartChunk  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0052e000
//
// 0052e000  8b442404             mov eax, dword ptr [esp + 4]
// 0052e004  8b11                 mov edx, dword ptr [ecx]
// 0052e006  8910                 mov dword ptr [eax], edx
// 0052e008  8b5104               mov edx, dword ptr [ecx + 4]
// 0052e00b  895004               mov dword ptr [eax + 4], edx
// 0052e00e  8b5108               mov edx, dword ptr [ecx + 8]
// 0052e011  895008               mov dword ptr [eax + 8], edx
// 0052e014  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0052e017  89500c               mov dword ptr [eax + 0xc], edx
// 0052e01a  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0052e01d  895010               mov dword ptr [eax + 0x10], edx
// 0052e020  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0052e023  895014               mov dword ptr [eax + 0x14], edx
// 0052e026  8b5104               mov edx, dword ptr [ecx + 4]
// 0052e029  8b5220               mov edx, dword ptr [edx + 0x20]
// 0052e02c  895104               mov dword ptr [ecx + 4], edx
// 0052e02f  85d2                 test edx, edx
// 0052e031  7525                 jne 0x52e058
// 0052e033  56                   push esi
// 0052e034  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0052e037  57                   push edi
// 0052e038  ff01                 inc dword ptr [ecx]
// 0052e03a  8b11                 mov edx, dword ptr [ecx]
// 0052e03c  3bd6                 cmp edx, esi
// 0052e03e  7d12                 jge 0x52e052
// 0052e040  8b7910               mov edi, dword ptr [ecx + 0x10]
// 0052e043  8b1497               mov edx, dword ptr [edi + edx*4]
// 0052e046  895104               mov dword ptr [ecx + 4], edx
// 0052e049  85d2                 test edx, edx
// 0052e04b  74eb                 je 0x52e038
// 0052e04d  5f                   pop edi
// 0052e04e  5e                   pop esi
// 0052e04f  c20800               ret 8
// 0052e052  5f                   pop edi
// 0052e053  c6411401             mov byte ptr [ecx + 0x14], 1
// 0052e057  5e                   pop esi
// 0052e058  c20800               ret 8
// copied from an identical function in another client (function ??ES@@QAE?AU0@H@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Node {
    char padding[32];
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