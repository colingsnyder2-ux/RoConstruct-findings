// roc 2012-06 00a628c0  unit: CSpinButtonCtrl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a628c0
//
// 00a628c0  56                   push esi
// 00a628c1  8bf1                 mov esi, ecx
// 00a628c3  e8fe00f2ff           call 0x9829c6
// 00a628c8  d9ee                 fldz 
// 00a628ca  dd5658               fst qword ptr [esi + 0x58]
// 00a628cd  33c0                 xor eax, eax
// 00a628cf  dd5660               fst qword ptr [esi + 0x60]
// 00a628d2  33c9                 xor ecx, ecx
// 00a628d4  894670               mov dword ptr [esi + 0x70], eax
// 00a628d7  dd5e68               fstp qword ptr [esi + 0x68]
// 00a628da  c706ac47c200         mov dword ptr [esi], 0xc247ac
// 00a628e0  894e74               mov dword ptr [esi + 0x74], ecx
// 00a628e3  c6465401             mov byte ptr [esi + 0x54], 1
// 00a628e7  8bc6                 mov eax, esi
// 00a628e9  5e                   pop esi
// 00a628ea  c3                   ret 
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ??0CXTPColorBase@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
