// from server: 100% by auto
// roc 2011-06 008d3cf0  unit: CXTPTabManager::CNavigateButtonClose  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d3cf0
//
// 008d3cf0  83ec18               sub esp, 0x18
// 008d3cf3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008d3cf7  8b442420             mov eax, dword ptr [esp + 0x20]
// 008d3cfb  03c1                 add eax, ecx
// 008d3cfd  53                   push ebx
// 008d3cfe  99                   cdq 
// 008d3cff  55                   push ebp
// 008d3d00  2bc2                 sub eax, edx
// 008d3d02  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008d3d06  56                   push esi
// 008d3d07  8b742428             mov esi, dword ptr [esp + 0x28]
// 008d3d0b  57                   push edi
// 008d3d0c  8bf8                 mov edi, eax
// 008d3d0e  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008d3d12  03c2                 add eax, edx
// 008d3d14  99                   cdq 
// 008d3d15  2bc2                 sub eax, edx
// 008d3d17  8bd8                 mov ebx, eax
// 008d3d19  d1fb                 sar ebx, 1
// 008d3d1b  d1ff                 sar edi, 1
// 008d3d1d  8d6bfd               lea ebp, [ebx - 3]
// 008d3d20  8d47fc               lea eax, [edi - 4]
// 008d3d23  55                   push ebp
// 008d3d24  50                   push eax
// 008d3d25  8d4c2420             lea ecx, [esp + 0x20]
// 008d3d29  51                   push ecx
// 008d3d2a  8bce                 mov ecx, esi
// 008d3d2c  8944241c             mov dword ptr [esp + 0x1c], eax
// 008d3d30  e83b72f3ff           call 0x80af70
// 008d3d35  8d4304               lea eax, [ebx + 4]
// 008d3d38  8d4f03               lea ecx, [edi + 3]
// 008d3d3b  50                   push eax
// 008d3d3c  894c2418             mov dword ptr [esp + 0x18], ecx
// 008d3d40  51                   push ecx
// 008d3d41  8bce                 mov ecx, esi
// 008d3d43  89442434             mov dword ptr [esp + 0x34], eax
// 008d3d47  e81e72f3ff           call 0x80af6a
// 008d3d4c  8d47fd               lea eax, [edi - 3]
// 008d3d4f  55                   push ebp
// 008d3d50  50                   push eax
// 008d3d51  8d542428             lea edx, [esp + 0x28]
// 008d3d55  52                   push edx
// 008d3d56  8bce                 mov ecx, esi
// 008d3d58  89442424             mov dword ptr [esp + 0x24], eax
// 008d3d5c  e80f72f3ff           call 0x80af70
// 008d3d61  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008d3d65  50                   push eax
// 008d3d66  83c704               add edi, 4
// 008d3d69  57                   push edi
// 008d3d6a  8bce                 mov ecx, esi
// 008d3d6c  e8f971f3ff           call 0x80af6a
// 008d3d71  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d3d75  8d6b03               lea ebp, [ebx + 3]
// 008d3d78  55                   push ebp
// 008d3d79  51                   push ecx
// 008d3d7a  8d542428             lea edx, [esp + 0x28]
// 008d3d7e  52                   push edx
// 008d3d7f  8bce                 mov ecx, esi
// 008d3d81  e8ea71f3ff           call 0x80af70
// 008d3d86  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d3d8a  83c3fc               add ebx, -4
// 008d3d8d  53                   push ebx
// 008d3d8e  50                   push eax
// 008d3d8f  8bce                 mov ecx, esi
// 008d3d91  e8d471f3ff           call 0x80af6a
// 008d3d96  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008d3d9a  55                   push ebp
// 008d3d9b  51                   push ecx
// 008d3d9c  8d542428             lea edx, [esp + 0x28]
// 008d3da0  52                   push edx
// 008d3da1  8bce                 mov ecx, esi
// 008d3da3  e8c871f3ff           call 0x80af70
// 008d3da8  53                   push ebx
// 008d3da9  57                   push edi
// 008d3daa  8bce                 mov ecx, esi
// 008d3dac  e8b971f3ff           call 0x80af6a
// 008d3db1  5f                   pop edi
// 008d3db2  5e                   pop esi
// 008d3db3  5d                   pop ebp
// 008d3db4  5b                   pop ebx
// 008d3db5  83c418               add esp, 0x18
// 008d3db8  c21400               ret 0x14
// library xtp-15.2.1/Source\TabManager\XTPTabManager.cpp (function ?DrawEntry@CNavigateButtonClose@CXTPTabManager@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/TabManager/XTPTabManager.cpp
