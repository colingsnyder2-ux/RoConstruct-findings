// roc 2007-03 00698f90  unit: seg_00690000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00698f90
//
// 00698f90  56                   push esi
// 00698f91  8bf1                 mov esi, ecx
// 00698f93  e8a8eeffff           call 0x697e40
// 00698f98  8b06                 mov eax, dword ptr [esi]
// 00698f9a  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00698fa0  8bce                 mov ecx, esi
// 00698fa2  ffd2                 call edx
// 00698fa4  85c0                 test eax, eax
// 00698fa6  7408                 je 0x698fb0
// 00698fa8  8bce                 mov ecx, esi
// 00698faa  5e                   pop esi
// 00698fab  e9b0fbffff           jmp 0x698b60
// 00698fb0  5e                   pop esi
// 00698fb1  c3                   ret 
// copied from an identical function in another client (function ?func_6A6BD0@CXTPMenuBar@ns_ROCX000024@@QAEXXZ)

namespace ns_ROCX000024 {
struct CXTPMenuBar {
    void sub_6A6100();
    virtual int vfunc_160();
    void sub_6A67A0();
    void func_6A6BD0();
};

void CXTPMenuBar::func_6A6BD0()
{
    sub_6A6100();
    if (((int (__thiscall*)(CXTPMenuBar*))((*(void***)this)[0x160 / 4]))(this))
        sub_6A67A0();
}
}
