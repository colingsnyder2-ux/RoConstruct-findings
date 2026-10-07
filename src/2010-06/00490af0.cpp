// roc 2010-06 00490af0  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00490af0
//
// 00490af0  56                   push esi
// 00490af1  57                   push edi
// 00490af2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00490af6  57                   push edi
// 00490af7  8bf1                 mov esi, ecx
// 00490af9  e872550c00           call 0x556070
// 00490afe  d94724               fld dword ptr [edi + 0x24]
// 00490b01  d95e24               fstp dword ptr [esi + 0x24]
// 00490b04  8bc6                 mov eax, esi
// 00490b06  d94728               fld dword ptr [edi + 0x28]
// 00490b09  d95e28               fstp dword ptr [esi + 0x28]
// 00490b0c  d9472c               fld dword ptr [edi + 0x2c]
// 00490b0f  5f                   pop edi
// 00490b10  d95e2c               fstp dword ptr [esi + 0x2c]
// 00490b13  5e                   pop esi
// 00490b14  c20400               ret 4
// library g3d-6.09/G3Dcpp\Box.cpp (function ??0CoordinateFrame@G3D@@QAE@ABV01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Box.cpp
