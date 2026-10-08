// from server: 47% by colin
// roc 2007-08 006c14e0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c14e0
//
// 006c14e0  e839f5f6ff           call 0x630a1e
// 006c14e5  81c464010000         add esp, 0x164
// 006c14eb  c3                   ret 

extern "C" void __cdecl sub_630a1e();

void sub_6c14e0()
{
    sub_630a1e();
}
