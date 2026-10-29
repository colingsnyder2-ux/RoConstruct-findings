// from server: 100% by tester
// roc 2007-03 00572a60  unit: seg_00570000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00572a60
//
// 00572a60  8b81e0010000         mov eax, dword ptr [ecx + 0x1e0]
// 00572a66  8a4070               mov al, byte ptr [eax + 0x70]
// 00572a69  c3                   ret 

struct S {
    char pad[0x1e0];
    char* ptr;
    char get() const;
};

char S::get() const
{
    return *(char*)(ptr + 0x70);
}