// roc 2007-03 005610d0  unit: seg_00560000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005610d0
//
// 005610d0  56                   push esi
// 005610d1  57                   push edi
// 005610d2  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005610d6  8bf1                 mov esi, ecx
// 005610d8  8b4608               mov eax, dword ptr [esi + 8]
// 005610db  8d4f04               lea ecx, [edi + 4]
// 005610de  2bc1                 sub eax, ecx
// 005610e0  c1f802               sar eax, 2
// 005610e3  85c0                 test eax, eax
// 005610e5  7e11                 jle 0x5610f8
// 005610e7  03c0                 add eax, eax
// 005610e9  03c0                 add eax, eax
// 005610eb  50                   push eax
// 005610ec  51                   push ecx
// 005610ed  50                   push eax
// 005610ee  57                   push edi
// 005610ef  ff1578e97700         call dword ptr [0x77e978]
// 005610f5  83c410               add esp, 0x10
// 005610f8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005610fc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00561100  834608fc             add dword ptr [esi + 8], -4
// 00561104  897804               mov dword ptr [eax + 4], edi
// 00561107  5f                   pop edi
// 00561108  8908                 mov dword ptr [eax], ecx
// 0056110a  5e                   pop esi
// 0056110b  c20c00               ret 0xc
// library rbxgs/v8datamodel\DataModel.cpp (function ?erase@?$vector@PAV?$Listener@VRunService@RBX@@VRunTransition@2@@RBX@@V?$allocator@PAV?$Listener@VRunService@RBX@@VRunTransition@2@@RBX@@@std@@@std@@QAE?AV?$_Vector_iterator@PAV?$Listener@VRunService@RBX@@VRunTransition@2@@RBX@@V?$allocator@PAV?$Listener@VRunService@RBX@@VRunTransition@2@@RBX@@@std@@@2@V32@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
