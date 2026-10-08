// from server: 60% by colin
// roc 2007-08 00685720  unit: CInstanceRecord::CNameItem  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00685720
//
// 00685720  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00685724  8b01                 mov eax, dword ptr [ecx]
// 00685726  8b4058               mov eax, dword ptr [eax + 0x58]
// 00685729  8d542410             lea edx, [esp + 0x10]
// 0068572d  52                   push edx
// 0068572e  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685732  52                   push edx
// 00685733  8b542410             mov edx, dword ptr [esp + 0x10]
// 00685737  6a03                 push 3
// 00685739  52                   push edx
// 0068573a  ffd0                 call eax
// 0068573c  c3                   ret 

struct CNameItem {
    void invoke(int, int, int, int);
};

void CNameItem::invoke(int a, int b, int c, int d)
{
    struct VTable {
        char pad[0x58];
        void (__stdcall *fn)(int, int, int, int*);
    };
    VTable* vt = *(VTable**)a;
    vt->fn(b, c, 3, &d);
}
