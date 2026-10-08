// roc 2007-03 004a02c0  unit: seg_004a0000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a02c0
//
// 004a02c0  53                   push ebx
// 004a02c1  8bd9                 mov ebx, ecx
// 004a02c3  8b4304               mov eax, dword ptr [ebx + 4]
// 004a02c6  57                   push edi
// 004a02c7  8b38                 mov edi, dword ptr [eax]
// 004a02c9  8900                 mov dword ptr [eax], eax
// 004a02cb  8b4304               mov eax, dword ptr [ebx + 4]
// 004a02ce  894004               mov dword ptr [eax + 4], eax
// 004a02d1  3b7b04               cmp edi, dword ptr [ebx + 4]
// 004a02d4  c7430800000000       mov dword ptr [ebx + 8], 0
// 004a02db  7448                 je 0x4a0325
// 004a02dd  55                   push ebp
// 004a02de  56                   push esi
// 004a02df  90                   nop 
// 004a02e0  8b770c               mov esi, dword ptr [edi + 0xc]
// 004a02e3  85f6                 test esi, esi
// 004a02e5  8b2f                 mov ebp, dword ptr [edi]
// 004a02e7  742a                 je 0x4a0313
// 004a02e9  8d4604               lea eax, [esi + 4]
// 004a02ec  83c9ff               or ecx, 0xffffffff
// 004a02ef  f00fc108             lock xadd dword ptr [eax], ecx
// 004a02f3  751e                 jne 0x4a0313
// 004a02f5  8b16                 mov edx, dword ptr [esi]
// 004a02f7  8b4204               mov eax, dword ptr [edx + 4]
// 004a02fa  8bce                 mov ecx, esi
// 004a02fc  ffd0                 call eax
// 004a02fe  8d4e08               lea ecx, [esi + 8]
// 004a0301  83caff               or edx, 0xffffffff
// 004a0304  f00fc111             lock xadd dword ptr [ecx], edx
// 004a0308  7509                 jne 0x4a0313
// 004a030a  8b06                 mov eax, dword ptr [esi]
// 004a030c  8b5008               mov edx, dword ptr [eax + 8]
// 004a030f  8bce                 mov ecx, esi
// 004a0311  ffd2                 call edx
// 004a0313  57                   push edi
// 004a0314  e8d7dd1700           call 0x61e0f0
// 004a0319  83c404               add esp, 4
// 004a031c  3b6b04               cmp ebp, dword ptr [ebx + 4]
// 004a031f  8bfd                 mov edi, ebp
// 004a0321  75bd                 jne 0x4a02e0
// 004a0323  5e                   pop esi
// 004a0324  5d                   pop ebp
// 004a0325  5f                   pop edi
// 004a0326  5b                   pop ebx
// 004a0327  c3                   ret 
// library rbxgs-net/Replicator.cpp (function ?clear@?$list@V?$shared_ptr@VItem@Replicator@Network@RBX@@@boost@@V?$allocator@V?$shared_ptr@VItem@Replicator@Network@RBX@@@boost@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
