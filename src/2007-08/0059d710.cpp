// roc 2007-08 0059d710  unit: RBX::VHopperBin::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d710
//
// 0059d710  8b81bc000000         mov eax, dword ptr [ecx + 0xbc]
// 0059d716  85c0                 test eax, eax
// 0059d718  7421                 je 0x59d73b
// 0059d71a  6a00                 push 0
// 0059d71c  681cc98800           push 0x88c91c
// 0059d721  684c1f8800           push 0x881f4c
// 0059d726  6a00                 push 0
// 0059d728  50                   push eax
// 0059d729  e808360900           call 0x630d36
// 0059d72e  83c414               add esp, 0x14
// 0059d731  85c0                 test eax, eax
// 0059d733  7406                 je 0x59d73b
// 0059d735  b801000000           mov eax, 1
// 0059d73a  c3                   ret 
// 0059d73b  33c0                 xor eax, eax
// 0059d73d  c3                   ret 
// library rbxgs/v8datamodel\Hopper.cpp (function ?isEnabled@BackpackItem@RBX@@MAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Hopper.cpp
