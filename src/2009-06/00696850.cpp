// from server: 67% by atomic.potato
// roc 2009-06 00696850  unit: RBX::VVirtualUser::?$FactoryProduct  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00696850
//
// 00696850  d9442404             fld dword ptr [esp + 4]
// 00696854  83ec08               sub esp, 8
// 00696857  8bc4                 mov eax, esp
// 00696859  d918                 fstp dword ptr [eax]
// 0069685b  6a02                 push 2
// 0069685d  d9442414             fld dword ptr [esp + 0x14]
// 00696861  d95804               fstp dword ptr [eax + 4]
// 00696864  e887feffff           call 0x6966f0
// 00696869  c20800               ret 8

extern "C" void __stdcall sub_6966F0(float a, float b, int c);

void __stdcall sub_696850(float a, float b)
{
    sub_6966F0(a, b, 2);
}
