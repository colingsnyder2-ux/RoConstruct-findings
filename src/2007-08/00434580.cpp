// from server: 100% by colin
// roc 2007-08 00434580  unit: CClassTreeView  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00434580
//
// 00434580  8b442404             mov eax, dword ptr [esp + 4]
// 00434584  56                   push esi
// 00434585  50                   push eax
// 00434586  8bf1                 mov esi, ecx
// 00434588  e8b9c01f00           call 0x630646
// 0043458d  83f8ff               cmp eax, -1
// 00434590  7506                 jne 0x434598
// 00434592  0bc0                 or eax, eax
// 00434594  5e                   pop esi
// 00434595  c20400               ret 4
// 00434598  8b5660               mov edx, dword ptr [esi + 0x60]
// 0043459b  8b4244               mov eax, dword ptr [edx + 0x44]
// 0043459e  8d4e60               lea ecx, [esi + 0x60]
// 004345a1  ffd0                 call eax
// 004345a3  33c0                 xor eax, eax
// 004345a5  5e                   pop esi
// 004345a6  c20400               ret 4

struct CClassTreeView {
    char pad[0x60];
    void* field_60;
    int FindItem(int item);
};

extern "C" int __stdcall sub_630646(int item);

int CClassTreeView::FindItem(int item)
{
    int result = sub_630646(item);
    if (result == -1)
        return result;
    void** vt = (void**)((char*)field_60 + 0x44);
    typedef int (__thiscall *Fn)(void*);
    Fn fn = (Fn)vt[0];
    fn((char*)this + 0x60);
    return 0;
}
