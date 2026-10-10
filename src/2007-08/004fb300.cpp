// from server: 100% by tester
// roc 2007-03 004eee70  unit: seg_004e0000  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eee70
//
// 004eee70  6aff                 push -1
// 004eee72  68bbf37400           push 0x74f3bb
// 004eee77  64a100000000         mov eax, dword ptr fs:[0]
// 004eee7d  50                   push eax
// 004eee7e  51                   push ecx
// 004eee7f  56                   push esi
// 004eee80  57                   push edi
// 004eee81  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004eee86  33c4                 xor eax, esp
// 004eee88  50                   push eax
// 004eee89  8d442410             lea eax, [esp + 0x10]
// 004eee8d  64a300000000         mov dword ptr fs:[0], eax
// 004eee93  8bf1                 mov esi, ecx
// 004eee95  8974240c             mov dword ptr [esp + 0xc], esi
// 004eee99  8b4608               mov eax, dword ptr [esi + 8]
// 004eee9c  85c0                 test eax, eax
// 004eee9e  8b3da8d27700         mov edi, dword ptr [0x77d2a8]
// 004eeea4  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004eeeac  7428                 je 0x4eeed6
// 004eeeae  83c004               add eax, 4
// 004eeeb1  50                   push eax
// 004eeeb2  ffd7                 call edi
// 004eeeb4  85c0                 test eax, eax
// 004eeeb6  7517                 jne 0x4eeecf
// 004eeeb8  8b4e08               mov ecx, dword ptr [esi + 8]
// 004eeebb  e80045f7ff           call 0x4633c0
// 004eeec0  8b4e08               mov ecx, dword ptr [esi + 8]
// 004eeec3  85c9                 test ecx, ecx
// 004eeec5  7408                 je 0x4eeecf
// 004eeec7  8b01                 mov eax, dword ptr [ecx]
// 004eeec9  8b10                 mov edx, dword ptr [eax]
// 004eeecb  6a01                 push 1
// 004eeecd  ffd2                 call edx
// 004eeecf  c7460800000000       mov dword ptr [esi + 8], 0
// 004eeed6  8b4604               mov eax, dword ptr [esi + 4]
// 004eeed9  85c0                 test eax, eax
// 004eeedb  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004eeee3  7428                 je 0x4eef0d
// 004eeee5  83c004               add eax, 4
// 004eeee8  50                   push eax
// 004eeee9  ffd7                 call edi
// 004eeeeb  85c0                 test eax, eax
// 004eeeed  7517                 jne 0x4eef06
// 004eeeef  8b4e04               mov ecx, dword ptr [esi + 4]
// 004eeef2  e8c944f7ff           call 0x4633c0
// 004eeef7  8b4e04               mov ecx, dword ptr [esi + 4]
// 004eeefa  85c9                 test ecx, ecx
// 004eeefc  7408                 je 0x4eef06
// 004eeefe  8b01                 mov eax, dword ptr [ecx]
// 004eef00  8b10                 mov edx, dword ptr [eax]
// 004eef02  6a01                 push 1
// 004eef04  ffd2                 call edx
// 004eef06  c7460400000000       mov dword ptr [esi + 4], 0
// 004eef0d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004eef11  64890d00000000       mov dword ptr fs:[0], ecx
// 004eef18  59                   pop ecx
// 004eef19  5f                   pop edi
// 004eef1a  5e                   pop esi
// 004eef1b  83c410               add esp, 0x10
// 004eef1e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Framebuffer.cpp (function ??1Attachment@Framebuffer@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Framebuffer.cpp
