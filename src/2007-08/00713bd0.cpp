// from server: 100% by colin
// roc 2007-08 00713bd0  unit: CXTCaptionButtonThemeOfficeXP  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713bd0
//
// 00713bd0  8b442404             mov eax, dword ptr [esp + 4]
// 00713bd4  8b11                 mov edx, dword ptr [ecx]
// 00713bd6  89417c               mov dword ptr [ecx + 0x7c], eax
// 00713bd9  8b4204               mov eax, dword ptr [edx + 4]
// 00713bdc  ffd0                 call eax
// 00713bde  c20400               ret 4

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
