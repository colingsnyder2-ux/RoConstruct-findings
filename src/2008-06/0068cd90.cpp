// from server: 100% by king_originala
// roc 2008-06 0068cd90  unit: Ogre::RbxSceneManager  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068cd90
//
// 0068cd90  6aff                 push -1
// 0068cd92  683bf47b00           push 0x7bf43b
// 0068cd97  64a100000000         mov eax, dword ptr fs:[0]
// 0068cd9d  50                   push eax
// 0068cd9e  64892500000000       mov dword ptr fs:[0], esp
// 0068cda5  51                   push ecx
// 0068cda6  56                   push esi
// 0068cda7  57                   push edi
// 0068cda8  6a3c                 push 0x3c
// 0068cdaa  8bf9                 mov edi, ecx
// 0068cdac  e86f3b0100           call 0x6a0920
// 0068cdb1  8bf0                 mov esi, eax
// 0068cdb3  83c404               add esp, 4
// 0068cdb6  89742408             mov dword ptr [esp + 8], esi
// 0068cdba  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0068cdc2  85f6                 test esi, esi
// 0068cdc4  7418                 je 0x68cdde
// 0068cdc6  57                   push edi
// 0068cdc7  8bce                 mov ecx, esi
// 0068cdc9  ff15a0488000         call dword ptr [0x8048a0]
// 0068cdcf  c706dceb8400         mov dword ptr [esi], 0x84ebdc
// 0068cdd5  c74634cceb8400       mov dword ptr [esi + 0x34], 0x84ebcc
// 0068cddc  eb02                 jmp 0x68cde0
// 0068cdde  33f6                 xor esi, esi
// 0068cde0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0068cde4  8b06                 mov eax, dword ptr [esi]
// 0068cde6  8b5004               mov edx, dword ptr [eax + 4]
// 0068cde9  51                   push ecx
// 0068cdea  8bce                 mov ecx, esi
// 0068cdec  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0068cdf4  ffd2                 call edx
// 0068cdf6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068cdfa  5f                   pop edi
// 0068cdfb  8bc6                 mov eax, esi
// 0068cdfd  5e                   pop esi
// 0068cdfe  64890d00000000       mov dword ptr fs:[0], ecx
// 0068ce05  83c410               add esp, 0x10
// 0068ce08  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S;
struct Query;

struct QueryTable {
    void* reserved;
    void (__thiscall *setMask)(Query*, unsigned int);
};

extern QueryTable queryTable;
extern void* secondaryTable[];
extern Query* (__thiscall *baseConstructor)(Query*, S*);

struct Query {
    QueryTable* table;
    char padding[0x30];
    void** secondary;
    unsigned int reserved;

    Query(S*);
};

struct S {
    Query* createQuery(unsigned int);
};

__forceinline Query::Query(S* owner)
{
    baseConstructor(this, owner);
    table = &queryTable;
    secondary = secondaryTable;
}

Query* S::createQuery(unsigned int mask)
{
    Query* query = new Query(this);
    query->table->setMask(query, mask);
    return query;
}
