// from server: 100% by auto
// roc 2007-08 00525f90  unit: G3D::Line  size: 299 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00525f90
//
// 00525f90  53                   push ebx
// 00525f91  55                   push ebp
// 00525f92  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00525f96  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 00525f99  83bb7c01000000       cmp dword ptr [ebx + 0x17c], 0
// 00525fa0  56                   push esi
// 00525fa1  8b7500               mov esi, dword ptr [ebp]
// 00525fa4  57                   push edi
// 00525fa5  8b7d04               mov edi, dword ptr [ebp + 4]
// 00525fa8  0f85a7000000         jne 0x526055
// 00525fae  837c241c19           cmp dword ptr [esp + 0x1c], 0x19
// 00525fb3  0f8de7000000         jge 0x5260a0
// 00525fb9  8da42400000000       lea esp, [esp]
// 00525fc0  85ff                 test edi, edi
// 00525fc2  7518                 jne 0x525fdc
// 00525fc4  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00525fc7  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00525fca  53                   push ebx
// 00525fcb  ffd1                 call ecx
// 00525fcd  83c404               add esp, 4
// 00525fd0  84c0                 test al, al
// 00525fd2  7474                 je 0x526048
// 00525fd4  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00525fd7  8b30                 mov esi, dword ptr [eax]
// 00525fd9  8b7804               mov edi, dword ptr [eax + 4]
// 00525fdc  0fb606               movzx eax, byte ptr [esi]
// 00525fdf  83ef01               sub edi, 1
// 00525fe2  83c601               add esi, 1
// 00525fe5  3dff000000           cmp eax, 0xff
// 00525fea  7539                 jne 0x526025
// 00525fec  8d642400             lea esp, [esp]
// 00525ff0  85ff                 test edi, edi
// 00525ff2  7518                 jne 0x52600c
// 00525ff4  8b5318               mov edx, dword ptr [ebx + 0x18]
// 00525ff7  8b420c               mov eax, dword ptr [edx + 0xc]
// 00525ffa  53                   push ebx
// 00525ffb  ffd0                 call eax
// 00525ffd  83c404               add esp, 4
// 00526000  84c0                 test al, al
// 00526002  7444                 je 0x526048
// 00526004  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00526007  8b30                 mov esi, dword ptr [eax]
// 00526009  8b7804               mov edi, dword ptr [eax + 4]
// 0052600c  0fb606               movzx eax, byte ptr [esi]
// 0052600f  83ef01               sub edi, 1
// 00526012  83c601               add esi, 1
// 00526015  3dff000000           cmp eax, 0xff
// 0052601a  74d4                 je 0x525ff0
// 0052601c  85c0                 test eax, eax
// 0052601e  752f                 jne 0x52604f
// 00526020  b8ff000000           mov eax, 0xff
// 00526025  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00526029  c1e108               shl ecx, 8
// 0052602c  0bc8                 or ecx, eax
// 0052602e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00526032  83c008               add eax, 8
// 00526035  83f819               cmp eax, 0x19
// 00526038  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052603c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00526040  0f8c7affffff         jl 0x525fc0
// 00526046  eb58                 jmp 0x5260a0
// 00526048  5f                   pop edi
// 00526049  5e                   pop esi
// 0052604a  5d                   pop ebp
// 0052604b  32c0                 xor al, al
// 0052604d  5b                   pop ebx
// 0052604e  c3                   ret 
// 0052604f  89837c010000         mov dword ptr [ebx + 0x17c], eax
// 00526055  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00526059  39542420             cmp dword ptr [esp + 0x20], edx
// 0052605d  7e41                 jle 0x5260a0
// 0052605f  8b8398010000         mov eax, dword ptr [ebx + 0x198]
// 00526065  80780800             cmp byte ptr [eax + 8], 0
// 00526069  7520                 jne 0x52608b
// 0052606b  8b0b                 mov ecx, dword ptr [ebx]
// 0052606d  c7411475000000       mov dword ptr [ecx + 0x14], 0x75
// 00526074  8b13                 mov edx, dword ptr [ebx]
// 00526076  8b4204               mov eax, dword ptr [edx + 4]
// 00526079  6aff                 push -1
// 0052607b  53                   push ebx
// 0052607c  ffd0                 call eax
// 0052607e  8b8b98010000         mov ecx, dword ptr [ebx + 0x198]
// 00526084  83c408               add esp, 8
// 00526087  c6410801             mov byte ptr [ecx + 8], 1
// 0052608b  b919000000           mov ecx, 0x19
// 00526090  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00526094  c744241c19000000     mov dword ptr [esp + 0x1c], 0x19
// 0052609c  d3642418             shl dword ptr [esp + 0x18], cl
// 005260a0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005260a4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005260a8  897d04               mov dword ptr [ebp + 4], edi
// 005260ab  5f                   pop edi
// 005260ac  897500               mov dword ptr [ebp], esi
// 005260af  5e                   pop esi
// 005260b0  89450c               mov dword ptr [ebp + 0xc], eax
// 005260b3  895508               mov dword ptr [ebp + 8], edx
// 005260b6  5d                   pop ebp
// 005260b7  b001                 mov al, 1
// 005260b9  5b                   pop ebx
// 005260ba  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_fill_bit_buffer)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
