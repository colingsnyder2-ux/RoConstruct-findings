// roc 2011-06 0081f800  unit: CXTPCommandBar  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081f800
//
// 0081f800  56                   push esi
// 0081f801  8b742408             mov esi, dword ptr [esp + 8]
// 0081f805  56                   push esi
// 0081f806  83c130               add ecx, 0x30
// 0081f809  e8e2feffff           call 0x81f6f0
// 0081f80e  8bc6                 mov eax, esi
// 0081f810  5e                   pop esi
// 0081f811  c20400               ret 4
// copied from an identical function in another client (function ?set@CXTPImageManagerIcon@ns_ROCX000005@ns_ROCX000029@@QAEHH@Z)

namespace ns_ROCX000005 {
namespace ns_ROCX000030 {
struct CPatchedControlComboBox {
    char pad[0x1cc];
    int field_1cc;
    int getValue();
};

struct Inner {
    virtual int method1f8();
};

extern "C" Inner* __fastcall sub_637300(CPatchedControlComboBox* self);

int CPatchedControlComboBox::getValue()
{
    Inner* p = sub_637300(this);
    if (p != 0)
        return (*(int (__thiscall**)(Inner*))((*(int*)p) + 0x1f8))(p);
    return this->field_1cc;
}
}
}
