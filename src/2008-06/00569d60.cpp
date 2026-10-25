// from server: 100% by king_originala
// roc 2008-06 00569d60  unit: RBX::StandardOut  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00569d60
//
// 00569d60  51                   push ecx
// 00569d61  53                   push ebx
// 00569d62  56                   push esi
// 00569d63  8b742414             mov esi, dword ptr [esp + 0x14]
// 00569d67  57                   push edi
// 00569d68  8bd9                 mov ebx, ecx
// 00569d6a  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00569d72  85f6                 test esi, esi
// 00569d74  7d02                 jge 0x569d78
// 00569d76  33f6                 xor esi, esi
// 00569d78  8b03                 mov eax, dword ptr [ebx]
// 00569d7a  8b78f4               mov edi, dword ptr [eax - 0xc]
// 00569d7d  3bf7                 cmp esi, edi
// 00569d7f  7c1e                 jl 0x569d9f
// 00569d81  83c0f0               add eax, -0x10
// 00569d84  50                   push eax
// 00569d85  e8262effff           call 0x55cbb0
// 00569d8a  83c404               add esp, 4
// 00569d8d  8bc8                 mov ecx, eax
// 00569d8f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00569d93  5f                   pop edi
// 00569d94  83c110               add ecx, 0x10
// 00569d97  5e                   pop esi
// 00569d98  8908                 mov dword ptr [eax], ecx
// 00569d9a  5b                   pop ebx
// 00569d9b  59                   pop ecx
// 00569d9c  c20800               ret 8
// 00569d9f  8b40f0               mov eax, dword ptr [eax - 0x10]
// 00569da2  85c0                 test eax, eax
// 00569da4  740d                 je 0x569db3
// 00569da6  8b10                 mov edx, dword ptr [eax]
// 00569da8  8bc8                 mov ecx, eax
// 00569daa  8b4210               mov eax, dword ptr [edx + 0x10]
// 00569dad  ffd0                 call eax
// 00569daf  85c0                 test eax, eax
// 00569db1  7510                 jne 0x569dc3
// 00569db3  8b15ecf29700         mov edx, dword ptr [0x97f2ec]
// 00569db9  8b4210               mov eax, dword ptr [edx + 0x10]
// 00569dbc  b9ecf29700           mov ecx, 0x97f2ec
// 00569dc1  ffd0                 call eax
// 00569dc3  8b0b                 mov ecx, dword ptr [ebx]
// 00569dc5  2bce                 sub ecx, esi
// 00569dc7  50                   push eax
// 00569dc8  56                   push esi
// 00569dc9  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00569dcd  03cf                 add ecx, edi
// 00569dcf  51                   push ecx
// 00569dd0  8bce                 mov ecx, esi
// 00569dd2  e8d9feffff           call 0x569cb0
// 00569dd7  5f                   pop edi
// 00569dd8  8bc6                 mov eax, esi
// 00569dda  5e                   pop esi
// 00569ddb  5b                   pop ebx
// 00569ddc  59                   pop ecx
// 00569ddd  c20800               ret 8

struct Manager;

struct ManagerTable {
    void* slots[4];
    Manager* (__thiscall *getManager)(Manager*);
};

struct Manager {
    ManagerTable* table;
};

struct Header {
    Manager* manager;
    int length;
    int capacity;
    int references;
};

extern Manager defaultManager;
extern Header* __cdecl retainHeader(Header*);

struct S {
    char* data;
    void assign(const char*, int, Manager*);
    S* right(S*, int);
};

S* S::right(S* result, int count)
{
    volatile int state = 0;

    if (count < 0)
        count = 0;

    int length = (reinterpret_cast<Header*>(data) - 1)->length;

    if (count >= length) {
        result->data = reinterpret_cast<char*>(
            retainHeader(reinterpret_cast<Header*>(data) - 1) + 1);
        return result;
    }

    Manager* manager = (reinterpret_cast<Header*>(data) - 1)->manager;
    if (manager)
        manager = manager->table->getManager(manager);

    if (!manager)
        manager = defaultManager.table->getManager(&defaultManager);

    result->assign(data - count + length, count, manager);
    return result;
}
