// roc 2009-12 00846a70  unit: CXTPControls  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00846a70
//
// 00846a70  53                   push ebx
// 00846a71  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00846a75  55                   push ebp
// 00846a76  56                   push esi
// 00846a77  57                   push edi
// 00846a78  33ff                 xor edi, edi
// 00846a7a  8be9                 mov ebp, ecx
// 00846a7c  33f6                 xor esi, esi
// 00846a7e  8bff                 mov edi, edi
// 00846a80  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 00846a83  3bf2                 cmp esi, edx
// 00846a85  7c0d                 jl 0x846a94
// 00846a87  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 00846a8a  0f8da4000000         jge 0x846b34
// 00846a90  3bf2                 cmp esi, edx
// 00846a92  7d20                 jge 0x846ab4
// 00846a94  85f6                 test esi, esi
// 00846a96  7c0c                 jl 0x846aa4
// 00846a98  3bf2                 cmp esi, edx
// 00846a9a  7d08                 jge 0x846aa4
// 00846a9c  8b4528               mov eax, dword ptr [ebp + 0x28]
// 00846a9f  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00846aa2  eb02                 jmp 0x846aa6
// 00846aa4  33c0                 xor eax, eax
// 00846aa6  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 00846aad  7405                 je 0x846ab4
// 00846aaf  46                   inc esi
// 00846ab0  3bf2                 cmp esi, edx
// 00846ab2  7ce0                 jl 0x846a94
// 00846ab4  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 00846ab7  3bf9                 cmp edi, ecx
// 00846ab9  7d25                 jge 0x846ae0
// 00846abb  eb03                 jmp 0x846ac0
// 00846abd  8d4900               lea ecx, [ecx]
// 00846ac0  85ff                 test edi, edi
// 00846ac2  7c0c                 jl 0x846ad0
// 00846ac4  3bf9                 cmp edi, ecx
// 00846ac6  7d08                 jge 0x846ad0
// 00846ac8  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00846acb  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00846ace  eb02                 jmp 0x846ad2
// 00846ad0  33c0                 xor eax, eax
// 00846ad2  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 00846ad9  7405                 je 0x846ae0
// 00846adb  47                   inc edi
// 00846adc  3bf9                 cmp edi, ecx
// 00846ade  7ce0                 jl 0x846ac0
// 00846ae0  3bf2                 cmp esi, edx
// 00846ae2  7d45                 jge 0x846b29
// 00846ae4  3bf9                 cmp edi, ecx
// 00846ae6  7d3d                 jge 0x846b25
// 00846ae8  85f6                 test esi, esi
// 00846aea  7c0c                 jl 0x846af8
// 00846aec  3bf2                 cmp esi, edx
// 00846aee  7d50                 jge 0x846b40
// 00846af0  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 00846af3  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00846af6  eb02                 jmp 0x846afa
// 00846af8  33c9                 xor ecx, ecx
// 00846afa  85ff                 test edi, edi
// 00846afc  7c0d                 jl 0x846b0b
// 00846afe  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 00846b01  7d3d                 jge 0x846b40
// 00846b03  8b5328               mov edx, dword ptr [ebx + 0x28]
// 00846b06  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00846b09  eb02                 jmp 0x846b0d
// 00846b0b  33c0                 xor eax, eax
// 00846b0d  8b11                 mov edx, dword ptr [ecx]
// 00846b0f  50                   push eax
// 00846b10  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 00846b16  ffd0                 call eax
// 00846b18  85c0                 test eax, eax
// 00846b1a  7511                 jne 0x846b2d
// 00846b1c  5f                   pop edi
// 00846b1d  5e                   pop esi
// 00846b1e  5d                   pop ebp
// 00846b1f  33c0                 xor eax, eax
// 00846b21  5b                   pop ebx
// 00846b22  c20400               ret 4
// 00846b25  3bf2                 cmp esi, edx
// 00846b27  7cf3                 jl 0x846b1c
// 00846b29  3bf9                 cmp edi, ecx
// 00846b2b  7cef                 jl 0x846b1c
// 00846b2d  46                   inc esi
// 00846b2e  47                   inc edi
// 00846b2f  e94cffffff           jmp 0x846a80
// 00846b34  5f                   pop edi
// 00846b35  5e                   pop esi
// 00846b36  5d                   pop ebp
// 00846b37  b801000000           mov eax, 1
// 00846b3c  5b                   pop ebx
// 00846b3d  c20400               ret 4
// 00846b40  e8c7cffaff           call 0x7f3b0c
// copied from an identical function in another client (function ?Compare@CXTPControls@@QAEHPBV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp