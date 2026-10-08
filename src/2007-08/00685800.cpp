// from server: 48% by colin
// roc 2007-08 00685800  unit: CInstanceRecord::CNameItem  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685800
//
// 00685800  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00685804  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00685808  8b01                 mov eax, dword ptr [ecx]
// 0068580a  8b4058               mov eax, dword ptr [eax + 0x58]
// 0068580d  6a00                 push 0
// 0068580f  52                   push edx
// 00685810  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685814  6a07                 push 7
// 00685816  52                   push edx
// 00685817  ffd0                 call eax
// 00685819  c3                   ret 

struct CNameItem {
    void construct(const char* name, int attributes, int value, int index, void* owner);
};

void CNameItem::construct(const char* name, int attributes, int value, int index, void* owner)
{
    void* vtable = *(void**)this;
    void (__stdcall *fn)(void*, const char*, int, int, int, void*) = *(void (__stdcall **)(void*, const char*, int, int, int, void*))((char*)vtable + 0x58);
    fn(this, name, attributes, value, index, owner);
}
