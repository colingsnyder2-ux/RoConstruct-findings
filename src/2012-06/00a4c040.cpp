// roc 2012-06 00a4c040  unit: CXTPTabManager::CNavigateButtonClose  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4c040
//
// 00a4c040  83ec18               sub esp, 0x18
// 00a4c043  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a4c047  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a4c04b  03c1                 add eax, ecx
// 00a4c04d  53                   push ebx
// 00a4c04e  99                   cdq 
// 00a4c04f  55                   push ebp
// 00a4c050  2bc2                 sub eax, edx
// 00a4c052  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a4c056  56                   push esi
// 00a4c057  8b742428             mov esi, dword ptr [esp + 0x28]
// 00a4c05b  57                   push edi
// 00a4c05c  8bf8                 mov edi, eax
// 00a4c05e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a4c062  03c2                 add eax, edx
// 00a4c064  99                   cdq 
// 00a4c065  2bc2                 sub eax, edx
// 00a4c067  8bd8                 mov ebx, eax
// 00a4c069  d1fb                 sar ebx, 1
// 00a4c06b  d1ff                 sar edi, 1
// 00a4c06d  8d6bfd               lea ebp, [ebx - 3]
// 00a4c070  8d47fc               lea eax, [edi - 4]
// 00a4c073  55                   push ebp
// 00a4c074  50                   push eax
// 00a4c075  8d4c2420             lea ecx, [esp + 0x20]
// 00a4c079  51                   push ecx
// 00a4c07a  8bce                 mov ecx, esi
// 00a4c07c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a4c080  e87d6ff3ff           call 0x983002
// 00a4c085  8d4304               lea eax, [ebx + 4]
// 00a4c088  8d4f03               lea ecx, [edi + 3]
// 00a4c08b  50                   push eax
// 00a4c08c  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a4c090  51                   push ecx
// 00a4c091  8bce                 mov ecx, esi
// 00a4c093  89442434             mov dword ptr [esp + 0x34], eax
// 00a4c097  e8606ff3ff           call 0x982ffc
// 00a4c09c  8d47fd               lea eax, [edi - 3]
// 00a4c09f  55                   push ebp
// 00a4c0a0  50                   push eax
// 00a4c0a1  8d542428             lea edx, [esp + 0x28]
// 00a4c0a5  52                   push edx
// 00a4c0a6  8bce                 mov ecx, esi
// 00a4c0a8  89442424             mov dword ptr [esp + 0x24], eax
// 00a4c0ac  e8516ff3ff           call 0x983002
// 00a4c0b1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a4c0b5  50                   push eax
// 00a4c0b6  83c704               add edi, 4
// 00a4c0b9  57                   push edi
// 00a4c0ba  8bce                 mov ecx, esi
// 00a4c0bc  e83b6ff3ff           call 0x982ffc
// 00a4c0c1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a4c0c5  8d6b03               lea ebp, [ebx + 3]
// 00a4c0c8  55                   push ebp
// 00a4c0c9  51                   push ecx
// 00a4c0ca  8d542428             lea edx, [esp + 0x28]
// 00a4c0ce  52                   push edx
// 00a4c0cf  8bce                 mov ecx, esi
// 00a4c0d1  e82c6ff3ff           call 0x983002
// 00a4c0d6  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a4c0da  83c3fc               add ebx, -4
// 00a4c0dd  53                   push ebx
// 00a4c0de  50                   push eax
// 00a4c0df  8bce                 mov ecx, esi
// 00a4c0e1  e8166ff3ff           call 0x982ffc
// 00a4c0e6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a4c0ea  55                   push ebp
// 00a4c0eb  51                   push ecx
// 00a4c0ec  8d542428             lea edx, [esp + 0x28]
// 00a4c0f0  52                   push edx
// 00a4c0f1  8bce                 mov ecx, esi
// 00a4c0f3  e80a6ff3ff           call 0x983002
// 00a4c0f8  53                   push ebx
// 00a4c0f9  57                   push edi
// 00a4c0fa  8bce                 mov ecx, esi
// 00a4c0fc  e8fb6ef3ff           call 0x982ffc
// 00a4c101  5f                   pop edi
// 00a4c102  5e                   pop esi
// 00a4c103  5d                   pop ebp
// 00a4c104  5b                   pop ebx
// 00a4c105  83c418               add esp, 0x18
// 00a4c108  c21400               ret 0x14
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonClose@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
