// from server: 100% by colin
// roc 2008-06 005d77b0  unit: RBX::Humanoid  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d77b0
//
// 005d77b0  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 005d77b6  85c0                 test eax, eax
// 005d77b8  7407                 je 0x5d77c1
// 005d77ba  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 005d77c0  c3                   ret 
// 005d77c1  33c0                 xor eax, eax
// 005d77c3  c3                   ret 

struct Humanoid {
    char pad[0xd0];
    void* ptr;
    int getField();
};

int Humanoid::getField()
{
    if (ptr)
        return *(int*)((char*)ptr + 0x84);
    return 0;
}
