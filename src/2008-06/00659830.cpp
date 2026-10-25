// from server: 100% by king_originala
// roc 2008-06 00659830  unit: RBX::BallBallContact  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00659830
//
// 00659830  53                   push ebx
// 00659831  56                   push esi
// 00659832  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00659836  0fb74620             movzx eax, word ptr [esi + 0x20]
// 0065983a  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0065983d  8d0440               lea eax, [eax + eax*2]
// 00659840  57                   push edi
// 00659841  8d7cc10c             lea edi, [ecx + eax*8 + 0xc]
// 00659845  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 00659848  2b4f0c               sub ecx, dword ptr [edi + 0xc]
// 0065984b  c1f903               sar ecx, 3
// 0065984e  3bd9                 cmp ebx, ecx
// 00659850  7206                 jb 0x659858
// 00659852  ff1590288000         call dword ptr [0x802890]
// 00659858  8b570c               mov edx, dword ptr [edi + 0xc]
// 0065985b  3934da               cmp dword ptr [edx + ebx*8], esi
// 0065985e  8d04da               lea eax, [edx + ebx*8]
// 00659861  7414                 je 0x659877
// 00659863  8b00                 mov eax, dword ptr [eax]
// 00659865  83c004               add eax, 4
// 00659868  3930                 cmp dword ptr [eax], esi
// 0065986a  75f7                 jne 0x659863
// 0065986c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0065986f  5f                   pop edi
// 00659870  5e                   pop esi
// 00659871  8908                 mov dword ptr [eax], ecx
// 00659873  5b                   pop ebx
// 00659874  c20400               ret 4
// 00659877  8b5604               mov edx, dword ptr [esi + 4]
// 0065987a  5f                   pop edi
// 0065987b  5e                   pop esi
// 0065987c  8910                 mov dword ptr [eax], edx
// 0065987e  5b                   pop ebx
// 0065987f  c20400               ret 4

struct Node {
    unsigned int reserved0;
    Node* next;
    unsigned int reserved1[2];
    unsigned int index;
    unsigned int reserved2[3];
    unsigned short bucket;
};

struct Entry {
    Node* node;
    unsigned int reserved;
};

struct Bucket {
    unsigned int reserved[3];
    Entry* begin;
    Entry* end;
    Entry* capacity;
};

extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct S {
    unsigned int reserved[3];
    Bucket buckets[1];

    void remove(Node* node);
};

void S::remove(Node* node)
{
    unsigned int index = node->index;
    Bucket* bucket = &buckets[node->bucket];

    if (index >= static_cast<unsigned int>(bucket->end - bucket->begin))
        invalid_parameter_noinfo();

    Node** link = &bucket->begin[index].node;
    if (*link != node) {
        do {
            link = &(*link)->next;
        } while (*link != node);
        *link = node->next;
    } else {
        *link = node->next;
    }
}
