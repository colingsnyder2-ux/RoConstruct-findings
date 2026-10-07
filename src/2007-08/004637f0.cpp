// roc 2007-08 004637f0  unit: RBX::VRunService::?$Listener  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004637f0
//
// 004637f0  56                   push esi
// 004637f1  8bf1                 mov esi, ecx
// 004637f3  8b06                 mov eax, dword ptr [esi]
// 004637f5  85c0                 test eax, eax
// 004637f7  7429                 je 0x463822
// 004637f9  83c004               add eax, 4
// 004637fc  50                   push eax
// 004637fd  ff15e8d27700         call dword ptr [0x77d2e8]
// 00463803  85c0                 test eax, eax
// 00463805  7515                 jne 0x46381c
// 00463807  8b0e                 mov ecx, dword ptr [esi]
// 00463809  e8c245ffff           call 0x457dd0
// 0046380e  8b0e                 mov ecx, dword ptr [esi]
// 00463810  85c9                 test ecx, ecx
// 00463812  7408                 je 0x46381c
// 00463814  8b01                 mov eax, dword ptr [ecx]
// 00463816  8b10                 mov edx, dword ptr [eax]
// 00463818  6a01                 push 1
// 0046381a  ffd2                 call edx
// 0046381c  c70600000000         mov dword ptr [esi], 0
// 00463822  5e                   pop esi
// 00463823  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Renderbuffer.cpp (function ?zeroPointer@?$ReferenceCountedPointer@VRenderbuffer@G3D@@@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Renderbuffer.cpp
