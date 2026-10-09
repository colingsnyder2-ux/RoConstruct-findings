// from server: 70% by colin
// roc 2007-08 00653d10  unit: CInstanceRecord::CNameItem  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653d10
//
// 00653d10  56                   push esi
// 00653d11  8b742408             mov esi, dword ptr [esp + 8]
// 00653d15  8b4604               mov eax, dword ptr [esi + 4]
// 00653d18  83b88801000000       cmp dword ptr [eax + 0x188], 0
// 00653d1f  57                   push edi
// 00653d20  8bf9                 mov edi, ecx
// 00653d22  7439                 je 0x653d5d
// 00653d24  8b17                 mov edx, dword ptr [edi]
// 00653d26  8b82a8000000         mov eax, dword ptr [edx + 0xa8]
// 00653d2c  ffd0                 call eax
// 00653d2e  85c0                 test eax, eax
// 00653d30  742b                 je 0x653d5d
// 00653d32  8b460c               mov eax, dword ptr [esi + 0xc]
// 00653d35  85c0                 test eax, eax
// 00653d37  740d                 je 0x653d46
// 00653d39  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 00653d40  7511                 jne 0x653d53
// 00653d42  85c0                 test eax, eax
// 00653d44  7517                 jne 0x653d5d
// 00653d46  8b4778               mov eax, dword ptr [edi + 0x78]
// 00653d49  85c0                 test eax, eax
// 00653d4b  7410                 je 0x653d5d
// 00653d4d  83782000             cmp dword ptr [eax + 0x20], 0
// 00653d51  740a                 je 0x653d5d
// 00653d53  5f                   pop edi
// 00653d54  b801000000           mov eax, 1
// 00653d59  5e                   pop esi
// 00653d5a  c20400               ret 4
// 00653d5d  5f                   pop edi
// 00653d5e  33c0                 xor eax, eax
// 00653d60  5e                   pop esi
// 00653d61  c20400               ret 4

struct CNameItem {
    int isEnum(const void* arg);
};

struct Descriptor {
    char pad[0x188];
    int field188;
};

struct Name {
    char pad[0xac];
    int fieldAC;
};

struct Item {
    char pad[0x20];
    int field20;
};

struct CNameItemImpl {
    char pad[0x78];
    Item* field78;
};

int CNameItem::isEnum(const void* arg) {
    const char* p = (const char*)arg;
    Descriptor* d = *(Descriptor**)(p + 4);
    if (d->field188 != 0) {
        void** vt = *(void***)this;
        int (*fn)(void*) = (int (*)(void*))vt[0xa8 / 4];
        if (fn((void*)this) != 0) {
            Name* n = *(Name**)(p + 0xc);
            if (n != 0) {
                if (n->fieldAC != 0) {
                    return 1;
                }
                if (n != 0) {
                    return 0;
                }
            }
            Item* it = ((CNameItemImpl*)this)->field78;
            if (it != 0) {
                if (it->field20 != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}
