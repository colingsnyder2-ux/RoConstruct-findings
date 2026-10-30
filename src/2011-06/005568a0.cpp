// from server: 100% by auto
// roc 2011-06 005568a0  unit: G3D::LineSegment  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005568a0
//
// 005568a0  53                   push ebx
// 005568a1  55                   push ebp
// 005568a2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005568a6  56                   push esi
// 005568a7  8b7518               mov esi, dword ptr [ebp + 0x18]
// 005568aa  8b1e                 mov ebx, dword ptr [esi]
// 005568ac  57                   push edi
// 005568ad  8b7e04               mov edi, dword ptr [esi + 4]
// 005568b0  85ff                 test edi, edi
// 005568b2  7519                 jne 0x5568cd
// 005568b4  8b460c               mov eax, dword ptr [esi + 0xc]
// 005568b7  55                   push ebp
// 005568b8  ffd0                 call eax
// 005568ba  83c404               add esp, 4
// 005568bd  84c0                 test al, al
// 005568bf  7507                 jne 0x5568c8
// 005568c1  5f                   pop edi
// 005568c2  5e                   pop esi
// 005568c3  5d                   pop ebp
// 005568c4  32c0                 xor al, al
// 005568c6  5b                   pop ebx
// 005568c7  c3                   ret 
// 005568c8  8b1e                 mov ebx, dword ptr [esi]
// 005568ca  8b7e04               mov edi, dword ptr [esi + 4]
// 005568cd  0fb60b               movzx ecx, byte ptr [ebx]
// 005568d0  4f                   dec edi
// 005568d1  43                   inc ebx
// 005568d2  894c2414             mov dword ptr [esp + 0x14], ecx
// 005568d6  85ff                 test edi, edi
// 005568d8  7516                 jne 0x5568f0
// 005568da  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005568dd  55                   push ebp
// 005568de  ffd1                 call ecx
// 005568e0  83c404               add esp, 4
// 005568e3  84c0                 test al, al
// 005568e5  74da                 je 0x5568c1
// 005568e7  8b1e                 mov ebx, dword ptr [esi]
// 005568e9  8b7e04               mov edi, dword ptr [esi + 4]
// 005568ec  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005568f0  0fb603               movzx eax, byte ptr [ebx]
// 005568f3  4f                   dec edi
// 005568f4  43                   inc ebx
// 005568f5  89442414             mov dword ptr [esp + 0x14], eax
// 005568f9  81f9ff000000         cmp ecx, 0xff
// 005568ff  7507                 jne 0x556908
// 00556901  3dd8000000           cmp eax, 0xd8
// 00556906  7425                 je 0x55692d
// 00556908  8b5500               mov edx, dword ptr [ebp]
// 0055690b  c7421435000000       mov dword ptr [edx + 0x14], 0x35
// 00556912  8b5500               mov edx, dword ptr [ebp]
// 00556915  894a18               mov dword ptr [edx + 0x18], ecx
// 00556918  8b4d00               mov ecx, dword ptr [ebp]
// 0055691b  89411c               mov dword ptr [ecx + 0x1c], eax
// 0055691e  8b5500               mov edx, dword ptr [ebp]
// 00556921  8b02                 mov eax, dword ptr [edx]
// 00556923  55                   push ebp
// 00556924  ffd0                 call eax
// 00556926  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055692a  83c404               add esp, 4
// 0055692d  89857c010000         mov dword ptr [ebp + 0x17c], eax
// 00556933  897e04               mov dword ptr [esi + 4], edi
// 00556936  5f                   pop edi
// 00556937  891e                 mov dword ptr [esi], ebx
// 00556939  5e                   pop esi
// 0055693a  5d                   pop ebp
// 0055693b  b001                 mov al, 1
// 0055693d  5b                   pop ebx
// 0055693e  c3                   ret 
// library jpeg-6b/jdmarker.c (function _first_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
