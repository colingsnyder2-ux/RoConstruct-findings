// roc 2007-03 0070c050  unit: seg_00700000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0070c050
//
// 0070c050  8b542408             mov edx, dword ptr [esp + 8]
// 0070c054  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0070c058  53                   push ebx
// 0070c059  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0070c05d  8bc3                 mov eax, ebx
// 0070c05f  0fafc2               imul eax, edx
// 0070c062  85d2                 test edx, edx
// 0070c064  57                   push edi
// 0070c065  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0070c069  8d4c81fc             lea ecx, [ecx + eax*4 - 4]
// 0070c06d  7e33                 jle 0x70c0a2
// 0070c06f  55                   push ebp
// 0070c070  89542418             mov dword ptr [esp + 0x18], edx
// 0070c074  56                   push esi
// 0070c075  85db                 test ebx, ebx
// 0070c077  8bc7                 mov eax, edi
// 0070c079  7e1b                 jle 0x70c096
// 0070c07b  8d349500000000       lea esi, [edx*4]
// 0070c082  8bd3                 mov edx, ebx
// 0070c084  8b28                 mov ebp, dword ptr [eax]
// 0070c086  8929                 mov dword ptr [ecx], ebp
// 0070c088  83e904               sub ecx, 4
// 0070c08b  03c6                 add eax, esi
// 0070c08d  83ea01               sub edx, 1
// 0070c090  75f2                 jne 0x70c084
// 0070c092  8b542418             mov edx, dword ptr [esp + 0x18]
// 0070c096  83c704               add edi, 4
// 0070c099  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0070c09e  75d5                 jne 0x70c075
// 0070c0a0  5e                   pop esi
// 0070c0a1  5d                   pop ebp
// 0070c0a2  5f                   pop edi
// 0070c0a3  5b                   pop ebx
// 0070c0a4  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTabBaseTheme.cpp (function ?DrawRotatedBitsLeft@CXTTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTabBaseTheme.cpp
