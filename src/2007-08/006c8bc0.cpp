// from server: 100% by auto
// roc 2007-08 006c8bc0  unit: CXTPControlEditCtrl  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c8bc0
//
// 006c8bc0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006c8bc4  0faf442410           imul eax, dword ptr [esp + 0x10]
// 006c8bc9  8a542418             mov dl, byte ptr [esp + 0x18]
// 006c8bcd  03c0                 add eax, eax
// 006c8bcf  80c9ff               or cl, 0xff
// 006c8bd2  03c0                 add eax, eax
// 006c8bd4  2aca                 sub cl, dl
// 006c8bd6  85c0                 test eax, eax
// 006c8bd8  7e4d                 jle 0x6c8c27
// 006c8bda  53                   push ebx
// 006c8bdb  55                   push ebp
// 006c8bdc  0fb6e9               movzx ebp, cl
// 006c8bdf  0fb6ca               movzx ecx, dl
// 006c8be2  56                   push esi
// 006c8be3  8b742420             mov esi, dword ptr [esp + 0x20]
// 006c8be7  57                   push edi
// 006c8be8  894c2428             mov dword ptr [esp + 0x28], ecx
// 006c8bec  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006c8bf0  8bf8                 mov edi, eax
// 006c8bf2  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c8bf6  eb08                 jmp 0x6c8c00
// 006c8bf8  8da42400000000       lea esp, [esp]
// 006c8bff  90                   nop 
// 006c8c00  0fb616               movzx edx, byte ptr [esi]
// 006c8c03  0fb619               movzx ebx, byte ptr [ecx]
// 006c8c06  0faf542428           imul edx, dword ptr [esp + 0x28]
// 006c8c0b  0fafdd               imul ebx, ebp
// 006c8c0e  03d3                 add edx, ebx
// 006c8c10  c1fa08               sar edx, 8
// 006c8c13  8810                 mov byte ptr [eax], dl
// 006c8c15  83c001               add eax, 1
// 006c8c18  83c101               add ecx, 1
// 006c8c1b  83c601               add esi, 1
// 006c8c1e  83ef01               sub edi, 1
// 006c8c21  75dd                 jne 0x6c8c00
// 006c8c23  5f                   pop edi
// 006c8c24  5e                   pop esi
// 006c8c25  5d                   pop ebp
// 006c8c26  5b                   pop ebx
// 006c8c27  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBarAnimation.cpp (function ?AlphaBlendU@CXTPCommandBarAnimation@@IAEXPAE0HH0E@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBarAnimation.cpp
