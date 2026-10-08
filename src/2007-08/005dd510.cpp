// roc 2007-08 005dd510  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005dd510
//
// 005dd510  56                   push esi
// 005dd511  8bf1                 mov esi, ecx
// 005dd513  e888f8ffff           call 0x5dcda0
// 005dd518  c706ccc87b00         mov dword ptr [esi], 0x7bc8cc
// 005dd51e  c74604c4c87b00       mov dword ptr [esi + 4], 0x7bc8c4
// 005dd525  c74610bcc87b00       mov dword ptr [esi + 0x10], 0x7bc8bc
// 005dd52c  c74614acc87b00       mov dword ptr [esi + 0x14], 0x7bc8ac
// 005dd533  c7462c9cc87b00       mov dword ptr [esi + 0x2c], 0x7bc89c
// 005dd53a  c746448cc87b00       mov dword ptr [esi + 0x44], 0x7bc88c
// 005dd541  c7465c7cc87b00       mov dword ptr [esi + 0x5c], 0x7bc87c
// 005dd548  c746746cc87b00       mov dword ptr [esi + 0x74], 0x7bc86c
// 005dd54f  c7868c0000005cc87b00 mov dword ptr [esi + 0x8c], 0x7bc85c
// 005dd559  8bc6                 mov eax, esi
// 005dd55b  5e                   pop esi
// 005dd55c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
