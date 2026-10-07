// roc 2008-06 0053bdf0  unit: seg_00530000  size: 450 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053bdf0
//
// 0053bdf0  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0053bdf6  83ec08               sub esp, 8
// 0053bdf9  53                   push ebx
// 0053bdfa  bb01000000           mov ebx, 1
// 0053bdff  57                   push edi
// 0053be00  3bc3                 cmp eax, ebx
// 0053be02  7553                 jne 0x53be57
// 0053be04  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 0053be0a  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0053be0d  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 0053be13  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0053be16  8996fc000000         mov dword ptr [esi + 0xfc], edx
// 0053be1c  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0053be1f  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0053be22  33d2                 xor edx, edx
// 0053be24  f7f7                 div edi
// 0053be26  895934               mov dword ptr [ecx + 0x34], ebx
// 0053be29  895938               mov dword ptr [ecx + 0x38], ebx
// 0053be2c  89593c               mov dword ptr [ecx + 0x3c], ebx
// 0053be2f  c7414008000000       mov dword ptr [ecx + 0x40], 8
// 0053be36  895944               mov dword ptr [ecx + 0x44], ebx
// 0053be39  85d2                 test edx, edx
// 0053be3b  7502                 jne 0x53be3f
// 0053be3d  8bd7                 mov edx, edi
// 0053be3f  895148               mov dword ptr [ecx + 0x48], edx
// 0053be42  899e00010000         mov dword ptr [esi + 0x100], ebx
// 0053be48  c7860401000000000000 mov dword ptr [esi + 0x104], 0
// 0053be52  e930010000           jmp 0x53bf87
// 0053be57  33ff                 xor edi, edi
// 0053be59  3bc7                 cmp eax, edi
// 0053be5b  7e05                 jle 0x53be62
// 0053be5d  83f804               cmp eax, 4
// 0053be60  7e27                 jle 0x53be89
// 0053be62  8b06                 mov eax, dword ptr [esi]
// 0053be64  c740141a000000       mov dword ptr [eax + 0x14], 0x1a
// 0053be6b  8b0e                 mov ecx, dword ptr [esi]
// 0053be6d  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 0053be73  895118               mov dword ptr [ecx + 0x18], edx
// 0053be76  8b06                 mov eax, dword ptr [esi]
// 0053be78  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 0053be7f  8b0e                 mov ecx, dword ptr [esi]
// 0053be81  8b11                 mov edx, dword ptr [ecx]
// 0053be83  56                   push esi
// 0053be84  ffd2                 call edx
// 0053be86  83c404               add esp, 4
// 0053be89  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0053be8f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0053be92  03c0                 add eax, eax
// 0053be94  03c0                 add eax, eax
// 0053be96  03c0                 add eax, eax
// 0053be98  50                   push eax
// 0053be99  51                   push ecx
// 0053be9a  e8619cfeff           call 0x525b00
// 0053be9f  8b96dc000000         mov edx, dword ptr [esi + 0xdc]
// 0053bea5  03d2                 add edx, edx
// 0053bea7  03d2                 add edx, edx
// 0053bea9  03d2                 add edx, edx
// 0053beab  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 0053beb1  8b4620               mov eax, dword ptr [esi + 0x20]
// 0053beb4  52                   push edx
// 0053beb5  50                   push eax
// 0053beb6  e8459cfeff           call 0x525b00
// 0053bebb  83c410               add esp, 0x10
// 0053bebe  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 0053bec4  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 0053beca  89be00010000         mov dword ptr [esi + 0x100], edi
// 0053bed0  897c2408             mov dword ptr [esp + 8], edi
// 0053bed4  0f8ead000000         jle 0x53bf87
// 0053beda  8d8ee8000000         lea ecx, [esi + 0xe8]
// 0053bee0  894c240c             mov dword ptr [esp + 0xc], ecx
// 0053bee4  55                   push ebp
// 0053bee5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053bee9  8b0a                 mov ecx, dword ptr [edx]
// 0053beeb  8b7908               mov edi, dword ptr [ecx + 8]
// 0053beee  8d04fd00000000       lea eax, [edi*8]
// 0053bef5  8b690c               mov ebp, dword ptr [ecx + 0xc]
// 0053bef8  894140               mov dword ptr [ecx + 0x40], eax
// 0053befb  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0053befe  33d2                 xor edx, edx
// 0053bf00  f7f7                 div edi
// 0053bf02  8bdd                 mov ebx, ebp
// 0053bf04  0fafdf               imul ebx, edi
// 0053bf07  897934               mov dword ptr [ecx + 0x34], edi
// 0053bf0a  896938               mov dword ptr [ecx + 0x38], ebp
// 0053bf0d  89593c               mov dword ptr [ecx + 0x3c], ebx
// 0053bf10  85d2                 test edx, edx
// 0053bf12  7502                 jne 0x53bf16
// 0053bf14  8bd7                 mov edx, edi
// 0053bf16  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0053bf19  895144               mov dword ptr [ecx + 0x44], edx
// 0053bf1c  33d2                 xor edx, edx
// 0053bf1e  f7f5                 div ebp
// 0053bf20  85d2                 test edx, edx
// 0053bf22  7502                 jne 0x53bf26
// 0053bf24  8bd5                 mov edx, ebp
// 0053bf26  895148               mov dword ptr [ecx + 0x48], edx
// 0053bf29  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0053bf2f  8bfb                 mov edi, ebx
// 0053bf31  03cf                 add ecx, edi
// 0053bf33  83f90a               cmp ecx, 0xa
// 0053bf36  7e13                 jle 0x53bf4b
// 0053bf38  8b16                 mov edx, dword ptr [esi]
// 0053bf3a  c742140d000000       mov dword ptr [edx + 0x14], 0xd
// 0053bf41  8b06                 mov eax, dword ptr [esi]
// 0053bf43  8b08                 mov ecx, dword ptr [eax]
// 0053bf45  56                   push esi
// 0053bf46  ffd1                 call ecx
// 0053bf48  83c404               add esp, 4
// 0053bf4b  85ff                 test edi, edi
// 0053bf4d  7e1d                 jle 0x53bf6c
// 0053bf4f  90                   nop 
// 0053bf50  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 0053bf56  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053bf5a  4f                   dec edi
// 0053bf5b  89849604010000       mov dword ptr [esi + edx*4 + 0x104], eax
// 0053bf62  ff8600010000         inc dword ptr [esi + 0x100]
// 0053bf68  85ff                 test edi, edi
// 0053bf6a  7fe4                 jg 0x53bf50
// 0053bf6c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053bf70  8344241004           add dword ptr [esp + 0x10], 4
// 0053bf75  40                   inc eax
// 0053bf76  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 0053bf7c  8944240c             mov dword ptr [esp + 0xc], eax
// 0053bf80  0f8c5fffffff         jl 0x53bee5
// 0053bf86  5d                   pop ebp
// 0053bf87  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0053bf8d  5f                   pop edi
// 0053bf8e  5b                   pop ebx
// 0053bf8f  85c9                 test ecx, ecx
// 0053bf91  7e1b                 jle 0x53bfae
// 0053bf93  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0053bf99  0fafc1               imul eax, ecx
// 0053bf9c  3dffff0000           cmp eax, 0xffff
// 0053bfa1  7c05                 jl 0x53bfa8
// 0053bfa3  b8ffff0000           mov eax, 0xffff
// 0053bfa8  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 0053bfae  83c408               add esp, 8
// 0053bfb1  c3                   ret 
// library jpeg-6b/jcmaster.c (function _per_scan_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
