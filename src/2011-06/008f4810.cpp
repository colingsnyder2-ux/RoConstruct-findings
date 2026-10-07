// roc 2011-06 008f4810  unit: CXTPTabPaintManager::CColorSetWinXP  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f4810
//
// 008f4810  8b542408             mov edx, dword ptr [esp + 8]
// 008f4814  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f4818  53                   push ebx
// 008f4819  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008f481d  8bc3                 mov eax, ebx
// 008f481f  0fafc2               imul eax, edx
// 008f4822  57                   push edi
// 008f4823  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008f4827  8d4c81fc             lea ecx, [ecx + eax*4 - 4]
// 008f482b  85d2                 test edx, edx
// 008f482d  7e33                 jle 0x8f4862
// 008f482f  55                   push ebp
// 008f4830  89542418             mov dword ptr [esp + 0x18], edx
// 008f4834  56                   push esi
// 008f4835  8bc7                 mov eax, edi
// 008f4837  85db                 test ebx, ebx
// 008f4839  7e1b                 jle 0x8f4856
// 008f483b  8d349500000000       lea esi, [edx*4]
// 008f4842  8bd3                 mov edx, ebx
// 008f4844  8b28                 mov ebp, dword ptr [eax]
// 008f4846  8929                 mov dword ptr [ecx], ebp
// 008f4848  83e904               sub ecx, 4
// 008f484b  03c6                 add eax, esi
// 008f484d  83ea01               sub edx, 1
// 008f4850  75f2                 jne 0x8f4844
// 008f4852  8b542418             mov edx, dword ptr [esp + 0x18]
// 008f4856  83c704               add edi, 4
// 008f4859  836c241c01           sub dword ptr [esp + 0x1c], 1
// 008f485e  75d5                 jne 0x8f4835
// 008f4860  5e                   pop esi
// 008f4861  5d                   pop ebp
// 008f4862  5f                   pop edi
// 008f4863  5b                   pop ebx
// 008f4864  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tab\XTPTabBaseTheme.cpp (function ?DrawRotatedBitsLeft@CXTPTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tab/XTPTabBaseTheme.cpp
