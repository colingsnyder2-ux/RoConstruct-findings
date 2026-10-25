// from server: 100% by tester
// roc 2011-06 006a3180  unit: RBX::Ball  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a3180
//
// 006a3180  8b8108010000         mov eax, dword ptr [ecx + 0x108]
// 006a3186  8a4040               mov al, byte ptr [eax + 0x40]
// 006a3189  c3                   ret 

struct S {
    char pad[0x108];
    char* ptr;
    char get() const;
};

char S::get() const
{
    return *(char*)(ptr + 0x40);
}