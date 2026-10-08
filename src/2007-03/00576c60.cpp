// roc 2007-03 00576c60  unit: seg_00570000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00576c60
//
// 00576c60  8b442404             mov eax, dword ptr [esp + 4]
// 00576c64  3b8198010000         cmp eax, dword ptr [ecx + 0x198]
// 00576c6a  7413                 je 0x576c7f
// 00576c6c  898198010000         mov dword ptr [ecx + 0x198], eax
// 00576c72  c744240468cd8b00     mov dword ptr [esp + 4], 0x8bcd68
// 00576c7a  e9c1d1ecff           jmp 0x443e40
// 00576c7f  c20400               ret 4
// library rbxgs/v8datamodel\PartInstance.cpp (function ?setFormFactorXml@PartInstance@RBX@@QAEXW4FormFactor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
