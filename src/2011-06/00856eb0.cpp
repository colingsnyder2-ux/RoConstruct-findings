// roc 2011-06 00856eb0  unit: CXTPControls  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00856eb0
//
// 00856eb0  57                   push edi
// 00856eb1  8bf9                 mov edi, ecx
// 00856eb3  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00856eb6  85c0                 test eax, eax
// 00856eb8  7507                 jne 0x856ec1
// 00856eba  83c8ff               or eax, 0xffffffff
// 00856ebd  5f                   pop edi
// 00856ebe  c21400               ret 0x14
// 00856ec1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00856ec5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00856ec9  56                   push esi
// 00856eca  8d3411               lea esi, [ecx + edx]
// 00856ecd  83faff               cmp edx, -1
// 00856ed0  7507                 jne 0x856ed9
// 00856ed2  3bca                 cmp ecx, edx
// 00856ed4  7503                 jne 0x856ed9
// 00856ed6  8d70ff               lea esi, [eax - 1]
// 00856ed9  53                   push ebx
// 00856eda  55                   push ebp
// 00856edb  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00856edf  f7dd                 neg ebp
// 00856ee1  1bed                 sbb ebp, ebp
// 00856ee3  83e5e0               and ebp, 0xffffffe0
// 00856ee6  83c520               add ebp, 0x20
// 00856ee9  83cd08               or ebp, 8
// 00856eec  33db                 xor ebx, ebx
// 00856eee  3bf1                 cmp esi, ecx
// 00856ef0  7516                 jne 0x856f08
// 00856ef2  5d                   pop ebp
// 00856ef3  5b                   pop ebx
// 00856ef4  8bc6                 mov eax, esi
// 00856ef6  5e                   pop esi
// 00856ef7  5f                   pop edi
// 00856ef8  c21400               ret 0x14
// 00856efb  eb03                 jmp 0x856f00
// 00856efd  8d4900               lea ecx, [ecx]
// 00856f00  8b542418             mov edx, dword ptr [esp + 0x18]
// 00856f04  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00856f08  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00856f0b  3bf0                 cmp esi, eax
// 00856f0d  7c1d                 jl 0x856f2c
// 00856f0f  83f9ff               cmp ecx, -1
// 00856f12  7509                 jne 0x856f1d
// 00856f14  83fa01               cmp edx, 1
// 00856f17  0f84c6000000         je 0x856fe3
// 00856f1d  85db                 test ebx, ebx
// 00856f1f  0f85be000000         jne 0x856fe3
// 00856f25  33f6                 xor esi, esi
// 00856f27  8d5e01               lea ebx, [esi + 1]
// 00856f2a  eb25                 jmp 0x856f51
// 00856f2c  85f6                 test esi, esi
// 00856f2e  7d21                 jge 0x856f51
// 00856f30  83f9ff               cmp ecx, -1
// 00856f33  7508                 jne 0x856f3d
// 00856f35  3bd1                 cmp edx, ecx
// 00856f37  0f84a6000000         je 0x856fe3
// 00856f3d  85db                 test ebx, ebx
// 00856f3f  0f859e000000         jne 0x856fe3
// 00856f45  8d70ff               lea esi, [eax - 1]
// 00856f48  bb01000000           mov ebx, 1
// 00856f4d  85f6                 test esi, esi
// 00856f4f  7c1c                 jl 0x856f6d
// 00856f51  3bf0                 cmp esi, eax
// 00856f53  7d18                 jge 0x856f6d
// 00856f55  85f6                 test esi, esi
// 00856f57  0f8c90000000         jl 0x856fed
// 00856f5d  3bf0                 cmp esi, eax
// 00856f5f  0f8d88000000         jge 0x856fed
// 00856f65  8b4728               mov eax, dword ptr [edi + 0x28]
// 00856f68  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00856f6b  eb02                 jmp 0x856f6f
// 00856f6d  33c9                 xor ecx, ecx
// 00856f6f  8b11                 mov edx, dword ptr [ecx]
// 00856f71  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 00856f77  55                   push ebp
// 00856f78  ffd0                 call eax
// 00856f7a  85c0                 test eax, eax
// 00856f7c  744e                 je 0x856fcc
// 00856f7e  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00856f83  741c                 je 0x856fa1
// 00856f85  85f6                 test esi, esi
// 00856f87  7c0d                 jl 0x856f96
// 00856f89  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 00856f8c  7d08                 jge 0x856f96
// 00856f8e  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00856f91  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 00856f94  eb02                 jmp 0x856f98
// 00856f96  33c0                 xor eax, eax
// 00856f98  f680d400000002       test byte ptr [eax + 0xd4], 2
// 00856f9f  752b                 jne 0x856fcc
// 00856fa1  837c242000           cmp dword ptr [esp + 0x20], 0
// 00856fa6  0f8446ffffff         je 0x856ef2
// 00856fac  85f6                 test esi, esi
// 00856fae  7c0d                 jl 0x856fbd
// 00856fb0  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 00856fb3  7d08                 jge 0x856fbd
// 00856fb5  8b5728               mov edx, dword ptr [edi + 0x28]
// 00856fb8  8b04b2               mov eax, dword ptr [edx + esi*4]
// 00856fbb  eb02                 jmp 0x856fbf
// 00856fbd  33c0                 xor eax, eax
// 00856fbf  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 00856fc6  0f8426ffffff         je 0x856ef2
// 00856fcc  03742418             add esi, dword ptr [esp + 0x18]
// 00856fd0  3b742414             cmp esi, dword ptr [esp + 0x14]
// 00856fd4  0f8526ffffff         jne 0x856f00
// 00856fda  5d                   pop ebp
// 00856fdb  5b                   pop ebx
// 00856fdc  8bc6                 mov eax, esi
// 00856fde  5e                   pop esi
// 00856fdf  5f                   pop edi
// 00856fe0  c21400               ret 0x14
// 00856fe3  5d                   pop ebp
// 00856fe4  5b                   pop ebx
// 00856fe5  5e                   pop esi
// 00856fe6  83c8ff               or eax, 0xffffffff
// 00856fe9  5f                   pop edi
// 00856fea  c21400               ret 0x14
// 00856fed  e81833fbff           call 0x80a30a
// copied from an identical function in another client (function ?GetNext@CXTPControls@@QBEJJHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp