// from server: 100% by colin
// roc 2008-06 005296d0  unit: G3D::Line  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005296d0
//
// 005296d0  53                   push ebx
// 005296d1  55                   push ebp
// 005296d2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005296d6  56                   push esi
// 005296d7  8bf0                 mov esi, eax
// 005296d9  57                   push edi
// 005296da  33c0                 xor eax, eax
// 005296dc  33ff                 xor edi, edi
// 005296de  8bff                 mov edi, edi
// 005296e0  0fb68c2f1c010000     movzx ecx, byte ptr [edi + ebp + 0x11c]
// 005296e8  8d59bf               lea ebx, [ecx - 0x41]
// 005296eb  47                   inc edi
// 005296ec  83fb39               cmp ebx, 0x39
// 005296ef  770f                 ja 0x529700
// 005296f1  83f95a               cmp ecx, 0x5a
// 005296f4  7e05                 jle 0x5296fb
// 005296f6  83f961               cmp ecx, 0x61
// 005296f9  7c05                 jl 0x529700
// 005296fb  880c30               mov byte ptr [eax + esi], cl
// 005296fe  eb28                 jmp 0x529728
// 00529700  c604305b             mov byte ptr [eax + esi], 0x5b
// 00529704  8bd9                 mov ebx, ecx
// 00529706  c1fb04               sar ebx, 4
// 00529709  83e30f               and ebx, 0xf
// 0052970c  8a9bb4ba8200         mov bl, byte ptr [ebx + 0x82bab4]
// 00529712  40                   inc eax
// 00529713  881c30               mov byte ptr [eax + esi], bl
// 00529716  83e10f               and ecx, 0xf
// 00529719  8a89b4ba8200         mov cl, byte ptr [ecx + 0x82bab4]
// 0052971f  40                   inc eax
// 00529720  880c30               mov byte ptr [eax + esi], cl
// 00529723  40                   inc eax
// 00529724  c604305d             mov byte ptr [eax + esi], 0x5d
// 00529728  40                   inc eax
// 00529729  83ff04               cmp edi, 4
// 0052972c  7cb2                 jl 0x5296e0
// 0052972e  85d2                 test edx, edx
// 00529730  7508                 jne 0x52973a
// 00529732  5f                   pop edi
// 00529733  881430               mov byte ptr [eax + esi], dl
// 00529736  5e                   pop esi
// 00529737  5d                   pop ebp
// 00529738  5b                   pop ebx
// 00529739  c3                   ret 
// 0052973a  c604303a             mov byte ptr [eax + esi], 0x3a
// 0052973e  40                   inc eax
// 0052973f  c6043020             mov byte ptr [eax + esi], 0x20
// 00529743  40                   inc eax
// 00529744  6a3f                 push 0x3f
// 00529746  03f0                 add esi, eax
// 00529748  52                   push edx
// 00529749  56                   push esi
// 0052974a  ff1548288000         call dword ptr [0x802848]
// 00529750  83c40c               add esp, 0xc
// 00529753  5f                   pop edi
// 00529754  c6463f00             mov byte ptr [esi + 0x3f], 0
// 00529758  5e                   pop esi
// 00529759  5d                   pop ebp
// 0052975a  5b                   pop ebx
// 0052975b  c3                   ret 
// library g3d-6.09-png-dll/pngerror.c (function _png_format_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-png-dll pngerror.c
