// from server: 64% by colin
// roc 2007-08 00438730  unit: _NVCXTPPropertyGridItemBool::?$XItem  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00438730
//
// 00438730  8b01                 mov eax, dword ptr [ecx]
// 00438732  8b90e8000000         mov edx, dword ptr [eax + 0xe8]
// 00438738  ffd2                 call edx
// 0043873a  85c0                 test eax, eax
// 0043873c  0f95c0               setne al
// 0043873f  c3                   ret 

struct XItem {
    bool f();
};

bool XItem::f() {
    return (*(bool (__thiscall **)(void))(*(int *)this + 0xe8))() == 0;
}
