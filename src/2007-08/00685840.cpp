// from server: 75% by colin
// roc 2007-08 00685840  unit: CInstanceRecord::CNameItem  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685840
//
// 00685840  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00685844  8b01                 mov eax, dword ptr [ecx]
// 00685846  8b4058               mov eax, dword ptr [eax + 0x58]
// 00685849  8d542410             lea edx, [esp + 0x10]
// 0068584d  52                   push edx
// 0068584e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685852  52                   push edx
// 00685853  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685857  6a64                 push 0x64
// 00685859  52                   push edx
// 0068585a  ffd0                 call eax
// 0068585c  c3                   ret 

struct CNameItem {
    void* vtable;
    void convert(int, int, int*);
};

void CNameItem_convert(CNameItem* self, int a, int b, int* out)
{
    CNameItem* p = *(CNameItem**)&self;
    void (__thiscall *fn)(CNameItem*, int, int, int*) = *(void (__thiscall **)(CNameItem*, int, int, int*))((char*)p->vtable + 0x58);
    fn(p, 0x64, b, out);
}
