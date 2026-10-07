// roc 2012-06 00a6cb70  unit: CXTPTabPaintManager::CColorSetWinXP  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6cb70
//
// 00a6cb70  8b542408             mov edx, dword ptr [esp + 8]
// 00a6cb74  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a6cb78  53                   push ebx
// 00a6cb79  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00a6cb7d  8bc3                 mov eax, ebx
// 00a6cb7f  0fafc2               imul eax, edx
// 00a6cb82  57                   push edi
// 00a6cb83  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a6cb87  8d4c81fc             lea ecx, [ecx + eax*4 - 4]
// 00a6cb8b  85d2                 test edx, edx
// 00a6cb8d  7e33                 jle 0xa6cbc2
// 00a6cb8f  55                   push ebp
// 00a6cb90  89542418             mov dword ptr [esp + 0x18], edx
// 00a6cb94  56                   push esi
// 00a6cb95  8bc7                 mov eax, edi
// 00a6cb97  85db                 test ebx, ebx
// 00a6cb99  7e1b                 jle 0xa6cbb6
// 00a6cb9b  8d349500000000       lea esi, [edx*4]
// 00a6cba2  8bd3                 mov edx, ebx
// 00a6cba4  8b28                 mov ebp, dword ptr [eax]
// 00a6cba6  8929                 mov dword ptr [ecx], ebp
// 00a6cba8  83e904               sub ecx, 4
// 00a6cbab  03c6                 add eax, esi
// 00a6cbad  83ea01               sub edx, 1
// 00a6cbb0  75f2                 jne 0xa6cba4
// 00a6cbb2  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a6cbb6  83c704               add edi, 4
// 00a6cbb9  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00a6cbbe  75d5                 jne 0xa6cb95
// 00a6cbc0  5e                   pop esi
// 00a6cbc1  5d                   pop ebp
// 00a6cbc2  5f                   pop edi
// 00a6cbc3  5b                   pop ebx
// 00a6cbc4  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tab\XTPTabBaseTheme.cpp (function ?DrawRotatedBitsLeft@CXTPTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tab/XTPTabBaseTheme.cpp
