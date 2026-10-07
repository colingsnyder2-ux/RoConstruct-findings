// roc 2011-06 00556160  unit: G3D::LineSegment  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00556160
//
// 00556160  53                   push ebx
// 00556161  55                   push ebp
// 00556162  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00556166  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 00556169  56                   push esi
// 0055616a  8b33                 mov esi, dword ptr [ebx]
// 0055616c  57                   push edi
// 0055616d  8b7b04               mov edi, dword ptr [ebx + 4]
// 00556170  85ff                 test edi, edi
// 00556172  7519                 jne 0x55618d
// 00556174  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00556177  55                   push ebp
// 00556178  ffd0                 call eax
// 0055617a  83c404               add esp, 4
// 0055617d  84c0                 test al, al
// 0055617f  7507                 jne 0x556188
// 00556181  5f                   pop edi
// 00556182  5e                   pop esi
// 00556183  5d                   pop ebp
// 00556184  32c0                 xor al, al
// 00556186  5b                   pop ebx
// 00556187  c3                   ret 
// 00556188  8b33                 mov esi, dword ptr [ebx]
// 0055618a  8b7b04               mov edi, dword ptr [ebx + 4]
// 0055618d  0fb606               movzx eax, byte ptr [esi]
// 00556190  4f                   dec edi
// 00556191  c1e008               shl eax, 8
// 00556194  46                   inc esi
// 00556195  89442414             mov dword ptr [esp + 0x14], eax
// 00556199  85ff                 test edi, edi
// 0055619b  7516                 jne 0x5561b3
// 0055619d  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 005561a0  55                   push ebp
// 005561a1  ffd1                 call ecx
// 005561a3  83c404               add esp, 4
// 005561a6  84c0                 test al, al
// 005561a8  74d7                 je 0x556181
// 005561aa  8b33                 mov esi, dword ptr [ebx]
// 005561ac  8b7b04               mov edi, dword ptr [ebx + 4]
// 005561af  8b442414             mov eax, dword ptr [esp + 0x14]
// 005561b3  0fb616               movzx edx, byte ptr [esi]
// 005561b6  03c2                 add eax, edx
// 005561b8  4f                   dec edi
// 005561b9  46                   inc esi
// 005561ba  83f804               cmp eax, 4
// 005561bd  7415                 je 0x5561d4
// 005561bf  8b4500               mov eax, dword ptr [ebp]
// 005561c2  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 005561c9  8b4d00               mov ecx, dword ptr [ebp]
// 005561cc  8b11                 mov edx, dword ptr [ecx]
// 005561ce  55                   push ebp
// 005561cf  ffd2                 call edx
// 005561d1  83c404               add esp, 4
// 005561d4  85ff                 test edi, edi
// 005561d6  7512                 jne 0x5561ea
// 005561d8  8b430c               mov eax, dword ptr [ebx + 0xc]
// 005561db  55                   push ebp
// 005561dc  ffd0                 call eax
// 005561de  83c404               add esp, 4
// 005561e1  84c0                 test al, al
// 005561e3  749c                 je 0x556181
// 005561e5  8b33                 mov esi, dword ptr [ebx]
// 005561e7  8b7b04               mov edi, dword ptr [ebx + 4]
// 005561ea  0fb606               movzx eax, byte ptr [esi]
// 005561ed  4f                   dec edi
// 005561ee  c1e008               shl eax, 8
// 005561f1  46                   inc esi
// 005561f2  89442414             mov dword ptr [esp + 0x14], eax
// 005561f6  85ff                 test edi, edi
// 005561f8  751a                 jne 0x556214
// 005561fa  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 005561fd  55                   push ebp
// 005561fe  ffd1                 call ecx
// 00556200  83c404               add esp, 4
// 00556203  84c0                 test al, al
// 00556205  0f8476ffffff         je 0x556181
// 0055620b  8b33                 mov esi, dword ptr [ebx]
// 0055620d  8b7b04               mov edi, dword ptr [ebx + 4]
// 00556210  8b442414             mov eax, dword ptr [esp + 0x14]
// 00556214  0fb616               movzx edx, byte ptr [esi]
// 00556217  8b4d00               mov ecx, dword ptr [ebp]
// 0055621a  03c2                 add eax, edx
// 0055621c  c7411452000000       mov dword ptr [ecx + 0x14], 0x52
// 00556223  8b5500               mov edx, dword ptr [ebp]
// 00556226  894218               mov dword ptr [edx + 0x18], eax
// 00556229  89442414             mov dword ptr [esp + 0x14], eax
// 0055622d  8b4500               mov eax, dword ptr [ebp]
// 00556230  8b4804               mov ecx, dword ptr [eax + 4]
// 00556233  6a01                 push 1
// 00556235  55                   push ebp
// 00556236  ffd1                 call ecx
// 00556238  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0055623c  83c408               add esp, 8
// 0055623f  8995fc000000         mov dword ptr [ebp + 0xfc], edx
// 00556245  4f                   dec edi
// 00556246  46                   inc esi
// 00556247  897b04               mov dword ptr [ebx + 4], edi
// 0055624a  5f                   pop edi
// 0055624b  8933                 mov dword ptr [ebx], esi
// 0055624d  5e                   pop esi
// 0055624e  5d                   pop ebp
// 0055624f  b001                 mov al, 1
// 00556251  5b                   pop ebx
// 00556252  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dri)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
