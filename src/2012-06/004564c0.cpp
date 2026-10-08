// roc 2012-06 004564c0  unit: CPropGrid::UpdateItemsJob  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004564c0
//
// 004564c0  55                   push ebp
// 004564c1  8bec                 mov ebp, esp
// 004564c3  6aff                 push -1
// 004564c5  6830f0a900           push 0xa9f030
// 004564ca  64a100000000         mov eax, dword ptr fs:[0]
// 004564d0  50                   push eax
// 004564d1  64892500000000       mov dword ptr fs:[0], esp
// 004564d8  83ec0c               sub esp, 0xc
// 004564db  53                   push ebx
// 004564dc  8b5d08               mov ebx, dword ptr [ebp + 8]
// 004564df  807b1100             cmp byte ptr [ebx + 0x11], 0
// 004564e3  56                   push esi
// 004564e4  8bf1                 mov esi, ecx
// 004564e6  8b4604               mov eax, dword ptr [esi + 4]
// 004564e9  57                   push edi
// 004564ea  8965f0               mov dword ptr [ebp - 0x10], esp
// 004564ed  8975e8               mov dword ptr [ebp - 0x18], esi
// 004564f0  8945ec               mov dword ptr [ebp - 0x14], eax
// 004564f3  7547                 jne 0x45653c
// 004564f5  0fb64b10             movzx ecx, byte ptr [ebx + 0x10]
// 004564f9  51                   push ecx
// 004564fa  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004564fd  8d530c               lea edx, [ebx + 0xc]
// 00456500  52                   push edx
// 00456501  50                   push eax
// 00456502  51                   push ecx
// 00456503  50                   push eax
// 00456504  8bce                 mov ecx, esi
// 00456506  e8c556fdff           call 0x42bbd0
// 0045650b  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 0045650e  807a1100             cmp byte ptr [edx + 0x11], 0
// 00456512  8bf8                 mov edi, eax
// 00456514  7403                 je 0x456519
// 00456516  897dec               mov dword ptr [ebp - 0x14], edi
// 00456519  8b03                 mov eax, dword ptr [ebx]
// 0045651b  57                   push edi
// 0045651c  50                   push eax
// 0045651d  8bce                 mov ecx, esi
// 0045651f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00456526  e895ffffff           call 0x4564c0
// 0045652b  8907                 mov dword ptr [edi], eax
// 0045652d  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00456530  57                   push edi
// 00456531  51                   push ecx
// 00456532  8bce                 mov ecx, esi
// 00456534  e887ffffff           call 0x4564c0
// 00456539  894708               mov dword ptr [edi + 8], eax
// 0045653c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0045653f  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 00456542  5f                   pop edi
// 00456543  5e                   pop esi
// 00456544  64890d00000000       mov dword ptr fs:[0], ecx
// 0045654b  5b                   pop ebx
// 0045654c  8be5                 mov esp, ebp
// 0045654e  5d                   pop ebp
// 0045654f  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?_Copy@?$_Tree@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@std@@IAEPAU_Node@?$_Tree_nod@V?$_Tset_traits@PAVScript@RBX@@U?$less@PAVScript@RBX@@@std@@V?$allocator@PAVScript@RBX@@@4@$0A@@std@@@2@PAU342@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
