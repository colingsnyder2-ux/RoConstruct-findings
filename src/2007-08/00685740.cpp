// from server: 73% by colin
// roc 2007-08 00685740  unit: CInstanceRecord::CNameItem  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685740
//
// 00685740  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00685744  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00685748  8b01                 mov eax, dword ptr [ecx]
// 0068574a  8b4058               mov eax, dword ptr [eax + 0x58]
// 0068574d  6a00                 push 0
// 0068574f  52                   push edx
// 00685750  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685754  6a03                 push 3
// 00685756  52                   push edx
// 00685757  ffd0                 call eax
// 00685759  c3                   ret 

struct CNameItem {
    void construct(const char* name, int value, int index);
};

void CNameItem::construct(const char* name, int value, int index)
{
    void* p = *(void**)this;
    void (__stdcall *fn)(void*, const char*, int, int) = *(void (__stdcall **)(void*, const char*, int, int))((char*)p + 0x58);
    fn(this, name, 3, index);
}
