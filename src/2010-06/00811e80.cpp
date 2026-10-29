// roc 2010-06 00811e80  unit: CXTSplitterWnd  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00811e80
//
// 00811e80  8b442408             mov eax, dword ptr [esp + 8]
// 00811e84  53                   push ebx
// 00811e85  56                   push esi
// 00811e86  57                   push edi
// 00811e87  8bd9                 mov ebx, ecx
// 00811e89  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00811e8d  50                   push eax
// 00811e8e  51                   push ecx
// 00811e8f  8bcb                 mov ecx, ebx
// 00811e91  e83266f9ff           call 0x7a84c8
// 00811e96  50                   push eax
// 00811e97  e8f464f9ff           call 0x7a8390
// 00811e9c  50                   push eax
// 00811e9d  e8dc5ef9ff           call 0x7a7d7e
// 00811ea2  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00811ea6  8bf0                 mov esi, eax
// 00811ea8  83c408               add esp, 8
// 00811eab  3bf7                 cmp esi, edi
// 00811ead  7508                 jne 0x811eb7
// 00811eaf  5f                   pop edi
// 00811eb0  5e                   pop esi
// 00811eb1  33c0                 xor eax, eax
// 00811eb3  5b                   pop ebx
// 00811eb4  c20c00               ret 0xc
// 00811eb7  55                   push ebp
// 00811eb8  8bce                 mov ecx, esi
// 00811eba  e847b11600           call 0x97d006
// 00811ebf  8bcf                 mov ecx, edi
// 00811ec1  8be8                 mov ebp, eax
// 00811ec3  e83eb11600           call 0x97d006
// 00811ec8  6a00                 push 0
// 00811eca  8bce                 mov ecx, esi
// 00811ecc  8944241c             mov dword ptr [esp + 0x1c], eax
// 00811ed0  e8b35df9ff           call 0x7a7c88
// 00811ed5  6a00                 push 0
// 00811ed7  8bcf                 mov ecx, edi
// 00811ed9  e8aa5df9ff           call 0x7a7c88
// 00811ede  8b542418             mov edx, dword ptr [esp + 0x18]
// 00811ee2  52                   push edx
// 00811ee3  8bce                 mov ecx, esi
// 00811ee5  e826b61600           call 0x97d510
// 00811eea  55                   push ebp
// 00811eeb  8bcf                 mov ecx, edi
// 00811eed  e81eb61600           call 0x97d510
// 00811ef2  6a05                 push 5
// 00811ef4  8bce                 mov ecx, esi
// 00811ef6  e88d5df9ff           call 0x7a7c88
// 00811efb  6a05                 push 5
// 00811efd  8bcf                 mov ecx, edi
// 00811eff  e8845df9ff           call 0x7a7c88
// 00811f04  8b03                 mov eax, dword ptr [ebx]
// 00811f06  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00811f0c  8bcb                 mov ecx, ebx
// 00811f0e  ffd2                 call edx
// 00811f10  5d                   pop ebp
// 00811f11  5f                   pop edi
// 00811f12  5e                   pop esi
// 00811f13  b801000000           mov eax, 1
// 00811f18  5b                   pop ebx
// 00811f19  c20c00               ret 0xc
// copied from an identical function in another client (function ?SwitchView@CXTSplitterWnd@@UAEHHHPAVCView@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/Controls/XTSplitterWnd.cpp
// MFC 9 afximpl.h: AFX_CX_BORDER = AFX_CY_BORDER = 1.
#define CX_BORDER 1
#define CY_BORDER 1