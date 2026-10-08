// from server: 91% by colin
// roc 2007-08 00530190  unit: RBX::ModelInstance  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530190
//
// 00530190  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 00530196  8b5004               mov edx, dword ptr [eax + 4]
// 00530199  8b840aec000000       mov eax, dword ptr [edx + ecx + 0xec]
// 005301a0  8d8c0aec000000       lea ecx, [edx + ecx + 0xec]
// 005301a7  8b5004               mov edx, dword ptr [eax + 4]
// 005301aa  ffd2                 call edx
// 005301ac  85c0                 test eax, eax
// 005301ae  7407                 je 0x5301b7
// 005301b0  8b80d8010000         mov eax, dword ptr [eax + 0x1d8]
// 005301b6  c3                   ret 
// 005301b7  33c0                 xor eax, eax
// 005301b9  c3                   ret 

struct ModelInstance {
    char pad[0xec];
    void* field_ec;
    int getSomething();
};

int ModelInstance::getSomething()
{
    void* p = field_ec;
    int* vtable = *(int**)((char*)p + 4);
    int* obj = (int*)((char*)vtable + (int)this + 0xec);
    int* vt = *(int**)((char*)obj + 4);
    int result = ((int (__thiscall*)(void*))vt)(obj);
    if (result != 0)
        return *(int*)(result + 0x1d8);
    return 0;
}
