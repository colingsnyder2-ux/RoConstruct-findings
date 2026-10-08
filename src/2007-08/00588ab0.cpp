// from server: 54% by colin
// roc 2007-08 00588ab0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00588ab0
//
// 00588ab0  e97a008948           jmp 0x48e18b2f
// 00588ab5  10895014eb02         adc byte ptr [ecx + 0x2eb1450], cl
// 00588abb  33c0                 xor eax, eax
// 00588abd  56                   push esi
// 00588abe  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00588ac2  6a00                 push 0
// 00588ac4  c744240800000000     mov dword ptr [esp + 8], 0
// 00588acc  8906                 mov dword ptr [esi], eax
// 00588ace  e88f710a00           call 0x62fc62
// 00588ad3  83c404               add esp, 4
// 00588ad6  8bc6                 mov eax, esi
// 00588ad8  5e                   pop esi
// 00588ad9  59                   pop ecx
// 00588ada  c3                   ret 

struct S {
    char pad[0x2eb1450];
    int m();
};

extern "C" int __cdecl helper_0062fc62(int);

int S::m()
{
    int* p = (int*)((char*)this + 0x2eb1450);
    *p = 0;
    helper_0062fc62(0);
    return (int)p;
}
