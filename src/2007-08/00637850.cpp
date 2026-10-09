// from server: 82% by colin
// roc 2007-08 00637850  unit: CXTPControlComboBoxList  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00637850
//
// 00637850  83ec10               sub esp, 0x10
// 00637853  8b11                 mov edx, dword ptr [ecx]
// 00637855  33c0                 xor eax, eax
// 00637857  8b5260               mov edx, dword ptr [edx + 0x60]
// 0063785a  50                   push eax
// 0063785b  50                   push eax
// 0063785c  50                   push eax
// 0063785d  8944240c             mov dword ptr [esp + 0xc], eax
// 00637861  89442410             mov dword ptr [esp + 0x10], eax
// 00637865  89442414             mov dword ptr [esp + 0x14], eax
// 00637869  89442418             mov dword ptr [esp + 0x18], eax
// 0063786d  8d44240c             lea eax, [esp + 0xc]
// 00637871  50                   push eax
// 00637872  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 00637878  25ffffbfff           and eax, 0xffbfffff
// 0063787d  0d00002082           or eax, 0x82200000
// 00637882  50                   push eax
// 00637883  6854597800           push 0x785954
// 00637888  68e85f7c00           push 0x7c5fe8
// 0063788d  6880020000           push 0x280
// 00637892  ffd2                 call edx
// 00637894  83c410               add esp, 0x10
// 00637897  c3                   ret 

struct CXTPControlComboBoxList {
    void AddItem();
};

extern "C" void __stdcall sub_785954();
extern "C" void __stdcall sub_7c5fe8();

void CXTPControlComboBoxList::AddItem()
{
    int v[4];
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;

    void (__stdcall *fn)(int, int, int, int, int, int, int, int);
    fn = *(void (__stdcall **)(int, int, int, int, int, int, int, int))(*(int*)this + 0x60);

    int flags = *(int*)((char*)this + 0xec);
    flags = (flags & 0xffbfffff) | 0x82200000;

    fn(0x280, (int)&sub_7c5fe8, (int)&sub_785954, flags, (int)v, 0, 0, 0);
}
