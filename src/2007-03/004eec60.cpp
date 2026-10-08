// roc 2007-03 004eec60  unit: seg_004e0000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eec60
//
// 004eec60  56                   push esi
// 004eec61  57                   push edi
// 004eec62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004eec66  8a07                 mov al, byte ptr [edi]
// 004eec68  8bf1                 mov esi, ecx
// 004eec6a  8806                 mov byte ptr [esi], al
// 004eec6c  8b4f04               mov ecx, dword ptr [edi + 4]
// 004eec6f  51                   push ecx
// 004eec70  8d4e04               lea ecx, [esi + 4]
// 004eec73  e81864f8ff           call 0x475090
// 004eec78  8b5708               mov edx, dword ptr [edi + 8]
// 004eec7b  52                   push edx
// 004eec7c  8d4e08               lea ecx, [esi + 8]
// 004eec7f  e80c64f8ff           call 0x475090
// 004eec84  d9470c               fld dword ptr [edi + 0xc]
// 004eec87  d95e0c               fstp dword ptr [esi + 0xc]
// 004eec8a  8bc6                 mov eax, esi
// 004eec8c  d94710               fld dword ptr [edi + 0x10]
// 004eec8f  d95e10               fstp dword ptr [esi + 0x10]
// 004eec92  d94714               fld dword ptr [edi + 0x14]
// 004eec95  d95e14               fstp dword ptr [esi + 0x14]
// 004eec98  d94718               fld dword ptr [edi + 0x18]
// 004eec9b  d95e18               fstp dword ptr [esi + 0x18]
// 004eec9e  d9471c               fld dword ptr [edi + 0x1c]
// 004eeca1  d95e1c               fstp dword ptr [esi + 0x1c]
// 004eeca4  d94720               fld dword ptr [edi + 0x20]
// 004eeca7  d95e20               fstp dword ptr [esi + 0x20]
// 004eecaa  d94724               fld dword ptr [edi + 0x24]
// 004eecad  5f                   pop edi
// 004eecae  d95e24               fstp dword ptr [esi + 0x24]
// 004eecb1  5e                   pop esi
// 004eecb2  c20400               ret 4
// library rbxgs-render/Material.cpp (function ??4Level@Material@Render@RBX@@QAEAAV0123@ABV0123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Material.cpp
