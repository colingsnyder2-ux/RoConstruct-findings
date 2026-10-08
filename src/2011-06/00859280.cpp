// roc 2011-06 00859280  unit: CXTPControls  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00859280
//
// 00859280  83ec10               sub esp, 0x10
// 00859283  8b442424             mov eax, dword ptr [esp + 0x24]
// 00859287  8b00                 mov eax, dword ptr [eax]
// 00859289  53                   push ebx
// 0085928a  55                   push ebp
// 0085928b  56                   push esi
// 0085928c  57                   push edi
// 0085928d  8be9                 mov ebp, ecx
// 0085928f  33db                 xor ebx, ebx
// 00859291  53                   push ebx
// 00859292  8d4c241c             lea ecx, [esp + 0x1c]
// 00859296  83e010               and eax, 0x10
// 00859299  51                   push ecx
// 0085929a  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0085929d  89442418             mov dword ptr [esp + 0x18], eax
// 008592a1  e86afbfcff           call 0x828e10
// 008592a6  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 008592a9  33f6                 xor esi, esi
// 008592ab  3bd3                 cmp edx, ebx
// 008592ad  0f8e32010000         jle 0x8593e5
// 008592b3  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008592b7  83c730               add edi, 0x30
// 008592ba  8d9b00000000         lea ebx, [ebx]
// 008592c0  395ff8               cmp dword ptr [edi - 8], ebx
// 008592c3  0f840d010000         je 0x8593d6
// 008592c9  3bf3                 cmp esi, ebx
// 008592cb  7c15                 jl 0x8592e2
// 008592cd  3bf2                 cmp esi, edx
// 008592cf  7d11                 jge 0x8592e2
// 008592d1  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 008592d4  0f8d31010000         jge 0x85940b
// 008592da  8b4528               mov eax, dword ptr [ebp + 0x28]
// 008592dd  8b04b0               mov eax, dword ptr [eax + esi*4]
// 008592e0  eb02                 jmp 0x8592e4
// 008592e2  33c0                 xor eax, eax
// 008592e4  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 008592ea  3bcb                 cmp ecx, ebx
// 008592ec  7404                 je 0x8592f2
// 008592ee  8bc1                 mov eax, ecx
// 008592f0  eb2a                 jmp 0x85931c
// 008592f2  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 008592f8  3bcb                 cmp ecx, ebx
// 008592fa  7e04                 jle 0x859300
// 008592fc  8bc1                 mov eax, ecx
// 008592fe  eb1c                 jmp 0x85931c
// 00859300  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 00859306  3bcb                 cmp ecx, ebx
// 00859308  740c                 je 0x859316
// 0085930a  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0085930d  3bc3                 cmp eax, ebx
// 0085930f  7f13                 jg 0x859324
// 00859311  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00859314  eb06                 jmp 0x85931c
// 00859316  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 0085931c  3bc3                 cmp eax, ebx
// 0085931e  0f8e88000000         jle 0x8593ac
// 00859324  3bf3                 cmp esi, ebx
// 00859326  7c15                 jl 0x85933d
// 00859328  3bf2                 cmp esi, edx
// 0085932a  7d11                 jge 0x85933d
// 0085932c  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 0085932f  0f8dd6000000         jge 0x85940b
// 00859335  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 00859338  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 0085933b  eb02                 jmp 0x85933f
// 0085933d  33c0                 xor eax, eax
// 0085933f  8b8890000000         mov ecx, dword ptr [eax + 0x90]
// 00859345  3bcb                 cmp ecx, ebx
// 00859347  7404                 je 0x85934d
// 00859349  8bc1                 mov eax, ecx
// 0085934b  eb2a                 jmp 0x859377
// 0085934d  8b8888000000         mov ecx, dword ptr [eax + 0x88]
// 00859353  3bcb                 cmp ecx, ebx
// 00859355  7e04                 jle 0x85935b
// 00859357  8bc1                 mov eax, ecx
// 00859359  eb1c                 jmp 0x859377
// 0085935b  8b885c010000         mov ecx, dword ptr [eax + 0x15c]
// 00859361  3bcb                 cmp ecx, ebx
// 00859363  740c                 je 0x859371
// 00859365  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00859368  3bc3                 cmp eax, ebx
// 0085936a  7f0b                 jg 0x859377
// 0085936c  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0085936f  eb06                 jmp 0x859377
// 00859371  8b8084000000         mov eax, dword ptr [eax + 0x84]
// 00859377  3bf3                 cmp esi, ebx
// 00859379  7c15                 jl 0x859390
// 0085937b  3bf2                 cmp esi, edx
// 0085937d  7d11                 jge 0x859390
// 0085937f  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 00859382  0f8d83000000         jge 0x85940b
// 00859388  8b5528               mov edx, dword ptr [ebp + 0x28]
// 0085938b  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 0085938e  eb02                 jmp 0x859392
// 00859390  33c9                 xor ecx, ecx
// 00859392  8b542418             mov edx, dword ptr [esp + 0x18]
// 00859396  52                   push edx
// 00859397  50                   push eax
// 00859398  e89333fbff           call 0x80c730
// 0085939d  8bc8                 mov ecx, eax
// 0085939f  e8fca4fcff           call 0x8238a0
// 008593a4  f7d8                 neg eax
// 008593a6  1bc0                 sbb eax, eax
// 008593a8  f7d8                 neg eax
// 008593aa  eb02                 jmp 0x8593ae
// 008593ac  33c0                 xor eax, eax
// 008593ae  3bf3                 cmp esi, ebx
// 008593b0  891f                 mov dword ptr [edi], ebx
// 008593b2  895ffc               mov dword ptr [edi - 4], ebx
// 008593b5  7c0d                 jl 0x8593c4
// 008593b7  3b752c               cmp esi, dword ptr [ebp + 0x2c]
// 008593ba  7d08                 jge 0x8593c4
// 008593bc  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 008593bf  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 008593c2  eb02                 jmp 0x8593c6
// 008593c4  33c9                 xor ecx, ecx
// 008593c6  33d2                 xor edx, edx
// 008593c8  3bc3                 cmp eax, ebx
// 008593ca  0f95c2               setne dl
// 008593cd  83c203               add edx, 3
// 008593d0  899148010000         mov dword ptr [ecx + 0x148], edx
// 008593d6  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 008593d9  46                   inc esi
// 008593da  83c740               add edi, 0x40
// 008593dd  3bf2                 cmp esi, edx
// 008593df  0f8cdbfeffff         jl 0x8592c0
// 008593e5  8b442434             mov eax, dword ptr [esp + 0x34]
// 008593e9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008593ed  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008593f1  8b742424             mov esi, dword ptr [esp + 0x24]
// 008593f5  50                   push eax
// 008593f6  51                   push ecx
// 008593f7  57                   push edi
// 008593f8  56                   push esi
// 008593f9  8bcd                 mov ecx, ebp
// 008593fb  e890e9ffff           call 0x857d90
// 00859400  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00859404  740a                 je 0x859410
// 00859406  8b4e04               mov ecx, dword ptr [esi + 4]
// 00859409  eb07                 jmp 0x859412
// 0085940b  e8fa0efbff           call 0x80a30a
// 00859410  8b0e                 mov ecx, dword ptr [esi]
// 00859412  8b442430             mov eax, dword ptr [esp + 0x30]
// 00859416  3bc8                 cmp ecx, eax
// 00859418  7e25                 jle 0x85943f
// 0085941a  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0085941e  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00859422  53                   push ebx
// 00859423  50                   push eax
// 00859424  52                   push edx
// 00859425  57                   push edi
// 00859426  8d442420             lea eax, [esp + 0x20]
// 0085942a  50                   push eax
// 0085942b  8bcd                 mov ecx, ebp
// 0085942d  e87ef9ffff           call 0x858db0
// 00859432  8b08                 mov ecx, dword ptr [eax]
// 00859434  890e                 mov dword ptr [esi], ecx
// 00859436  8b5004               mov edx, dword ptr [eax + 4]
// 00859439  895604               mov dword ptr [esi + 4], edx
// 0085943c  830b01               or dword ptr [ebx], 1
// 0085943f  5f                   pop edi
// 00859440  8bc6                 mov eax, esi
// 00859442  5e                   pop esi
// 00859443  5d                   pop ebp
// 00859444  5b                   pop ebx
// 00859445  83c410               add esp, 0x10
// 00859448  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_WrapSmartLayoutToolBar@CXTPControls@@IAE?AVCSize@@PAVCDC@@PAUXTPBUTTONINFO@1@HAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
