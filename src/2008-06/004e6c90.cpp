// from server: 100% by king_originala
// roc 2008-06 004e6c90  unit: RBX::ViewNew::PartChunk  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6c90
//
// 004e6c90  8b442404             mov eax, dword ptr [esp + 4]
// 004e6c94  8b11                 mov edx, dword ptr [ecx]
// 004e6c96  8910                 mov dword ptr [eax], edx
// 004e6c98  8b5104               mov edx, dword ptr [ecx + 4]
// 004e6c9b  895004               mov dword ptr [eax + 4], edx
// 004e6c9e  8b5108               mov edx, dword ptr [ecx + 8]
// 004e6ca1  895008               mov dword ptr [eax + 8], edx
// 004e6ca4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004e6ca7  89500c               mov dword ptr [eax + 0xc], edx
// 004e6caa  8b5110               mov edx, dword ptr [ecx + 0x10]
// 004e6cad  895010               mov dword ptr [eax + 0x10], edx
// 004e6cb0  8b5114               mov edx, dword ptr [ecx + 0x14]
// 004e6cb3  895014               mov dword ptr [eax + 0x14], edx
// 004e6cb6  8b5104               mov edx, dword ptr [ecx + 4]
// 004e6cb9  8b5218               mov edx, dword ptr [edx + 0x18]
// 004e6cbc  895104               mov dword ptr [ecx + 4], edx
// 004e6cbf  85d2                 test edx, edx
// 004e6cc1  7525                 jne 0x4e6ce8
// 004e6cc3  56                   push esi
// 004e6cc4  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004e6cc7  57                   push edi
// 004e6cc8  ff01                 inc dword ptr [ecx]
// 004e6cca  8b11                 mov edx, dword ptr [ecx]
// 004e6ccc  3bd6                 cmp edx, esi
// 004e6cce  7d12                 jge 0x4e6ce2
// 004e6cd0  8b7910               mov edi, dword ptr [ecx + 0x10]
// 004e6cd3  8b1497               mov edx, dword ptr [edi + edx*4]
// 004e6cd6  895104               mov dword ptr [ecx + 4], edx
// 004e6cd9  85d2                 test edx, edx
// 004e6cdb  74eb                 je 0x4e6cc8
// 004e6cdd  5f                   pop edi
// 004e6cde  5e                   pop esi
// 004e6cdf  c20800               ret 8
// 004e6ce2  5f                   pop edi
// 004e6ce3  c6411401             mov byte ptr [ecx + 0x14], 1
// 004e6ce7  5e                   pop esi
// 004e6ce8  c20800               ret 8

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
