// from server: 100% by auto
// roc 2007-08 0071b030  unit: CXTPTabPaintManager::CColorSetWinXP  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071b030
//
// 0071b030  8b542408             mov edx, dword ptr [esp + 8]
// 0071b034  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071b038  53                   push ebx
// 0071b039  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0071b03d  8bc3                 mov eax, ebx
// 0071b03f  0fafc2               imul eax, edx
// 0071b042  85d2                 test edx, edx
// 0071b044  57                   push edi
// 0071b045  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0071b049  8d4c81fc             lea ecx, [ecx + eax*4 - 4]
// 0071b04d  7e33                 jle 0x71b082
// 0071b04f  55                   push ebp
// 0071b050  89542418             mov dword ptr [esp + 0x18], edx
// 0071b054  56                   push esi
// 0071b055  85db                 test ebx, ebx
// 0071b057  8bc7                 mov eax, edi
// 0071b059  7e1b                 jle 0x71b076
// 0071b05b  8d349500000000       lea esi, [edx*4]
// 0071b062  8bd3                 mov edx, ebx
// 0071b064  8b28                 mov ebp, dword ptr [eax]
// 0071b066  8929                 mov dword ptr [ecx], ebp
// 0071b068  83e904               sub ecx, 4
// 0071b06b  03c6                 add eax, esi
// 0071b06d  83ea01               sub edx, 1
// 0071b070  75f2                 jne 0x71b064
// 0071b072  8b542418             mov edx, dword ptr [esp + 0x18]
// 0071b076  83c704               add edi, 4
// 0071b079  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0071b07e  75d5                 jne 0x71b055
// 0071b080  5e                   pop esi
// 0071b081  5d                   pop ebp
// 0071b082  5f                   pop edi
// 0071b083  5b                   pop ebx
// 0071b084  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTabBaseTheme.cpp (function ?DrawRotatedBitsLeft@CXTTabBaseTheme@@CAXHHPAI0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTabBaseTheme.cpp
