// from server: 100% by tester
// roc 2007-03 00501e90  unit: seg_00500000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00501e90
//
// 00501e90  6aff                 push -1
// 00501e92  68b90d7500           push 0x750db9
// 00501e97  64a100000000         mov eax, dword ptr fs:[0]
// 00501e9d  50                   push eax
// 00501e9e  83ec20               sub esp, 0x20
// 00501ea1  55                   push ebp
// 00501ea2  56                   push esi
// 00501ea3  57                   push edi
// 00501ea4  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00501ea9  33c4                 xor eax, esp
// 00501eab  50                   push eax
// 00501eac  8d442430             lea eax, [esp + 0x30]
// 00501eb0  64a300000000         mov dword ptr fs:[0], eax
// 00501eb6  8bf1                 mov esi, ecx
// 00501eb8  89742410             mov dword ptr [esp + 0x10], esi
// 00501ebc  8b442448             mov eax, dword ptr [esp + 0x48]
// 00501ec0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00501ec4  8b542440             mov edx, dword ptr [esp + 0x40]
// 00501ec8  50                   push eax
// 00501ec9  51                   push ecx
// 00501eca  52                   push edx
// 00501ecb  8bce                 mov ecx, esi
// 00501ecd  e89efdffff           call 0x501c70
// 00501ed2  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00501ed6  55                   push ebp
// 00501ed7  8d4e44               lea ecx, [esi + 0x44]
// 00501eda  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00501ee2  c706b8057a00         mov dword ptr [esi], 0x7a05b8
// 00501ee8  ff157ce77700         call dword ptr [0x77e77c]
// 00501eee  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00501ef2  57                   push edi
// 00501ef3  8d4e60               lea ecx, [esi + 0x60]
// 00501ef6  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00501efb  ff157ce77700         call dword ptr [0x77e77c]
// 00501f01  b810000000           mov eax, 0x10
// 00501f06  394718               cmp dword ptr [edi + 0x18], eax
// 00501f09  c644243802           mov byte ptr [esp + 0x38], 2
// 00501f0e  7205                 jb 0x501f15
// 00501f10  8b7f04               mov edi, dword ptr [edi + 4]
// 00501f13  eb03                 jmp 0x501f18
// 00501f15  83c704               add edi, 4
// 00501f18  394518               cmp dword ptr [ebp + 0x18], eax
// 00501f1b  7205                 jb 0x501f22
// 00501f1d  8b4504               mov eax, dword ptr [ebp + 4]
// 00501f20  eb03                 jmp 0x501f25
// 00501f22  8d4504               lea eax, [ebp + 4]
// 00501f25  57                   push edi
// 00501f26  50                   push eax
// 00501f27  8d44241c             lea eax, [esp + 0x1c]
// 00501f2b  6888057a00           push 0x7a0588
// 00501f30  50                   push eax
// 00501f31  e8fa33ffff           call 0x4f5330
// 00501f36  83c410               add esp, 0x10
// 00501f39  50                   push eax
// 00501f3a  8d4e28               lea ecx, [esi + 0x28]
// 00501f3d  c644243c03           mov byte ptr [esp + 0x3c], 3
// 00501f42  ff1540e77700         call dword ptr [0x77e740]
// 00501f48  8d4c2414             lea ecx, [esp + 0x14]
// 00501f4c  c644243802           mov byte ptr [esp + 0x38], 2
// 00501f51  ff158ce77700         call dword ptr [0x77e78c]
// 00501f57  8bc6                 mov eax, esi
// 00501f59  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00501f5d  64890d00000000       mov dword ptr fs:[0], ecx
// 00501f64  59                   pop ecx
// 00501f65  5f                   pop edi
// 00501f66  5e                   pop esi
// 00501f67  5d                   pop ebp
// 00501f68  83c42c               add esp, 0x2c
// 00501f6b  c21400               ret 0x14
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ??0WrongSymbol@TextInput@G3D@@QAE@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
