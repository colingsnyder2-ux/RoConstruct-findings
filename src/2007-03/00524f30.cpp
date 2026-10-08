// roc 2007-03 00524f30  unit: seg_00520000  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00524f30
//
// 00524f30  83ec0c               sub esp, 0xc
// 00524f33  53                   push ebx
// 00524f34  55                   push ebp
// 00524f35  56                   push esi
// 00524f36  57                   push edi
// 00524f37  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00524f3b  8b7764               mov esi, dword ptr [edi + 0x64]
// 00524f3e  8b5754               mov edx, dword ptr [edi + 0x54]
// 00524f41  89742414             mov dword ptr [esp + 0x14], esi
// 00524f45  89542418             mov dword ptr [esp + 0x18], edx
// 00524f49  bd01000000           mov ebp, 1
// 00524f4e  8bff                 mov edi, edi
// 00524f50  83c501               add ebp, 1
// 00524f53  83fe01               cmp esi, 1
// 00524f56  8bc5                 mov eax, ebp
// 00524f58  7e0e                 jle 0x524f68
// 00524f5a  8d4eff               lea ecx, [esi - 1]
// 00524f5d  8d4900               lea ecx, [ecx]
// 00524f60  0fafc5               imul eax, ebp
// 00524f63  83e901               sub ecx, 1
// 00524f66  75f8                 jne 0x524f60
// 00524f68  3bc2                 cmp eax, edx
// 00524f6a  7ee4                 jle 0x524f50
// 00524f6c  83ed01               sub ebp, 1
// 00524f6f  83fd02               cmp ebp, 2
// 00524f72  7d18                 jge 0x524f8c
// 00524f74  8b0f                 mov ecx, dword ptr [edi]
// 00524f76  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 00524f7d  8b17                 mov edx, dword ptr [edi]
// 00524f7f  894218               mov dword ptr [edx + 0x18], eax
// 00524f82  8b07                 mov eax, dword ptr [edi]
// 00524f84  8b08                 mov ecx, dword ptr [eax]
// 00524f86  57                   push edi
// 00524f87  ffd1                 call ecx
// 00524f89  83c404               add esp, 4
// 00524f8c  85f6                 test esi, esi
// 00524f8e  bb01000000           mov ebx, 1
// 00524f93  7e1f                 jle 0x524fb4
// 00524f95  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00524f99  8bce                 mov ecx, esi
// 00524f9b  8bc5                 mov eax, ebp
// 00524f9d  8bd6                 mov edx, esi
// 00524f9f  f3ab                 rep stosd dword ptr es:[edi], eax
// 00524fa1  0fafdd               imul ebx, ebp
// 00524fa4  83ea01               sub edx, 1
// 00524fa7  75f8                 jne 0x524fa1
// 00524fa9  eb09                 jmp 0x524fb4
// 00524fab  eb03                 jmp 0x524fb0
// 00524fad  8d4900               lea ecx, [ecx]
// 00524fb0  8b742414             mov esi, dword ptr [esp + 0x14]
// 00524fb4  33ed                 xor ebp, ebp
// 00524fb6  85f6                 test esi, esi
// 00524fb8  c644241300           mov byte ptr [esp + 0x13], 0
// 00524fbd  7e4e                 jle 0x52500d
// 00524fbf  90                   nop 
// 00524fc0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00524fc4  837a2c02             cmp dword ptr [edx + 0x2c], 2
// 00524fc8  7509                 jne 0x524fd3
// 00524fca  8b3cad58477a00       mov edi, dword ptr [ebp*4 + 0x7a4758]
// 00524fd1  eb02                 jmp 0x524fd5
// 00524fd3  8bfd                 mov edi, ebp
// 00524fd5  8b442424             mov eax, dword ptr [esp + 0x24]
// 00524fd9  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00524fdc  8bc3                 mov eax, ebx
// 00524fde  99                   cdq 
// 00524fdf  f7fe                 idiv esi
// 00524fe1  8d4e01               lea ecx, [esi + 1]
// 00524fe4  0fafc1               imul eax, ecx
// 00524fe7  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00524feb  7f19                 jg 0x525006
// 00524fed  8b542424             mov edx, dword ptr [esp + 0x24]
// 00524ff1  83c501               add ebp, 1
// 00524ff4  3b6c2414             cmp ebp, dword ptr [esp + 0x14]
// 00524ff8  890cba               mov dword ptr [edx + edi*4], ecx
// 00524ffb  8bd8                 mov ebx, eax
// 00524ffd  c644241301           mov byte ptr [esp + 0x13], 1
// 00525002  7cbc                 jl 0x524fc0
// 00525004  ebaa                 jmp 0x524fb0
// 00525006  807c241300           cmp byte ptr [esp + 0x13], 0
// 0052500b  75a3                 jne 0x524fb0
// 0052500d  5f                   pop edi
// 0052500e  5e                   pop esi
// 0052500f  5d                   pop ebp
// 00525010  8bc3                 mov eax, ebx
// 00525012  5b                   pop ebx
// 00525013  83c40c               add esp, 0xc
// 00525016  c3                   ret 
// library jpeg-6b/jquant1.c (function _select_ncolors)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
