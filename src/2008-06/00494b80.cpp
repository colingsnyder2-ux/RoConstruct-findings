// roc 2008-06 00494b80  unit: RBX::VRunService::?$SignalDesc  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494b80
//
// 00494b80  55                   push ebp
// 00494b81  8bec                 mov ebp, esp
// 00494b83  6aff                 push -1
// 00494b85  68d8677c00           push 0x7c67d8
// 00494b8a  64a100000000         mov eax, dword ptr fs:[0]
// 00494b90  50                   push eax
// 00494b91  64892500000000       mov dword ptr fs:[0], esp
// 00494b98  83ec10               sub esp, 0x10
// 00494b9b  53                   push ebx
// 00494b9c  56                   push esi
// 00494b9d  57                   push edi
// 00494b9e  8bf1                 mov esi, ecx
// 00494ba0  8965f0               mov dword ptr [ebp - 0x10], esp
// 00494ba3  8975ec               mov dword ptr [ebp - 0x14], esi
// 00494ba6  33db                 xor ebx, ebx
// 00494ba8  895dfc               mov dword ptr [ebp - 4], ebx
// 00494bab  8b3e                 mov edi, dword ptr [esi]
// 00494bad  83ec50               sub esp, 0x50
// 00494bb0  8d4558               lea eax, [ebp + 0x58]
// 00494bb3  8965e8               mov dword ptr [ebp - 0x18], esp
// 00494bb6  8bcc                 mov ecx, esp
// 00494bb8  50                   push eax
// 00494bb9  895e0c               mov dword ptr [esi + 0xc], ebx
// 00494bbc  895e10               mov dword ptr [esi + 0x10], ebx
// 00494bbf  895e14               mov dword ptr [esi + 0x14], ebx
// 00494bc2  c645fc02             mov byte ptr [ebp - 4], 2
// 00494bc6  e8657cffff           call 0x48c830
// 00494bcb  83ec50               sub esp, 0x50
// 00494bce  8d5508               lea edx, [ebp + 8]
// 00494bd1  8965e4               mov dword ptr [ebp - 0x1c], esp
// 00494bd4  8bcc                 mov ecx, esp
// 00494bd6  52                   push edx
// 00494bd7  c645fc03             mov byte ptr [ebp - 4], 3
// 00494bdb  e8507cffff           call 0x48c830
// 00494be0  53                   push ebx
// 00494be1  57                   push edi
// 00494be2  8bce                 mov ecx, esi
// 00494be4  c645fc02             mov byte ptr [ebp - 4], 2
// 00494be8  e8a3f7ffff           call 0x494390
// 00494bed  8b4508               mov eax, dword ptr [ebp + 8]
// 00494bf0  33f6                 xor esi, esi
// 00494bf2  8975fc               mov dword ptr [ebp - 4], esi
// 00494bf5  3bc6                 cmp eax, esi
// 00494bf7  7417                 je 0x494c10
// 00494bf9  8b00                 mov eax, dword ptr [eax]
// 00494bfb  3bc6                 cmp eax, esi
// 00494bfd  740e                 je 0x494c0d
// 00494bff  8d4d10               lea ecx, [ebp + 0x10]
// 00494c02  6a01                 push 1
// 00494c04  51                   push ecx
// 00494c05  8bd1                 mov edx, ecx
// 00494c07  52                   push edx
// 00494c08  ffd0                 call eax
// 00494c0a  83c40c               add esp, 0xc
// 00494c0d  897508               mov dword ptr [ebp + 8], esi
// 00494c10  8b4558               mov eax, dword ptr [ebp + 0x58]
// 00494c13  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 00494c1a  3bc6                 cmp eax, esi
// 00494c1c  7414                 je 0x494c32
// 00494c1e  8b00                 mov eax, dword ptr [eax]
// 00494c20  3bc6                 cmp eax, esi
// 00494c22  740e                 je 0x494c32
// 00494c24  8d4d60               lea ecx, [ebp + 0x60]
// 00494c27  6a01                 push 1
// 00494c29  51                   push ecx
// 00494c2a  8bd1                 mov edx, ecx
// 00494c2c  52                   push edx
// 00494c2d  ffd0                 call eax
// 00494c2f  83c40c               add esp, 0xc
// 00494c32  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00494c35  5f                   pop edi
// 00494c36  5e                   pop esi
// 00494c37  64890d00000000       mov dword ptr fs:[0], ecx
// 00494c3e  5b                   pop ebx
// 00494c3f  8be5                 mov esp, ebp
// 00494c41  5d                   pop ebp
// 00494c42  c2a400               ret 0xa4
// library rbxgs/roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp (function ??$_Construct@V?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAEXV?$transform_iterator@U?$copy_iterator_rangeF@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@detail@algorithm@boost@@V?$split_iterator@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@34@Uuse_default@4@U64@@boost@@0Uinput_iterator_tag@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_descriptor_receiver_native_family_bd34d89f6d6c7dad.cpp
