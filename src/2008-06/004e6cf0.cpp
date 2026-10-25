// from server: 100% by king_originala
// roc 2008-06 004e6cf0  unit: RBX::ViewNew::PartChunk  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6cf0
//
// 004e6cf0  8b442404             mov eax, dword ptr [esp + 4]
// 004e6cf4  8b11                 mov edx, dword ptr [ecx]
// 004e6cf6  8910                 mov dword ptr [eax], edx
// 004e6cf8  8b5104               mov edx, dword ptr [ecx + 4]
// 004e6cfb  895004               mov dword ptr [eax + 4], edx
// 004e6cfe  8b5108               mov edx, dword ptr [ecx + 8]
// 004e6d01  895008               mov dword ptr [eax + 8], edx
// 004e6d04  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004e6d07  89500c               mov dword ptr [eax + 0xc], edx
// 004e6d0a  8b5110               mov edx, dword ptr [ecx + 0x10]
// 004e6d0d  895010               mov dword ptr [eax + 0x10], edx
// 004e6d10  8b5114               mov edx, dword ptr [ecx + 0x14]
// 004e6d13  895014               mov dword ptr [eax + 0x14], edx
// 004e6d16  8b5104               mov edx, dword ptr [ecx + 4]
// 004e6d19  8b5214               mov edx, dword ptr [edx + 0x14]
// 004e6d1c  895104               mov dword ptr [ecx + 4], edx
// 004e6d1f  85d2                 test edx, edx
// 004e6d21  7525                 jne 0x4e6d48
// 004e6d23  56                   push esi
// 004e6d24  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004e6d27  57                   push edi
// 004e6d28  ff01                 inc dword ptr [ecx]
// 004e6d2a  8b11                 mov edx, dword ptr [ecx]
// 004e6d2c  3bd6                 cmp edx, esi
// 004e6d2e  7d12                 jge 0x4e6d42
// 004e6d30  8b7910               mov edi, dword ptr [ecx + 0x10]
// 004e6d33  8b1497               mov edx, dword ptr [edi + edx*4]
// 004e6d36  895104               mov dword ptr [ecx + 4], edx
// 004e6d39  85d2                 test edx, edx
// 004e6d3b  74eb                 je 0x4e6d28
// 004e6d3d  5f                   pop edi
// 004e6d3e  5e                   pop esi
// 004e6d3f  c20800               ret 8
// 004e6d42  5f                   pop edi
// 004e6d43  c6411401             mov byte ptr [ecx + 0x14], 1
// 004e6d47  5e                   pop esi
// 004e6d48  c20800               ret 8

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
