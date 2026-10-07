// roc 2007-08 004fb300  unit: RBX::Render::TextureProxy  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fb300
//
// 004fb300  6aff                 push -1
// 004fb302  686be57400           push 0x74e56b
// 004fb307  64a100000000         mov eax, dword ptr fs:[0]
// 004fb30d  50                   push eax
// 004fb30e  51                   push ecx
// 004fb30f  56                   push esi
// 004fb310  57                   push edi
// 004fb311  a188518b00           mov eax, dword ptr [0x8b5188]
// 004fb316  33c4                 xor eax, esp
// 004fb318  50                   push eax
// 004fb319  8d442410             lea eax, [esp + 0x10]
// 004fb31d  64a300000000         mov dword ptr fs:[0], eax
// 004fb323  8bf1                 mov esi, ecx
// 004fb325  8974240c             mov dword ptr [esp + 0xc], esi
// 004fb329  8b4608               mov eax, dword ptr [esi + 8]
// 004fb32c  85c0                 test eax, eax
// 004fb32e  8b3de8d27700         mov edi, dword ptr [0x77d2e8]
// 004fb334  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004fb33c  7428                 je 0x4fb366
// 004fb33e  83c004               add eax, 4
// 004fb341  50                   push eax
// 004fb342  ffd7                 call edi
// 004fb344  85c0                 test eax, eax
// 004fb346  7517                 jne 0x4fb35f
// 004fb348  8b4e08               mov ecx, dword ptr [esi + 8]
// 004fb34b  e880caf5ff           call 0x457dd0
// 004fb350  8b4e08               mov ecx, dword ptr [esi + 8]
// 004fb353  85c9                 test ecx, ecx
// 004fb355  7408                 je 0x4fb35f
// 004fb357  8b01                 mov eax, dword ptr [ecx]
// 004fb359  8b10                 mov edx, dword ptr [eax]
// 004fb35b  6a01                 push 1
// 004fb35d  ffd2                 call edx
// 004fb35f  c7460800000000       mov dword ptr [esi + 8], 0
// 004fb366  8b4604               mov eax, dword ptr [esi + 4]
// 004fb369  85c0                 test eax, eax
// 004fb36b  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004fb373  7428                 je 0x4fb39d
// 004fb375  83c004               add eax, 4
// 004fb378  50                   push eax
// 004fb379  ffd7                 call edi
// 004fb37b  85c0                 test eax, eax
// 004fb37d  7517                 jne 0x4fb396
// 004fb37f  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fb382  e849caf5ff           call 0x457dd0
// 004fb387  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fb38a  85c9                 test ecx, ecx
// 004fb38c  7408                 je 0x4fb396
// 004fb38e  8b01                 mov eax, dword ptr [ecx]
// 004fb390  8b10                 mov edx, dword ptr [eax]
// 004fb392  6a01                 push 1
// 004fb394  ffd2                 call edx
// 004fb396  c7460400000000       mov dword ptr [esi + 4], 0
// 004fb39d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004fb3a1  64890d00000000       mov dword ptr fs:[0], ecx
// 004fb3a8  59                   pop ecx
// 004fb3a9  5f                   pop edi
// 004fb3aa  5e                   pop esi
// 004fb3ab  83c410               add esp, 0x10
// 004fb3ae  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ??1Attachment@Framebuffer@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
