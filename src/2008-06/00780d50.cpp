// roc 2008-06 00780d50  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00780d50
//
// 00780d50  8b542408             mov edx, dword ptr [esp + 8]
// 00780d54  8b442410             mov eax, dword ptr [esp + 0x10]
// 00780d58  83ec10               sub esp, 0x10
// 00780d5b  53                   push ebx
// 00780d5c  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00780d60  55                   push ebp
// 00780d61  8b29                 mov ebp, dword ptr [ecx]
// 00780d63  56                   push esi
// 00780d64  8b742420             mov esi, dword ptr [esp + 0x20]
// 00780d68  8916                 mov dword ptr [esi], edx
// 00780d6a  57                   push edi
// 00780d6b  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00780d6f  895e04               mov dword ptr [esi + 4], ebx
// 00780d72  894608               mov dword ptr [esi + 8], eax
// 00780d75  8b442434             mov eax, dword ptr [esp + 0x34]
// 00780d79  57                   push edi
// 00780d7a  83ec10               sub esp, 0x10
// 00780d7d  89460c               mov dword ptr [esi + 0xc], eax
// 00780d80  8bc4                 mov eax, esp
// 00780d82  8910                 mov dword ptr [eax], edx
// 00780d84  8b542444             mov edx, dword ptr [esp + 0x44]
// 00780d88  895804               mov dword ptr [eax + 4], ebx
// 00780d8b  895008               mov dword ptr [eax + 8], edx
// 00780d8e  8b542448             mov edx, dword ptr [esp + 0x48]
// 00780d92  89500c               mov dword ptr [eax + 0xc], edx
// 00780d95  8b5508               mov edx, dword ptr [ebp + 8]
// 00780d98  8d442424             lea eax, [esp + 0x24]
// 00780d9c  50                   push eax
// 00780d9d  ffd2                 call edx
// 00780d9f  8b07                 mov eax, dword ptr [edi]
// 00780da1  8b5048               mov edx, dword ptr [eax + 0x48]
// 00780da4  8bcf                 mov ecx, edi
// 00780da6  ffd2                 call edx
// 00780da8  83f803               cmp eax, 3
// 00780dab  774a                 ja 0x780df7
// 00780dad  ff2485040e7800       jmp dword ptr [eax*4 + 0x780e04]
// 00780db4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00780db8  48                   dec eax
// 00780db9  894604               mov dword ptr [esi + 4], eax
// 00780dbc  8bc6                 mov eax, esi
// 00780dbe  5f                   pop edi
// 00780dbf  5e                   pop esi
// 00780dc0  5d                   pop ebp
// 00780dc1  5b                   pop ebx
// 00780dc2  83c410               add esp, 0x10
// 00780dc5  c21800               ret 0x18
// 00780dc8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00780dcc  49                   dec ecx
// 00780dcd  890e                 mov dword ptr [esi], ecx
// 00780dcf  8bc6                 mov eax, esi
// 00780dd1  5f                   pop edi
// 00780dd2  5e                   pop esi
// 00780dd3  5d                   pop ebp
// 00780dd4  5b                   pop ebx
// 00780dd5  83c410               add esp, 0x10
// 00780dd8  c21800               ret 0x18
// 00780ddb  8b542414             mov edx, dword ptr [esp + 0x14]
// 00780ddf  42                   inc edx
// 00780de0  89560c               mov dword ptr [esi + 0xc], edx
// 00780de3  8bc6                 mov eax, esi
// 00780de5  5f                   pop edi
// 00780de6  5e                   pop esi
// 00780de7  5d                   pop ebp
// 00780de8  5b                   pop ebx
// 00780de9  83c410               add esp, 0x10
// 00780dec  c21800               ret 0x18
// 00780def  8b442410             mov eax, dword ptr [esp + 0x10]
// 00780df3  40                   inc eax
// 00780df4  894608               mov dword ptr [esi + 8], eax
// 00780df7  5f                   pop edi
// 00780df8  8bc6                 mov eax, esi
// 00780dfa  5e                   pop esi
// 00780dfb  5d                   pop ebp
// 00780dfc  5b                   pop ebx
// 00780dfd  83c410               add esp, 0x10
// 00780e00  c21800               ret 0x18
// 00780e03  90                   nop 
// 00780e04  b40d                 mov ah, 0xd
// 00780e06  7800                 js 0x780e08
// 00780e08  c80d7800             enter 0x780d, 0
// 00780e0c  db0d7800ef0d         fisttp dword ptr [0xdef0078]
// 00780e12  7800                 js 0x780e14
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?GetClientRect@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
