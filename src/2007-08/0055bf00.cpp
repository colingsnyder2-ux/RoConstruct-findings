// roc 2007-08 0055bf00  unit: RBX::VSelection::?$BoundFuncDesc  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055bf00
//
// 0055bf00  6aff                 push -1
// 0055bf02  688e387500           push 0x75388e
// 0055bf07  64a100000000         mov eax, dword ptr fs:[0]
// 0055bf0d  50                   push eax
// 0055bf0e  64892500000000       mov dword ptr fs:[0], esp
// 0055bf15  51                   push ecx
// 0055bf16  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0055bf1a  56                   push esi
// 0055bf1b  8bf1                 mov esi, ecx
// 0055bf1d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0055bf21  50                   push eax
// 0055bf22  51                   push ecx
// 0055bf23  8974240c             mov dword ptr [esp + 0xc], esi
// 0055bf27  e814eeffff           call 0x55ad40
// 0055bf2c  50                   push eax
// 0055bf2d  8bce                 mov ecx, esi
// 0055bf2f  e87c4e0100           call 0x570db0
// 0055bf34  8b542418             mov edx, dword ptr [esp + 0x18]
// 0055bf38  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055bf3c  8d4e30               lea ecx, [esi + 0x30]
// 0055bf3f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055bf47  c706c08a7a00         mov dword ptr [esi], 0x7a8ac0
// 0055bf4d  895628               mov dword ptr [esi + 0x28], edx
// 0055bf50  89462c               mov dword ptr [esi + 0x2c], eax
// 0055bf53  e868140100           call 0x56d3c0
// 0055bf58  c644241001           mov byte ptr [esp + 0x10], 1
// 0055bf5d  e8de180100           call 0x56d840
// 0055bf62  6a08                 push 8
// 0055bf64  894638               mov dword ptr [esi + 0x38], eax
// 0055bf67  e88a3f0d00           call 0x62fef6
// 0055bf6c  83c404               add esp, 4
// 0055bf6f  85c0                 test eax, eax
// 0055bf71  740f                 je 0x55bf82
// 0055bf73  8a4c242c             mov cl, byte ptr [esp + 0x2c]
// 0055bf77  c700fca57800         mov dword ptr [eax], 0x78a5fc
// 0055bf7d  884804               mov byte ptr [eax + 4], cl
// 0055bf80  eb02                 jmp 0x55bf84
// 0055bf82  33c0                 xor eax, eax
// 0055bf84  89463c               mov dword ptr [esi + 0x3c], eax
// 0055bf87  8b542428             mov edx, dword ptr [esp + 0x28]
// 0055bf8b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0055bf8f  52                   push edx
// 0055bf90  50                   push eax
// 0055bf91  8bce                 mov ecx, esi
// 0055bf93  c644241802           mov byte ptr [esp + 0x18], 2
// 0055bf98  e813b6ffff           call 0x5575b0
// 0055bf9d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0055bfa1  8bc6                 mov eax, esi
// 0055bfa3  5e                   pop esi
// 0055bfa4  64890d00000000       mov dword ptr fs:[0], ecx
// 0055bfab  83c410               add esp, 0x10
// 0055bfae  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??0?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@QAE@P8Instance@2@AE?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@ZPBD331W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
