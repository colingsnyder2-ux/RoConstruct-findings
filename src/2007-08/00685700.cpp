// from server: 66% by colin
// roc 2007-08 00685700  unit: CInstanceRecord::CNameItem  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685700
//
// 00685700  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00685704  8b01                 mov eax, dword ptr [ecx]
// 00685706  8b4058               mov eax, dword ptr [eax + 0x58]
// 00685709  8d542410             lea edx, [esp + 0x10]
// 0068570d  52                   push edx
// 0068570e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685712  52                   push edx
// 00685713  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685717  6a02                 push 2
// 00685719  52                   push edx
// 0068571a  ffd0                 call eax
// 0068571c  c3                   ret 

struct CNameItem {
    void convertToValue(int* out, int a, int b, int c);
};

void CNameItem::convertToValue(int* out, int a, int b, int c)
{
    typedef bool (__thiscall *Fn)(void*, int, int, int*);
    Fn fn = *(Fn*)(*(char**)this + 0x58);
    fn(this, 2, a, out);
}
