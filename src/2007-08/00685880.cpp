// from server: 38% by colin
// roc 2007-08 00685880  unit: CInstanceRecord::CNameItem  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685880
//
// 00685880  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685884  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00685888  8b01                 mov eax, dword ptr [ecx]
// 0068588a  8b405c               mov eax, dword ptr [eax + 0x5c]
// 0068588d  52                   push edx
// 0068588e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685892  52                   push edx
// 00685893  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685897  52                   push edx
// 00685898  ffd0                 call eax
// 0068589a  c3                   ret 

struct CNameItem {
    void invoke(int a, int b, int c);
};

void CNameItem::invoke(int a, int b, int c)
{
    void* p = *(void**)this;
    typedef void (__thiscall *Fn)(void*, int, int, int);
    Fn fn = (Fn)(*(void***)p)[0x5c / 4];
    fn(p, a, b, c);
}
