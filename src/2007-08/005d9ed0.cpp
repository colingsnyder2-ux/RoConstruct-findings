// roc 2007-08 005d9ed0  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d9ed0
//
// 005d9ed0  56                   push esi
// 005d9ed1  8bf1                 mov esi, ecx
// 005d9ed3  e84886f6ff           call 0x542520
// 005d9ed8  c70694c07b00         mov dword ptr [esi], 0x7bc094
// 005d9ede  c746048cc07b00       mov dword ptr [esi + 4], 0x7bc08c
// 005d9ee5  c7461084c07b00       mov dword ptr [esi + 0x10], 0x7bc084
// 005d9eec  c7461474c07b00       mov dword ptr [esi + 0x14], 0x7bc074
// 005d9ef3  c7462c64c07b00       mov dword ptr [esi + 0x2c], 0x7bc064
// 005d9efa  c7464454c07b00       mov dword ptr [esi + 0x44], 0x7bc054
// 005d9f01  c7465c44c07b00       mov dword ptr [esi + 0x5c], 0x7bc044
// 005d9f08  c7467434c07b00       mov dword ptr [esi + 0x74], 0x7bc034
// 005d9f0f  c7868c00000024c07b00 mov dword ptr [esi + 0x8c], 0x7bc024
// 005d9f19  8bc6                 mov eax, esi
// 005d9f1b  5e                   pop esi
// 005d9f1c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
