// roc 2009-12 008c84a0  unit: VCEdit::?$CXTMaskEditT  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c84a0
//
// 008c84a0  56                   push esi
// 008c84a1  8bf1                 mov esi, ecx
// 008c84a3  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008c84a7  57                   push edi
// 008c84a8  741f                 je 0x8c84c9
// 008c84aa  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c84ae  7419                 je 0x8c84c9
// 008c84b0  e8bddf0500           call 0x926472
// 008c84b5  a900080000           test eax, 0x800
// 008c84ba  750d                 jne 0x8c84c9
// 008c84bc  8d4e70               lea ecx, [esi + 0x70]
// 008c84bf  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008c84c5  84c0                 test al, al
// 008c84c7  7406                 je 0x8c84cf
// 008c84c9  6aff                 push -1
// 008c84cb  6a00                 push 0
// 008c84cd  eb18                 jmp 0x8c84e7
// 008c84cf  8d7e54               lea edi, [esi + 0x54]
// 008c84d2  6a01                 push 1
// 008c84d4  57                   push edi
// 008c84d5  8bce                 mov ecx, esi
// 008c84d7  c70700000000         mov dword ptr [edi], 0
// 008c84dd  e81ef9ffff           call 0x8c7e00
// 008c84e2  8b17                 mov edx, dword ptr [edi]
// 008c84e4  6aff                 push -1
// 008c84e6  52                   push edx
// 008c84e7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c84ea  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 008c84f0  68b1000000           push 0xb1
// 008c84f5  50                   push eax
// 008c84f6  ffd7                 call edi
// 008c84f8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c84fb  6a00                 push 0
// 008c84fd  6a00                 push 0
// 008c84ff  68b7000000           push 0xb7
// 008c8504  51                   push ecx
// 008c8505  ffd7                 call edi
// 008c8507  5f                   pop edi
// 008c8508  5e                   pop esi
// 008c8509  c3                   ret 
// copied from an identical function in another client (function ?MaskSelectAll@?$CXTMaskEditT@VCEdit@@@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp