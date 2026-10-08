// from server: 47% by colin
// roc 2007-08 00694c60  unit: CXTPToolTipContext::CRichEditToolTip  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00694c60
//
// 00694c60  e8b9bdf9ff           call 0x630a1e
// 00694c65  81c468010000         add esp, 0x168
// 00694c6b  c3                   ret 

extern "C" void __cdecl sub_00630a1e();

void sub_00694c60()
{
    sub_00630a1e();
}
