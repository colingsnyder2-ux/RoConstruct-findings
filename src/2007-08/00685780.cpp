// from server: 65% by colin
// roc 2007-08 00685780  unit: CInstanceRecord::CNameItem  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685780
//
// 00685780  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00685784  8b01                 mov eax, dword ptr [ecx]
// 00685786  8b4058               mov eax, dword ptr [eax + 0x58]
// 00685789  8d542410             lea edx, [esp + 0x10]
// 0068578d  52                   push edx
// 0068578e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685792  52                   push edx
// 00685793  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685797  6a0b                 push 0xb
// 00685799  52                   push edx
// 0068579a  ffd0                 call eax
// 0068579c  c3                   ret 

struct CNameItem {
    void convertToValue(int value, int* out) const;
};

struct CNameItemOwner {
    char pad[0x58];
    void* vtable_ptr;
};

void CNameItem::convertToValue(int value, int* out) const
{
    CNameItemOwner* owner = *(CNameItemOwner**)this;
    void (__stdcall *fn)(const CNameItem*, int, int*, int) = *(void (__stdcall **)(const CNameItem*, int, int*, int))((char*)owner + 0x58);
    fn(this, 0xb, out, value);
}
