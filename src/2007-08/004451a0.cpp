// roc 2007-08 004451a0  unit: VCRenderSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004451a0
//
// 004451a0  56                   push esi
// 004451a1  8bf1                 mov esi, ecx
// 004451a3  e848fdffff           call 0x444ef0
// 004451a8  c706bcfc7800         mov dword ptr [esi], 0x78fcbc
// 004451ae  c74604b4fc7800       mov dword ptr [esi + 4], 0x78fcb4
// 004451b5  c74610acfc7800       mov dword ptr [esi + 0x10], 0x78fcac
// 004451bc  c746149cfc7800       mov dword ptr [esi + 0x14], 0x78fc9c
// 004451c3  c7462c8cfc7800       mov dword ptr [esi + 0x2c], 0x78fc8c
// 004451ca  c746447cfc7800       mov dword ptr [esi + 0x44], 0x78fc7c
// 004451d1  c7465c6cfc7800       mov dword ptr [esi + 0x5c], 0x78fc6c
// 004451d8  c746745cfc7800       mov dword ptr [esi + 0x74], 0x78fc5c
// 004451df  c7868c0000004cfc7800 mov dword ptr [esi + 0x8c], 0x78fc4c
// 004451e9  8bc6                 mov eax, esi
// 004451eb  5e                   pop esi
// 004451ec  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
