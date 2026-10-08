// from server: 47% by colin
// roc 2007-08 005017b0  unit: G3D::Shader  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005017b0
//
// 005017b0  e869f21200           call 0x630a1e
// 005017b5  81c4d4000000         add esp, 0xd4
// 005017bb  c3                   ret 

extern "C" void __cdecl sub_00630a1e();

void sub_005017b0()
{
    sub_00630a1e();
}
