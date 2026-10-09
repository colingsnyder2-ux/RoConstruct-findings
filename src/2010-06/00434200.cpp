// roc 2010-06 00434200  unit: HVCXTPPropertyGridItemEnum::?$XItem  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00434200
//
// 00434200  8b01                 mov eax, dword ptr [ecx]
// 00434202  8b90ec000000         mov edx, dword ptr [eax + 0xec]
// 00434208  ffe2                 jmp edx
// copied from an identical function in another client (function ?f@HVCXTPPropertyGridItemEnum_XItem@ns_ROCX00000c@@UAEHXZ)

namespace ns_ROCX00000c {
struct HVCXTPPropertyGridItemEnum_XItem {
    virtual int f();
};

int HVCXTPPropertyGridItemEnum_XItem::f()
{
    return (*(int (__thiscall **)(HVCXTPPropertyGridItemEnum_XItem *))(*(int *)this + 0xec))(this);
}
}
