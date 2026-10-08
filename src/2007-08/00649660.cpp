// from server: 100% by colin
// roc 2007-08 00649660  unit: CXTPCommandBar  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00649660
//
// 00649660  56                   push esi
// 00649661  8bf1                 mov esi, ecx
// 00649663  e8d8efffff           call 0x648640
// 00649668  8b442408             mov eax, dword ptr [esp + 8]
// 0064966c  8906                 mov dword ptr [esi], eax
// 0064966e  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 00649675  8bc6                 mov eax, esi
// 00649677  5e                   pop esi
// 00649678  c20400               ret 4

struct S {
    int field_0;
    int pad0;
    int pad1;
    int field_c;
    S* init(int arg);
};

extern void __fastcall sub_00648640(void* self);

S* S::init(int arg)
{
    sub_00648640(this);
    field_0 = arg;
    field_c = 1;
    return this;
}
