// roc 2008-06 004d05d0  unit: RBX::Network::PhysicsSender  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d05d0
//
// 004d05d0  53                   push ebx
// 004d05d1  56                   push esi
// 004d05d2  57                   push edi
// 004d05d3  33db                 xor ebx, ebx
// 004d05d5  8d7168               lea esi, [ecx + 0x68]
// 004d05d8  8b3e                 mov edi, dword ptr [esi]
// 004d05da  8b5604               mov edx, dword ptr [esi + 4]
// 004d05dd  3bfa                 cmp edi, edx
// 004d05df  7706                 ja 0x4d05e7
// 004d05e1  2bd7                 sub edx, edi
// 004d05e3  8bc2                 mov eax, edx
// 004d05e5  eb07                 jmp 0x4d05ee
// 004d05e7  8b4608               mov eax, dword ptr [esi + 8]
// 004d05ea  2bc7                 sub eax, edi
// 004d05ec  03c2                 add eax, edx
// 004d05ee  85c0                 test eax, eax
// 004d05f0  771b                 ja 0x4d060d
// 004d05f2  43                   inc ebx
// 004d05f3  83c610               add esi, 0x10
// 004d05f6  83fb04               cmp ebx, 4
// 004d05f9  72dd                 jb 0x4d05d8
// 004d05fb  83792000             cmp dword ptr [ecx + 0x20], 0
// 004d05ff  7712                 ja 0x4d0613
// 004d0601  83794c00             cmp dword ptr [ecx + 0x4c], 0
// 004d0605  750c                 jne 0x4d0613
// 004d0607  5f                   pop edi
// 004d0608  5e                   pop esi
// 004d0609  33c0                 xor eax, eax
// 004d060b  5b                   pop ebx
// 004d060c  c3                   ret 
// 004d060d  5f                   pop edi
// 004d060e  5e                   pop esi
// 004d060f  b001                 mov al, 1
// 004d0611  5b                   pop ebx
// 004d0612  c3                   ret 
// 004d0613  5f                   pop edi
// 004d0614  5e                   pop esi
// 004d0615  b801000000           mov eax, 1
// 004d061a  5b                   pop ebx
// 004d061b  c3                   ret 
// library rbxgs-raknet/ReliabilityLayer.cpp (function ?IsOutgoingDataWaiting@ReliabilityLayer@@QAE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet ReliabilityLayer.cpp
