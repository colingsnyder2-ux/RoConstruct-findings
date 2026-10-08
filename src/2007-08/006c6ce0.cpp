// from server: 100% by colin
// roc 2007-08 006c6ce0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c6ce0
//
// 006c6ce0  8b442404             mov eax, dword ptr [esp + 4]
// 006c6ce4  56                   push esi
// 006c6ce5  50                   push eax
// 006c6ce6  8bf1                 mov esi, ecx
// 006c6ce8  e863fdf6ff           call 0x636a50
// 006c6ced  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 006c6cf0  8b11                 mov edx, dword ptr [ecx]
// 006c6cf2  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 006c6cf8  ffd0                 call eax
// 006c6cfa  5e                   pop esi
// 006c6cfb  c20400               ret 4

struct CXTPCustomizeSheet_CCustomizeEdit
{
    void func_00636a50(int);
    void func_006c6ce0(int);
};

void CXTPCustomizeSheet_CCustomizeEdit::func_006c6ce0(int a)
{
    func_00636a50(a);
    (*(void (***)(void))(*((char**)this + 0x5c / 4)))[0x148 / 4]();
}
