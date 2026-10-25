// from server: 100% by atomic.potato
// roc 2008-06 00437850  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437850
//
// 00437850  8b01                 mov eax, dword ptr [ecx]
// 00437852  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 00437858  ffd2                 call edx
// 0043785a  85c0                 test eax, eax
// 0043785c  0f95c0               setne al
// 0043785f  c3                   ret 

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
