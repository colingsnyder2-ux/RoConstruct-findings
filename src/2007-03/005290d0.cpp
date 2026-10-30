// roc 2007-03 005290d0  unit: seg_00520000  size: 454 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005290d0
//
// 005290d0  83ec0c               sub esp, 0xc
// 005290d3  55                   push ebp
// 005290d4  56                   push esi
// 005290d5  8b742418             mov esi, dword ptr [esp + 0x18]
// 005290d9  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005290df  8bae44010000         mov ebp, dword ptr [esi + 0x144]
// 005290e5  57                   push edi
// 005290e6  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005290ea  8b0f                 mov ecx, dword ptr [edi]
// 005290ec  3b4c2434             cmp ecx, dword ptr [esp + 0x34]
// 005290f0  8d0440               lea eax, [eax + eax*2]
// 005290f3  89442414             mov dword ptr [esp + 0x14], eax
// 005290f7  0f8392010000         jae 0x52928f
// 005290fd  53                   push ebx
// 005290fe  8bff                 mov edi, edi
// 00529100  8b542428             mov edx, dword ptr [esp + 0x28]
// 00529104  8b12                 mov edx, dword ptr [edx]
// 00529106  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052910a  3bd0                 cmp edx, eax
// 0052910c  0f83b5000000         jae 0x5291c7
// 00529112  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 00529115  8b5d3c               mov ebx, dword ptr [ebp + 0x3c]
// 00529118  2bd9                 sub ebx, ecx
// 0052911a  2bc2                 sub eax, edx
// 0052911c  3bd8                 cmp ebx, eax
// 0052911e  895c2410             mov dword ptr [esp + 0x10], ebx
// 00529122  7206                 jb 0x52912a
// 00529124  89442410             mov dword ptr [esp + 0x10], eax
// 00529128  8bd8                 mov ebx, eax
// 0052912a  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 00529130  8b4004               mov eax, dword ptr [eax + 4]
// 00529133  53                   push ebx
// 00529134  51                   push ecx
// 00529135  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00529139  8d7d08               lea edi, [ebp + 8]
// 0052913c  57                   push edi
// 0052913d  8d1491               lea edx, [ecx + edx*4]
// 00529140  52                   push edx
// 00529141  56                   push esi
// 00529142  ffd0                 call eax
// 00529144  8b4d30               mov ecx, dword ptr [ebp + 0x30]
// 00529147  83c414               add esp, 0x14
// 0052914a  3b4e20               cmp ecx, dword ptr [esi + 0x20]
// 0052914d  7566                 jne 0x5291b5
// 0052914f  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00529153  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0052915b  7e58                 jle 0x5291b5
// 0052915d  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00529163  897c2414             mov dword ptr [esp + 0x14], edi
// 00529167  bf01000000           mov edi, 1
// 0052916c  3bc7                 cmp eax, edi
// 0052916e  7c30                 jl 0x5291a0
// 00529170  83cbff               or ebx, 0xffffffff
// 00529173  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00529176  8b542414             mov edx, dword ptr [esp + 0x14]
// 0052917a  8b02                 mov eax, dword ptr [edx]
// 0052917c  51                   push ecx
// 0052917d  6a01                 push 1
// 0052917f  53                   push ebx
// 00529180  50                   push eax
// 00529181  6a00                 push 0
// 00529183  50                   push eax
// 00529184  e8b7b4feff           call 0x514640
// 00529189  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0052918f  83c701               add edi, 1
// 00529192  83c418               add esp, 0x18
// 00529195  83eb01               sub ebx, 1
// 00529198  3bf8                 cmp edi, eax
// 0052919a  7ed7                 jle 0x529173
// 0052919c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005291a0  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005291a4  8344241404           add dword ptr [esp + 0x14], 4
// 005291a9  83c101               add ecx, 1
// 005291ac  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005291af  894c2420             mov dword ptr [esp + 0x20], ecx
// 005291b3  7cb2                 jl 0x529167
// 005291b5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005291b9  0118                 add dword ptr [eax], ebx
// 005291bb  015d34               add dword ptr [ebp + 0x34], ebx
// 005291be  295d30               sub dword ptr [ebp + 0x30], ebx
// 005291c1  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 005291c5  eb60                 jmp 0x529227
// 005291c7  837d3000             cmp dword ptr [ebp + 0x30], 0
// 005291cb  0f85bd000000         jne 0x52928e
// 005291d1  8b5534               mov edx, dword ptr [ebp + 0x34]
// 005291d4  3b553c               cmp edx, dword ptr [ebp + 0x3c]
// 005291d7  7d4e                 jge 0x529227
// 005291d9  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 005291dd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005291e5  7e3a                 jle 0x529221
// 005291e7  8d4508               lea eax, [ebp + 8]
// 005291ea  89442414             mov dword ptr [esp + 0x14], eax
// 005291ee  8bff                 mov edi, edi
// 005291f0  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005291f3  8b542414             mov edx, dword ptr [esp + 0x14]
// 005291f7  8b5d3c               mov ebx, dword ptr [ebp + 0x3c]
// 005291fa  8b4534               mov eax, dword ptr [ebp + 0x34]
// 005291fd  8b3a                 mov edi, dword ptr [edx]
// 005291ff  51                   push ecx
// 00529200  e80bfdffff           call 0x528f10
// 00529205  8b442424             mov eax, dword ptr [esp + 0x24]
// 00529209  8344241804           add dword ptr [esp + 0x18], 4
// 0052920e  83c001               add eax, 1
// 00529211  83c404               add esp, 4
// 00529214  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 00529217  89442420             mov dword ptr [esp + 0x20], eax
// 0052921b  7cd3                 jl 0x5291f0
// 0052921d  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00529221  8b453c               mov eax, dword ptr [ebp + 0x3c]
// 00529224  894534               mov dword ptr [ebp + 0x34], eax
// 00529227  8b4d34               mov ecx, dword ptr [ebp + 0x34]
// 0052922a  3b4d3c               cmp ecx, dword ptr [ebp + 0x3c]
// 0052922d  7553                 jne 0x529282
// 0052922f  8b07                 mov eax, dword ptr [edi]
// 00529231  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00529235  8b9654010000         mov edx, dword ptr [esi + 0x154]
// 0052923b  8b5204               mov edx, dword ptr [edx + 4]
// 0052923e  50                   push eax
// 0052923f  8b4538               mov eax, dword ptr [ebp + 0x38]
// 00529242  51                   push ecx
// 00529243  50                   push eax
// 00529244  8d4d08               lea ecx, [ebp + 8]
// 00529247  51                   push ecx
// 00529248  56                   push esi
// 00529249  ffd2                 call edx
// 0052924b  830701               add dword ptr [edi], 1
// 0052924e  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00529254  014538               add dword ptr [ebp + 0x38], eax
// 00529257  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052925b  83c414               add esp, 0x14
// 0052925e  394538               cmp dword ptr [ebp + 0x38], eax
// 00529261  7c07                 jl 0x52926a
// 00529263  c7453800000000       mov dword ptr [ebp + 0x38], 0
// 0052926a  394534               cmp dword ptr [ebp + 0x34], eax
// 0052926d  7c07                 jl 0x529276
// 0052926f  c7453400000000       mov dword ptr [ebp + 0x34], 0
// 00529276  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0052927c  034d34               add ecx, dword ptr [ebp + 0x34]
// 0052927f  894d3c               mov dword ptr [ebp + 0x3c], ecx
// 00529282  8b542438             mov edx, dword ptr [esp + 0x38]
// 00529286  3917                 cmp dword ptr [edi], edx
// 00529288  0f8272feffff         jb 0x529100
// 0052928e  5b                   pop ebx
// 0052928f  5f                   pop edi
// 00529290  5e                   pop esi
// 00529291  5d                   pop ebp
// 00529292  83c40c               add esp, 0xc
// 00529295  c3                   ret 
// library jpeg-6b/jcprepct.c (function _pre_process_context)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
