// roc 2010-06 00882fa0  unit: CXTPTabManager::CNavigateButtonArrowLeft  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00882fa0
//
// 00882fa0  8b542410             mov edx, dword ptr [esp + 0x10]
// 00882fa4  8b442408             mov eax, dword ptr [esp + 8]
// 00882fa8  03c2                 add eax, edx
// 00882faa  99                   cdq 
// 00882fab  2bc2                 sub eax, edx
// 00882fad  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00882fb1  53                   push ebx
// 00882fb2  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 00882fb5  56                   push esi
// 00882fb6  8bf0                 mov esi, eax
// 00882fb8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00882fbc  03c2                 add eax, edx
// 00882fbe  99                   cdq 
// 00882fbf  2bc2                 sub eax, edx
// 00882fc1  57                   push edi
// 00882fc2  8bf8                 mov edi, eax
// 00882fc4  8b03                 mov eax, dword ptr [ebx]
// 00882fc6  8b5048               mov edx, dword ptr [eax + 0x48]
// 00882fc9  8bcb                 mov ecx, ebx
// 00882fcb  d1fe                 sar esi, 1
// 00882fcd  d1ff                 sar edi, 1
// 00882fcf  ffd2                 call edx
// 00882fd1  83f802               cmp eax, 2
// 00882fd4  740d                 je 0x882fe3
// 00882fd6  8b03                 mov eax, dword ptr [ebx]
// 00882fd8  8b5048               mov edx, dword ptr [eax + 0x48]
// 00882fdb  8bcb                 mov ecx, ebx
// 00882fdd  ffd2                 call edx
// 00882fdf  85c0                 test eax, eax
// 00882fe1  7528                 jne 0x88300b
// 00882fe3  8d4f03               lea ecx, [edi + 3]
// 00882fe6  51                   push ecx
// 00882fe7  8d4602               lea eax, [esi + 2]
// 00882fea  50                   push eax
// 00882feb  8d56fe               lea edx, [esi - 2]
// 00882fee  8d77ff               lea esi, [edi - 1]
// 00882ff1  56                   push esi
// 00882ff2  52                   push edx
// 00882ff3  83c7fb               add edi, -5
// 00882ff6  57                   push edi
// 00882ff7  50                   push eax
// 00882ff8  8b442428             mov eax, dword ptr [esp + 0x28]
// 00882ffc  50                   push eax
// 00882ffd  e8fec1f7ff           call 0x7ff200
// 00883002  83c41c               add esp, 0x1c
// 00883005  5f                   pop edi
// 00883006  5e                   pop esi
// 00883007  5b                   pop ebx
// 00883008  c21400               ret 0x14
// 0088300b  8d4702               lea eax, [edi + 2]
// 0088300e  50                   push eax
// 0088300f  8d4e03               lea ecx, [esi + 3]
// 00883012  51                   push ecx
// 00883013  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00883017  8d56ff               lea edx, [esi - 1]
// 0088301a  83c7fe               add edi, -2
// 0088301d  57                   push edi
// 0088301e  52                   push edx
// 0088301f  50                   push eax
// 00883020  83c6fb               add esi, -5
// 00883023  56                   push esi
// 00883024  51                   push ecx
// 00883025  e8d6c1f7ff           call 0x7ff200
// 0088302a  83c41c               add esp, 0x1c
// 0088302d  5f                   pop edi
// 0088302e  5e                   pop esi
// 0088302f  5b                   pop ebx
// 00883030  c21400               ret 0x14
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonArrowLeft@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
