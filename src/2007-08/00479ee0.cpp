// from server: 91% by colin
// roc 2007-08 00479ee0  unit: G3D::TextureManager::TextureArgs  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00479ee0
//
// 00479ee0  53                   push ebx
// 00479ee1  56                   push esi
// 00479ee2  57                   push edi
// 00479ee3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00479ee7  8b07                 mov eax, dword ptr [edi]
// 00479ee9  8b10                 mov edx, dword ptr [eax]
// 00479eeb  8bf1                 mov esi, ecx
// 00479eed  8bcf                 mov ecx, edi
// 00479eef  ffd2                 call edx
// 00479ef1  33d2                 xor edx, edx
// 00479ef3  8bd8                 mov ebx, eax
// 00479ef5  f7760c               div dword ptr [esi + 0xc]
// 00479ef8  8b4608               mov eax, dword ptr [esi + 8]
// 00479efb  8b3490               mov esi, dword ptr [eax + edx*4]
// 00479efe  85f6                 test esi, esi
// 00479f00  7418                 je 0x479f1a
// 00479f02  391e                 cmp dword ptr [esi], ebx
// 00479f04  750d                 jne 0x479f13
// 00479f06  57                   push edi
// 00479f07  8d4e08               lea ecx, [esi + 8]
// 00479f0a  e851feffff           call 0x479d60
// 00479f0f  84c0                 test al, al
// 00479f11  7507                 jne 0x479f1a
// 00479f13  8b7648               mov esi, dword ptr [esi + 0x48]
// 00479f16  85f6                 test esi, esi
// 00479f18  75e8                 jne 0x479f02
// 00479f1a  5f                   pop edi
// 00479f1b  8d4640               lea eax, [esi + 0x40]
// 00479f1e  5e                   pop esi
// 00479f1f  5b                   pop ebx
// 00479f20  c20400               ret 4

struct Key {
    virtual unsigned int hash();
};

struct Node {
    int key;
    char pad[4];
    char data[0x40];
    Node* next;
};

struct Table {
    char pad0[8];
    Node** buckets;
    unsigned int bucketCount;

    char* find(Key* k);
};

extern "C" int __fastcall sub_479D60(char* p, Key* k);

char* Table::find(Key* k)
{
    unsigned int h = k->hash();
    unsigned int idx = h % bucketCount;
    Node* n = buckets[idx];
    while (n != 0)
    {
        if (n->key == (int)h)
        {
            if (sub_479D60(n->data, k))
                break;
        }
        n = n->next;
    }
    return (char*)n + 0x40;
}
