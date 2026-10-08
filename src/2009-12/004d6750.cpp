// roc 2009-12 004d6750  unit: G3D::GWindow  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d6750
//
// 004d6750  6aff                 push -1
// 004d6752  687c3c9300           push 0x933c7c
// 004d6757  64a100000000         mov eax, dword ptr fs:[0]
// 004d675d  50                   push eax
// 004d675e  64892500000000       mov dword ptr fs:[0], esp
// 004d6765  51                   push ecx
// 004d6766  56                   push esi
// 004d6767  8bf1                 mov esi, ecx
// 004d6769  57                   push edi
// 004d676a  89742408             mov dword ptr [esp + 8], esi
// 004d676e  8b462c               mov eax, dword ptr [esi + 0x2c]
// 004d6771  33ff                 xor edi, edi
// 004d6773  50                   push eax
// 004d6774  897c2418             mov dword ptr [esp + 0x18], edi
// 004d6778  e8633c1100           call 0x5ea3e0
// 004d677d  83c404               add esp, 4
// 004d6780  8d4e04               lea ecx, [esi + 4]
// 004d6783  897e2c               mov dword ptr [esi + 0x2c], edi
// 004d6786  897e30               mov dword ptr [esi + 0x30], edi
// 004d6789  897e34               mov dword ptr [esi + 0x34], edi
// 004d678c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004d6794  ff15e4b69800         call dword ptr [0x98b6e4]
// 004d679a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d679e  5f                   pop edi
// 004d679f  5e                   pop esi
// 004d67a0  64890d00000000       mov dword ptr fs:[0], ecx
// 004d67a7  83c410               add esp, 0x10
// 004d67aa  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1JoystickInfo@_DirectInput@_internal@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
