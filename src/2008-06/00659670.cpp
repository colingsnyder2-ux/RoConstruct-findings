// from server: 100% by king_originala
// roc 2008-06 00659670  unit: RBX::BallBallContact  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00659670
//
// 00659670  8b442404             mov eax, dword ptr [esp + 4]
// 00659674  56                   push esi
// 00659675  8d0440               lea eax, [eax + eax*2]
// 00659678  8d74c10c             lea esi, [ecx + eax*8 + 0xc]
// 0065967c  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0065967f  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 00659682  57                   push edi
// 00659683  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00659687  c1f903               sar ecx, 3
// 0065968a  3bf9                 cmp edi, ecx
// 0065968c  7206                 jb 0x659694
// 0065968e  ff1590288000         call dword ptr [0x802890]
// 00659694  8b560c               mov edx, dword ptr [esi + 0xc]
// 00659697  8b44fa04             mov eax, dword ptr [edx + edi*8 + 4]
// 0065969b  85c0                 test eax, eax
// 0065969d  7422                 je 0x6596c1
// 0065969f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006596a3  8b11                 mov edx, dword ptr [ecx]
// 006596a5  39501c               cmp dword ptr [eax + 0x1c], edx
// 006596a8  7510                 jne 0x6596ba
// 006596aa  8b7020               mov esi, dword ptr [eax + 0x20]
// 006596ad  3b7104               cmp esi, dword ptr [ecx + 4]
// 006596b0  7508                 jne 0x6596ba
// 006596b2  8b7024               mov esi, dword ptr [eax + 0x24]
// 006596b5  3b7108               cmp esi, dword ptr [ecx + 8]
// 006596b8  7409                 je 0x6596c3
// 006596ba  8b4028               mov eax, dword ptr [eax + 0x28]
// 006596bd  85c0                 test eax, eax
// 006596bf  75e4                 jne 0x6596a5
// 006596c1  33c0                 xor eax, eax
// 006596c3  5f                   pop edi
// 006596c4  5e                   pop esi
// 006596c5  c20c00               ret 0xc

extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Key {
    unsigned int a, b, c;
};

struct Node {
    char padding[28];
    Key key;
    Node* next;
};

struct Entry {
    unsigned int value;
    Node* node;
};

struct Bucket {
    char padding[12];
    Entry* begin;
    Entry* end;
    Entry* capacity;
};

struct S {
    char padding[12];
    Bucket buckets[1];
    Node* find(unsigned int bucket, unsigned int index, const Key& key);
};

Node* S::find(unsigned int bucket, unsigned int index, const Key& key)
{
    Bucket& b = buckets[bucket];
    if (index >= static_cast<unsigned int>(b.end - b.begin))
        invalid_parameter_noinfo();

    Node* p = b.begin[index].node;
    while (p) {
        if (p->key.a == key.a &&
            p->key.b == key.b &&
            p->key.c == key.c)
            return p;
        p = p->next;
    }
    return 0;
}
