// roc 2009-12 005ce070  unit: RBX::PartChunk  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ce070
//
// 005ce070  8b442404             mov eax, dword ptr [esp + 4]
// 005ce074  8b11                 mov edx, dword ptr [ecx]
// 005ce076  8910                 mov dword ptr [eax], edx
// 005ce078  8b5104               mov edx, dword ptr [ecx + 4]
// 005ce07b  895004               mov dword ptr [eax + 4], edx
// 005ce07e  8b5108               mov edx, dword ptr [ecx + 8]
// 005ce081  895008               mov dword ptr [eax + 8], edx
// 005ce084  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005ce087  89500c               mov dword ptr [eax + 0xc], edx
// 005ce08a  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005ce08d  895010               mov dword ptr [eax + 0x10], edx
// 005ce090  8b5114               mov edx, dword ptr [ecx + 0x14]
// 005ce093  895014               mov dword ptr [eax + 0x14], edx
// 005ce096  8b5104               mov edx, dword ptr [ecx + 4]
// 005ce099  8b5220               mov edx, dword ptr [edx + 0x20]
// 005ce09c  895104               mov dword ptr [ecx + 4], edx
// 005ce09f  85d2                 test edx, edx
// 005ce0a1  7525                 jne 0x5ce0c8
// 005ce0a3  56                   push esi
// 005ce0a4  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005ce0a7  57                   push edi
// 005ce0a8  ff01                 inc dword ptr [ecx]
// 005ce0aa  8b11                 mov edx, dword ptr [ecx]
// 005ce0ac  3bd6                 cmp edx, esi
// 005ce0ae  7d12                 jge 0x5ce0c2
// 005ce0b0  8b7910               mov edi, dword ptr [ecx + 0x10]
// 005ce0b3  8b1497               mov edx, dword ptr [edi + edx*4]
// 005ce0b6  895104               mov dword ptr [ecx + 4], edx
// 005ce0b9  85d2                 test edx, edx
// 005ce0bb  74eb                 je 0x5ce0a8
// 005ce0bd  5f                   pop edi
// 005ce0be  5e                   pop esi
// 005ce0bf  c20800               ret 8
// 005ce0c2  5f                   pop edi
// 005ce0c3  c6411401             mov byte ptr [ecx + 0x14], 1
// 005ce0c7  5e                   pop esi
// 005ce0c8  c20800               ret 8
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