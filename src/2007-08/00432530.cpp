// roc 2007-08 00432530  unit: CDataModelPropGrid  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00432530
//
// 00432530  83ec0c               sub esp, 0xc
// 00432533  53                   push ebx
// 00432534  55                   push ebp
// 00432535  56                   push esi
// 00432536  8be9                 mov ebp, ecx
// 00432538  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0043253b  395d08               cmp dword ptr [ebp + 8], ebx
// 0043253e  57                   push edi
// 0043253f  8d7d04               lea edi, [ebp + 4]
// 00432542  896c2410             mov dword ptr [esp + 0x10], ebp
// 00432546  7606                 jbe 0x43254e
// 00432548  ff15d8e67700         call dword ptr [0x77e6d8]
// 0043254e  8b7704               mov esi, dword ptr [edi + 4]
// 00432551  3b7708               cmp esi, dword ptr [edi + 8]
// 00432554  7606                 jbe 0x43255c
// 00432556  ff15d8e67700         call dword ptr [0x77e6d8]
// 0043255c  3bf3                 cmp esi, ebx
// 0043255e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00432562  89742418             mov dword ptr [esp + 0x18], esi
// 00432566  740b                 je 0x432573
// 00432568  3906                 cmp dword ptr [esi], eax
// 0043256a  7407                 je 0x432573
// 0043256c  83c604               add esi, 4
// 0043256f  3bf3                 cmp esi, ebx
// 00432571  75f5                 jne 0x432568
// 00432573  8b5f08               mov ebx, dword ptr [edi + 8]
// 00432576  395f04               cmp dword ptr [edi + 4], ebx
// 00432579  7606                 jbe 0x432581
// 0043257b  ff15d8e67700         call dword ptr [0x77e6d8]
// 00432581  85ff                 test edi, edi
// 00432583  7404                 je 0x432589
// 00432585  3bff                 cmp edi, edi
// 00432587  740a                 je 0x432593
// 00432589  ff15d8e67700         call dword ptr [0x77e6d8]
// 0043258f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00432593  3bf3                 cmp esi, ebx
// 00432595  7469                 je 0x432600
// 00432597  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0043259b  8b4500               mov eax, dword ptr [ebp]
// 0043259e  8b5008               mov edx, dword ptr [eax + 8]
// 004325a1  51                   push ecx
// 004325a2  8bcd                 mov ecx, ebp
// 004325a4  ffd2                 call edx
// 004325a6  837d1400             cmp dword ptr [ebp + 0x14], 0
// 004325aa  7430                 je 0x4325dc
// 004325ac  8b5f04               mov ebx, dword ptr [edi + 4]
// 004325af  3b5f08               cmp ebx, dword ptr [edi + 8]
// 004325b2  760a                 jbe 0x4325be
// 004325b4  ff15d8e67700         call dword ptr [0x77e6d8]
// 004325ba  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004325be  85ff                 test edi, edi
// 004325c0  7404                 je 0x4325c6
// 004325c2  3bff                 cmp edi, edi
// 004325c4  7406                 je 0x4325cc
// 004325c6  ff15d8e67700         call dword ptr [0x77e6d8]
// 004325cc  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 004325cf  8bc6                 mov eax, esi
// 004325d1  2bc3                 sub eax, ebx
// 004325d3  c1f802               sar eax, 2
// 004325d6  50                   push eax
// 004325d7  e874b0feff           call 0x41d650
// 004325dc  8b4708               mov eax, dword ptr [edi + 8]
// 004325df  8d4e04               lea ecx, [esi + 4]
// 004325e2  2bc1                 sub eax, ecx
// 004325e4  c1f802               sar eax, 2
// 004325e7  85c0                 test eax, eax
// 004325e9  7e11                 jle 0x4325fc
// 004325eb  03c0                 add eax, eax
// 004325ed  03c0                 add eax, eax
// 004325ef  50                   push eax
// 004325f0  51                   push ecx
// 004325f1  50                   push eax
// 004325f2  56                   push esi
// 004325f3  ff1548e77700         call dword ptr [0x77e748]
// 004325f9  83c410               add esp, 0x10
// 004325fc  834708fc             add dword ptr [edi + 8], -4
// 00432600  5f                   pop edi
// 00432601  5e                   pop esi
// 00432602  5d                   pop ebp
// 00432603  5b                   pop ebx
// 00432604  83c40c               add esp, 0xc
// 00432607  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ?removeListener@?$Notifier@VRunService@RBX@@VRunTransition@2@@RBX@@QBEXPAV?$Listener@VRunService@RBX@@VRunTransition@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
