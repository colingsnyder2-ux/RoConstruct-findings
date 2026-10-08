// from server: 80% by colin
// roc 2007-08 00653ce0  unit: CInstanceRecord::CNameItem  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00653ce0
//
// 00653ce0  56                   push esi
// 00653ce1  8bf1                 mov esi, ecx
// 00653ce3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00653ce7  57                   push edi
// 00653ce8  8b3e                 mov edi, dword ptr [esi]
// 00653cea  83c120               add ecx, 0x20
// 00653ced  ff1598dd7700         call dword ptr [0x77dd98]
// 00653cf3  8b9724010000         mov edx, dword ptr [edi + 0x124]
// 00653cf9  50                   push eax
// 00653cfa  8b442410             mov eax, dword ptr [esp + 0x10]
// 00653cfe  50                   push eax
// 00653cff  8bce                 mov ecx, esi
// 00653d01  ffd2                 call edx
// 00653d03  5f                   pop edi
// 00653d04  5e                   pop esi
// 00653d05  c20800               ret 8

struct CInstanceRecord_CNameItem
{
    void sub_653CE0(int a, int b);
};

void CInstanceRecord_CNameItem::sub_653CE0(int a, int b)
{
    int (__stdcall *fn)(int);
    fn = *(int (__stdcall **)(int))0x77dd98;
    int v = fn(b + 0x20);
    (*(void (__thiscall **)(void *, int, int))(*(int *)this + 0x124))(this, a, v);
}
