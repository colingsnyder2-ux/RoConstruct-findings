// from server: 100% by auto
// roc 2008-06 0079bcb0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079bcb0
//
// 0079bcb0  8b542408             mov edx, dword ptr [esp + 8]
// 0079bcb4  57                   push edi
// 0079bcb5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0079bcb9  85d2                 test edx, edx
// 0079bcbb  7e42                 jle 0x79bcff
// 0079bcbd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079bcc1  53                   push ebx
// 0079bcc2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0079bcc6  55                   push ebp
// 0079bcc7  56                   push esi
// 0079bcc8  8954241c             mov dword ptr [esp + 0x1c], edx
// 0079bccc  8d642400             lea esp, [esp]
// 0079bcd0  8bc7                 mov eax, edi
// 0079bcd2  85db                 test ebx, ebx
// 0079bcd4  7e1c                 jle 0x79bcf2
// 0079bcd6  8d349500000000       lea esi, [edx*4]
// 0079bcdd  8bd3                 mov edx, ebx
// 0079bcdf  90                   nop 
// 0079bce0  8b28                 mov ebp, dword ptr [eax]
// 0079bce2  8929                 mov dword ptr [ecx], ebp
// 0079bce4  83c104               add ecx, 4
// 0079bce7  03c6                 add eax, esi
// 0079bce9  83ea01               sub edx, 1
// 0079bcec  75f2                 jne 0x79bce0
// 0079bcee  8b542418             mov edx, dword ptr [esp + 0x18]
// 0079bcf2  83c704               add edi, 4
// 0079bcf5  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0079bcfa  75d4                 jne 0x79bcd0
// 0079bcfc  5e                   pop esi
// 0079bcfd  5d                   pop ebp
// 0079bcfe  5b                   pop ebx
// 0079bcff  5f                   pop edi
// 0079bd00  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTabBaseTheme.cpp (function ?DrawRotatedBitsRight@CXTTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTabBaseTheme.cpp
