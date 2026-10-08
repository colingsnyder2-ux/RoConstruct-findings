// from server: 100% by colin
// roc 2007-08 00637e80  unit: CXTPControlComboBoxList  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00637e80
//
// 00637e80  8b442404             mov eax, dword ptr [esp + 4]
// 00637e84  56                   push esi
// 00637e85  50                   push eax
// 00637e86  8bf1                 mov esi, ecx
// 00637e88  e8c3ebffff           call 0x636a50
// 00637e8d  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 00637e90  8b11                 mov edx, dword ptr [ecx]
// 00637e92  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00637e98  ffd0                 call eax
// 00637e9a  5e                   pop esi
// 00637e9b  c20400               ret 4

struct CXTPControlComboBoxList
{
    void func_00636a50(int);
    void sub_00637e80(int);
};

void CXTPControlComboBoxList::sub_00637e80(int a)
{
    func_00636a50(a);
    (*(void (__thiscall **)(void *))(*(int *)(*(int *)((char *)this + 0x5c)) + 0x168))(*(void **)((char *)this + 0x5c));
}
