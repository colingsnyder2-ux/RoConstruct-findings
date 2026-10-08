// roc 2007-08 004fb520  unit: RBX::Render::TextureProxy  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fb520
//
// 004fb520  56                   push esi
// 004fb521  57                   push edi
// 004fb522  8bf1                 mov esi, ecx
// 004fb524  33ff                 xor edi, edi
// 004fb526  397e04               cmp dword ptr [esi + 4], edi
// 004fb529  7e1a                 jle 0x4fb545
// 004fb52b  53                   push ebx
// 004fb52c  33db                 xor ebx, ebx
// 004fb52e  8bff                 mov edi, edi
// 004fb530  8b0e                 mov ecx, dword ptr [esi]
// 004fb532  03cb                 add ecx, ebx
// 004fb534  e8c7fdffff           call 0x4fb300
// 004fb539  83c701               add edi, 1
// 004fb53c  83c328               add ebx, 0x28
// 004fb53f  3b7e04               cmp edi, dword ptr [esi + 4]
// 004fb542  7cec                 jl 0x4fb530
// 004fb544  5b                   pop ebx
// 004fb545  8b06                 mov eax, dword ptr [esi]
// 004fb547  50                   push eax
// 004fb548  e8c3420000           call 0x4ff810
// 004fb54d  83c404               add esp, 4
// 004fb550  5f                   pop edi
// 004fb551  c70600000000         mov dword ptr [esi], 0
// 004fb557  c7460400000000       mov dword ptr [esi + 4], 0
// 004fb55e  c7460800000000       mov dword ptr [esi + 8], 0
// 004fb565  5e                   pop esi
// 004fb566  c3                   ret 
// library rbxgs-render/Material.cpp (function ??1?$Array@VLevel@Material@Render@RBX@@@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
