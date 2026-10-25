// from server: 100% by king_originala
// roc 2008-06 00467a90  unit: DxUserInput  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00467a90
//
// 00467a90  51                   push ecx
// 00467a91  80b99201000000       cmp byte ptr [ecx + 0x192], 0
// 00467a98  c7042400000000       mov dword ptr [esp], 0
// 00467a9f  7417                 je 0x467ab8
// 00467aa1  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00467aa5  56                   push esi
// 00467aa6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00467aaa  50                   push eax
// 00467aab  56                   push esi
// 00467aac  e84f701600           call 0x5ceb00
// 00467ab1  8bc6                 mov eax, esi
// 00467ab3  5e                   pop esi
// 00467ab4  59                   pop ecx
// 00467ab5  c20800               ret 8
// 00467ab8  8b442408             mov eax, dword ptr [esp + 8]
// 00467abc  c70000000000         mov dword ptr [eax], 0
// 00467ac2  59                   pop ecx
// 00467ac3  c20800               ret 8

struct Object;

struct Ref
{
    Object *p;
};

struct DxUserInput
{
    char pad[402];
    unsigned char enabled;

    void helper(Ref *result, int value);
    Ref *f(Ref *result, int value);
};

Ref *DxUserInput::f(Ref *result, int value)
{
    volatile int zero = 0;
    if (enabled)
    {
        helper(result, value);
        return result;
    }

    result->p = 0;
    return result;
}
