// roc 2008-06 00438b30  unit: IIHAAH::?$CMap  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00438b30
//
// 00438b30  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00438b34  8b442414             mov eax, dword ptr [esp + 0x14]
// 00438b38  3bc8                 cmp ecx, eax
// 00438b3a  7411                 je 0x438b4d
// 00438b3c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00438b40  8b12                 mov edx, dword ptr [edx]
// 00438b42  3911                 cmp dword ptr [ecx], edx
// 00438b44  7407                 je 0x438b4d
// 00438b46  83c108               add ecx, 8
// 00438b49  3bc8                 cmp ecx, eax
// 00438b4b  75f5                 jne 0x438b42
// 00438b4d  8b442404             mov eax, dword ptr [esp + 4]
// 00438b51  8b542408             mov edx, dword ptr [esp + 8]
// 00438b55  8910                 mov dword ptr [eax], edx
// 00438b57  894804               mov dword ptr [eax + 4], ecx
// 00438b5a  c3                   ret 
// library rbxgs/v8datamodel\Selection.cpp (function ??$find@V?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@YA?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@0@V10@0ABV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
