// from server: 65% by colin
// roc 2007-08 00685820  unit: CInstanceRecord::CNameItem  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685820
//
// 00685820  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00685824  8b01                 mov eax, dword ptr [ecx]
// 00685826  8b4058               mov eax, dword ptr [eax + 0x58]
// 00685829  8d542410             lea edx, [esp + 0x10]
// 0068582d  52                   push edx
// 0068582e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685832  52                   push edx
// 00685833  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685837  6a65                 push 0x65
// 00685839  52                   push edx
// 0068583a  ffd0                 call eax
// 0068583c  c3                   ret 

struct CNameItem {
    void convertToString(void* value) const;
};

extern "C" int __stdcall convertToStringHelper(void*, int, void*, void*);

void CNameItem::convertToString(void* value) const
{
    void* p = *(void**)this;
    int (*fn)(void*, int, void*, void*) = *(int (**)(void*, int, void*, void*))((char*)p + 0x58);
    fn((void*)this, 0x65, value, (void*)((char*)&value + 0x0c));
}
