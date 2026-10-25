// from server: 100% by king_originala
// roc 2008-06 004936b0  unit: RBX::VShirt::?$FactoryProduct  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004936b0
//
// 004936b0  8b442418             mov eax, dword ptr [esp + 0x18]
// 004936b4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004936b8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004936bc  56                   push esi
// 004936bd  8b742408             mov esi, dword ptr [esp + 8]
// 004936c1  50                   push eax
// 004936c2  8b442414             mov eax, dword ptr [esp + 0x14]
// 004936c6  51                   push ecx
// 004936c7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004936cb  8b09                 mov ecx, dword ptr [ecx]
// 004936cd  52                   push edx
// 004936ce  50                   push eax
// 004936cf  56                   push esi
// 004936d0  e85bf8ffff           call 0x492f30
// 004936d5  8bc6                 mov eax, esi
// 004936d7  5e                   pop esi
// 004936d8  c3                   ret 

struct S
{
    void build(void* result, int a, int b, int c, int d);
};

void* __cdecl func_004936b0(void* result, S** object,
                          int a, int b, int c, int d)
{
    (*object)->build(result, a, b, c, d);
    return result;
}
