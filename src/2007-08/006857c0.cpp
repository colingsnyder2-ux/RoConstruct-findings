// from server: 75% by colin
// roc 2007-08 006857c0  unit: CInstanceRecord::CNameItem  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006857c0
//
// 006857c0  8b542410             mov edx, dword ptr [esp + 0x10]
// 006857c4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006857c8  8b01                 mov eax, dword ptr [ecx]
// 006857ca  8b4058               mov eax, dword ptr [eax + 0x58]
// 006857cd  52                   push edx
// 006857ce  8b542410             mov edx, dword ptr [esp + 0x10]
// 006857d2  52                   push edx
// 006857d3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006857d7  6a1e                 push 0x1e
// 006857d9  52                   push edx
// 006857da  ffd0                 call eax
// 006857dc  c3                   ret 

struct CNameItem {
    void invoke(int, int, int, int);
};

void CNameItem::invoke(int a, int b, int c, int d)
{
    void (__thiscall *fn)(void*, int, int, int, int) = *(void (__thiscall **)(void*, int, int, int, int))(*(int*)this + 0x58);
    fn(this, 0x1e, c, b, d);
}
