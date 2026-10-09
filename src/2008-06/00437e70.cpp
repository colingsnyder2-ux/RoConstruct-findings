// roc 2008-06 00437e70  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437e70
//
// 00437e70  8b01                 mov eax, dword ptr [ecx]
// 00437e72  8b90ec000000         mov edx, dword ptr [eax + 0xec]
// 00437e78  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@HVCXTPPropertyGridItemEnum_XItem@ns_ROCX000001@@UAEHXZ)

namespace ns_ROCX000001 {
struct HVCXTPPropertyGridItemEnum_XItem {
    virtual int f();
};

int HVCXTPPropertyGridItemEnum_XItem::f()
{
    return (*(int (__thiscall **)(HVCXTPPropertyGridItemEnum_XItem *))(*(int *)this + 0xec))(this);
}
}
