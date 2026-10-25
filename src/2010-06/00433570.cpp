// from server: 100% by tester
// roc 2010-06 00433570  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00433570
//
// 00433570  8b01                 mov eax, dword ptr [ecx]
// 00433572  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 00433578  ffd2                 call edx
// 0043357a  85c0                 test eax, eax
// 0043357c  0f95c0               setne al
// 0043357f  c3                   ret 

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
