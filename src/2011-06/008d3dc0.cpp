// roc 2011-06 008d3dc0  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3dc0
//
// 008d3dc0  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d3dc4  8b442408             mov eax, dword ptr [esp + 8]
// 008d3dc8  03c2                 add eax, edx
// 008d3dca  99                   cdq 
// 008d3dcb  2bc2                 sub eax, edx
// 008d3dcd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008d3dd1  53                   push ebx
// 008d3dd2  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 008d3dd5  56                   push esi
// 008d3dd6  8bf0                 mov esi, eax
// 008d3dd8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008d3ddc  03c2                 add eax, edx
// 008d3dde  99                   cdq 
// 008d3ddf  2bc2                 sub eax, edx
// 008d3de1  57                   push edi
// 008d3de2  8bf8                 mov edi, eax
// 008d3de4  8b03                 mov eax, dword ptr [ebx]
// 008d3de6  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d3de9  8bcb                 mov ecx, ebx
// 008d3deb  d1fe                 sar esi, 1
// 008d3ded  d1ff                 sar edi, 1
// 008d3def  ffd2                 call edx
// 008d3df1  83f802               cmp eax, 2
// 008d3df4  740d                 je 0x8d3e03
// 008d3df6  8b03                 mov eax, dword ptr [ebx]
// 008d3df8  8b5048               mov edx, dword ptr [eax + 0x48]
// 008d3dfb  8bcb                 mov ecx, ebx
// 008d3dfd  ffd2                 call edx
// 008d3dff  85c0                 test eax, eax
// 008d3e01  7528                 jne 0x8d3e2b
// 008d3e03  8d4f03               lea ecx, [edi + 3]
// 008d3e06  51                   push ecx
// 008d3e07  8d46fe               lea eax, [esi - 2]
// 008d3e0a  50                   push eax
// 008d3e0b  8d5602               lea edx, [esi + 2]
// 008d3e0e  8d77ff               lea esi, [edi - 1]
// 008d3e11  56                   push esi
// 008d3e12  52                   push edx
// 008d3e13  83c7fb               add edi, -5
// 008d3e16  57                   push edi
// 008d3e17  50                   push eax
// 008d3e18  8b442428             mov eax, dword ptr [esp + 0x28]
// 008d3e1c  50                   push eax
// 008d3e1d  e85e8ef8ff           call 0x85cc80
// 008d3e22  83c41c               add esp, 0x1c
// 008d3e25  5f                   pop edi
// 008d3e26  5e                   pop esi
// 008d3e27  5b                   pop ebx
// 008d3e28  c21400               ret 0x14
// 008d3e2b  8d47fe               lea eax, [edi - 2]
// 008d3e2e  50                   push eax
// 008d3e2f  8d4e03               lea ecx, [esi + 3]
// 008d3e32  51                   push ecx
// 008d3e33  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d3e37  8d56ff               lea edx, [esi - 1]
// 008d3e3a  83c702               add edi, 2
// 008d3e3d  57                   push edi
// 008d3e3e  52                   push edx
// 008d3e3f  50                   push eax
// 008d3e40  83c6fb               add esi, -5
// 008d3e43  56                   push esi
// 008d3e44  51                   push ecx
// 008d3e45  e8368ef8ff           call 0x85cc80
// 008d3e4a  83c41c               add esp, 0x1c
// 008d3e4d  5f                   pop edi
// 008d3e4e  5e                   pop esi
// 008d3e4f  5b                   pop ebx
// 008d3e50  c21400               ret 0x14
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonArrowRight@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
