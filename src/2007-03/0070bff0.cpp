// roc 2007-03 0070bff0  unit: seg_00700000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070bff0
//
// 0070bff0  8b542408             mov edx, dword ptr [esp + 8]
// 0070bff4  85d2                 test edx, edx
// 0070bff6  57                   push edi
// 0070bff7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0070bffb  7e42                 jle 0x70c03f
// 0070bffd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0070c001  53                   push ebx
// 0070c002  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0070c006  55                   push ebp
// 0070c007  56                   push esi
// 0070c008  8954241c             mov dword ptr [esp + 0x1c], edx
// 0070c00c  8d642400             lea esp, [esp]
// 0070c010  85db                 test ebx, ebx
// 0070c012  8bc7                 mov eax, edi
// 0070c014  7e1c                 jle 0x70c032
// 0070c016  8d349500000000       lea esi, [edx*4]
// 0070c01d  8bd3                 mov edx, ebx
// 0070c01f  90                   nop 
// 0070c020  8b28                 mov ebp, dword ptr [eax]
// 0070c022  8929                 mov dword ptr [ecx], ebp
// 0070c024  83c104               add ecx, 4
// 0070c027  03c6                 add eax, esi
// 0070c029  83ea01               sub edx, 1
// 0070c02c  75f2                 jne 0x70c020
// 0070c02e  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070c032  83c704               add edi, 4
// 0070c035  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0070c03a  75d4                 jne 0x70c010
// 0070c03c  5e                   pop esi
// 0070c03d  5d                   pop ebp
// 0070c03e  5b                   pop ebx
// 0070c03f  5f                   pop edi
// 0070c040  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTabBaseTheme.cpp (function ?DrawRotatedBitsRight@CXTTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTabBaseTheme.cpp
