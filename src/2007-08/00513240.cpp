// roc 2007-08 00513240  unit: G3D::_internal::DialogTemplate  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00513240
//
// 00513240  53                   push ebx
// 00513241  55                   push ebp
// 00513242  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00513246  56                   push esi
// 00513247  8b7518               mov esi, dword ptr [ebp + 0x18]
// 0051324a  8b1e                 mov ebx, dword ptr [esi]
// 0051324c  57                   push edi
// 0051324d  8b7e04               mov edi, dword ptr [esi + 4]
// 00513250  85ff                 test edi, edi
// 00513252  7519                 jne 0x51326d
// 00513254  8b460c               mov eax, dword ptr [esi + 0xc]
// 00513257  55                   push ebp
// 00513258  ffd0                 call eax
// 0051325a  83c404               add esp, 4
// 0051325d  84c0                 test al, al
// 0051325f  7507                 jne 0x513268
// 00513261  5f                   pop edi
// 00513262  5e                   pop esi
// 00513263  5d                   pop ebp
// 00513264  32c0                 xor al, al
// 00513266  5b                   pop ebx
// 00513267  c3                   ret 
// 00513268  8b1e                 mov ebx, dword ptr [esi]
// 0051326a  8b7e04               mov edi, dword ptr [esi + 4]
// 0051326d  0fb60b               movzx ecx, byte ptr [ebx]
// 00513270  83ef01               sub edi, 1
// 00513273  83c301               add ebx, 1
// 00513276  85ff                 test edi, edi
// 00513278  894c2414             mov dword ptr [esp + 0x14], ecx
// 0051327c  7516                 jne 0x513294
// 0051327e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00513281  55                   push ebp
// 00513282  ffd1                 call ecx
// 00513284  83c404               add esp, 4
// 00513287  84c0                 test al, al
// 00513289  74d6                 je 0x513261
// 0051328b  8b1e                 mov ebx, dword ptr [esi]
// 0051328d  8b7e04               mov edi, dword ptr [esi + 4]
// 00513290  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00513294  0fb603               movzx eax, byte ptr [ebx]
// 00513297  83ef01               sub edi, 1
// 0051329a  83c301               add ebx, 1
// 0051329d  81f9ff000000         cmp ecx, 0xff
// 005132a3  89442414             mov dword ptr [esp + 0x14], eax
// 005132a7  7507                 jne 0x5132b0
// 005132a9  3dd8000000           cmp eax, 0xd8
// 005132ae  7425                 je 0x5132d5
// 005132b0  8b5500               mov edx, dword ptr [ebp]
// 005132b3  c7421435000000       mov dword ptr [edx + 0x14], 0x35
// 005132ba  8b5500               mov edx, dword ptr [ebp]
// 005132bd  894a18               mov dword ptr [edx + 0x18], ecx
// 005132c0  8b4d00               mov ecx, dword ptr [ebp]
// 005132c3  89411c               mov dword ptr [ecx + 0x1c], eax
// 005132c6  8b5500               mov edx, dword ptr [ebp]
// 005132c9  8b02                 mov eax, dword ptr [edx]
// 005132cb  55                   push ebp
// 005132cc  ffd0                 call eax
// 005132ce  8b442418             mov eax, dword ptr [esp + 0x18]
// 005132d2  83c404               add esp, 4
// 005132d5  89857c010000         mov dword ptr [ebp + 0x17c], eax
// 005132db  897e04               mov dword ptr [esi + 4], edi
// 005132de  5f                   pop edi
// 005132df  891e                 mov dword ptr [esi], ebx
// 005132e1  5e                   pop esi
// 005132e2  5d                   pop ebp
// 005132e3  b001                 mov al, 1
// 005132e5  5b                   pop ebx
// 005132e6  c3                   ret 
// library jpeg-6b/jdmarker.c (function _first_marker)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
