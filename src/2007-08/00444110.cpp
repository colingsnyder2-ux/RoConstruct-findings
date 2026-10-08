// roc 2007-08 00444110  unit: RBX::MergeBinder  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00444110
//
// 00444110  56                   push esi
// 00444111  8bf1                 mov esi, ecx
// 00444113  e808fcffff           call 0x443d20
// 00444118  c706b4f87800         mov dword ptr [esi], 0x78f8b4
// 0044411e  c74604acf87800       mov dword ptr [esi + 4], 0x78f8ac
// 00444125  c74610a4f87800       mov dword ptr [esi + 0x10], 0x78f8a4
// 0044412c  c7461494f87800       mov dword ptr [esi + 0x14], 0x78f894
// 00444133  c7462c84f87800       mov dword ptr [esi + 0x2c], 0x78f884
// 0044413a  c7464474f87800       mov dword ptr [esi + 0x44], 0x78f874
// 00444141  c7465c64f87800       mov dword ptr [esi + 0x5c], 0x78f864
// 00444148  c7467454f87800       mov dword ptr [esi + 0x74], 0x78f854
// 0044414f  c7868c00000044f87800 mov dword ptr [esi + 0x8c], 0x78f844
// 00444159  8bc6                 mov eax, esi
// 0044415b  5e                   pop esi
// 0044415c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
