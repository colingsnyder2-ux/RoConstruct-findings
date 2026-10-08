// roc 2007-08 0057eb30  unit: RBX::VWorkspace::?$BoundFuncDesc  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057eb30
//
// 0057eb30  6aff                 push -1
// 0057eb32  68588a7500           push 0x758a58
// 0057eb37  64a100000000         mov eax, dword ptr fs:[0]
// 0057eb3d  50                   push eax
// 0057eb3e  64892500000000       mov dword ptr fs:[0], esp
// 0057eb45  83ec14               sub esp, 0x14
// 0057eb48  56                   push esi
// 0057eb49  57                   push edi
// 0057eb4a  8bf9                 mov edi, ecx
// 0057eb4c  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0057eb4f  85c9                 test ecx, ecx
// 0057eb51  8b4734               mov eax, dword ptr [edi + 0x34]
// 0057eb54  89442408             mov dword ptr [esp + 8], eax
// 0057eb58  7409                 je 0x57eb63
// 0057eb5a  8b11                 mov edx, dword ptr [ecx]
// 0057eb5c  8b4208               mov eax, dword ptr [edx + 8]
// 0057eb5f  ffd0                 call eax
// 0057eb61  eb02                 jmp 0x57eb65
// 0057eb63  33c0                 xor eax, eax
// 0057eb65  8944240c             mov dword ptr [esp + 0xc], eax
// 0057eb69  8b742430             mov esi, dword ptr [esp + 0x30]
// 0057eb6d  8b16                 mov edx, dword ptr [esi]
// 0057eb6f  8b5204               mov edx, dword ptr [edx + 4]
// 0057eb72  8d442408             lea eax, [esp + 8]
// 0057eb76  50                   push eax
// 0057eb77  6a01                 push 1
// 0057eb79  8bce                 mov ecx, esi
// 0057eb7b  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0057eb83  ffd2                 call edx
// 0057eb85  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057eb89  6a00                 push 0
// 0057eb8b  688c1c8a00           push 0x8a1c8c
// 0057eb90  689c208800           push 0x88209c
// 0057eb95  6a00                 push 0
// 0057eb97  50                   push eax
// 0057eb98  e899210b00           call 0x630d36
// 0057eb9d  83c414               add esp, 0x14
// 0057eba0  85c0                 test eax, eax
// 0057eba2  751e                 jne 0x57ebc2
// 0057eba4  68046e7800           push 0x786e04
// 0057eba9  8d4c2414             lea ecx, [esp + 0x14]
// 0057ebad  ff1510e77700         call dword ptr [0x77e710]
// 0057ebb3  680c1e8400           push 0x841e0c
// 0057ebb8  8d4c2414             lea ecx, [esp + 0x14]
// 0057ebbc  51                   push ecx
// 0057ebbd  e8dc1f0b00           call 0x630b9e
// 0057ebc2  8d542408             lea edx, [esp + 8]
// 0057ebc6  52                   push edx
// 0057ebc7  83c604               add esi, 4
// 0057ebca  56                   push esi
// 0057ebcb  50                   push eax
// 0057ebcc  8bcf                 mov ecx, edi
// 0057ebce  e87dfeffff           call 0x57ea50
// 0057ebd3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057ebd7  85c9                 test ecx, ecx
// 0057ebd9  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0057ebe1  7408                 je 0x57ebeb
// 0057ebe3  8b01                 mov eax, dword ptr [ecx]
// 0057ebe5  8b10                 mov edx, dword ptr [eax]
// 0057ebe7  6a01                 push 1
// 0057ebe9  ffd2                 call edx
// 0057ebeb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057ebef  5f                   pop edi
// 0057ebf0  5e                   pop esi
// 0057ebf1  64890d00000000       mov dword ptr fs:[0], ecx
// 0057ebf8  83c420               add esp, 0x20
// 0057ebfb  c20800               ret 8
// library rbxgs/v8datamodel\Workspace.cpp (function ?execute@?$BoundFuncDesc@VWorkspace@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z$00@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
