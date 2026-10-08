// from server: 100% by auto
// roc 2008-06 0078a0a0  unit: CXTColorBase  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a0a0
//
// 0078a0a0  8b442404             mov eax, dword ptr [esp + 4]
// 0078a0a4  0fb6d0               movzx edx, al
// 0078a0a7  899168070000         mov dword ptr [ecx + 0x768], edx
// 0078a0ad  8bd0                 mov edx, eax
// 0078a0af  c1ea08               shr edx, 8
// 0078a0b2  c1e810               shr eax, 0x10
// 0078a0b5  0fb6d2               movzx edx, dl
// 0078a0b8  0fb6c0               movzx eax, al
// 0078a0bb  899170070000         mov dword ptr [ecx + 0x770], edx
// 0078a0c1  89816c070000         mov dword ptr [ecx + 0x76c], eax
// 0078a0c7  c744240400000000     mov dword ptr [esp + 4], 0
// 0078a0cf  e93a68f1ff           jmp 0x6a090e
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?UpdateRGB@CXTColorPageCustom@@IAEXK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
