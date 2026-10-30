// roc 2011-06 00858450  unit: CXTPControls  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00858450
//
// 00858450  53                   push ebx
// 00858451  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00858455  55                   push ebp
// 00858456  56                   push esi
// 00858457  57                   push edi
// 00858458  33ff                 xor edi, edi
// 0085845a  8be9                 mov ebp, ecx
// 0085845c  33f6                 xor esi, esi
// 0085845e  8bff                 mov edi, edi
// 00858460  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 00858463  3bf2                 cmp esi, edx
// 00858465  7c0d                 jl 0x858474
// 00858467  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 0085846a  0f8da4000000         jge 0x858514
// 00858470  3bf2                 cmp esi, edx
// 00858472  7d20                 jge 0x858494
// 00858474  85f6                 test esi, esi
// 00858476  7c0c                 jl 0x858484
// 00858478  3bf2                 cmp esi, edx
// 0085847a  7d08                 jge 0x858484
// 0085847c  8b4528               mov eax, dword ptr [ebp + 0x28]
// 0085847f  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00858482  eb02                 jmp 0x858486
// 00858484  33c0                 xor eax, eax
// 00858486  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 0085848d  7405                 je 0x858494
// 0085848f  46                   inc esi
// 00858490  3bf2                 cmp esi, edx
// 00858492  7ce0                 jl 0x858474
// 00858494  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 00858497  3bf9                 cmp edi, ecx
// 00858499  7d25                 jge 0x8584c0
// 0085849b  eb03                 jmp 0x8584a0
// 0085849d  8d4900               lea ecx, [ecx]
// 008584a0  85ff                 test edi, edi
// 008584a2  7c0c                 jl 0x8584b0
// 008584a4  3bf9                 cmp edi, ecx
// 008584a6  7d08                 jge 0x8584b0
// 008584a8  8b4328               mov eax, dword ptr [ebx + 0x28]
// 008584ab  8b04b8               mov eax, dword ptr [eax + edi*4]
// 008584ae  eb02                 jmp 0x8584b2
// 008584b0  33c0                 xor eax, eax
// 008584b2  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 008584b9  7405                 je 0x8584c0
// 008584bb  47                   inc edi
// 008584bc  3bf9                 cmp edi, ecx
// 008584be  7ce0                 jl 0x8584a0
// 008584c0  3bf2                 cmp esi, edx
// 008584c2  7d45                 jge 0x858509
// 008584c4  3bf9                 cmp edi, ecx
// 008584c6  7d3d                 jge 0x858505
// 008584c8  85f6                 test esi, esi
// 008584ca  7c0c                 jl 0x8584d8
// 008584cc  3bf2                 cmp esi, edx
// 008584ce  7d50                 jge 0x858520
// 008584d0  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 008584d3  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 008584d6  eb02                 jmp 0x8584da
// 008584d8  33c9                 xor ecx, ecx
// 008584da  85ff                 test edi, edi
// 008584dc  7c0d                 jl 0x8584eb
// 008584de  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 008584e1  7d3d                 jge 0x858520
// 008584e3  8b5328               mov edx, dword ptr [ebx + 0x28]
// 008584e6  8b04ba               mov eax, dword ptr [edx + edi*4]
// 008584e9  eb02                 jmp 0x8584ed
// 008584eb  33c0                 xor eax, eax
// 008584ed  8b11                 mov edx, dword ptr [ecx]
// 008584ef  50                   push eax
// 008584f0  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 008584f6  ffd0                 call eax
// 008584f8  85c0                 test eax, eax
// 008584fa  7511                 jne 0x85850d
// 008584fc  5f                   pop edi
// 008584fd  5e                   pop esi
// 008584fe  5d                   pop ebp
// 008584ff  33c0                 xor eax, eax
// 00858501  5b                   pop ebx
// 00858502  c20400               ret 4
// 00858505  3bf2                 cmp esi, edx
// 00858507  7cf3                 jl 0x8584fc
// 00858509  3bf9                 cmp edi, ecx
// 0085850b  7cef                 jl 0x8584fc
// 0085850d  46                   inc esi
// 0085850e  47                   inc edi
// 0085850f  e94cffffff           jmp 0x858460
// 00858514  5f                   pop edi
// 00858515  5e                   pop esi
// 00858516  5d                   pop ebp
// 00858517  b801000000           mov eax, 1
// 0085851c  5b                   pop ebx
// 0085851d  c20400               ret 4
// 00858520  e8e51dfbff           call 0x80a30a
// copied from an identical function in another client (function ?Compare@CXTPControls@@QAEHPBV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp