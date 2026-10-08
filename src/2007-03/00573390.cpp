// roc 2007-03 00573390  unit: seg_00570000  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00573390
//
// 00573390  83ec60               sub esp, 0x60
// 00573393  8d0424               lea eax, [esp]
// 00573396  50                   push eax
// 00573397  e804ffffff           call 0x5732a0
// 0057339c  b801000000           mov eax, 1
// 005733a1  8405cccd8b00         test byte ptr [0x8bcdcc], al
// 005733a7  7520                 jne 0x5733c9
// 005733a9  d9e8                 fld1 
// 005733ab  0905cccd8b00         or dword ptr [0x8bcdcc], eax
// 005733b1  d915c0cd8b00         fst dword ptr [0x8bcdc0]
// 005733b7  d905a0727900         fld dword ptr [0x7972a0]
// 005733bd  d91dc4cd8b00         fstp dword ptr [0x8bcdc4]
// 005733c3  d91dc8cd8b00         fstp dword ptr [0x8bcdc8]
// 005733c9  68c0cd8b00           push 0x8bcdc0
// 005733ce  8d4c2404             lea ecx, [esp + 4]
// 005733d2  51                   push ecx
// 005733d3  8d542438             lea edx, [esp + 0x38]
// 005733d7  52                   push edx
// 005733d8  e8e3470300           call 0x5a7bc0
// 005733dd  d90580447a00         fld dword ptr [0x7a4480]
// 005733e3  83c404               add esp, 4
// 005733e6  d9542404             fst dword ptr [esp + 4]
// 005733ea  8d442438             lea eax, [esp + 0x38]
// 005733ee  d91c24               fstp dword ptr [esp]
// 005733f1  50                   push eax
// 005733f2  8d4c240c             lea ecx, [esp + 0xc]
// 005733f6  51                   push ecx
// 005733f7  e8143e0300           call 0x5a7210
// 005733fc  83c470               add esp, 0x70
// 005733ff  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ?aligned@PartInstance@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
