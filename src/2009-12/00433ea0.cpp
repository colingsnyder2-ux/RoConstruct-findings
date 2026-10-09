// roc 2009-12 00433ea0  unit: CPropGrid::UpdateItemsJob  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00433ea0
//
// 00433ea0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00433ea4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00433ea8  3bc8                 cmp ecx, eax
// 00433eaa  7411                 je 0x433ebd
// 00433eac  8b542418             mov edx, dword ptr [esp + 0x18]
// 00433eb0  8b12                 mov edx, dword ptr [edx]
// 00433eb2  3911                 cmp dword ptr [ecx], edx
// 00433eb4  7407                 je 0x433ebd
// 00433eb6  83c108               add ecx, 8
// 00433eb9  3bc8                 cmp ecx, eax
// 00433ebb  75f5                 jne 0x433eb2
// 00433ebd  8b442404             mov eax, dword ptr [esp + 4]
// 00433ec1  8b542408             mov edx, dword ptr [esp + 8]
// 00433ec5  8910                 mov dword ptr [eax], edx
// 00433ec7  894804               mov dword ptr [eax + 4], ecx
// 00433eca  c3                   ret 
// library rbxgs/v8datamodel\Selection.cpp (function ??$find@V?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@YA?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@0@V10@0ABV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
