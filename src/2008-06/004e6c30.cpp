// from server: 95% by king_originala
// roc 2008-06 004e6c30  unit: RBX::ViewNew::PartChunk  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e6c30
//
// 004e6c30  8b442404             mov eax, dword ptr [esp + 4]
// 004e6c34  8b11                 mov edx, dword ptr [ecx]
// 004e6c36  8910                 mov dword ptr [eax], edx
// 004e6c38  8b5104               mov edx, dword ptr [ecx + 4]
// 004e6c3b  895004               mov dword ptr [eax + 4], edx
// 004e6c3e  8b5108               mov edx, dword ptr [ecx + 8]
// 004e6c41  895008               mov dword ptr [eax + 8], edx
// 004e6c44  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004e6c47  89500c               mov dword ptr [eax + 0xc], edx
// 004e6c4a  8b5110               mov edx, dword ptr [ecx + 0x10]
// 004e6c4d  895010               mov dword ptr [eax + 0x10], edx
// 004e6c50  8b5114               mov edx, dword ptr [ecx + 0x14]
// 004e6c53  895014               mov dword ptr [eax + 0x14], edx
// 004e6c56  8b5104               mov edx, dword ptr [ecx + 4]
// 004e6c59  8b5220               mov edx, dword ptr [edx + 0x20]
// 004e6c5c  895104               mov dword ptr [ecx + 4], edx
// 004e6c5f  85d2                 test edx, edx
// 004e6c61  7525                 jne 0x4e6c88
// 004e6c63  56                   push esi
// 004e6c64  8b710c               mov esi, dword ptr [ecx + 0xc]
// 004e6c67  57                   push edi
// 004e6c68  ff01                 inc dword ptr [ecx]
// 004e6c6a  8b11                 mov edx, dword ptr [ecx]
// 004e6c6c  3bd6                 cmp edx, esi
// 004e6c6e  7d12                 jge 0x4e6c82
// 004e6c70  8b7910               mov edi, dword ptr [ecx + 0x10]
// 004e6c73  8b1497               mov edx, dword ptr [edi + edx*4]
// 004e6c76  895104               mov dword ptr [ecx + 4], edx
// 004e6c79  85d2                 test edx, edx
// 004e6c7b  74eb                 je 0x4e6c68
// 004e6c7d  5f                   pop edi
// 004e6c7e  5e                   pop esi
// 004e6c7f  c20800               ret 8
// 004e6c82  5f                   pop edi
// 004e6c83  c6411401             mov byte ptr [ecx + 0x14], 1
// 004e6c87  5e                   pop esi
// 004e6c88  c20800               ret 8

struct Node {
    char padding[32];
    Node* next;
};

struct S {
    int index;
    Node* node;
    int state;
    int count;
    Node** buckets;
    bool ended;

    S operator++(int);
};

S S::operator++(int)
{
    S previous = *this;
    node = node->next;
    if (!node) {
        int limit = count;
        do {
            if (++index >= limit) {
                ended = true;
                return previous;
            }
            node = buckets[index];
        } while (!node);
    }
    return previous;
}
