// roc 2012-06 00455580  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00455580
//
// 00455580  8b01                 mov eax, dword ptr [ecx]
// 00455582  8b90ec000000         mov edx, dword ptr [eax + 0xec]
// 00455588  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@HVCXTPPropertyGridItemEnum_XItem@ns_ROCX000003@@UAEHXZ)

namespace ns_ROCX000003 {
struct HVCXTPPropertyGridItemEnum_XItem {
    virtual int f();
};

int HVCXTPPropertyGridItemEnum_XItem::f()
{
    return (*(int (__thiscall **)(HVCXTPPropertyGridItemEnum_XItem *))(*(int *)this + 0xec))(this);
}
}
