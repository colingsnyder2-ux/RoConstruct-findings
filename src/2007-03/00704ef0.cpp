// roc 2007-03 00704ef0  unit: seg_00700000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00704ef0
//
// 00704ef0  8b442404             mov eax, dword ptr [esp + 4]
// 00704ef4  8b11                 mov edx, dword ptr [ecx]
// 00704ef6  89417c               mov dword ptr [ecx + 0x7c], eax
// 00704ef9  8b4204               mov eax, dword ptr [edx + 4]
// 00704efc  ffd0                 call eax
// 00704efe  c20400               ret 4
// copied from an identical function in another client (function ?setValue@CXTCaptionButtonThemeOfficeXP@ns_ROCX000002@@QAEXH@Z)

namespace ns_ROCX000002 {
struct CXTCaptionButtonThemeOfficeXP {
    char pad[0x7c];
    int field7c;
    void setValue(int);
};

void CXTCaptionButtonThemeOfficeXP::setValue(int v)
{
    field7c = v;
    (*(void (__thiscall**)(void*))(*(int*)this + 4))(this);
}
}
