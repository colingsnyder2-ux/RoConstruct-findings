// roc 2009-12 00622760  unit: seg_00620000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00622760
//
// 00622760  83ec28               sub esp, 0x28
// 00622763  53                   push ebx
// 00622764  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 00622768  55                   push ebp
// 00622769  56                   push esi
// 0062276a  57                   push edi
// 0062276b  8bbba8010000         mov edi, dword ptr [ebx + 0x1a8]
// 00622771  8d7720               lea esi, [edi + 0x20]
// 00622774  56                   push esi
// 00622775  53                   push ebx
// 00622776  897c243c             mov dword ptr [esp + 0x3c], edi
// 0062277a  e8f1feffff           call 0x622670
// 0062277f  83c408               add esp, 8
// 00622782  837b6403             cmp dword ptr [ebx + 0x64], 3
// 00622786  8be8                 mov ebp, eax
// 00622788  6a01                 push 1
// 0062278a  896c2430             mov dword ptr [esp + 0x30], ebp
// 0062278e  53                   push ebx
// 0062278f  752a                 jne 0x6227bb
// 00622791  8b03                 mov eax, dword ptr [ebx]
// 00622793  83c018               add eax, 0x18
// 00622796  8928                 mov dword ptr [eax], ebp
// 00622798  8b0e                 mov ecx, dword ptr [esi]
// 0062279a  894804               mov dword ptr [eax + 4], ecx
// 0062279d  8b5724               mov edx, dword ptr [edi + 0x24]
// 006227a0  895008               mov dword ptr [eax + 8], edx
// 006227a3  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 006227a6  89480c               mov dword ptr [eax + 0xc], ecx
// 006227a9  8b13                 mov edx, dword ptr [ebx]
// 006227ab  c742145e000000       mov dword ptr [edx + 0x14], 0x5e
// 006227b2  8b03                 mov eax, dword ptr [ebx]
// 006227b4  8b4804               mov ecx, dword ptr [eax + 4]
// 006227b7  ffd1                 call ecx
// 006227b9  eb15                 jmp 0x6227d0
// 006227bb  8b13                 mov edx, dword ptr [ebx]
// 006227bd  c742145f000000       mov dword ptr [edx + 0x14], 0x5f
// 006227c4  8b03                 mov eax, dword ptr [ebx]
// 006227c6  896818               mov dword ptr [eax + 0x18], ebp
// 006227c9  8b0b                 mov ecx, dword ptr [ebx]
// 006227cb  8b5104               mov edx, dword ptr [ecx + 4]
// 006227ce  ffd2                 call edx
// 006227d0  8b4b64               mov ecx, dword ptr [ebx + 0x64]
// 006227d3  8b4304               mov eax, dword ptr [ebx + 4]
// 006227d6  8b5008               mov edx, dword ptr [eax + 8]
// 006227d9  83c408               add esp, 8
// 006227dc  51                   push ecx
// 006227dd  55                   push ebp
// 006227de  6a01                 push 1
// 006227e0  53                   push ebx
// 006227e1  ffd2                 call edx
// 006227e3  83c410               add esp, 0x10
// 006227e6  837b6400             cmp dword ptr [ebx + 0x64], 0
// 006227ea  89442430             mov dword ptr [esp + 0x30], eax
// 006227ee  896c2414             mov dword ptr [esp + 0x14], ebp
// 006227f2  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006227fa  0f8eb7000000         jle 0x6228b7
// 00622800  8bf8                 mov edi, eax
// 00622802  89742418             mov dword ptr [esp + 0x18], esi
// 00622806  8b442418             mov eax, dword ptr [esp + 0x18]
// 0062280a  8b08                 mov ecx, dword ptr [eax]
// 0062280c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00622810  99                   cdq 
// 00622811  f7f9                 idiv ecx
// 00622813  8bf0                 mov esi, eax
// 00622815  85c9                 test ecx, ecx
// 00622817  7e6a                 jle 0x622883
// 00622819  8d41ff               lea eax, [ecx - 1]
// 0062281c  89442428             mov dword ptr [esp + 0x28], eax
// 00622820  99                   cdq 
// 00622821  2bc2                 sub eax, edx
// 00622823  d1f8                 sar eax, 1
// 00622825  33db                 xor ebx, ebx
// 00622827  89442424             mov dword ptr [esp + 0x24], eax
// 0062282b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0062282f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00622833  eb04                 jmp 0x622839
// 00622835  8b442424             mov eax, dword ptr [esp + 0x24]
// 00622839  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062283d  03c1                 add eax, ecx
// 0062283f  99                   cdq 
// 00622840  f77c2428             idiv dword ptr [esp + 0x28]
// 00622844  3bdd                 cmp ebx, ebp
// 00622846  8bd3                 mov edx, ebx
// 00622848  7d24                 jge 0x62286e
// 0062284a  8d9b00000000         lea ebx, [ebx]
// 00622850  33c9                 xor ecx, ecx
// 00622852  85f6                 test esi, esi
// 00622854  7e10                 jle 0x622866
// 00622856  8b2f                 mov ebp, dword ptr [edi]
// 00622858  03e9                 add ebp, ecx
// 0062285a  41                   inc ecx
// 0062285b  3bce                 cmp ecx, esi
// 0062285d  88042a               mov byte ptr [edx + ebp], al
// 00622860  7cf4                 jl 0x622856
// 00622862  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00622866  03542414             add edx, dword ptr [esp + 0x14]
// 0062286a  3bd5                 cmp edx, ebp
// 0062286c  7ce2                 jl 0x622850
// 0062286e  81442410ff000000     add dword ptr [esp + 0x10], 0xff
// 00622876  03de                 add ebx, esi
// 00622878  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0062287d  75b6                 jne 0x622835
// 0062287f  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00622883  8b442420             mov eax, dword ptr [esp + 0x20]
// 00622887  8344241804           add dword ptr [esp + 0x18], 4
// 0062288c  40                   inc eax
// 0062288d  83c704               add edi, 4
// 00622890  3b4364               cmp eax, dword ptr [ebx + 0x64]
// 00622893  89742414             mov dword ptr [esp + 0x14], esi
// 00622897  89442420             mov dword ptr [esp + 0x20], eax
// 0062289b  0f8c65ffffff         jl 0x622806
// 006228a1  8b442434             mov eax, dword ptr [esp + 0x34]
// 006228a5  8b542430             mov edx, dword ptr [esp + 0x30]
// 006228a9  5f                   pop edi
// 006228aa  5e                   pop esi
// 006228ab  896814               mov dword ptr [eax + 0x14], ebp
// 006228ae  5d                   pop ebp
// 006228af  895010               mov dword ptr [eax + 0x10], edx
// 006228b2  5b                   pop ebx
// 006228b3  83c428               add esp, 0x28
// 006228b6  c3                   ret 
// 006228b7  896f14               mov dword ptr [edi + 0x14], ebp
// 006228ba  894710               mov dword ptr [edi + 0x10], eax
// 006228bd  5f                   pop edi
// 006228be  5e                   pop esi
// 006228bf  5d                   pop ebp
// 006228c0  5b                   pop ebx
// 006228c1  83c428               add esp, 0x28
// 006228c4  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colormap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
