// from server: 80% by colin
// roc 2007-08 006857e0  unit: CInstanceRecord::CNameItem  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006857e0
//
// 006857e0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006857e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006857e8  8b01                 mov eax, dword ptr [ecx]
// 006857ea  8b4058               mov eax, dword ptr [eax + 0x58]
// 006857ed  6a00                 push 0
// 006857ef  52                   push edx
// 006857f0  8b542410             mov edx, dword ptr [esp + 0x10]
// 006857f4  6a05                 push 5
// 006857f6  52                   push edx
// 006857f7  ffd0                 call eax
// 006857f9  c3                   ret 

struct CNameItem {
    void construct(const char* name, int value, int index);
};

void CNameItem::construct(const char* name, int value, int index)
{
    void** vtbl = *(void***)this;
    void (__thiscall *fn)(void*, const char*, int, int, int) = (void (__thiscall *)(void*, const char*, int, int, int))vtbl[0x58/4];
    fn(this, name, 5, index, 0);
}
