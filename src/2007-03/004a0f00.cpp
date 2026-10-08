// roc 2007-03 004a0f00  unit: seg_004a0000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a0f00
//
// 004a0f00  56                   push esi
// 004a0f01  8bf1                 mov esi, ecx
// 004a0f03  8b4610               mov eax, dword ptr [esi + 0x10]
// 004a0f06  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a0f09  03c8                 add ecx, eax
// 004a0f0b  f6c101               test cl, 1
// 004a0f0e  7513                 jne 0x4a0f23
// 004a0f10  83c002               add eax, 2
// 004a0f13  d1e8                 shr eax, 1
// 004a0f15  394608               cmp dword ptr [esi + 8], eax
// 004a0f18  7709                 ja 0x4a0f23
// 004a0f1a  6a01                 push 1
// 004a0f1c  8bce                 mov ecx, esi
// 004a0f1e  e80df7ffff           call 0x4a0630
// 004a0f23  8b4608               mov eax, dword ptr [esi + 8]
// 004a0f26  55                   push ebp
// 004a0f27  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 004a0f2a  036e10               add ebp, dword ptr [esi + 0x10]
// 004a0f2d  57                   push edi
// 004a0f2e  8bfd                 mov edi, ebp
// 004a0f30  d1ef                 shr edi, 1
// 004a0f32  3bc7                 cmp eax, edi
// 004a0f34  7702                 ja 0x4a0f38
// 004a0f36  2bf8                 sub edi, eax
// 004a0f38  8b5604               mov edx, dword ptr [esi + 4]
// 004a0f3b  833cba00             cmp dword ptr [edx + edi*4], 0
// 004a0f3f  7510                 jne 0x4a0f51
// 004a0f41  6a10                 push 0x10
// 004a0f43  e8c0d11700           call 0x61e108
// 004a0f48  8b4e04               mov ecx, dword ptr [esi + 4]
// 004a0f4b  83c404               add esp, 4
// 004a0f4e  8904b9               mov dword ptr [ecx + edi*4], eax
// 004a0f51  8b5604               mov edx, dword ptr [esi + 4]
// 004a0f54  8b04ba               mov eax, dword ptr [edx + edi*4]
// 004a0f57  83e501               and ebp, 1
// 004a0f5a  8d04e8               lea eax, [eax + ebp*8]
// 004a0f5d  85c0                 test eax, eax
// 004a0f5f  5f                   pop edi
// 004a0f60  5d                   pop ebp
// 004a0f61  741e                 je 0x4a0f81
// 004a0f63  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a0f67  8b11                 mov edx, dword ptr [ecx]
// 004a0f69  8910                 mov dword ptr [eax], edx
// 004a0f6b  8b4904               mov ecx, dword ptr [ecx + 4]
// 004a0f6e  85c9                 test ecx, ecx
// 004a0f70  894804               mov dword ptr [eax + 4], ecx
// 004a0f73  740c                 je 0x4a0f81
// 004a0f75  83c104               add ecx, 4
// 004a0f78  b801000000           mov eax, 1
// 004a0f7d  f00fc101             lock xadd dword ptr [ecx], eax
// 004a0f81  83461001             add dword ptr [esi + 0x10], 1
// 004a0f85  5e                   pop esi
// 004a0f86  c20400               ret 4
// library rbxgs-net/Replicator.cpp (function ?push_back@?$deque@V?$shared_ptr@VMarker@Network@RBX@@@boost@@V?$allocator@V?$shared_ptr@VMarker@Network@RBX@@@boost@@@std@@@std@@QAEXABV?$shared_ptr@VMarker@Network@RBX@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Replicator.cpp
