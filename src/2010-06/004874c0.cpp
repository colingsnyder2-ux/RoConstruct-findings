// roc 2010-06 004874c0  unit: G3D::VARArea  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004874c0
//
// 004874c0  53                   push ebx
// 004874c1  55                   push ebp
// 004874c2  33ed                 xor ebp, ebp
// 004874c4  33db                 xor ebx, ebx
// 004874c6  392d2431c000         cmp dword ptr [0xc03124], ebp
// 004874cc  7e6b                 jle 0x487539
// 004874ce  56                   push esi
// 004874cf  57                   push edi
// 004874d0  a12031c000           mov eax, dword ptr [0xc03120]
// 004874d5  8b3498               mov esi, dword ptr [eax + ebx*4]
// 004874d8  396e0c               cmp dword ptr [esi + 0xc], ebp
// 004874db  8d7e0c               lea edi, [esi + 0xc]
// 004874de  7434                 je 0x487514
// 004874e0  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 004874e3  57                   push edi
// 004874e4  e8b7bc0000           call 0x4931a0
// 004874e9  8b07                 mov eax, dword ptr [edi]
// 004874eb  3bc5                 cmp eax, ebp
// 004874ed  7425                 je 0x487514
// 004874ef  83c004               add eax, 4
// 004874f2  50                   push eax
// 004874f3  ff157ca39e00         call dword ptr [0x9ea37c]
// 004874f9  85c0                 test eax, eax
// 004874fb  7515                 jne 0x487512
// 004874fd  8b0f                 mov ecx, dword ptr [edi]
// 004874ff  e81cc6ffff           call 0x483b20
// 00487504  8b0f                 mov ecx, dword ptr [edi]
// 00487506  3bcd                 cmp ecx, ebp
// 00487508  7408                 je 0x487512
// 0048750a  8b11                 mov edx, dword ptr [ecx]
// 0048750c  8b02                 mov eax, dword ptr [edx]
// 0048750e  6a01                 push 1
// 00487510  ffd0                 call eax
// 00487512  892f                 mov dword ptr [edi], ebp
// 00487514  83461801             add dword ptr [esi + 0x18], 1
// 00487518  896e10               mov dword ptr [esi + 0x10], ebp
// 0048751b  55                   push ebp
// 0048751c  116e1c               adc dword ptr [esi + 0x1c], ebp
// 0048751f  8b0d2031c000         mov ecx, dword ptr [0xc03120]
// 00487525  8b0c99               mov ecx, dword ptr [ecx + ebx*4]
// 00487528  8b11                 mov edx, dword ptr [ecx]
// 0048752a  8b02                 mov eax, dword ptr [edx]
// 0048752c  ffd0                 call eax
// 0048752e  43                   inc ebx
// 0048752f  3b1d2431c000         cmp ebx, dword ptr [0xc03124]
// 00487535  7c99                 jl 0x4874d0
// 00487537  5f                   pop edi
// 00487538  5e                   pop esi
// 00487539  6a01                 push 1
// 0048753b  55                   push ebp
// 0048753c  b92031c000           mov ecx, 0xc03120
// 00487541  e8fafbffff           call 0x487140
// 00487546  5d                   pop ebp
// 00487547  5b                   pop ebx
// 00487548  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VARArea.cpp (function ?cleanupAllVARAreas@VARArea@G3D@@SAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VARArea.cpp
