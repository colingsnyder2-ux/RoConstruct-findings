// roc 2007-08 004c75f0  unit: RakPeer  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c75f0
//
// 004c75f0  53                   push ebx
// 004c75f1  56                   push esi
// 004c75f2  57                   push edi
// 004c75f3  33db                 xor ebx, ebx
// 004c75f5  8d7168               lea esi, [ecx + 0x68]
// 004c75f8  8b3e                 mov edi, dword ptr [esi]
// 004c75fa  8b5604               mov edx, dword ptr [esi + 4]
// 004c75fd  3bfa                 cmp edi, edx
// 004c75ff  7706                 ja 0x4c7607
// 004c7601  2bd7                 sub edx, edi
// 004c7603  8bc2                 mov eax, edx
// 004c7605  eb07                 jmp 0x4c760e
// 004c7607  8b4608               mov eax, dword ptr [esi + 8]
// 004c760a  2bc7                 sub eax, edi
// 004c760c  03c2                 add eax, edx
// 004c760e  85c0                 test eax, eax
// 004c7610  771d                 ja 0x4c762f
// 004c7612  83c301               add ebx, 1
// 004c7615  83c610               add esi, 0x10
// 004c7618  83fb04               cmp ebx, 4
// 004c761b  72db                 jb 0x4c75f8
// 004c761d  83792000             cmp dword ptr [ecx + 0x20], 0
// 004c7621  7712                 ja 0x4c7635
// 004c7623  83794c00             cmp dword ptr [ecx + 0x4c], 0
// 004c7627  750c                 jne 0x4c7635
// 004c7629  5f                   pop edi
// 004c762a  5e                   pop esi
// 004c762b  33c0                 xor eax, eax
// 004c762d  5b                   pop ebx
// 004c762e  c3                   ret 
// 004c762f  5f                   pop edi
// 004c7630  5e                   pop esi
// 004c7631  b001                 mov al, 1
// 004c7633  5b                   pop ebx
// 004c7634  c3                   ret 
// 004c7635  5f                   pop edi
// 004c7636  5e                   pop esi
// 004c7637  b801000000           mov eax, 1
// 004c763c  5b                   pop ebx
// 004c763d  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?IsOutgoingDataWaiting@ReliabilityLayer@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
