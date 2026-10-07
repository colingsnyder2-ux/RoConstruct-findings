// roc 2010-06 005842c0  unit: seg_00580000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005842c0
//
// 005842c0  83ec28               sub esp, 0x28
// 005842c3  53                   push ebx
// 005842c4  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 005842c8  55                   push ebp
// 005842c9  56                   push esi
// 005842ca  57                   push edi
// 005842cb  8bbba8010000         mov edi, dword ptr [ebx + 0x1a8]
// 005842d1  8d7720               lea esi, [edi + 0x20]
// 005842d4  56                   push esi
// 005842d5  53                   push ebx
// 005842d6  897c243c             mov dword ptr [esp + 0x3c], edi
// 005842da  e8f1feffff           call 0x5841d0
// 005842df  83c408               add esp, 8
// 005842e2  837b6403             cmp dword ptr [ebx + 0x64], 3
// 005842e6  8be8                 mov ebp, eax
// 005842e8  6a01                 push 1
// 005842ea  896c2430             mov dword ptr [esp + 0x30], ebp
// 005842ee  53                   push ebx
// 005842ef  752a                 jne 0x58431b
// 005842f1  8b03                 mov eax, dword ptr [ebx]
// 005842f3  83c018               add eax, 0x18
// 005842f6  8928                 mov dword ptr [eax], ebp
// 005842f8  8b0e                 mov ecx, dword ptr [esi]
// 005842fa  894804               mov dword ptr [eax + 4], ecx
// 005842fd  8b5724               mov edx, dword ptr [edi + 0x24]
// 00584300  895008               mov dword ptr [eax + 8], edx
// 00584303  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00584306  89480c               mov dword ptr [eax + 0xc], ecx
// 00584309  8b13                 mov edx, dword ptr [ebx]
// 0058430b  c742145e000000       mov dword ptr [edx + 0x14], 0x5e
// 00584312  8b03                 mov eax, dword ptr [ebx]
// 00584314  8b4804               mov ecx, dword ptr [eax + 4]
// 00584317  ffd1                 call ecx
// 00584319  eb15                 jmp 0x584330
// 0058431b  8b13                 mov edx, dword ptr [ebx]
// 0058431d  c742145f000000       mov dword ptr [edx + 0x14], 0x5f
// 00584324  8b03                 mov eax, dword ptr [ebx]
// 00584326  896818               mov dword ptr [eax + 0x18], ebp
// 00584329  8b0b                 mov ecx, dword ptr [ebx]
// 0058432b  8b5104               mov edx, dword ptr [ecx + 4]
// 0058432e  ffd2                 call edx
// 00584330  8b4b64               mov ecx, dword ptr [ebx + 0x64]
// 00584333  8b4304               mov eax, dword ptr [ebx + 4]
// 00584336  8b5008               mov edx, dword ptr [eax + 8]
// 00584339  83c408               add esp, 8
// 0058433c  51                   push ecx
// 0058433d  55                   push ebp
// 0058433e  6a01                 push 1
// 00584340  53                   push ebx
// 00584341  ffd2                 call edx
// 00584343  83c410               add esp, 0x10
// 00584346  837b6400             cmp dword ptr [ebx + 0x64], 0
// 0058434a  89442430             mov dword ptr [esp + 0x30], eax
// 0058434e  896c2414             mov dword ptr [esp + 0x14], ebp
// 00584352  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0058435a  0f8eb7000000         jle 0x584417
// 00584360  8bf8                 mov edi, eax
// 00584362  89742418             mov dword ptr [esp + 0x18], esi
// 00584366  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058436a  8b08                 mov ecx, dword ptr [eax]
// 0058436c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00584370  99                   cdq 
// 00584371  f7f9                 idiv ecx
// 00584373  8bf0                 mov esi, eax
// 00584375  85c9                 test ecx, ecx
// 00584377  7e6a                 jle 0x5843e3
// 00584379  8d41ff               lea eax, [ecx - 1]
// 0058437c  89442428             mov dword ptr [esp + 0x28], eax
// 00584380  99                   cdq 
// 00584381  2bc2                 sub eax, edx
// 00584383  d1f8                 sar eax, 1
// 00584385  33db                 xor ebx, ebx
// 00584387  89442424             mov dword ptr [esp + 0x24], eax
// 0058438b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0058438f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00584393  eb04                 jmp 0x584399
// 00584395  8b442424             mov eax, dword ptr [esp + 0x24]
// 00584399  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058439d  03c1                 add eax, ecx
// 0058439f  99                   cdq 
// 005843a0  f77c2428             idiv dword ptr [esp + 0x28]
// 005843a4  3bdd                 cmp ebx, ebp
// 005843a6  8bd3                 mov edx, ebx
// 005843a8  7d24                 jge 0x5843ce
// 005843aa  8d9b00000000         lea ebx, [ebx]
// 005843b0  33c9                 xor ecx, ecx
// 005843b2  85f6                 test esi, esi
// 005843b4  7e10                 jle 0x5843c6
// 005843b6  8b2f                 mov ebp, dword ptr [edi]
// 005843b8  03e9                 add ebp, ecx
// 005843ba  41                   inc ecx
// 005843bb  3bce                 cmp ecx, esi
// 005843bd  88042a               mov byte ptr [edx + ebp], al
// 005843c0  7cf4                 jl 0x5843b6
// 005843c2  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005843c6  03542414             add edx, dword ptr [esp + 0x14]
// 005843ca  3bd5                 cmp edx, ebp
// 005843cc  7ce2                 jl 0x5843b0
// 005843ce  81442410ff000000     add dword ptr [esp + 0x10], 0xff
// 005843d6  03de                 add ebx, esi
// 005843d8  836c241c01           sub dword ptr [esp + 0x1c], 1
// 005843dd  75b6                 jne 0x584395
// 005843df  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 005843e3  8b442420             mov eax, dword ptr [esp + 0x20]
// 005843e7  8344241804           add dword ptr [esp + 0x18], 4
// 005843ec  40                   inc eax
// 005843ed  83c704               add edi, 4
// 005843f0  3b4364               cmp eax, dword ptr [ebx + 0x64]
// 005843f3  89742414             mov dword ptr [esp + 0x14], esi
// 005843f7  89442420             mov dword ptr [esp + 0x20], eax
// 005843fb  0f8c65ffffff         jl 0x584366
// 00584401  8b442434             mov eax, dword ptr [esp + 0x34]
// 00584405  8b542430             mov edx, dword ptr [esp + 0x30]
// 00584409  5f                   pop edi
// 0058440a  5e                   pop esi
// 0058440b  896814               mov dword ptr [eax + 0x14], ebp
// 0058440e  5d                   pop ebp
// 0058440f  895010               mov dword ptr [eax + 0x10], edx
// 00584412  5b                   pop ebx
// 00584413  83c428               add esp, 0x28
// 00584416  c3                   ret 
// 00584417  896f14               mov dword ptr [edi + 0x14], ebp
// 0058441a  894710               mov dword ptr [edi + 0x10], eax
// 0058441d  5f                   pop edi
// 0058441e  5e                   pop esi
// 0058441f  5d                   pop ebp
// 00584420  5b                   pop ebx
// 00584421  83c428               add esp, 0x28
// 00584424  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colormap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
