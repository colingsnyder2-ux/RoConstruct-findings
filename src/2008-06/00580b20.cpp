// from server: 79% by colin
// roc 2008-06 00580b20  unit: RBX::ClearStarterpack  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00580b20
//
// 00580b20  56                   push esi
// 00580b21  57                   push edi
// 00580b22  8bf9                 mov edi, ecx
// 00580b24  8b770c               mov esi, dword ptr [edi + 0xc]
// 00580b27  e824c7ffff           call 0x57d250
// 00580b2c  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 00580b2f  5f                   pop edi
// 00580b30  5e                   pop esi
// 00580b31  85c9                 test ecx, ecx
// 00580b33  7410                 je 0x580b45
// 00580b35  e83602f1ff           call 0x490d70
// 00580b3a  85c0                 test eax, eax
// 00580b3c  7407                 je 0x580b45
// 00580b3e  8bc8                 mov ecx, eax
// 00580b40  e88ba4fdff           call 0x55afd0
// 00580b45  c20400               ret 4

struct Result {
    void clear();
};

struct Entry {
    Result* get();
};

struct ClearStarterpack {
    unsigned char padding[12];
    Entry* volatile entry;

    void prepare();
    void run(void*);
};

void ClearStarterpack::run(void*)
{
    Entry* saved = entry;
    prepare();
    if (entry) {
        Result* result = entry->get();
        if (result)
            result->clear();
    }
    (void)saved;
}
