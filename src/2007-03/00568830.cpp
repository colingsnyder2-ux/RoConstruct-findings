// roc 2007-03 00568830  unit: seg_00560000  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00568830
//
// 00568830  56                   push esi
// 00568831  8bf1                 mov esi, ecx
// 00568833  8b4610               mov eax, dword ptr [esi + 0x10]
// 00568836  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00568839  03c8                 add ecx, eax
// 0056883b  f6c103               test cl, 3
// 0056883e  7514                 jne 0x568854
// 00568840  83c004               add eax, 4
// 00568843  c1e802               shr eax, 2
// 00568846  394608               cmp dword ptr [esi + 8], eax
// 00568849  7709                 ja 0x568854
// 0056884b  6a01                 push 1
// 0056884d  8bce                 mov ecx, esi
// 0056884f  e87cfeffff           call 0x5686d0
// 00568854  8b4608               mov eax, dword ptr [esi + 8]
// 00568857  53                   push ebx
// 00568858  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0056885b  035e10               add ebx, dword ptr [esi + 0x10]
// 0056885e  57                   push edi
// 0056885f  8bfb                 mov edi, ebx
// 00568861  c1ef02               shr edi, 2
// 00568864  3bc7                 cmp eax, edi
// 00568866  7702                 ja 0x56886a
// 00568868  2bf8                 sub edi, eax
// 0056886a  8b5604               mov edx, dword ptr [esi + 4]
// 0056886d  833cba00             cmp dword ptr [edx + edi*4], 0
// 00568871  7510                 jne 0x568883
// 00568873  6a10                 push 0x10
// 00568875  e88e580b00           call 0x61e108
// 0056887a  8b4e04               mov ecx, dword ptr [esi + 4]
// 0056887d  83c404               add esp, 4
// 00568880  8904b9               mov dword ptr [ecx + edi*4], eax
// 00568883  8b5604               mov edx, dword ptr [esi + 4]
// 00568886  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00568889  83e303               and ebx, 3
// 0056888c  8d0498               lea eax, [eax + ebx*4]
// 0056888f  85c0                 test eax, eax
// 00568891  5f                   pop edi
// 00568892  5b                   pop ebx
// 00568893  7408                 je 0x56889d
// 00568895  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00568899  8b11                 mov edx, dword ptr [ecx]
// 0056889b  8910                 mov dword ptr [eax], edx
// 0056889d  83461001             add dword ptr [esi + 0x10], 1
// 005688a1  5e                   pop esi
// 005688a2  c20400               ret 4
// library rbxgs/v8world\Clump.cpp (function ?push_back@?$deque@PAVPrimitive@RBX@@V?$allocator@PAVPrimitive@RBX@@@std@@@std@@QAEXABQAVPrimitive@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Clump.cpp
