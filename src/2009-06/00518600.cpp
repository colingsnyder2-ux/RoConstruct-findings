// roc 2009-06 00518600  unit: RBX::PartChunk  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00518600
//
// 00518600  8b442404             mov eax, dword ptr [esp + 4]
// 00518604  8b11                 mov edx, dword ptr [ecx]
// 00518606  8910                 mov dword ptr [eax], edx
// 00518608  8b5104               mov edx, dword ptr [ecx + 4]
// 0051860b  895004               mov dword ptr [eax + 4], edx
// 0051860e  8b5108               mov edx, dword ptr [ecx + 8]
// 00518611  895008               mov dword ptr [eax + 8], edx
// 00518614  8b510c               mov edx, dword ptr [ecx + 0xc]
// 00518617  89500c               mov dword ptr [eax + 0xc], edx
// 0051861a  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0051861d  895010               mov dword ptr [eax + 0x10], edx
// 00518620  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00518623  895014               mov dword ptr [eax + 0x14], edx
// 00518626  8b5104               mov edx, dword ptr [ecx + 4]
// 00518629  8b5220               mov edx, dword ptr [edx + 0x20]
// 0051862c  895104               mov dword ptr [ecx + 4], edx
// 0051862f  85d2                 test edx, edx
// 00518631  7525                 jne 0x518658
// 00518633  56                   push esi
// 00518634  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00518637  57                   push edi
// 00518638  ff01                 inc dword ptr [ecx]
// 0051863a  8b11                 mov edx, dword ptr [ecx]
// 0051863c  3bd6                 cmp edx, esi
// 0051863e  7d12                 jge 0x518652
// 00518640  8b7910               mov edi, dword ptr [ecx + 0x10]
// 00518643  8b1497               mov edx, dword ptr [edi + edx*4]
// 00518646  895104               mov dword ptr [ecx + 4], edx
// 00518649  85d2                 test edx, edx
// 0051864b  74eb                 je 0x518638
// 0051864d  5f                   pop edi
// 0051864e  5e                   pop esi
// 0051864f  c20800               ret 8
// 00518652  5f                   pop edi
// 00518653  c6411401             mov byte ptr [ecx + 0x14], 1
// 00518657  5e                   pop esi
// 00518658  c20800               ret 8
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