// roc 2007-03 005b5070  unit: seg_005b0000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b5070
//
// 005b5070  56                   push esi
// 005b5071  8b742408             mov esi, dword ptr [esp + 8]
// 005b5075  57                   push edi
// 005b5076  8bce                 mov ecx, esi
// 005b5078  33ff                 xor edi, edi
// 005b507a  e8411c0300           call 0x5e6cc0
// 005b507f  85c0                 test eax, eax
// 005b5081  7642                 jbe 0x5b50c5
// 005b5083  53                   push ebx
// 005b5084  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005b5088  55                   push ebp
// 005b5089  8b2d44e97700         mov ebp, dword ptr [0x77e944]
// 005b508f  90                   nop 
// 005b5090  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b5093  85c9                 test ecx, ecx
// 005b5095  740c                 je 0x5b50a3
// 005b5097  8b4608               mov eax, dword ptr [esi + 8]
// 005b509a  2bc1                 sub eax, ecx
// 005b509c  c1f802               sar eax, 2
// 005b509f  3bf8                 cmp edi, eax
// 005b50a1  7202                 jb 0x5b50a5
// 005b50a3  ffd5                 call ebp
// 005b50a5  8b4604               mov eax, dword ptr [esi + 4]
// 005b50a8  8b0cb8               mov ecx, dword ptr [eax + edi*4]
// 005b50ab  53                   push ebx
// 005b50ac  51                   push ecx
// 005b50ad  e8ae06fcff           call 0x575760
// 005b50b2  83c408               add esp, 8
// 005b50b5  8bce                 mov ecx, esi
// 005b50b7  83c701               add edi, 1
// 005b50ba  e8011c0300           call 0x5e6cc0
// 005b50bf  3bf8                 cmp edi, eax
// 005b50c1  72cd                 jb 0x5b5090
// 005b50c3  5d                   pop ebp
// 005b50c4  5b                   pop ebx
// 005b50c5  5f                   pop edi
// 005b50c6  5e                   pop esi
// 005b50c7  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?instancesToParts@DragUtilities@RBX@@SAXABV?$vector@PAVInstance@RBX@@V?$allocator@PAVInstance@RBX@@@std@@@std@@AAV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
