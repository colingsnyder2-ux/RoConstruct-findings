// from server: 100% by auto
// roc 2008-06 0078a2c0  unit: CSpinButtonCtrl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a2c0
//
// 0078a2c0  56                   push esi
// 0078a2c1  8bf1                 mov esi, ecx
// 0078a2c3  e8c86bf1ff           call 0x6a0e90
// 0078a2c8  d9ee                 fldz 
// 0078a2ca  dd5658               fst qword ptr [esi + 0x58]
// 0078a2cd  33c0                 xor eax, eax
// 0078a2cf  dd5660               fst qword ptr [esi + 0x60]
// 0078a2d2  33c9                 xor ecx, ecx
// 0078a2d4  894670               mov dword ptr [esi + 0x70], eax
// 0078a2d7  dd5e68               fstp qword ptr [esi + 0x68]
// 0078a2da  c706c49d8600         mov dword ptr [esi], 0x869dc4
// 0078a2e0  894e74               mov dword ptr [esi + 0x74], ecx
// 0078a2e3  c6465401             mov byte ptr [esi + 0x54], 1
// 0078a2e7  8bc6                 mov eax, esi
// 0078a2e9  5e                   pop esi
// 0078a2ea  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ??0CXTColorBase@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
