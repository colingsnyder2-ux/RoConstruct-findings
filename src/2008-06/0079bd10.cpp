// from server: 100% by auto
// roc 2008-06 0079bd10  unit: CXTPTabPaintManager::CColorSetWinXP  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079bd10
//
// 0079bd10  8b542408             mov edx, dword ptr [esp + 8]
// 0079bd14  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079bd18  53                   push ebx
// 0079bd19  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0079bd1d  8bc3                 mov eax, ebx
// 0079bd1f  0fafc2               imul eax, edx
// 0079bd22  57                   push edi
// 0079bd23  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0079bd27  8d4c81fc             lea ecx, [ecx + eax*4 - 4]
// 0079bd2b  85d2                 test edx, edx
// 0079bd2d  7e33                 jle 0x79bd62
// 0079bd2f  55                   push ebp
// 0079bd30  89542418             mov dword ptr [esp + 0x18], edx
// 0079bd34  56                   push esi
// 0079bd35  8bc7                 mov eax, edi
// 0079bd37  85db                 test ebx, ebx
// 0079bd39  7e1b                 jle 0x79bd56
// 0079bd3b  8d349500000000       lea esi, [edx*4]
// 0079bd42  8bd3                 mov edx, ebx
// 0079bd44  8b28                 mov ebp, dword ptr [eax]
// 0079bd46  8929                 mov dword ptr [ecx], ebp
// 0079bd48  83e904               sub ecx, 4
// 0079bd4b  03c6                 add eax, esi
// 0079bd4d  83ea01               sub edx, 1
// 0079bd50  75f2                 jne 0x79bd44
// 0079bd52  8b542418             mov edx, dword ptr [esp + 0x18]
// 0079bd56  83c704               add edi, 4
// 0079bd59  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0079bd5e  75d5                 jne 0x79bd35
// 0079bd60  5e                   pop esi
// 0079bd61  5d                   pop ebp
// 0079bd62  5f                   pop edi
// 0079bd63  5b                   pop ebx
// 0079bd64  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTabBaseTheme.cpp (function ?DrawRotatedBitsLeft@CXTTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTabBaseTheme.cpp
