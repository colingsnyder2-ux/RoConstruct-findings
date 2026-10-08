// roc 2007-03 00493970  unit: seg_00490000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00493970
//
// 00493970  56                   push esi
// 00493971  8bf1                 mov esi, ecx
// 00493973  8b4610               mov eax, dword ptr [esi + 0x10]
// 00493976  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00493979  03c8                 add ecx, eax
// 0049397b  f6c103               test cl, 3
// 0049397e  7514                 jne 0x493994
// 00493980  83c004               add eax, 4
// 00493983  c1e802               shr eax, 2
// 00493986  394608               cmp dword ptr [esi + 8], eax
// 00493989  7709                 ja 0x493994
// 0049398b  6a01                 push 1
// 0049398d  8bce                 mov ecx, esi
// 0049398f  e84c3ffaff           call 0x4378e0
// 00493994  8b4608               mov eax, dword ptr [esi + 8]
// 00493997  53                   push ebx
// 00493998  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0049399b  035e10               add ebx, dword ptr [esi + 0x10]
// 0049399e  57                   push edi
// 0049399f  8bfb                 mov edi, ebx
// 004939a1  c1ef02               shr edi, 2
// 004939a4  3bc7                 cmp eax, edi
// 004939a6  7702                 ja 0x4939aa
// 004939a8  2bf8                 sub edi, eax
// 004939aa  8b5604               mov edx, dword ptr [esi + 4]
// 004939ad  833cba00             cmp dword ptr [edx + edi*4], 0
// 004939b1  7510                 jne 0x4939c3
// 004939b3  6a10                 push 0x10
// 004939b5  e84ea71800           call 0x61e108
// 004939ba  8b4e04               mov ecx, dword ptr [esi + 4]
// 004939bd  83c404               add esp, 4
// 004939c0  8904b9               mov dword ptr [ecx + edi*4], eax
// 004939c3  8b5604               mov edx, dword ptr [esi + 4]
// 004939c6  8b04ba               mov eax, dword ptr [edx + edi*4]
// 004939c9  83e303               and ebx, 3
// 004939cc  8d0498               lea eax, [eax + ebx*4]
// 004939cf  85c0                 test eax, eax
// 004939d1  5f                   pop edi
// 004939d2  5b                   pop ebx
// 004939d3  7408                 je 0x4939dd
// 004939d5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004939d9  8b11                 mov edx, dword ptr [ecx]
// 004939db  8910                 mov dword ptr [eax], edx
// 004939dd  83461001             add dword ptr [esi + 0x10], 1
// 004939e1  5e                   pop esi
// 004939e2  c20400               ret 4
// library rbxgs/v8world\Clump.cpp (function ?push_back@?$deque@PAVPrimitive@RBX@@V?$allocator@PAVPrimitive@RBX@@@std@@@std@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Clump.cpp
