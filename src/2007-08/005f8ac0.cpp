// roc 2007-08 005f8ac0  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f8ac0
//
// 005f8ac0  6aff                 push -1
// 005f8ac2  68b2417500           push 0x7541b2
// 005f8ac7  64a100000000         mov eax, dword ptr fs:[0]
// 005f8acd  50                   push eax
// 005f8ace  64892500000000       mov dword ptr fs:[0], esp
// 005f8ad5  83ec44               sub esp, 0x44
// 005f8ad8  68e8717800           push 0x7871e8
// 005f8add  8d4c2404             lea ecx, [esp + 4]
// 005f8ae1  ff1598e67700         call dword ptr [0x77e698]
// 005f8ae7  8d4c241c             lea ecx, [esp + 0x1c]
// 005f8aeb  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 005f8af3  ff15f8e67700         call dword ptr [0x77e6f8]
// 005f8af9  8d0424               lea eax, [esp]
// 005f8afc  50                   push eax
// 005f8afd  8d4c242c             lea ecx, [esp + 0x2c]
// 005f8b01  c644245001           mov byte ptr [esp + 0x50], 1
// 005f8b06  c7442420604e7800     mov dword ptr [esp + 0x20], 0x784e60
// 005f8b0e  ff159ce67700         call dword ptr [0x77e69c]
// 005f8b14  6878f78300           push 0x83f778
// 005f8b19  8d4c2420             lea ecx, [esp + 0x20]
// 005f8b1d  51                   push ecx
// 005f8b1e  c644245400           mov byte ptr [esp + 0x54], 0
// 005f8b23  c74424246c4e7800     mov dword ptr [esp + 0x24], 0x784e6c
// 005f8b2b  e86e800300           call 0x630b9e
// library g3d-6.09-rbx2008/G3Dcpp\TextInput.cpp (function ?_Xlen@?$deque@VToken@G3D@@V?$allocator@VToken@G3D@@@std@@@std@@KAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/TextInput.cpp
