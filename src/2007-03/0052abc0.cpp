// roc 2007-03 0052abc0  unit: seg_00520000  size: 455 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052abc0
//
// 0052abc0  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0052abc6  83ec08               sub esp, 8
// 0052abc9  53                   push ebx
// 0052abca  bb01000000           mov ebx, 1
// 0052abcf  3bc3                 cmp eax, ebx
// 0052abd1  57                   push edi
// 0052abd2  7553                 jne 0x52ac27
// 0052abd4  8b8ee8000000         mov ecx, dword ptr [esi + 0xe8]
// 0052abda  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0052abdd  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 0052abe3  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0052abe6  8996fc000000         mov dword ptr [esi + 0xfc], edx
// 0052abec  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0052abef  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0052abf2  33d2                 xor edx, edx
// 0052abf4  f7f7                 div edi
// 0052abf6  895934               mov dword ptr [ecx + 0x34], ebx
// 0052abf9  895938               mov dword ptr [ecx + 0x38], ebx
// 0052abfc  89593c               mov dword ptr [ecx + 0x3c], ebx
// 0052abff  c7414008000000       mov dword ptr [ecx + 0x40], 8
// 0052ac06  895944               mov dword ptr [ecx + 0x44], ebx
// 0052ac09  85d2                 test edx, edx
// 0052ac0b  7502                 jne 0x52ac0f
// 0052ac0d  8bd7                 mov edx, edi
// 0052ac0f  895148               mov dword ptr [ecx + 0x48], edx
// 0052ac12  899e00010000         mov dword ptr [esi + 0x100], ebx
// 0052ac18  c7860401000000000000 mov dword ptr [esi + 0x104], 0
// 0052ac22  e935010000           jmp 0x52ad5c
// 0052ac27  33ff                 xor edi, edi
// 0052ac29  3bc7                 cmp eax, edi
// 0052ac2b  7e05                 jle 0x52ac32
// 0052ac2d  83f804               cmp eax, 4
// 0052ac30  7e27                 jle 0x52ac59
// 0052ac32  8b06                 mov eax, dword ptr [esi]
// 0052ac34  c740141a000000       mov dword ptr [eax + 0x14], 0x1a
// 0052ac3b  8b0e                 mov ecx, dword ptr [esi]
// 0052ac3d  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 0052ac43  895118               mov dword ptr [ecx + 0x18], edx
// 0052ac46  8b06                 mov eax, dword ptr [esi]
// 0052ac48  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 0052ac4f  8b0e                 mov ecx, dword ptr [esi]
// 0052ac51  8b11                 mov edx, dword ptr [ecx]
// 0052ac53  56                   push esi
// 0052ac54  ffd2                 call edx
// 0052ac56  83c404               add esp, 4
// 0052ac59  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0052ac5f  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0052ac62  03c0                 add eax, eax
// 0052ac64  03c0                 add eax, eax
// 0052ac66  03c0                 add eax, eax
// 0052ac68  50                   push eax
// 0052ac69  51                   push ecx
// 0052ac6a  e8a199feff           call 0x514610
// 0052ac6f  8b96dc000000         mov edx, dword ptr [esi + 0xdc]
// 0052ac75  03d2                 add edx, edx
// 0052ac77  03d2                 add edx, edx
// 0052ac79  03d2                 add edx, edx
// 0052ac7b  8986f8000000         mov dword ptr [esi + 0xf8], eax
// 0052ac81  8b4620               mov eax, dword ptr [esi + 0x20]
// 0052ac84  52                   push edx
// 0052ac85  50                   push eax
// 0052ac86  e88599feff           call 0x514610
// 0052ac8b  83c410               add esp, 0x10
// 0052ac8e  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 0052ac94  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 0052ac9a  89be00010000         mov dword ptr [esi + 0x100], edi
// 0052aca0  897c2408             mov dword ptr [esp + 8], edi
// 0052aca4  0f8eb2000000         jle 0x52ad5c
// 0052acaa  8d8ee8000000         lea ecx, [esi + 0xe8]
// 0052acb0  894c240c             mov dword ptr [esp + 0xc], ecx
// 0052acb4  55                   push ebp
// 0052acb5  8b542410             mov edx, dword ptr [esp + 0x10]
// 0052acb9  8b0a                 mov ecx, dword ptr [edx]
// 0052acbb  8b7908               mov edi, dword ptr [ecx + 8]
// 0052acbe  8d04fd00000000       lea eax, [edi*8]
// 0052acc5  8b690c               mov ebp, dword ptr [ecx + 0xc]
// 0052acc8  894140               mov dword ptr [ecx + 0x40], eax
// 0052accb  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0052acce  33d2                 xor edx, edx
// 0052acd0  f7f7                 div edi
// 0052acd2  8bdd                 mov ebx, ebp
// 0052acd4  0fafdf               imul ebx, edi
// 0052acd7  897934               mov dword ptr [ecx + 0x34], edi
// 0052acda  896938               mov dword ptr [ecx + 0x38], ebp
// 0052acdd  89593c               mov dword ptr [ecx + 0x3c], ebx
// 0052ace0  85d2                 test edx, edx
// 0052ace2  7502                 jne 0x52ace6
// 0052ace4  8bd7                 mov edx, edi
// 0052ace6  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0052ace9  895144               mov dword ptr [ecx + 0x44], edx
// 0052acec  33d2                 xor edx, edx
// 0052acee  f7f5                 div ebp
// 0052acf0  85d2                 test edx, edx
// 0052acf2  7502                 jne 0x52acf6
// 0052acf4  8bd5                 mov edx, ebp
// 0052acf6  895148               mov dword ptr [ecx + 0x48], edx
// 0052acf9  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0052acff  8bfb                 mov edi, ebx
// 0052ad01  03cf                 add ecx, edi
// 0052ad03  83f90a               cmp ecx, 0xa
// 0052ad06  7e13                 jle 0x52ad1b
// 0052ad08  8b16                 mov edx, dword ptr [esi]
// 0052ad0a  c742140d000000       mov dword ptr [edx + 0x14], 0xd
// 0052ad11  8b06                 mov eax, dword ptr [esi]
// 0052ad13  8b08                 mov ecx, dword ptr [eax]
// 0052ad15  56                   push esi
// 0052ad16  ffd1                 call ecx
// 0052ad18  83c404               add esp, 4
// 0052ad1b  85ff                 test edi, edi
// 0052ad1d  7e20                 jle 0x52ad3f
// 0052ad1f  90                   nop 
// 0052ad20  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 0052ad26  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052ad2a  83ef01               sub edi, 1
// 0052ad2d  89849604010000       mov dword ptr [esi + edx*4 + 0x104], eax
// 0052ad34  83860001000001       add dword ptr [esi + 0x100], 1
// 0052ad3b  85ff                 test edi, edi
// 0052ad3d  7fe1                 jg 0x52ad20
// 0052ad3f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052ad43  8344241004           add dword ptr [esp + 0x10], 4
// 0052ad48  83c001               add eax, 1
// 0052ad4b  3b86e4000000         cmp eax, dword ptr [esi + 0xe4]
// 0052ad51  8944240c             mov dword ptr [esp + 0xc], eax
// 0052ad55  0f8c5affffff         jl 0x52acb5
// 0052ad5b  5d                   pop ebp
// 0052ad5c  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0052ad62  85c9                 test ecx, ecx
// 0052ad64  5f                   pop edi
// 0052ad65  5b                   pop ebx
// 0052ad66  7e1b                 jle 0x52ad83
// 0052ad68  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0052ad6e  0fafc1               imul eax, ecx
// 0052ad71  3dffff0000           cmp eax, 0xffff
// 0052ad76  7c05                 jl 0x52ad7d
// 0052ad78  b8ffff0000           mov eax, 0xffff
// 0052ad7d  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 0052ad83  83c408               add esp, 8
// 0052ad86  c3                   ret 
// library jpeg-6b/jcmaster.c (function _per_scan_setup)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
