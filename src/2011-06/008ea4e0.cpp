// from server: 100% by auto
// roc 2011-06 008ea4e0  unit: CSpinButtonCtrl  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ea4e0
//
// 008ea4e0  56                   push esi
// 008ea4e1  8bf1                 mov esi, ecx
// 008ea4e3  e85e04f2ff           call 0x80a946
// 008ea4e8  d9ee                 fldz 
// 008ea4ea  dd5658               fst qword ptr [esi + 0x58]
// 008ea4ed  33c0                 xor eax, eax
// 008ea4ef  dd5660               fst qword ptr [esi + 0x60]
// 008ea4f2  33c9                 xor ecx, ecx
// 008ea4f4  894670               mov dword ptr [esi + 0x70], eax
// 008ea4f7  dd5e68               fstp qword ptr [esi + 0x68]
// 008ea4fa  c7061491ad00         mov dword ptr [esi], 0xad9114
// 008ea500  894e74               mov dword ptr [esi + 0x74], ecx
// 008ea503  c6465401             mov byte ptr [esi + 0x54], 1
// 008ea507  8bc6                 mov eax, esi
// 008ea509  5e                   pop esi
// 008ea50a  c3                   ret 
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ??0CXTPColorBase@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
