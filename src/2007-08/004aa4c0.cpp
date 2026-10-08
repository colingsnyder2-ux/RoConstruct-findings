// from server: 53% by colin
// roc 2007-08 004aa4c0  unit: RBX::Network::Replicator::NewInstanceItem  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004aa4c0
//
// 004aa4c0  8b4104               mov eax, dword ptr [ecx + 4]
// 004aa4c3  8b88a41d0000         mov ecx, dword ptr [eax + 0x1da4]
// 004aa4c9  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 004aa4cf  8b10                 mov edx, dword ptr [eax]
// 004aa4d1  51                   push ecx
// 004aa4d2  8bc8                 mov ecx, eax
// 004aa4d4  8b02                 mov eax, dword ptr [edx]
// 004aa4d6  ffd0                 call eax
// 004aa4d8  c3                   ret 

struct ReplicatorNewInstanceItem {
    int field0;
    void* field4;
    void write();
};

void ReplicatorNewInstanceItem::write()
{
    char* p = (char*)field4;
    int* a = *(int**)(p + 0x1da4);
    char* b = *(char**)(p + 0xec);
    int* vtbl = *(int**)b;
    int (*fn)(void*, int) = *(int (**)(void*, int))vtbl;
    fn(b, (int)a);
}
