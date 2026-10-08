// from server: 52% by colin
// roc 2007-08 006857a0  unit: CInstanceRecord::CNameItem  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006857a0
//
// 006857a0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006857a4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006857a8  8b01                 mov eax, dword ptr [ecx]
// 006857aa  8b4058               mov eax, dword ptr [eax + 0x58]
// 006857ad  6a00                 push 0
// 006857af  52                   push edx
// 006857b0  8b542410             mov edx, dword ptr [esp + 0x10]
// 006857b4  6a1e                 push 0x1e
// 006857b6  52                   push edx
// 006857b7  ffd0                 call eax
// 006857b9  c3                   ret 

struct CNameItem {
    void invoke(int, int, int);
};

void CNameItem::invoke(int a, int b, int c)
{
    int (*fn)(int, int, int, int) = *(int (**)(int, int, int, int))(*(int*)this + 0x58);
    fn(a, 0x1e, b, 0);
}
