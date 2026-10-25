// from server: 100% by king_originala
// roc 2008-06 0068cce0  unit: Ogre::RbxSceneManager  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068cce0
//
// 0068cce0  6aff                 push -1
// 0068cce2  683bf47b00           push 0x7bf43b
// 0068cce7  64a100000000         mov eax, dword ptr fs:[0]
// 0068cced  50                   push eax
// 0068ccee  64892500000000       mov dword ptr fs:[0], esp
// 0068ccf5  51                   push ecx
// 0068ccf6  56                   push esi
// 0068ccf7  57                   push edi
// 0068ccf8  6a6c                 push 0x6c
// 0068ccfa  8bf9                 mov edi, ecx
// 0068ccfc  e81f3c0100           call 0x6a0920
// 0068cd01  8bf0                 mov esi, eax
// 0068cd03  83c404               add esp, 4
// 0068cd06  89742408             mov dword ptr [esp + 8], esi
// 0068cd0a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0068cd12  85f6                 test esi, esi
// 0068cd14  7418                 je 0x68cd2e
// 0068cd16  57                   push edi
// 0068cd17  8bce                 mov ecx, esi
// 0068cd19  ff156c488000         call dword ptr [0x80486c]
// 0068cd1f  c70684eb8400         mov dword ptr [esi], 0x84eb84
// 0068cd25  c7463474eb8400       mov dword ptr [esi + 0x34], 0x84eb74
// 0068cd2c  eb02                 jmp 0x68cd30
// 0068cd2e  33f6                 xor esi, esi
// 0068cd30  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0068cd34  8b06                 mov eax, dword ptr [esi]
// 0068cd36  8b5020               mov edx, dword ptr [eax + 0x20]
// 0068cd39  51                   push ecx
// 0068cd3a  8bce                 mov ecx, esi
// 0068cd3c  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0068cd44  ffd2                 call edx
// 0068cd46  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0068cd4a  8b06                 mov eax, dword ptr [esi]
// 0068cd4c  8b5004               mov edx, dword ptr [eax + 4]
// 0068cd4f  51                   push ecx
// 0068cd50  8bce                 mov ecx, esi
// 0068cd52  ffd2                 call edx
// 0068cd54  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068cd58  5f                   pop edi
// 0068cd59  8bc6                 mov eax, esi
// 0068cd5b  5e                   pop esi
// 0068cd5c  64890d00000000       mov dword ptr fs:[0], ecx
// 0068cd63  83c410               add esp, 0x10
// 0068cd66  c20800               ret 8

struct SceneManager;
struct Query;

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

typedef void (__thiscall *QueryMethod)(Query*, unsigned int);

struct QueryVTable
{
    void* slot0;
    QueryMethod setMask;
    void* slots2to7[6];
    void (__thiscall *setRay)(Query*, const void*);
};

extern QueryVTable queryVTable;
extern void* secondaryVTable[];
extern void (__thiscall *DefaultRaySceneQueryConstructor)(Query*, SceneManager*);

struct Query
{
    QueryVTable* vtable;
    char primaryData[48];
    void** secondary;
    char secondaryData[52];

    Query(SceneManager*);
};

struct SceneManager
{
    Query* createRayQuery(const void*, unsigned int);
};

__forceinline Query::Query(SceneManager* manager)
{
    DefaultRaySceneQueryConstructor(this, manager);
    vtable = &queryVTable;
    secondary = secondaryVTable;
}

Query* SceneManager::createRayQuery(const void* ray, unsigned int mask)
{
    Query* query = new Query(this);
    query->vtable->setRay(query, ray);
    query->vtable->setMask(query, mask);
    return query;
}
