// from server: 100% by auto
// roc 2007-08 00512830  unit: G3D::_internal::DialogTemplate  size: 628 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00512830
//
// 00512830  83ec18               sub esp, 0x18
// 00512833  53                   push ebx
// 00512834  55                   push ebp
// 00512835  56                   push esi
// 00512836  8b7718               mov esi, dword ptr [edi + 0x18]
// 00512839  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051283c  85ed                 test ebp, ebp
// 0051283e  8b1e                 mov ebx, dword ptr [esi]
// 00512840  89742410             mov dword ptr [esp + 0x10], esi
// 00512844  751b                 jne 0x512861
// 00512846  8b460c               mov eax, dword ptr [esi + 0xc]
// 00512849  57                   push edi
// 0051284a  ffd0                 call eax
// 0051284c  83c404               add esp, 4
// 0051284f  84c0                 test al, al
// 00512851  7509                 jne 0x51285c
// 00512853  5e                   pop esi
// 00512854  5d                   pop ebp
// 00512855  32c0                 xor al, al
// 00512857  5b                   pop ebx
// 00512858  83c418               add esp, 0x18
// 0051285b  c3                   ret 
// 0051285c  8b1e                 mov ebx, dword ptr [esi]
// 0051285e  8b6e04               mov ebp, dword ptr [esi + 4]
// 00512861  33c0                 xor eax, eax
// 00512863  8a23                 mov ah, byte ptr [ebx]
// 00512865  83ed01               sub ebp, 1
// 00512868  83c301               add ebx, 1
// 0051286b  85ed                 test ebp, ebp
// 0051286d  8944240c             mov dword ptr [esp + 0xc], eax
// 00512871  7516                 jne 0x512889
// 00512873  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00512876  57                   push edi
// 00512877  ffd1                 call ecx
// 00512879  83c404               add esp, 4
// 0051287c  84c0                 test al, al
// 0051287e  74d3                 je 0x512853
// 00512880  8b1e                 mov ebx, dword ptr [esi]
// 00512882  8b6e04               mov ebp, dword ptr [esi + 4]
// 00512885  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00512889  0fb613               movzx edx, byte ptr [ebx]
// 0051288c  03c2                 add eax, edx
// 0051288e  83e802               sub eax, 2
// 00512891  83ed01               sub ebp, 1
// 00512894  83c301               add ebx, 1
// 00512897  85c0                 test eax, eax
// 00512899  8944240c             mov dword ptr [esp + 0xc], eax
// 0051289d  0f8ede010000         jle 0x512a81
// 005128a3  85ed                 test ebp, ebp
// 005128a5  7512                 jne 0x5128b9
// 005128a7  8b460c               mov eax, dword ptr [esi + 0xc]
// 005128aa  57                   push edi
// 005128ab  ffd0                 call eax
// 005128ad  83c404               add esp, 4
// 005128b0  84c0                 test al, al
// 005128b2  749f                 je 0x512853
// 005128b4  8b1e                 mov ebx, dword ptr [esi]
// 005128b6  8b6e04               mov ebp, dword ptr [esi + 4]
// 005128b9  0fb633               movzx esi, byte ptr [ebx]
// 005128bc  8b0f                 mov ecx, dword ptr [edi]
// 005128be  c7411451000000       mov dword ptr [ecx + 0x14], 0x51
// 005128c5  8b17                 mov edx, dword ptr [edi]
// 005128c7  8bc6                 mov eax, esi
// 005128c9  c1f804               sar eax, 4
// 005128cc  83e60f               and esi, 0xf
// 005128cf  897218               mov dword ptr [edx + 0x18], esi
// 005128d2  8b0f                 mov ecx, dword ptr [edi]
// 005128d4  89411c               mov dword ptr [ecx + 0x1c], eax
// 005128d7  8b17                 mov edx, dword ptr [edi]
// 005128d9  8944241c             mov dword ptr [esp + 0x1c], eax
// 005128dd  8b4204               mov eax, dword ptr [edx + 4]
// 005128e0  6a01                 push 1
// 005128e2  57                   push edi
// 005128e3  83ed01               sub ebp, 1
// 005128e6  83c301               add ebx, 1
// 005128e9  ffd0                 call eax
// 005128eb  83c408               add esp, 8
// 005128ee  83fe04               cmp esi, 4
// 005128f1  7c18                 jl 0x51290b
// 005128f3  8b0f                 mov ecx, dword ptr [edi]
// 005128f5  c741141f000000       mov dword ptr [ecx + 0x14], 0x1f
// 005128fc  8b17                 mov edx, dword ptr [edi]
// 005128fe  897218               mov dword ptr [edx + 0x18], esi
// 00512901  8b07                 mov eax, dword ptr [edi]
// 00512903  8b08                 mov ecx, dword ptr [eax]
// 00512905  57                   push edi
// 00512906  ffd1                 call ecx
// 00512908  83c404               add esp, 4
// 0051290b  83bcb79000000000     cmp dword ptr [edi + esi*4 + 0x90], 0
// 00512913  7510                 jne 0x512925
// 00512915  57                   push edi
// 00512916  e805100000           call 0x513920
// 0051291b  83c404               add esp, 4
// 0051291e  8984b790000000       mov dword ptr [edi + esi*4 + 0x90], eax
// 00512925  8b94b790000000       mov edx, dword ptr [edi + esi*4 + 0x90]
// 0051292c  be00337a00           mov esi, 0x7a3300
// 00512931  89542420             mov dword ptr [esp + 0x20], edx
// 00512935  89742418             mov dword ptr [esp + 0x18], esi
// 00512939  8da42400000000       lea esp, [esp]
// 00512940  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00512945  7453                 je 0x51299a
// 00512947  85ed                 test ebp, ebp
// 00512949  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051294d  7516                 jne 0x512965
// 0051294f  8b460c               mov eax, dword ptr [esi + 0xc]
// 00512952  57                   push edi
// 00512953  ffd0                 call eax
// 00512955  83c404               add esp, 4
// 00512958  84c0                 test al, al
// 0051295a  0f84f3feffff         je 0x512853
// 00512960  8b1e                 mov ebx, dword ptr [esi]
// 00512962  8b6e04               mov ebp, dword ptr [esi + 4]
// 00512965  33c9                 xor ecx, ecx
// 00512967  8a2b                 mov ch, byte ptr [ebx]
// 00512969  83ed01               sub ebp, 1
// 0051296c  83c301               add ebx, 1
// 0051296f  85ed                 test ebp, ebp
// 00512971  894c2414             mov dword ptr [esp + 0x14], ecx
// 00512975  7516                 jne 0x51298d
// 00512977  8b560c               mov edx, dword ptr [esi + 0xc]
// 0051297a  57                   push edi
// 0051297b  ffd2                 call edx
// 0051297d  83c404               add esp, 4
// 00512980  84c0                 test al, al
// 00512982  0f84cbfeffff         je 0x512853
// 00512988  8b1e                 mov ebx, dword ptr [esi]
// 0051298a  8b6e04               mov ebp, dword ptr [esi + 4]
// 0051298d  0fb603               movzx eax, byte ptr [ebx]
// 00512990  01442414             add dword ptr [esp + 0x14], eax
// 00512994  8b742418             mov esi, dword ptr [esp + 0x18]
// 00512998  eb26                 jmp 0x5129c0
// 0051299a  85ed                 test ebp, ebp
// 0051299c  751b                 jne 0x5129b9
// 0051299e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005129a2  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005129a5  57                   push edi
// 005129a6  ffd1                 call ecx
// 005129a8  83c404               add esp, 4
// 005129ab  84c0                 test al, al
// 005129ad  0f84a0feffff         je 0x512853
// 005129b3  8b5d00               mov ebx, dword ptr [ebp]
// 005129b6  8b6d04               mov ebp, dword ptr [ebp + 4]
// 005129b9  0fb613               movzx edx, byte ptr [ebx]
// 005129bc  89542414             mov dword ptr [esp + 0x14], edx
// 005129c0  8b0e                 mov ecx, dword ptr [esi]
// 005129c2  668b542414           mov dx, word ptr [esp + 0x14]
// 005129c7  8b442420             mov eax, dword ptr [esp + 0x20]
// 005129cb  83c604               add esi, 4
// 005129ce  83ed01               sub ebp, 1
// 005129d1  83c301               add ebx, 1
// 005129d4  81fe00347a00         cmp esi, 0x7a3400
// 005129da  66891448             mov word ptr [eax + ecx*2], dx
// 005129de  89742418             mov dword ptr [esp + 0x18], esi
// 005129e2  0f8c58ffffff         jl 0x512940
// 005129e8  8b0f                 mov ecx, dword ptr [edi]
// 005129ea  83796802             cmp dword ptr [ecx + 0x68], 2
// 005129ee  7c6b                 jl 0x512a5b
// 005129f0  8d7004               lea esi, [eax + 4]
// 005129f3  c744241808000000     mov dword ptr [esp + 0x18], 8
// 005129fb  eb03                 jmp 0x512a00
// 005129fd  8d4900               lea ecx, [ecx]
// 00512a00  8b07                 mov eax, dword ptr [edi]
// 00512a02  0fb756fc             movzx edx, word ptr [esi - 4]
// 00512a06  83c018               add eax, 0x18
// 00512a09  8910                 mov dword ptr [eax], edx
// 00512a0b  0fb74efe             movzx ecx, word ptr [esi - 2]
// 00512a0f  894804               mov dword ptr [eax + 4], ecx
// 00512a12  0fb716               movzx edx, word ptr [esi]
// 00512a15  895008               mov dword ptr [eax + 8], edx
// 00512a18  0fb74e02             movzx ecx, word ptr [esi + 2]
// 00512a1c  89480c               mov dword ptr [eax + 0xc], ecx
// 00512a1f  0fb75604             movzx edx, word ptr [esi + 4]
// 00512a23  895010               mov dword ptr [eax + 0x10], edx
// 00512a26  0fb74e06             movzx ecx, word ptr [esi + 6]
// 00512a2a  894814               mov dword ptr [eax + 0x14], ecx
// 00512a2d  0fb75608             movzx edx, word ptr [esi + 8]
// 00512a31  895018               mov dword ptr [eax + 0x18], edx
// 00512a34  0fb74e0a             movzx ecx, word ptr [esi + 0xa]
// 00512a38  89481c               mov dword ptr [eax + 0x1c], ecx
// 00512a3b  8b17                 mov edx, dword ptr [edi]
// 00512a3d  c742145d000000       mov dword ptr [edx + 0x14], 0x5d
// 00512a44  8b07                 mov eax, dword ptr [edi]
// 00512a46  8b4804               mov ecx, dword ptr [eax + 4]
// 00512a49  6a02                 push 2
// 00512a4b  57                   push edi
// 00512a4c  ffd1                 call ecx
// 00512a4e  83c408               add esp, 8
// 00512a51  83c610               add esi, 0x10
// 00512a54  836c241801           sub dword ptr [esp + 0x18], 1
// 00512a59  75a5                 jne 0x512a00
// 00512a5b  836c240c41           sub dword ptr [esp + 0xc], 0x41
// 00512a60  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00512a65  7405                 je 0x512a6c
// 00512a67  836c240c40           sub dword ptr [esp + 0xc], 0x40
// 00512a6c  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00512a71  8b742410             mov esi, dword ptr [esp + 0x10]
// 00512a75  0f8f28feffff         jg 0x5128a3
// 00512a7b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00512a7f  85c0                 test eax, eax
// 00512a81  7413                 je 0x512a96
// 00512a83  8b17                 mov edx, dword ptr [edi]
// 00512a85  c742140b000000       mov dword ptr [edx + 0x14], 0xb
// 00512a8c  8b07                 mov eax, dword ptr [edi]
// 00512a8e  8b08                 mov ecx, dword ptr [eax]
// 00512a90  57                   push edi
// 00512a91  ffd1                 call ecx
// 00512a93  83c404               add esp, 4
// 00512a96  891e                 mov dword ptr [esi], ebx
// 00512a98  896e04               mov dword ptr [esi + 4], ebp
// 00512a9b  5e                   pop esi
// 00512a9c  5d                   pop ebp
// 00512a9d  b001                 mov al, 1
// 00512a9f  5b                   pop ebx
// 00512aa0  83c418               add esp, 0x18
// 00512aa3  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_dqt)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
