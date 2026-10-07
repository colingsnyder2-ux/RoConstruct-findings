// roc 2010-06 00704210  unit: RBX::Animator  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00704210
//
// 00704210  8b442418             mov eax, dword ptr [esp + 0x18]
// 00704214  8b542414             mov edx, dword ptr [esp + 0x14]
// 00704218  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070421c  56                   push esi
// 0070421d  8d4900               lea ecx, [ecx]
// 00704220  3bca                 cmp ecx, edx
// 00704222  740f                 je 0x704233
// 00704224  8b7108               mov esi, dword ptr [ecx + 8]
// 00704227  3b30                 cmp esi, dword ptr [eax]
// 00704229  7408                 je 0x704233
// 0070422b  8b09                 mov ecx, dword ptr [ecx]
// 0070422d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00704231  ebed                 jmp 0x704220
// 00704233  8b442408             mov eax, dword ptr [esp + 8]
// 00704237  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0070423b  8910                 mov dword ptr [eax], edx
// 0070423d  894804               mov dword ptr [eax + 4], ecx
// 00704240  5e                   pop esi
// 00704241  c3                   ret 
// library boost-1.34.1/libs\thread\src\thread.cpp (function ??$_Find@V?$_Iterator@$0A@@?$list@PAVthread@boost@@V?$allocator@PAVthread@boost@@@std@@@std@@PAVthread@boost@@@std@@YA?AV?$_Iterator@$0A@@?$list@PAVthread@boost@@V?$allocator@PAVthread@boost@@@std@@@0@V120@0ABQAVthread@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/thread.cpp
