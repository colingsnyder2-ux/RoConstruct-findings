// roc 2007-08 0071afd0  unit: CXTPTabPaintManager::CColorSetWinXP  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071afd0
//
// 0071afd0  8b542408             mov edx, dword ptr [esp + 8]
// 0071afd4  85d2                 test edx, edx
// 0071afd6  57                   push edi
// 0071afd7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0071afdb  7e42                 jle 0x71b01f
// 0071afdd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0071afe1  53                   push ebx
// 0071afe2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0071afe6  55                   push ebp
// 0071afe7  56                   push esi
// 0071afe8  8954241c             mov dword ptr [esp + 0x1c], edx
// 0071afec  8d642400             lea esp, [esp]
// 0071aff0  85db                 test ebx, ebx
// 0071aff2  8bc7                 mov eax, edi
// 0071aff4  7e1c                 jle 0x71b012
// 0071aff6  8d349500000000       lea esi, [edx*4]
// 0071affd  8bd3                 mov edx, ebx
// 0071afff  90                   nop 
// 0071b000  8b28                 mov ebp, dword ptr [eax]
// 0071b002  8929                 mov dword ptr [ecx], ebp
// 0071b004  83c104               add ecx, 4
// 0071b007  03c6                 add eax, esi
// 0071b009  83ea01               sub edx, 1
// 0071b00c  75f2                 jne 0x71b000
// 0071b00e  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071b012  83c704               add edi, 4
// 0071b015  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0071b01a  75d4                 jne 0x71aff0
// 0071b01c  5e                   pop esi
// 0071b01d  5d                   pop ebp
// 0071b01e  5b                   pop ebx
// 0071b01f  5f                   pop edi
// 0071b020  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTabBaseTheme.cpp (function ?DrawRotatedBitsRight@CXTTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTabBaseTheme.cpp
