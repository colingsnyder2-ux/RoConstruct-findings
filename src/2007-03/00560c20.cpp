// roc 2007-03 00560c20  unit: seg_00560000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00560c20
//
// 00560c20  53                   push ebx
// 00560c21  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00560c25  56                   push esi
// 00560c26  8b742410             mov esi, dword ptr [esp + 0x10]
// 00560c2a  3bf3                 cmp esi, ebx
// 00560c2c  57                   push edi
// 00560c2d  7439                 je 0x560c68
// 00560c2f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00560c33  8b06                 mov eax, dword ptr [esi]
// 00560c35  83ec08               sub esp, 8
// 00560c38  8bcc                 mov ecx, esp
// 00560c3a  8901                 mov dword ptr [ecx], eax
// 00560c3c  8b4604               mov eax, dword ptr [esi + 4]
// 00560c3f  85c0                 test eax, eax
// 00560c41  89642428             mov dword ptr [esp + 0x28], esp
// 00560c45  894104               mov dword ptr [ecx + 4], eax
// 00560c48  740c                 je 0x560c56
// 00560c4a  83c004               add eax, 4
// 00560c4d  b901000000           mov ecx, 1
// 00560c52  f00fc108             lock xadd dword ptr [eax], ecx
// 00560c56  ffd7                 call edi
// 00560c58  83c608               add esi, 8
// 00560c5b  83c408               add esp, 8
// 00560c5e  3bf3                 cmp esi, ebx
// 00560c60  75d1                 jne 0x560c33
// 00560c62  8bc7                 mov eax, edi
// 00560c64  5f                   pop edi
// 00560c65  5e                   pop esi
// 00560c66  5b                   pop ebx
// 00560c67  c3                   ret 
// 00560c68  8b442420             mov eax, dword ptr [esp + 0x20]
// 00560c6c  5f                   pop edi
// 00560c6d  5e                   pop esi
// 00560c6e  5b                   pop ebx
// 00560c6f  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$for_each@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@P6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@std@@YAP6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@0@1P6AX0@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
