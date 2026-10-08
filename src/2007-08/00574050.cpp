// from server: 100% by colin
// roc 2007-08 00574050  unit: RBX::PartInstance  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574050
//
// 00574050  8b81d8010000         mov eax, dword ptr [ecx + 0x1d8]
// 00574056  8a4070               mov al, byte ptr [eax + 0x70]
// 00574059  c3                   ret 

struct S {
    char pad[0x1d8];
    char* ptr;
    char get() const;
};

char S::get() const
{
    return *(char*)(ptr + 0x70);
}
