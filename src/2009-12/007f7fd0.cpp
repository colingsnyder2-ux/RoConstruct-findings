// roc 2009-12 007f7fd0  unit: IIHH::?$CMap  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7fd0
//
// 007f7fd0  6aff                 push -1
// 007f7fd2  68f6889500           push 0x9588f6
// 007f7fd7  64a100000000         mov eax, dword ptr fs:[0]
// 007f7fdd  50                   push eax
// 007f7fde  51                   push ecx
// 007f7fdf  56                   push esi
// 007f7fe0  57                   push edi
// 007f7fe1  a10052b600           mov eax, dword ptr [0xb65200]
// 007f7fe6  33c4                 xor eax, esp
// 007f7fe8  50                   push eax
// 007f7fe9  8d442410             lea eax, [esp + 0x10]
// 007f7fed  64a300000000         mov dword ptr fs:[0], eax
// 007f7ff3  8bf1                 mov esi, ecx
// 007f7ff5  8974240c             mov dword ptr [esp + 0xc], esi
// 007f7ff9  8d7e20               lea edi, [esi + 0x20]
// 007f7ffc  c7064c199f00         mov dword ptr [esi], 0x9f194c
// 007f8002  c707ec189f00         mov dword ptr [edi], 0x9f18ec
// 007f8008  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007f800e  c74424180c000000     mov dword ptr [esp + 0x18], 0xc
// 007f8016  85c9                 test ecx, ecx
// 007f8018  7410                 je 0x7f802a
// 007f801a  56                   push esi
// 007f801b  e8a0fbffff           call 0x7f7bc0
// 007f8020  c7865c01000000000000 mov dword ptr [esi + 0x15c], 0
// 007f802a  8d8e2c010000         lea ecx, [esi + 0x12c]
// 007f8030  c64424180b           mov byte ptr [esp + 0x18], 0xb
// 007f8035  e8f6f8ffff           call 0x7f7930
// 007f803a  8d8e10010000         lea ecx, [esi + 0x110]
// 007f8040  c64424180a           mov byte ptr [esp + 0x18], 0xa
// 007f8045  e8e6f8ffff           call 0x7f7930
// 007f804a  8d8e08010000         lea ecx, [esi + 0x108]
// 007f8050  ff15c0de9800         call dword ptr [0x98dec0]
// 007f8056  8d8ef4000000         lea ecx, [esi + 0xf4]
// 007f805c  ff15c0de9800         call dword ptr [0x98dec0]
// 007f8062  8d8ef0000000         lea ecx, [esi + 0xf0]
// 007f8068  ff15c0de9800         call dword ptr [0x98dec0]
// 007f806e  8d8eec000000         lea ecx, [esi + 0xec]
// 007f8074  ff15c0de9800         call dword ptr [0x98dec0]
// 007f807a  8d8ee8000000         lea ecx, [esi + 0xe8]
// 007f8080  ff15c0de9800         call dword ptr [0x98dec0]
// 007f8086  8d8ee4000000         lea ecx, [esi + 0xe4]
// 007f808c  ff15c0de9800         call dword ptr [0x98dec0]
// 007f8092  8d8ee0000000         lea ecx, [esi + 0xe0]
// 007f8098  ff15c0de9800         call dword ptr [0x98dec0]
// 007f809e  8d8edc000000         lea ecx, [esi + 0xdc]
// 007f80a4  ff15c0de9800         call dword ptr [0x98dec0]
// 007f80aa  8d8ed8000000         lea ecx, [esi + 0xd8]
// 007f80b0  ff15c0de9800         call dword ptr [0x98dec0]
// 007f80b6  8bcf                 mov ecx, edi
// 007f80b8  c644241800           mov byte ptr [esp + 0x18], 0
// 007f80bd  e87e430400           call 0x83c440
// 007f80c2  8bce                 mov ecx, esi
// 007f80c4  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 007f80cc  e811c3ffff           call 0x7f43e2
// 007f80d1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f80d5  64890d00000000       mov dword ptr fs:[0], ecx
// 007f80dc  59                   pop ecx
// 007f80dd  5f                   pop edi
// 007f80de  5e                   pop esi
// 007f80df  83c410               add esp, 0x10
// 007f80e2  c3                   ret 
// copied from an identical function in another client (function ??1CXTPControl@@MAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp