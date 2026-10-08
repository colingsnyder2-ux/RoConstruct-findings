// roc 2010-06 00435240  unit: CPropGrid::UpdateItemsJob  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00435240
//
// 00435240  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00435244  8b442414             mov eax, dword ptr [esp + 0x14]
// 00435248  3bc8                 cmp ecx, eax
// 0043524a  7411                 je 0x43525d
// 0043524c  8b542418             mov edx, dword ptr [esp + 0x18]
// 00435250  8b12                 mov edx, dword ptr [edx]
// 00435252  3911                 cmp dword ptr [ecx], edx
// 00435254  7407                 je 0x43525d
// 00435256  83c108               add ecx, 8
// 00435259  3bc8                 cmp ecx, eax
// 0043525b  75f5                 jne 0x435252
// 0043525d  8b442404             mov eax, dword ptr [esp + 4]
// 00435261  8b542408             mov edx, dword ptr [esp + 8]
// 00435265  8910                 mov dword ptr [eax], edx
// 00435267  894804               mov dword ptr [eax + 4], ecx
// 0043526a  c3                   ret 
// library rbxgs/v8datamodel\Selection.cpp (function ??$find@V?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@YA?AV?$_Vector_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@0@V10@0ABV?$shared_ptr@VInstance@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
