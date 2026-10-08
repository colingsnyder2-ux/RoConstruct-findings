// from server: 81% by colin
// roc 2007-08 006856e0  unit: CInstanceRecord::CNameItem  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006856e0
//
// 006856e0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006856e4  8b01                 mov eax, dword ptr [ecx]
// 006856e6  8b4058               mov eax, dword ptr [eax + 0x58]
// 006856e9  8d542410             lea edx, [esp + 0x10]
// 006856ed  52                   push edx
// 006856ee  8b542410             mov edx, dword ptr [esp + 0x10]
// 006856f2  52                   push edx
// 006856f3  8b542410             mov edx, dword ptr [esp + 0x10]
// 006856f7  6a11                 push 0x11
// 006856f9  52                   push edx
// 006856fa  ffd0                 call eax
// 006856fc  c3                   ret 

struct CNameItem {
    void construct(const char* name, int value, int index, const void* owner);
};

void CNameItem::construct(const char* name, int value, int index, const void* owner)
{
    typedef void (__thiscall *Fn)(void*, const char*, int, int, int, const void*);
    Fn fn = *(Fn*)(*(char**)this + 0x58);
    fn(this, name, 0x11, value, index, owner);
}
