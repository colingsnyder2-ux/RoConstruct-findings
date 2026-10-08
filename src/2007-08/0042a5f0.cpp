// from server: 83% by colin
// roc 2007-08 0042a5f0  unit: CLuaHtmlView  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042a5f0
//
// 0042a5f0  51                   push ecx
// 0042a5f1  8b01                 mov eax, dword ptr [ecx]
// 0042a5f3  85c0                 test eax, eax
// 0042a5f5  c7042400000000       mov dword ptr [esp], 0
// 0042a5fc  7405                 je 0x42a603
// 0042a5fe  83c004               add eax, 4
// 0042a601  eb02                 jmp 0x42a605
// 0042a603  33c0                 xor eax, eax
// 0042a605  8b4908               mov ecx, dword ptr [ecx + 8]
// 0042a608  8b11                 mov edx, dword ptr [ecx]
// 0042a60a  56                   push esi
// 0042a60b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0042a60f  50                   push eax
// 0042a610  8b4210               mov eax, dword ptr [edx + 0x10]
// 0042a613  56                   push esi
// 0042a614  ffd0                 call eax
// 0042a616  8bc6                 mov eax, esi
// 0042a618  5e                   pop esi
// 0042a619  59                   pop ecx
// 0042a61a  c20400               ret 4

struct CLuaHtmlView
{
    void* field_0;
    int field_4;
    void* field_8;
    void* func_0042a5f0(void* arg);
};

void* CLuaHtmlView::func_0042a5f0(void* arg)
{
    void* p = field_0;
    void* q;
    if (p != 0)
        q = (char*)p + 4;
    else
        q = 0;
    void** vtbl = *(void***)field_8;
    typedef void* (__thiscall *Fn)(void*, void*, void*);
    Fn fn = (Fn)vtbl[4];
    fn(field_8, q, arg);
    return arg;
}
