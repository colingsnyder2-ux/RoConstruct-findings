// roc 2007-03 0047ab30  unit: seg_00470000  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047ab30
//
// 0047ab30  6aff                 push -1
// 0047ab32  68fc7b7400           push 0x747bfc
// 0047ab37  64a100000000         mov eax, dword ptr fs:[0]
// 0047ab3d  50                   push eax
// 0047ab3e  51                   push ecx
// 0047ab3f  56                   push esi
// 0047ab40  57                   push edi
// 0047ab41  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047ab46  33c4                 xor eax, esp
// 0047ab48  50                   push eax
// 0047ab49  8d442410             lea eax, [esp + 0x10]
// 0047ab4d  64a300000000         mov dword ptr fs:[0], eax
// 0047ab53  8bf1                 mov esi, ecx
// 0047ab55  8974240c             mov dword ptr [esp + 0xc], esi
// 0047ab59  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0047ab5c  33ff                 xor edi, edi
// 0047ab5e  50                   push eax
// 0047ab5f  897c241c             mov dword ptr [esp + 0x1c], edi
// 0047ab63  e818880700           call 0x4f3380
// 0047ab68  83c404               add esp, 4
// 0047ab6b  8d4e04               lea ecx, [esi + 4]
// 0047ab6e  897e2c               mov dword ptr [esi + 0x2c], edi
// 0047ab71  897e30               mov dword ptr [esi + 0x30], edi
// 0047ab74  897e34               mov dword ptr [esi + 0x34], edi
// 0047ab77  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0047ab7f  ff158ce77700         call dword ptr [0x77e78c]
// 0047ab85  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0047ab89  64890d00000000       mov dword ptr fs:[0], ecx
// 0047ab90  59                   pop ecx
// 0047ab91  5f                   pop edi
// 0047ab92  5e                   pop esi
// 0047ab93  83c410               add esp, 0x10
// 0047ab96  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ??1JoystickInfo@_DirectInput@_internal@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
