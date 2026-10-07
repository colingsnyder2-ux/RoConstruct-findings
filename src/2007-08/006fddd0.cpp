// roc 2007-08 006fddd0  unit: CXTPTabManager::CNavigateButtonClose  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fddd0
//
// 006fddd0  83ec14               sub esp, 0x14
// 006fddd3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006fddd7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006fdddb  03c1                 add eax, ecx
// 006fdddd  53                   push ebx
// 006fddde  99                   cdq 
// 006fdddf  55                   push ebp
// 006fdde0  2bc2                 sub eax, edx
// 006fdde2  8b542428             mov edx, dword ptr [esp + 0x28]
// 006fdde6  56                   push esi
// 006fdde7  8b742424             mov esi, dword ptr [esp + 0x24]
// 006fddeb  57                   push edi
// 006fddec  8bf8                 mov edi, eax
// 006fddee  8b442438             mov eax, dword ptr [esp + 0x38]
// 006fddf2  03c2                 add eax, edx
// 006fddf4  99                   cdq 
// 006fddf5  2bc2                 sub eax, edx
// 006fddf7  8bd8                 mov ebx, eax
// 006fddf9  d1fb                 sar ebx, 1
// 006fddfb  d1ff                 sar edi, 1
// 006fddfd  8d6bfd               lea ebp, [ebx - 3]
// 006fde00  8d47fc               lea eax, [edi - 4]
// 006fde03  55                   push ebp
// 006fde04  50                   push eax
// 006fde05  8d4c241c             lea ecx, [esp + 0x1c]
// 006fde09  51                   push ecx
// 006fde0a  8bce                 mov ecx, esi
// 006fde0c  89442438             mov dword ptr [esp + 0x38], eax
// 006fde10  e8672bf3ff           call 0x63097c
// 006fde15  8d4304               lea eax, [ebx + 4]
// 006fde18  8d4f03               lea ecx, [edi + 3]
// 006fde1b  50                   push eax
// 006fde1c  894c2414             mov dword ptr [esp + 0x14], ecx
// 006fde20  51                   push ecx
// 006fde21  8bce                 mov ecx, esi
// 006fde23  89442430             mov dword ptr [esp + 0x30], eax
// 006fde27  e84a2bf3ff           call 0x630976
// 006fde2c  8d47fd               lea eax, [edi - 3]
// 006fde2f  55                   push ebp
// 006fde30  50                   push eax
// 006fde31  8d542424             lea edx, [esp + 0x24]
// 006fde35  52                   push edx
// 006fde36  8bce                 mov ecx, esi
// 006fde38  89442420             mov dword ptr [esp + 0x20], eax
// 006fde3c  e83b2bf3ff           call 0x63097c
// 006fde41  8b442428             mov eax, dword ptr [esp + 0x28]
// 006fde45  50                   push eax
// 006fde46  83c704               add edi, 4
// 006fde49  57                   push edi
// 006fde4a  8bce                 mov ecx, esi
// 006fde4c  e8252bf3ff           call 0x630976
// 006fde51  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006fde55  8d6b03               lea ebp, [ebx + 3]
// 006fde58  55                   push ebp
// 006fde59  51                   push ecx
// 006fde5a  8d542434             lea edx, [esp + 0x34]
// 006fde5e  52                   push edx
// 006fde5f  8bce                 mov ecx, esi
// 006fde61  e8162bf3ff           call 0x63097c
// 006fde66  8b442410             mov eax, dword ptr [esp + 0x10]
// 006fde6a  83c3fc               add ebx, -4
// 006fde6d  53                   push ebx
// 006fde6e  50                   push eax
// 006fde6f  8bce                 mov ecx, esi
// 006fde71  e8002bf3ff           call 0x630976
// 006fde76  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006fde7a  55                   push ebp
// 006fde7b  51                   push ecx
// 006fde7c  8d542434             lea edx, [esp + 0x34]
// 006fde80  52                   push edx
// 006fde81  8bce                 mov ecx, esi
// 006fde83  e8f42af3ff           call 0x63097c
// 006fde88  53                   push ebx
// 006fde89  57                   push edi
// 006fde8a  8bce                 mov ecx, esi
// 006fde8c  e8e52af3ff           call 0x630976
// 006fde91  5f                   pop edi
// 006fde92  5e                   pop esi
// 006fde93  5d                   pop ebp
// 006fde94  5b                   pop ebx
// 006fde95  83c414               add esp, 0x14
// 006fde98  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonClose@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
