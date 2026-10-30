// roc 2010-06 00882ed0  unit: CXTPTabManager::CNavigateButtonArrowRight  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00882ed0
//
// 00882ed0  8b542410             mov edx, dword ptr [esp + 0x10]
// 00882ed4  8b442408             mov eax, dword ptr [esp + 8]
// 00882ed8  03c2                 add eax, edx
// 00882eda  99                   cdq 
// 00882edb  2bc2                 sub eax, edx
// 00882edd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00882ee1  53                   push ebx
// 00882ee2  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 00882ee5  56                   push esi
// 00882ee6  8bf0                 mov esi, eax
// 00882ee8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00882eec  03c2                 add eax, edx
// 00882eee  99                   cdq 
// 00882eef  2bc2                 sub eax, edx
// 00882ef1  57                   push edi
// 00882ef2  8bf8                 mov edi, eax
// 00882ef4  8b03                 mov eax, dword ptr [ebx]
// 00882ef6  8b5048               mov edx, dword ptr [eax + 0x48]
// 00882ef9  8bcb                 mov ecx, ebx
// 00882efb  d1fe                 sar esi, 1
// 00882efd  d1ff                 sar edi, 1
// 00882eff  ffd2                 call edx
// 00882f01  83f802               cmp eax, 2
// 00882f04  740d                 je 0x882f13
// 00882f06  8b03                 mov eax, dword ptr [ebx]
// 00882f08  8b5048               mov edx, dword ptr [eax + 0x48]
// 00882f0b  8bcb                 mov ecx, ebx
// 00882f0d  ffd2                 call edx
// 00882f0f  85c0                 test eax, eax
// 00882f11  7528                 jne 0x882f3b
// 00882f13  8d4f03               lea ecx, [edi + 3]
// 00882f16  51                   push ecx
// 00882f17  8d46fe               lea eax, [esi - 2]
// 00882f1a  50                   push eax
// 00882f1b  8d5602               lea edx, [esi + 2]
// 00882f1e  8d77ff               lea esi, [edi - 1]
// 00882f21  56                   push esi
// 00882f22  52                   push edx
// 00882f23  83c7fb               add edi, -5
// 00882f26  57                   push edi
// 00882f27  50                   push eax
// 00882f28  8b442428             mov eax, dword ptr [esp + 0x28]
// 00882f2c  50                   push eax
// 00882f2d  e8cec2f7ff           call 0x7ff200
// 00882f32  83c41c               add esp, 0x1c
// 00882f35  5f                   pop edi
// 00882f36  5e                   pop esi
// 00882f37  5b                   pop ebx
// 00882f38  c21400               ret 0x14
// 00882f3b  8d47fe               lea eax, [edi - 2]
// 00882f3e  50                   push eax
// 00882f3f  8d4e03               lea ecx, [esi + 3]
// 00882f42  51                   push ecx
// 00882f43  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00882f47  8d56ff               lea edx, [esi - 1]
// 00882f4a  83c702               add edi, 2
// 00882f4d  57                   push edi
// 00882f4e  52                   push edx
// 00882f4f  50                   push eax
// 00882f50  83c6fb               add esi, -5
// 00882f53  56                   push esi
// 00882f54  51                   push ecx
// 00882f55  e8a6c2f7ff           call 0x7ff200
// 00882f5a  83c41c               add esp, 0x1c
// 00882f5d  5f                   pop edi
// 00882f5e  5e                   pop esi
// 00882f5f  5b                   pop ebx
// 00882f60  c21400               ret 0x14
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonArrowRight@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
