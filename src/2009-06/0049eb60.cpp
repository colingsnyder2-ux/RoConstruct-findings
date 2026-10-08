// roc 2009-06 0049eb60  unit: G3D::VARArea  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049eb60
//
// 0049eb60  6aff                 push -1
// 0049eb62  64a100000000         mov eax, dword ptr fs:[0]
// 0049eb68  68676f8500           push 0x856f67
// 0049eb6d  50                   push eax
// 0049eb6e  64892500000000       mov dword ptr fs:[0], esp
// 0049eb75  83ec1c               sub esp, 0x1c
// 0049eb78  53                   push ebx
// 0049eb79  55                   push ebp
// 0049eb7a  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0049eb7e  56                   push esi
// 0049eb7f  8bf1                 mov esi, ecx
// 0049eb81  b801000000           mov eax, 1
// 0049eb86  014678               add dword ptr [esi + 0x78], eax
// 0049eb89  57                   push edi
// 0049eb8a  83fd07               cmp ebp, 7
// 0049eb8d  7506                 jne 0x49eb95
// 0049eb8f  8bae40040000         mov ebp, dword ptr [esi + 0x440]
// 0049eb95  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0049eb99  83ff07               cmp edi, 7
// 0049eb9c  7506                 jne 0x49eba4
// 0049eb9e  8bbe44040000         mov edi, dword ptr [esi + 0x444]
// 0049eba4  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 0049eba8  83fb05               cmp ebx, 5
// 0049ebab  7506                 jne 0x49ebb3
// 0049ebad  8b9e48040000         mov ebx, dword ptr [esi + 0x448]
// 0049ebb3  39be44040000         cmp dword ptr [esi + 0x444], edi
// 0049ebb9  7514                 jne 0x49ebcf
// 0049ebbb  39ae40040000         cmp dword ptr [esi + 0x440], ebp
// 0049ebc1  750c                 jne 0x49ebcf
// 0049ebc3  399e48040000         cmp dword ptr [esi + 0x448], ebx
// 0049ebc9  0f84ca000000         je 0x49ec99
// 0049ebcf  014670               add dword ptr [esi + 0x70], eax
// 0049ebd2  83ff03               cmp edi, 3
// 0049ebd5  751d                 jne 0x49ebf4
// 0049ebd7  83fd02               cmp ebp, 2
// 0049ebda  7518                 jne 0x49ebf4
// 0049ebdc  3bdd                 cmp ebx, ebp
// 0049ebde  7404                 je 0x49ebe4
// 0049ebe0  3bdf                 cmp ebx, edi
// 0049ebe2  7510                 jne 0x49ebf4
// 0049ebe4  68e20b0000           push 0xbe2
// 0049ebe9  ff15b8eb8900         call dword ptr [0x89ebb8]
// 0049ebef  e993000000           jmp 0x49ec87
// 0049ebf4  68e20b0000           push 0xbe2
// 0049ebf9  ff15aceb8900         call dword ptr [0x89ebac]
// 0049ebff  8bc7                 mov eax, edi
// 0049ec01  e80af2ffff           call 0x49de10
// 0049ec06  50                   push eax
// 0049ec07  8bc5                 mov eax, ebp
// 0049ec09  e802f2ffff           call 0x49de10
// 0049ec0e  50                   push eax
// 0049ec0f  ff15d8eb8900         call dword ptr [0x89ebd8]
// 0049ec15  f605d0c8a30001       test byte ptr [0xa3c8d0], 1
// 0049ec1c  754c                 jne 0x49ec6a
// 0049ec1e  830dd0c8a30001       or dword ptr [0xa3c8d0], 1
// 0049ec25  6830ff8b00           push 0x8bff30
// 0049ec2a  8d4c2414             lea ecx, [esp + 0x14]
// 0049ec2e  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0049ec36  ff15b4e48900         call dword ptr [0x89e4b4]
// 0049ec3c  8d442410             lea eax, [esp + 0x10]
// 0049ec40  50                   push eax
// 0049ec41  c644243801           mov byte ptr [esp + 0x38], 1
// 0049ec46  e805870000           call 0x4a7350
// 0049ec4b  83c404               add esp, 4
// 0049ec4e  8d4c2410             lea ecx, [esp + 0x10]
// 0049ec52  a2ccc8a300           mov byte ptr [0xa3c8cc], al
// 0049ec57  c644243400           mov byte ptr [esp + 0x34], 0
// 0049ec5c  ff15c4e48900         call dword ptr [0x89e4c4]
// 0049ec62  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0049ec6a  803dccc8a30000       cmp byte ptr [0xa3c8cc], 0
// 0049ec71  7414                 je 0x49ec87
// 0049ec73  8b0d6cd1a300         mov ecx, dword ptr [0xa3d16c]
// 0049ec79  85c9                 test ecx, ecx
// 0049ec7b  740a                 je 0x49ec87
// 0049ec7d  8bc3                 mov eax, ebx
// 0049ec7f  e88cfeffff           call 0x49eb10
// 0049ec84  50                   push eax
// 0049ec85  ffd1                 call ecx
// 0049ec87  89be44040000         mov dword ptr [esi + 0x444], edi
// 0049ec8d  89ae40040000         mov dword ptr [esi + 0x440], ebp
// 0049ec93  899e48040000         mov dword ptr [esi + 0x448], ebx
// 0049ec99  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0049ec9d  5f                   pop edi
// 0049ec9e  5e                   pop esi
// 0049ec9f  5d                   pop ebp
// 0049eca0  5b                   pop ebx
// 0049eca1  64890d00000000       mov dword ptr fs:[0], ecx
// 0049eca8  83c428               add esp, 0x28
// 0049ecab  c20c00               ret 0xc
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setBlendFunc@RenderDevice@G3D@@QAEXW4BlendFunc@12@0W4BlendEq@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
