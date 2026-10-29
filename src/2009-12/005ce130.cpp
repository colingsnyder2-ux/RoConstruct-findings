// roc 2009-12 005ce130  unit: RBX::PartChunk  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ce130
//
// 005ce130  8b442404             mov eax, dword ptr [esp + 4]
// 005ce134  8b11                 mov edx, dword ptr [ecx]
// 005ce136  8910                 mov dword ptr [eax], edx
// 005ce138  8b5104               mov edx, dword ptr [ecx + 4]
// 005ce13b  895004               mov dword ptr [eax + 4], edx
// 005ce13e  8b5108               mov edx, dword ptr [ecx + 8]
// 005ce141  895008               mov dword ptr [eax + 8], edx
// 005ce144  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005ce147  89500c               mov dword ptr [eax + 0xc], edx
// 005ce14a  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005ce14d  895010               mov dword ptr [eax + 0x10], edx
// 005ce150  8b5114               mov edx, dword ptr [ecx + 0x14]
// 005ce153  895014               mov dword ptr [eax + 0x14], edx
// 005ce156  8b5104               mov edx, dword ptr [ecx + 4]
// 005ce159  8b5214               mov edx, dword ptr [edx + 0x14]
// 005ce15c  895104               mov dword ptr [ecx + 4], edx
// 005ce15f  85d2                 test edx, edx
// 005ce161  7525                 jne 0x5ce188
// 005ce163  56                   push esi
// 005ce164  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005ce167  57                   push edi
// 005ce168  ff01                 inc dword ptr [ecx]
// 005ce16a  8b11                 mov edx, dword ptr [ecx]
// 005ce16c  3bd6                 cmp edx, esi
// 005ce16e  7d12                 jge 0x5ce182
// 005ce170  8b7910               mov edi, dword ptr [ecx + 0x10]
// 005ce173  8b1497               mov edx, dword ptr [edi + edx*4]
// 005ce176  895104               mov dword ptr [ecx + 4], edx
// 005ce179  85d2                 test edx, edx
// 005ce17b  74eb                 je 0x5ce168
// 005ce17d  5f                   pop edi
// 005ce17e  5e                   pop esi
// 005ce17f  c20800               ret 8
// 005ce182  5f                   pop edi
// 005ce183  c6411401             mov byte ptr [ecx + 0x14], 1
// 005ce187  5e                   pop esi
// 005ce188  c20800               ret 8
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