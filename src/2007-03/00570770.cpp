// roc 2007-03 00570770  unit: seg_00570000  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00570770
//
// 00570770  8b442408             mov eax, dword ptr [esp + 8]
// 00570774  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00570778  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0057077c  2bc1                 sub eax, ecx
// 0057077e  c1f802               sar eax, 2
// 00570781  8d048500000000       lea eax, [eax*4]
// 00570788  56                   push esi
// 00570789  8d3410               lea esi, [eax + edx]
// 0057078c  740d                 je 0x57079b
// 0057078e  50                   push eax
// 0057078f  51                   push ecx
// 00570790  50                   push eax
// 00570791  52                   push edx
// 00570792  ff1578e97700         call dword ptr [0x77e978]
// 00570798  83c410               add esp, 0x10
// 0057079b  8bc6                 mov eax, esi
// 0057079d  5e                   pop esi
// 0057079e  c20c00               ret 0xc
// library rbxgs/tool\DragUtilities.cpp (function ??$_Umove@PAPBVPrimitive@RBX@@@?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@IAEPAPBVPrimitive@RBX@@PAPBV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
