// from server: 100% by colin
// roc 2007-08 00438da0  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00438da0
//
// 00438da0  8b01                 mov eax, dword ptr [ecx]
// 00438da2  8b90ec000000         mov edx, dword ptr [eax + 0xec]
// 00438da8  ffe2                 jmp edx

struct HVCXTPPropertyGridItemEnum_XItem {
    virtual int f();
};

int HVCXTPPropertyGridItemEnum_XItem::f()
{
    return (*(int (__thiscall **)(HVCXTPPropertyGridItemEnum_XItem *))(*(int *)this + 0xec))(this);
}
