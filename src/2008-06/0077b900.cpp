// from server: 100% by auto
// roc 2008-06 0077b900  unit: CXTPTabManager::CNavigateButtonClose  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077b900
//
// 0077b900  83ec18               sub esp, 0x18
// 0077b903  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0077b907  8b442420             mov eax, dword ptr [esp + 0x20]
// 0077b90b  03c1                 add eax, ecx
// 0077b90d  53                   push ebx
// 0077b90e  99                   cdq 
// 0077b90f  55                   push ebp
// 0077b910  2bc2                 sub eax, edx
// 0077b912  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0077b916  56                   push esi
// 0077b917  8b742428             mov esi, dword ptr [esp + 0x28]
// 0077b91b  57                   push edi
// 0077b91c  8bf8                 mov edi, eax
// 0077b91e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0077b922  03c2                 add eax, edx
// 0077b924  99                   cdq 
// 0077b925  2bc2                 sub eax, edx
// 0077b927  8bd8                 mov ebx, eax
// 0077b929  d1fb                 sar ebx, 1
// 0077b92b  d1ff                 sar edi, 1
// 0077b92d  8d6bfd               lea ebp, [ebx - 3]
// 0077b930  8d47fc               lea eax, [edi - 4]
// 0077b933  55                   push ebp
// 0077b934  50                   push eax
// 0077b935  8d4c2420             lea ecx, [esp + 0x20]
// 0077b939  51                   push ecx
// 0077b93a  8bce                 mov ecx, esi
// 0077b93c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0077b940  e8e55af2ff           call 0x6a142a
// 0077b945  8d4304               lea eax, [ebx + 4]
// 0077b948  8d4f03               lea ecx, [edi + 3]
// 0077b94b  50                   push eax
// 0077b94c  894c2418             mov dword ptr [esp + 0x18], ecx
// 0077b950  51                   push ecx
// 0077b951  8bce                 mov ecx, esi
// 0077b953  89442434             mov dword ptr [esp + 0x34], eax
// 0077b957  e8c85af2ff           call 0x6a1424
// 0077b95c  8d47fd               lea eax, [edi - 3]
// 0077b95f  55                   push ebp
// 0077b960  50                   push eax
// 0077b961  8d542428             lea edx, [esp + 0x28]
// 0077b965  52                   push edx
// 0077b966  8bce                 mov ecx, esi
// 0077b968  89442424             mov dword ptr [esp + 0x24], eax
// 0077b96c  e8b95af2ff           call 0x6a142a
// 0077b971  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0077b975  50                   push eax
// 0077b976  83c704               add edi, 4
// 0077b979  57                   push edi
// 0077b97a  8bce                 mov ecx, esi
// 0077b97c  e8a35af2ff           call 0x6a1424
// 0077b981  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0077b985  8d6b03               lea ebp, [ebx + 3]
// 0077b988  55                   push ebp
// 0077b989  51                   push ecx
// 0077b98a  8d542428             lea edx, [esp + 0x28]
// 0077b98e  52                   push edx
// 0077b98f  8bce                 mov ecx, esi
// 0077b991  e8945af2ff           call 0x6a142a
// 0077b996  8b442414             mov eax, dword ptr [esp + 0x14]
// 0077b99a  83c3fc               add ebx, -4
// 0077b99d  53                   push ebx
// 0077b99e  50                   push eax
// 0077b99f  8bce                 mov ecx, esi
// 0077b9a1  e87e5af2ff           call 0x6a1424
// 0077b9a6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0077b9aa  55                   push ebp
// 0077b9ab  51                   push ecx
// 0077b9ac  8d542428             lea edx, [esp + 0x28]
// 0077b9b0  52                   push edx
// 0077b9b1  8bce                 mov ecx, esi
// 0077b9b3  e8725af2ff           call 0x6a142a
// 0077b9b8  53                   push ebx
// 0077b9b9  57                   push edi
// 0077b9ba  8bce                 mov ecx, esi
// 0077b9bc  e8635af2ff           call 0x6a1424
// 0077b9c1  5f                   pop edi
// 0077b9c2  5e                   pop esi
// 0077b9c3  5d                   pop ebp
// 0077b9c4  5b                   pop ebx
// 0077b9c5  83c418               add esp, 0x18
// 0077b9c8  c21400               ret 0x14
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonClose@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
