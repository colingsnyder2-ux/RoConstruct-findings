// roc 2009-12 004cb190  unit: G3D::VARArea  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cb190
//
// 004cb190  6aff                 push -1
// 004cb192  64a100000000         mov eax, dword ptr fs:[0]
// 004cb198  68572e9300           push 0x932e57
// 004cb19d  50                   push eax
// 004cb19e  64892500000000       mov dword ptr fs:[0], esp
// 004cb1a5  83ec1c               sub esp, 0x1c
// 004cb1a8  53                   push ebx
// 004cb1a9  55                   push ebp
// 004cb1aa  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 004cb1ae  56                   push esi
// 004cb1af  8bf1                 mov esi, ecx
// 004cb1b1  b801000000           mov eax, 1
// 004cb1b6  014678               add dword ptr [esi + 0x78], eax
// 004cb1b9  57                   push edi
// 004cb1ba  83fd07               cmp ebp, 7
// 004cb1bd  7506                 jne 0x4cb1c5
// 004cb1bf  8bae40040000         mov ebp, dword ptr [esi + 0x440]
// 004cb1c5  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 004cb1c9  83ff07               cmp edi, 7
// 004cb1cc  7506                 jne 0x4cb1d4
// 004cb1ce  8bbe44040000         mov edi, dword ptr [esi + 0x444]
// 004cb1d4  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 004cb1d8  83fb05               cmp ebx, 5
// 004cb1db  7506                 jne 0x4cb1e3
// 004cb1dd  8b9e48040000         mov ebx, dword ptr [esi + 0x448]
// 004cb1e3  39be44040000         cmp dword ptr [esi + 0x444], edi
// 004cb1e9  7514                 jne 0x4cb1ff
// 004cb1eb  39ae40040000         cmp dword ptr [esi + 0x440], ebp
// 004cb1f1  750c                 jne 0x4cb1ff
// 004cb1f3  399e48040000         cmp dword ptr [esi + 0x448], ebx
// 004cb1f9  0f84ca000000         je 0x4cb2c9
// 004cb1ff  014670               add dword ptr [esi + 0x70], eax
// 004cb202  83ff03               cmp edi, 3
// 004cb205  751d                 jne 0x4cb224
// 004cb207  83fd02               cmp ebp, 2
// 004cb20a  7518                 jne 0x4cb224
// 004cb20c  3bdd                 cmp ebx, ebp
// 004cb20e  7404                 je 0x4cb214
// 004cb210  3bdf                 cmp ebx, edi
// 004cb212  7510                 jne 0x4cb224
// 004cb214  68e20b0000           push 0xbe2
// 004cb219  ff15dcbb9800         call dword ptr [0x98bbdc]
// 004cb21f  e993000000           jmp 0x4cb2b7
// 004cb224  68e20b0000           push 0xbe2
// 004cb229  ff15d0bb9800         call dword ptr [0x98bbd0]
// 004cb22f  8bc7                 mov eax, edi
// 004cb231  e8daf1ffff           call 0x4ca410
// 004cb236  50                   push eax
// 004cb237  8bc5                 mov eax, ebp
// 004cb239  e8d2f1ffff           call 0x4ca410
// 004cb23e  50                   push eax
// 004cb23f  ff159cba9800         call dword ptr [0x98ba9c]
// 004cb245  f60580d0b70001       test byte ptr [0xb7d080], 1
// 004cb24c  754c                 jne 0x4cb29a
// 004cb24e  830d80d0b70001       or dword ptr [0xb7d080], 1
// 004cb255  6828589b00           push 0x9b5828
// 004cb25a  8d4c2414             lea ecx, [esp + 0x14]
// 004cb25e  c744243800000000     mov dword ptr [esp + 0x38], 0
// 004cb266  ff15f4b69800         call dword ptr [0x98b6f4]
// 004cb26c  8d442410             lea eax, [esp + 0x10]
// 004cb270  50                   push eax
// 004cb271  c644243801           mov byte ptr [esp + 0x38], 1
// 004cb276  e8a58c0000           call 0x4d3f20
// 004cb27b  83c404               add esp, 4
// 004cb27e  8d4c2410             lea ecx, [esp + 0x10]
// 004cb282  a27cd0b700           mov byte ptr [0xb7d07c], al
// 004cb287  c644243400           mov byte ptr [esp + 0x34], 0
// 004cb28c  ff15e4b69800         call dword ptr [0x98b6e4]
// 004cb292  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 004cb29a  803d7cd0b70000       cmp byte ptr [0xb7d07c], 0
// 004cb2a1  7414                 je 0x4cb2b7
// 004cb2a3  8b0d1cd9b700         mov ecx, dword ptr [0xb7d91c]
// 004cb2a9  85c9                 test ecx, ecx
// 004cb2ab  740a                 je 0x4cb2b7
// 004cb2ad  8bc3                 mov eax, ebx
// 004cb2af  e88cfeffff           call 0x4cb140
// 004cb2b4  50                   push eax
// 004cb2b5  ffd1                 call ecx
// 004cb2b7  89be44040000         mov dword ptr [esi + 0x444], edi
// 004cb2bd  89ae40040000         mov dword ptr [esi + 0x440], ebp
// 004cb2c3  899e48040000         mov dword ptr [esi + 0x448], ebx
// 004cb2c9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004cb2cd  5f                   pop edi
// 004cb2ce  5e                   pop esi
// 004cb2cf  5d                   pop ebp
// 004cb2d0  5b                   pop ebx
// 004cb2d1  64890d00000000       mov dword ptr fs:[0], ecx
// 004cb2d8  83c428               add esp, 0x28
// 004cb2db  c20c00               ret 0xc
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setBlendFunc@RenderDevice@G3D@@QAEXW4BlendFunc@12@0W4BlendEq@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
