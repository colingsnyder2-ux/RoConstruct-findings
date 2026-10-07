// roc 2011-06 008f47b0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f47b0
//
// 008f47b0  8b542408             mov edx, dword ptr [esp + 8]
// 008f47b4  57                   push edi
// 008f47b5  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008f47b9  85d2                 test edx, edx
// 008f47bb  7e42                 jle 0x8f47ff
// 008f47bd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008f47c1  53                   push ebx
// 008f47c2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008f47c6  55                   push ebp
// 008f47c7  56                   push esi
// 008f47c8  8954241c             mov dword ptr [esp + 0x1c], edx
// 008f47cc  8d642400             lea esp, [esp]
// 008f47d0  8bc7                 mov eax, edi
// 008f47d2  85db                 test ebx, ebx
// 008f47d4  7e1c                 jle 0x8f47f2
// 008f47d6  8d349500000000       lea esi, [edx*4]
// 008f47dd  8bd3                 mov edx, ebx
// 008f47df  90                   nop 
// 008f47e0  8b28                 mov ebp, dword ptr [eax]
// 008f47e2  8929                 mov dword ptr [ecx], ebp
// 008f47e4  83c104               add ecx, 4
// 008f47e7  03c6                 add eax, esi
// 008f47e9  83ea01               sub edx, 1
// 008f47ec  75f2                 jne 0x8f47e0
// 008f47ee  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f47f2  83c704               add edi, 4
// 008f47f5  836c241c01           sub dword ptr [esp + 0x1c], 1
// 008f47fa  75d4                 jne 0x8f47d0
// 008f47fc  5e                   pop esi
// 008f47fd  5d                   pop ebp
// 008f47fe  5b                   pop ebx
// 008f47ff  5f                   pop edi
// 008f4800  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tab\XTPTabBaseTheme.cpp (function ?DrawRotatedBitsRight@CXTPTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tab/XTPTabBaseTheme.cpp
