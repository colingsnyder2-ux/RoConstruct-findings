// from server: 89% by colin
// roc 2007-08 00455ee0  unit: InsertModelFromRobloxVerb  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00455ee0
//
// 00455ee0  56                   push esi
// 00455ee1  8bf1                 mov esi, ecx
// 00455ee3  e808a00a00           call 0x4ffef0
// 00455ee8  dd4618               fld qword ptr [esi + 0x18]
// 00455eeb  dc05f82a7900         fadd qword ptr [0x792af8]
// 00455ef1  ded9                 fcompp 
// 00455ef3  dfe0                 fnstsw ax
// 00455ef5  f6c441               test ah, 0x41
// 00455ef8  7504                 jne 0x455efe
// 00455efa  32c0                 xor al, al
// 00455efc  5e                   pop esi
// 00455efd  c3                   ret 
// 00455efe  8b4610               mov eax, dword ptr [esi + 0x10]
// 00455f01  6a01                 push 1
// 00455f03  50                   push eax
// 00455f04  e897b60300           call 0x4915a0
// 00455f09  83c408               add esp, 8
// 00455f0c  f6d8                 neg al
// 00455f0e  5e                   pop esi
// 00455f0f  1bc0                 sbb eax, eax
// 00455f11  83c001               add eax, 1
// 00455f14  c3                   ret 

struct InsertModelFromRobloxVerb {
    char pad[0x10];
    int field_10;
    char pad2[4];
    double field_18;
    bool method();
};

extern double g_455ee0;

extern "C" void __stdcall sub_4ffef0();
extern "C" char __stdcall sub_4915a0(int, int);

bool InsertModelFromRobloxVerb::method()
{
    sub_4ffef0();
    if (field_18 + g_455ee0 < field_18 + g_455ee0)
        return false;
    return sub_4915a0(field_10, 1) == 0;
}
