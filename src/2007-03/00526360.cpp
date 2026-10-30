// roc 2007-03 00526360  unit: seg_00520000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00526360
//
// 00526360  56                   push esi
// 00526361  8b742408             mov esi, dword ptr [esp + 8]
// 00526365  57                   push edi
// 00526366  8bbe48010000         mov edi, dword ptr [esi + 0x148]
// 0052636c  8bce                 mov ecx, esi
// 0052636e  c7470800000000       mov dword ptr [edi + 8], 0
// 00526375  e866f9ffff           call 0x525ce0
// 0052637a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052637e  83e800               sub eax, 0
// 00526381  7466                 je 0x5263e9
// 00526383  83e802               sub eax, 2
// 00526386  743e                 je 0x5263c6
// 00526388  83e801               sub eax, 1
// 0052638b  7416                 je 0x5263a3
// 0052638d  8b06                 mov eax, dword ptr [esi]
// 0052638f  c7401404000000       mov dword ptr [eax + 0x14], 4
// 00526396  8b0e                 mov ecx, dword ptr [esi]
// 00526398  8b11                 mov edx, dword ptr [ecx]
// 0052639a  56                   push esi
// 0052639b  ffd2                 call edx
// 0052639d  83c404               add esp, 4
// 005263a0  5f                   pop edi
// 005263a1  5e                   pop esi
// 005263a2  c3                   ret 
// 005263a3  837f4000             cmp dword ptr [edi + 0x40], 0
// 005263a7  7513                 jne 0x5263bc
// 005263a9  8b06                 mov eax, dword ptr [esi]
// 005263ab  c7401404000000       mov dword ptr [eax + 0x14], 4
// 005263b2  8b0e                 mov ecx, dword ptr [esi]
// 005263b4  8b11                 mov edx, dword ptr [ecx]
// 005263b6  56                   push esi
// 005263b7  ffd2                 call edx
// 005263b9  83c404               add esp, 4
// 005263bc  c7470440615200       mov dword ptr [edi + 4], 0x526140
// 005263c3  5f                   pop edi
// 005263c4  5e                   pop esi
// 005263c5  c3                   ret 
// 005263c6  837f4000             cmp dword ptr [edi + 0x40], 0
// 005263ca  7513                 jne 0x5263df
// 005263cc  8b06                 mov eax, dword ptr [esi]
// 005263ce  c7401404000000       mov dword ptr [eax + 0x14], 4
// 005263d5  8b0e                 mov ecx, dword ptr [esi]
// 005263d7  8b11                 mov edx, dword ptr [ecx]
// 005263d9  56                   push esi
// 005263da  ffd2                 call edx
// 005263dc  83c404               add esp, 4
// 005263df  c74704805f5200       mov dword ptr [edi + 4], 0x525f80
// 005263e6  5f                   pop edi
// 005263e7  5e                   pop esi
// 005263e8  c3                   ret 
// 005263e9  837f4000             cmp dword ptr [edi + 0x40], 0
// 005263ed  7413                 je 0x526402
// 005263ef  8b06                 mov eax, dword ptr [esi]
// 005263f1  c7401404000000       mov dword ptr [eax + 0x14], 4
// 005263f8  8b0e                 mov ecx, dword ptr [esi]
// 005263fa  8b11                 mov edx, dword ptr [ecx]
// 005263fc  56                   push esi
// 005263fd  ffd2                 call edx
// 005263ff  83c404               add esp, 4
// 00526402  c74704305d5200       mov dword ptr [edi + 4], 0x525d30
// 00526409  5f                   pop edi
// 0052640a  5e                   pop esi
// 0052640b  c3                   ret 
// library jpeg-6b/jccoefct.c (function _start_pass_coef)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
