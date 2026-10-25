// from server: 100% by atomic.potato
// roc 2011-06 006db660  unit: RBX::VPhysicsService::?$EventDesc  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006db660
//
// 006db660  8b81b4000000         mov eax, dword ptr [ecx + 0xb4]
// 006db666  8b4824               mov ecx, dword ptr [eax + 0x24]
// 006db669  8b4174               mov eax, dword ptr [ecx + 0x74]
// 006db66c  c3                   ret 

struct S {
    char pad[0xb4];
    void* field_b4;
    int get();
};

int S::get()
{
    char* p = (char*)field_b4;
    char* q = *(char**)(p + 0x24);
    return *(int*)(q + 0x74);
}
