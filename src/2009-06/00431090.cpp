// from server: 100% by tester
// roc 2009-06 00431090  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00431090
//
// 00431090  8b01                 mov eax, dword ptr [ecx]
// 00431092  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 00431098  ffd2                 call edx
// 0043109a  85c0                 test eax, eax
// 0043109c  0f95c0               setne al
// 0043109f  c3                   ret 

struct S
{
    unsigned char f();
};

unsigned char S::f()
{
    struct VTable
    {
        char pad[0xe8];
        int (__thiscall *method)(void *);
    };

    VTable **vtable = (VTable **)this;
    return vtable[0]->method(this) != 0;
}
