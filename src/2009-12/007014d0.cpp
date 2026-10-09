// roc 2009-12 007014d0  unit: RBX::Assembly  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007014d0
//
// 007014d0  53                   push ebx
// 007014d1  55                   push ebp
// 007014d2  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 007014d6  56                   push esi
// 007014d7  8b742414             mov esi, dword ptr [esp + 0x14]
// 007014db  8b0e                 mov ecx, dword ptr [esi]
// 007014dd  57                   push edi
// 007014de  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007014e2  8b07                 mov eax, dword ptr [edi]
// 007014e4  50                   push eax
// 007014e5  51                   push ecx
// 007014e6  ffd5                 call ebp
// 007014e8  83c408               add esp, 8
// 007014eb  84c0                 test al, al
// 007014ed  740c                 je 0x7014fb
// 007014ef  3bf7                 cmp esi, edi
// 007014f1  7408                 je 0x7014fb
// 007014f3  8b17                 mov edx, dword ptr [edi]
// 007014f5  8b06                 mov eax, dword ptr [esi]
// 007014f7  8916                 mov dword ptr [esi], edx
// 007014f9  8907                 mov dword ptr [edi], eax
// 007014fb  8b06                 mov eax, dword ptr [esi]
// 007014fd  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00701501  8b0b                 mov ecx, dword ptr [ebx]
// 00701503  50                   push eax
// 00701504  51                   push ecx
// 00701505  ffd5                 call ebp
// 00701507  83c408               add esp, 8
// 0070150a  84c0                 test al, al
// 0070150c  740c                 je 0x70151a
// 0070150e  3bde                 cmp ebx, esi
// 00701510  7408                 je 0x70151a
// 00701512  8b16                 mov edx, dword ptr [esi]
// 00701514  8b03                 mov eax, dword ptr [ebx]
// 00701516  8913                 mov dword ptr [ebx], edx
// 00701518  8906                 mov dword ptr [esi], eax
// 0070151a  8b07                 mov eax, dword ptr [edi]
// 0070151c  8b0e                 mov ecx, dword ptr [esi]
// 0070151e  50                   push eax
// 0070151f  51                   push ecx
// 00701520  ffd5                 call ebp
// 00701522  83c408               add esp, 8
// 00701525  84c0                 test al, al
// 00701527  740c                 je 0x701535
// 00701529  3bf7                 cmp esi, edi
// 0070152b  7408                 je 0x701535
// 0070152d  8b17                 mov edx, dword ptr [edi]
// 0070152f  8b06                 mov eax, dword ptr [esi]
// 00701531  8916                 mov dword ptr [esi], edx
// 00701533  8907                 mov dword ptr [edi], eax
// 00701535  5f                   pop edi
// 00701536  5e                   pop esi
// 00701537  5d                   pop ebp
// 00701538  5b                   pop ebx
// 00701539  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Med3@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@00P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
