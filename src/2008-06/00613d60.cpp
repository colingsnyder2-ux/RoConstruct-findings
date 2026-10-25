// from server: 100% by king_originala
// roc 2008-06 00613d60  unit: RBX::RevoluteLink  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00613d60
//
// 00613d60  56                   push esi
// 00613d61  8bf1                 mov esi, ecx
// 00613d63  8b4604               mov eax, dword ptr [esi + 4]
// 00613d66  57                   push edi
// 00613d67  8b7814               mov edi, dword ptr [eax + 0x14]
// 00613d6a  8bcf                 mov ecx, edi
// 00613d6c  e8ef55f8ff           call 0x599360
// 00613d71  8bbf90000000         mov edi, dword ptr [edi + 0x90]
// 00613d77  8d8698000000         lea eax, [esi + 0x98]
// 00613d7d  39bec8000000         cmp dword ptr [esi + 0xc8], edi
// 00613d83  7415                 je 0x613d9a
// 00613d85  8b16                 mov edx, dword ptr [esi]
// 00613d87  8b12                 mov edx, dword ptr [edx]
// 00613d89  50                   push eax
// 00613d8a  8bce                 mov ecx, esi
// 00613d8c  ffd2                 call edx
// 00613d8e  89bec8000000         mov dword ptr [esi + 0xc8], edi
// 00613d94  8d8698000000         lea eax, [esi + 0x98]
// 00613d9a  5f                   pop edi
// 00613d9b  5e                   pop esi
// 00613d9c  c3                   ret 

struct DataSource {
    const void* get();
};

struct S {
    char reserved0[0x10];
    S* source;
    S* parent;
    char reserved1[0x1C];
    DataSource* dataSource;
    char localData[0x58];
    unsigned int version;

    const void* get();
};

struct RevoluteLink {
    virtual void update(void*);
    S* source;
    char reserved[0x90];
    char localData[0x30];
    unsigned int version;

    const void* get();
};

const void* RevoluteLink::get()
{
    S* parent = source->parent;
    parent->get();
    unsigned int currentVersion = parent->version;
    if (version != currentVersion) {
        update(localData);
        version = currentVersion;
    }
    return localData;
}
