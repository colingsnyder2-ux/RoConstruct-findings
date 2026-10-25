// from server: 100% by king_originala
// roc 2008-06 00405d50  unit: VCWorkspace::?$CComObject  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00405d50
//
// 00405d50  83ec10               sub esp, 0x10
// 00405d53  56                   push esi
// 00405d54  8bf1                 mov esi, ecx
// 00405d56  8d442404             lea eax, [esp + 4]
// 00405d5a  50                   push eax
// 00405d5b  8d4c240c             lea ecx, [esp + 0xc]
// 00405d5f  51                   push ecx
// 00405d60  b93cc29600           mov ecx, 0x96c23c
// 00405d65  c706e0b28000         mov dword ptr [esi], 0x80b2e0
// 00405d6b  8974240c             mov dword ptr [esp + 0xc], esi
// 00405d6f  e8cc2e1e00           call 0x5e8c40
// 00405d74  8bc6                 mov eax, esi
// 00405d76  5e                   pop esi
// 00405d77  83c410               add esp, 0x10
// 00405d7a  c3                   ret 

struct S;

struct InsertResult {
    unsigned long data[3];
};

struct Registry {
    void insert(InsertResult* result, S** value);
};

extern Registry registry;
extern unsigned long table[];

struct S {
    unsigned long* tablePointer;
    S* initialize();
};

S* S::initialize()
{
    InsertResult result;
    S* value;
    tablePointer = table;
    value = this;
    registry.insert(&result, &value);
    return this;
}
