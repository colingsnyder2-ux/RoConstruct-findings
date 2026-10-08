// from server: 100% by auto
// roc 2008-06 0051ac00  unit: G3D::_internal::DialogTemplate  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051ac00
//
// 0051ac00  83f90c               cmp ecx, 0xc
// 0051ac03  0f8282000000         jb 0x51ac8b
// 0051ac09  803841               cmp byte ptr [eax], 0x41
// 0051ac0c  757d                 jne 0x51ac8b
// 0051ac0e  80780164             cmp byte ptr [eax + 1], 0x64
// 0051ac12  7577                 jne 0x51ac8b
// 0051ac14  8078026f             cmp byte ptr [eax + 2], 0x6f
// 0051ac18  7571                 jne 0x51ac8b
// 0051ac1a  80780362             cmp byte ptr [eax + 3], 0x62
// 0051ac1e  756b                 jne 0x51ac8b
// 0051ac20  80780465             cmp byte ptr [eax + 4], 0x65
// 0051ac24  7565                 jne 0x51ac8b
// 0051ac26  0fb65007             movzx edx, byte ptr [eax + 7]
// 0051ac2a  0fb64808             movzx ecx, byte ptr [eax + 8]
// 0051ac2e  53                   push ebx
// 0051ac2f  0fb6580b             movzx ebx, byte ptr [eax + 0xb]
// 0051ac33  55                   push ebp
// 0051ac34  0fb66805             movzx ebp, byte ptr [eax + 5]
// 0051ac38  57                   push edi
// 0051ac39  0fb67809             movzx edi, byte ptr [eax + 9]
// 0051ac3d  c1e208               shl edx, 8
// 0051ac40  03d1                 add edx, ecx
// 0051ac42  0fb6480a             movzx ecx, byte ptr [eax + 0xa]
// 0051ac46  0fb64006             movzx eax, byte ptr [eax + 6]
// 0051ac4a  c1e708               shl edi, 8
// 0051ac4d  03f9                 add edi, ecx
// 0051ac4f  8b0e                 mov ecx, dword ptr [esi]
// 0051ac51  83c118               add ecx, 0x18
// 0051ac54  c1e508               shl ebp, 8
// 0051ac57  03e8                 add ebp, eax
// 0051ac59  8929                 mov dword ptr [ecx], ebp
// 0051ac5b  895104               mov dword ptr [ecx + 4], edx
// 0051ac5e  897908               mov dword ptr [ecx + 8], edi
// 0051ac61  89590c               mov dword ptr [ecx + 0xc], ebx
// 0051ac64  8b0e                 mov ecx, dword ptr [esi]
// 0051ac66  c741144c000000       mov dword ptr [ecx + 0x14], 0x4c
// 0051ac6d  8b16                 mov edx, dword ptr [esi]
// 0051ac6f  8b4204               mov eax, dword ptr [edx + 4]
// 0051ac72  6a01                 push 1
// 0051ac74  56                   push esi
// 0051ac75  ffd0                 call eax
// 0051ac77  83c408               add esp, 8
// 0051ac7a  5f                   pop edi
// 0051ac7b  5d                   pop ebp
// 0051ac7c  889e09010000         mov byte ptr [esi + 0x109], bl
// 0051ac82  c6860801000001       mov byte ptr [esi + 0x108], 1
// 0051ac89  5b                   pop ebx
// 0051ac8a  c3                   ret 
// 0051ac8b  8b16                 mov edx, dword ptr [esi]
// 0051ac8d  8b442404             mov eax, dword ptr [esp + 4]
// 0051ac91  c742144e000000       mov dword ptr [edx + 0x14], 0x4e
// 0051ac98  8b16                 mov edx, dword ptr [esi]
// 0051ac9a  03c8                 add ecx, eax
// 0051ac9c  894a18               mov dword ptr [edx + 0x18], ecx
// 0051ac9f  8b06                 mov eax, dword ptr [esi]
// 0051aca1  8b4804               mov ecx, dword ptr [eax + 4]
// 0051aca4  6a01                 push 1
// 0051aca6  56                   push esi
// 0051aca7  ffd1                 call ecx
// 0051aca9  83c408               add esp, 8
// 0051acac  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app14)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
