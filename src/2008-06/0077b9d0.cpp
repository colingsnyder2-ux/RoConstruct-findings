// from server: 100% by auto
// roc 2008-06 0077b9d0  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b9d0
//
// 0077b9d0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0077b9d4  8b442408             mov eax, dword ptr [esp + 8]
// 0077b9d8  03c2                 add eax, edx
// 0077b9da  99                   cdq 
// 0077b9db  2bc2                 sub eax, edx
// 0077b9dd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0077b9e1  53                   push ebx
// 0077b9e2  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0077b9e5  56                   push esi
// 0077b9e6  8bf0                 mov esi, eax
// 0077b9e8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0077b9ec  03c2                 add eax, edx
// 0077b9ee  99                   cdq 
// 0077b9ef  2bc2                 sub eax, edx
// 0077b9f1  57                   push edi
// 0077b9f2  8bf8                 mov edi, eax
// 0077b9f4  8b03                 mov eax, dword ptr [ebx]
// 0077b9f6  8b5048               mov edx, dword ptr [eax + 0x48]
// 0077b9f9  8bcb                 mov ecx, ebx
// 0077b9fb  d1fe                 sar esi, 1
// 0077b9fd  d1ff                 sar edi, 1
// 0077b9ff  ffd2                 call edx
// 0077ba01  83f802               cmp eax, 2
// 0077ba04  740d                 je 0x77ba13
// 0077ba06  8b03                 mov eax, dword ptr [ebx]
// 0077ba08  8b5048               mov edx, dword ptr [eax + 0x48]
// 0077ba0b  8bcb                 mov ecx, ebx
// 0077ba0d  ffd2                 call edx
// 0077ba0f  85c0                 test eax, eax
// 0077ba11  7528                 jne 0x77ba3b
// 0077ba13  8d4f03               lea ecx, [edi + 3]
// 0077ba16  51                   push ecx
// 0077ba17  8d46fe               lea eax, [esi - 2]
// 0077ba1a  50                   push eax
// 0077ba1b  8d5602               lea edx, [esi + 2]
// 0077ba1e  8d77ff               lea esi, [edi - 1]
// 0077ba21  56                   push esi
// 0077ba22  52                   push edx
// 0077ba23  83c7fb               add edi, -5
// 0077ba26  57                   push edi
// 0077ba27  50                   push eax
// 0077ba28  8b442428             mov eax, dword ptr [esp + 0x28]
// 0077ba2c  50                   push eax
// 0077ba2d  e8eebff7ff           call 0x6f7a20
// 0077ba32  83c41c               add esp, 0x1c
// 0077ba35  5f                   pop edi
// 0077ba36  5e                   pop esi
// 0077ba37  5b                   pop ebx
// 0077ba38  c21400               ret 0x14
// 0077ba3b  8d47fe               lea eax, [edi - 2]
// 0077ba3e  50                   push eax
// 0077ba3f  8d4e03               lea ecx, [esi + 3]
// 0077ba42  51                   push ecx
// 0077ba43  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0077ba47  8d56ff               lea edx, [esi - 1]
// 0077ba4a  83c702               add edi, 2
// 0077ba4d  57                   push edi
// 0077ba4e  52                   push edx
// 0077ba4f  50                   push eax
// 0077ba50  83c6fb               add esi, -5
// 0077ba53  56                   push esi
// 0077ba54  51                   push ecx
// 0077ba55  e8c6bff7ff           call 0x6f7a20
// 0077ba5a  83c41c               add esp, 0x1c
// 0077ba5d  5f                   pop edi
// 0077ba5e  5e                   pop esi
// 0077ba5f  5b                   pop ebx
// 0077ba60  c21400               ret 0x14
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonArrowRight@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
