// from server: 87% by colin
// roc 2007-08 0040d1d0  unit: ChatEnter  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040d1d0
//
// 0040d1d0  56                   push esi
// 0040d1d1  8bf1                 mov esi, ecx
// 0040d1d3  e8b8831400           call 0x555590
// 0040d1d8  8b10                 mov edx, dword ptr [eax]
// 0040d1da  56                   push esi
// 0040d1db  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0040d1df  8bc8                 mov ecx, eax
// 0040d1e1  8b4250               mov eax, dword ptr [edx + 0x50]
// 0040d1e4  56                   push esi
// 0040d1e5  ffd0                 call eax
// 0040d1e7  8bc6                 mov eax, esi
// 0040d1e9  5e                   pop esi
// 0040d1ea  c20400               ret 4

struct ChatEnter {
    void* field0;
    void* method4(void*);
};

void* __fastcall sub_555590();

void* ChatEnter::method4(void* arg)
{
    void* obj = sub_555590();
    void** vtable = *(void***)obj;
    void* (__thiscall *fn)(void*, void*) = (void* (__thiscall *)(void*, void*))vtable[0x50 / 4];
    fn(obj, arg);
    return arg;
}
