// from server: 100% by auto
// roc 2012-06 00a6cb10  unit: CXTPTabPaintManager::CColorSetWinXP  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6cb10
//
// 00a6cb10  8b542408             mov edx, dword ptr [esp + 8]
// 00a6cb14  57                   push edi
// 00a6cb15  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a6cb19  85d2                 test edx, edx
// 00a6cb1b  7e42                 jle 0xa6cb5f
// 00a6cb1d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a6cb21  53                   push ebx
// 00a6cb22  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00a6cb26  55                   push ebp
// 00a6cb27  56                   push esi
// 00a6cb28  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a6cb2c  8d642400             lea esp, [esp]
// 00a6cb30  8bc7                 mov eax, edi
// 00a6cb32  85db                 test ebx, ebx
// 00a6cb34  7e1c                 jle 0xa6cb52
// 00a6cb36  8d349500000000       lea esi, [edx*4]
// 00a6cb3d  8bd3                 mov edx, ebx
// 00a6cb3f  90                   nop 
// 00a6cb40  8b28                 mov ebp, dword ptr [eax]
// 00a6cb42  8929                 mov dword ptr [ecx], ebp
// 00a6cb44  83c104               add ecx, 4
// 00a6cb47  03c6                 add eax, esi
// 00a6cb49  83ea01               sub edx, 1
// 00a6cb4c  75f2                 jne 0xa6cb40
// 00a6cb4e  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a6cb52  83c704               add edi, 4
// 00a6cb55  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00a6cb5a  75d4                 jne 0xa6cb30
// 00a6cb5c  5e                   pop esi
// 00a6cb5d  5d                   pop ebp
// 00a6cb5e  5b                   pop ebx
// 00a6cb5f  5f                   pop edi
// 00a6cb60  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tab\XTPTabBaseTheme.cpp (function ?DrawRotatedBitsRight@CXTPTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tab/XTPTabBaseTheme.cpp
