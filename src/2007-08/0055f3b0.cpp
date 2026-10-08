// roc 2007-08 0055f3b0  unit: RBX::ClearBackpack  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055f3b0
//
// 0055f3b0  53                   push ebx
// 0055f3b1  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0055f3b5  56                   push esi
// 0055f3b6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0055f3ba  3bf3                 cmp esi, ebx
// 0055f3bc  57                   push edi
// 0055f3bd  7439                 je 0x55f3f8
// 0055f3bf  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0055f3c3  8b06                 mov eax, dword ptr [esi]
// 0055f3c5  83ec08               sub esp, 8
// 0055f3c8  8bcc                 mov ecx, esp
// 0055f3ca  8901                 mov dword ptr [ecx], eax
// 0055f3cc  8b4604               mov eax, dword ptr [esi + 4]
// 0055f3cf  85c0                 test eax, eax
// 0055f3d1  89642428             mov dword ptr [esp + 0x28], esp
// 0055f3d5  894104               mov dword ptr [ecx + 4], eax
// 0055f3d8  740c                 je 0x55f3e6
// 0055f3da  83c004               add eax, 4
// 0055f3dd  b901000000           mov ecx, 1
// 0055f3e2  f00fc108             lock xadd dword ptr [eax], ecx
// 0055f3e6  ffd7                 call edi
// 0055f3e8  83c608               add esi, 8
// 0055f3eb  83c408               add esp, 8
// 0055f3ee  3bf3                 cmp esi, ebx
// 0055f3f0  75d1                 jne 0x55f3c3
// 0055f3f2  8bc7                 mov eax, edi
// 0055f3f4  5f                   pop edi
// 0055f3f5  5e                   pop esi
// 0055f3f6  5b                   pop ebx
// 0055f3f7  c3                   ret 
// 0055f3f8  8b442420             mov eax, dword ptr [esp + 0x20]
// 0055f3fc  5f                   pop edi
// 0055f3fd  5e                   pop esi
// 0055f3fe  5b                   pop ebx
// 0055f3ff  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??$for_each@V?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@P6AXV?$shared_ptr@VInstance@RBX@@@boost@@@Z@std@@YAP6AXV?$shared_ptr@VInstance@RBX@@@boost@@@ZV?$_Vector_const_iterator@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@0@1P6AX0@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
