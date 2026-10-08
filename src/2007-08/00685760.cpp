// from server: 73% by colin
// roc 2007-08 00685760  unit: CInstanceRecord::CNameItem  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685760
//
// 00685760  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00685764  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00685768  8b01                 mov eax, dword ptr [ecx]
// 0068576a  8b4058               mov eax, dword ptr [eax + 0x58]
// 0068576d  6a00                 push 0
// 0068576f  52                   push edx
// 00685770  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685774  6a0b                 push 0xb
// 00685776  52                   push edx
// 00685777  ffd0                 call eax
// 00685779  c3                   ret 

struct CInstanceRecord_CNameItem
{
    void construct(const char* name, int attributes, int value, int index, void* owner);
};

void CInstanceRecord_CNameItem::construct(const char* name, int attributes, int value, int index, void* owner)
{
    void** vtable = *(void***)this;
    void (__stdcall *fn)(void*, int, int, int) = (void (__stdcall *)(void*, int, int, int))vtable[0x58 / 4];
    fn(this, index, 0xb, value);
}
