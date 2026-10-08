// roc 2007-08 004fb0e0  unit: RBX::Render::TextureProxy  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fb0e0
//
// 004fb0e0  56                   push esi
// 004fb0e1  57                   push edi
// 004fb0e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004fb0e6  8a07                 mov al, byte ptr [edi]
// 004fb0e8  8bf1                 mov esi, ecx
// 004fb0ea  8806                 mov byte ptr [esi], al
// 004fb0ec  8b4f04               mov ecx, dword ptr [edi + 4]
// 004fb0ef  51                   push ecx
// 004fb0f0  8d4e04               lea ecx, [esi + 4]
// 004fb0f3  e8789ef7ff           call 0x474f70
// 004fb0f8  8b5708               mov edx, dword ptr [edi + 8]
// 004fb0fb  52                   push edx
// 004fb0fc  8d4e08               lea ecx, [esi + 8]
// 004fb0ff  e86c9ef7ff           call 0x474f70
// 004fb104  d9470c               fld dword ptr [edi + 0xc]
// 004fb107  d95e0c               fstp dword ptr [esi + 0xc]
// 004fb10a  8bc6                 mov eax, esi
// 004fb10c  d94710               fld dword ptr [edi + 0x10]
// 004fb10f  d95e10               fstp dword ptr [esi + 0x10]
// 004fb112  d94714               fld dword ptr [edi + 0x14]
// 004fb115  d95e14               fstp dword ptr [esi + 0x14]
// 004fb118  d94718               fld dword ptr [edi + 0x18]
// 004fb11b  d95e18               fstp dword ptr [esi + 0x18]
// 004fb11e  d9471c               fld dword ptr [edi + 0x1c]
// 004fb121  d95e1c               fstp dword ptr [esi + 0x1c]
// 004fb124  d94720               fld dword ptr [edi + 0x20]
// 004fb127  d95e20               fstp dword ptr [esi + 0x20]
// 004fb12a  d94724               fld dword ptr [edi + 0x24]
// 004fb12d  5f                   pop edi
// 004fb12e  d95e24               fstp dword ptr [esi + 0x24]
// 004fb131  5e                   pop esi
// 004fb132  c20400               ret 4
// library rbxgs-render/Material.cpp (function ??4Level@Material@Render@RBX@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
