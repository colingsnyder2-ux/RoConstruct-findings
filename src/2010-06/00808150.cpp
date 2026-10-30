// roc 2010-06 00808150  unit: CXTPPropExchangeXMLNode::CXMLEnumerator  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00808150
//
// 00808150  6aff                 push -1
// 00808152  6828199b00           push 0x9b1928
// 00808157  64a100000000         mov eax, dword ptr fs:[0]
// 0080815d  50                   push eax
// 0080815e  83ec10               sub esp, 0x10
// 00808161  53                   push ebx
// 00808162  56                   push esi
// 00808163  57                   push edi
// 00808164  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00808169  33c4                 xor eax, esp
// 0080816b  50                   push eax
// 0080816c  8d442420             lea eax, [esp + 0x20]
// 00808170  64a300000000         mov dword ptr fs:[0], eax
// 00808176  8bf1                 mov esi, ecx
// 00808178  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0080817c  57                   push edi
// 0080817d  ff15cca29e00         call dword ptr [0x9ea2cc]
// 00808183  83f8ff               cmp eax, -1
// 00808186  0f84d5000000         je 0x808261
// 0080818c  a810                 test al, 0x10
// 0080818e  0f85cd000000         jne 0x808261
// 00808194  8bce                 mov ecx, esi
// 00808196  e845f8ffff           call 0x8079e0
// 0080819b  85c0                 test eax, eax
// 0080819d  0f84be000000         je 0x808261
// 008081a3  33c0                 xor eax, eax
// 008081a5  57                   push edi
// 008081a6  8d4c2414             lea ecx, [esp + 0x14]
// 008081aa  6689442414           mov word ptr [esp + 0x14], ax
// 008081af  e81c4e1700           call 0x97cfd0
// 008081b4  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 008081b7  8d7e44               lea edi, [esi + 0x44]
// 008081ba  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008081c2  85c9                 test ecx, ecx
// 008081c4  750a                 jne 0x8081d0
// 008081c6  6803400080           push 0x80004003
// 008081cb  e87018faff           call 0x7a9a40
// 008081d0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008081d4  8b11                 mov edx, dword ptr [ecx]
// 008081d6  8d442430             lea eax, [esp + 0x30]
// 008081da  50                   push eax
// 008081db  83ec10               sub esp, 0x10
// 008081de  8bc4                 mov eax, esp
// 008081e0  8918                 mov dword ptr [eax], ebx
// 008081e2  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008081e6  895804               mov dword ptr [eax + 4], ebx
// 008081e9  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 008081ed  895808               mov dword ptr [eax + 8], ebx
// 008081f0  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 008081f4  51                   push ecx
// 008081f5  8b8ae8000000         mov ecx, dword ptr [edx + 0xe8]
// 008081fb  89580c               mov dword ptr [eax + 0xc], ebx
// 008081fe  ffd1                 call ecx
// 00808200  8d542410             lea edx, [esp + 0x10]
// 00808204  52                   push edx
// 00808205  8bd8                 mov ebx, eax
// 00808207  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0080820f  ff1564aa9e00         call dword ptr [0x9eaa64]
// 00808215  85db                 test ebx, ebx
// 00808217  7c48                 jl 0x808261
// 00808219  66837c243000         cmp word ptr [esp + 0x30], 0
// 0080821f  7440                 je 0x808261
// 00808221  57                   push edi
// 00808222  8d4e48               lea ecx, [esi + 0x48]
// 00808225  e8e6feffff           call 0x808110
// 0080822a  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0080822d  85c0                 test eax, eax
// 0080822f  740f                 je 0x808240
// 00808231  c7464c00000000       mov dword ptr [esi + 0x4c], 0
// 00808238  8b08                 mov ecx, dword ptr [eax]
// 0080823a  8b5108               mov edx, dword ptr [ecx + 8]
// 0080823d  50                   push eax
// 0080823e  ffd2                 call edx
// 00808240  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00808247  b801000000           mov eax, 1
// 0080824c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00808250  64890d00000000       mov dword ptr fs:[0], ecx
// 00808257  59                   pop ecx
// 00808258  5f                   pop edi
// 00808259  5e                   pop esi
// 0080825a  5b                   pop ebx
// 0080825b  83c41c               add esp, 0x1c
// 0080825e  c20400               ret 4
// 00808261  33c0                 xor eax, eax
// 00808263  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00808267  64890d00000000       mov dword ptr fs:[0], ecx
// 0080826e  59                   pop ecx
// 0080826f  5f                   pop edi
// 00808270  5e                   pop esi
// 00808271  5b                   pop ebx
// 00808272  83c41c               add esp, 0x1c
// 00808275  c20400               ret 4
// copied from an identical function in another client (function ?LoadFromFile@CXTPPropExchangeXMLNode@@QAEHPBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-15.2.1-shared-mfc Source/Common/XTPPropExchange.cpp