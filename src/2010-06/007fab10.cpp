// roc 2010-06 007fab10  unit: CXTPControls  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fab10
//
// 007fab10  53                   push ebx
// 007fab11  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007fab15  55                   push ebp
// 007fab16  56                   push esi
// 007fab17  57                   push edi
// 007fab18  33ff                 xor edi, edi
// 007fab1a  8be9                 mov ebp, ecx
// 007fab1c  33f6                 xor esi, esi
// 007fab1e  8bff                 mov edi, edi
// 007fab20  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 007fab23  3bf2                 cmp esi, edx
// 007fab25  7c0d                 jl 0x7fab34
// 007fab27  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 007fab2a  0f8da4000000         jge 0x7fabd4
// 007fab30  3bf2                 cmp esi, edx
// 007fab32  7d20                 jge 0x7fab54
// 007fab34  85f6                 test esi, esi
// 007fab36  7c0c                 jl 0x7fab44
// 007fab38  3bf2                 cmp esi, edx
// 007fab3a  7d08                 jge 0x7fab44
// 007fab3c  8b4528               mov eax, dword ptr [ebp + 0x28]
// 007fab3f  8b04b0               mov eax, dword ptr [eax + esi*4]
// 007fab42  eb02                 jmp 0x7fab46
// 007fab44  33c0                 xor eax, eax
// 007fab46  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 007fab4d  7405                 je 0x7fab54
// 007fab4f  46                   inc esi
// 007fab50  3bf2                 cmp esi, edx
// 007fab52  7ce0                 jl 0x7fab34
// 007fab54  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 007fab57  3bf9                 cmp edi, ecx
// 007fab59  7d25                 jge 0x7fab80
// 007fab5b  eb03                 jmp 0x7fab60
// 007fab5d  8d4900               lea ecx, [ecx]
// 007fab60  85ff                 test edi, edi
// 007fab62  7c0c                 jl 0x7fab70
// 007fab64  3bf9                 cmp edi, ecx
// 007fab66  7d08                 jge 0x7fab70
// 007fab68  8b4328               mov eax, dword ptr [ebx + 0x28]
// 007fab6b  8b04b8               mov eax, dword ptr [eax + edi*4]
// 007fab6e  eb02                 jmp 0x7fab72
// 007fab70  33c0                 xor eax, eax
// 007fab72  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 007fab79  7405                 je 0x7fab80
// 007fab7b  47                   inc edi
// 007fab7c  3bf9                 cmp edi, ecx
// 007fab7e  7ce0                 jl 0x7fab60
// 007fab80  3bf2                 cmp esi, edx
// 007fab82  7d45                 jge 0x7fabc9
// 007fab84  3bf9                 cmp edi, ecx
// 007fab86  7d3d                 jge 0x7fabc5
// 007fab88  85f6                 test esi, esi
// 007fab8a  7c0c                 jl 0x7fab98
// 007fab8c  3bf2                 cmp esi, edx
// 007fab8e  7d50                 jge 0x7fabe0
// 007fab90  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 007fab93  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 007fab96  eb02                 jmp 0x7fab9a
// 007fab98  33c9                 xor ecx, ecx
// 007fab9a  85ff                 test edi, edi
// 007fab9c  7c0d                 jl 0x7fabab
// 007fab9e  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 007faba1  7d3d                 jge 0x7fabe0
// 007faba3  8b5328               mov edx, dword ptr [ebx + 0x28]
// 007faba6  8b04ba               mov eax, dword ptr [edx + edi*4]
// 007faba9  eb02                 jmp 0x7fabad
// 007fabab  33c0                 xor eax, eax
// 007fabad  8b11                 mov edx, dword ptr [ecx]
// 007fabaf  50                   push eax
// 007fabb0  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 007fabb6  ffd0                 call eax
// 007fabb8  85c0                 test eax, eax
// 007fabba  7511                 jne 0x7fabcd
// 007fabbc  5f                   pop edi
// 007fabbd  5e                   pop esi
// 007fabbe  5d                   pop ebp
// 007fabbf  33c0                 xor eax, eax
// 007fabc1  5b                   pop ebx
// 007fabc2  c20400               ret 4
// 007fabc5  3bf2                 cmp esi, edx
// 007fabc7  7cf3                 jl 0x7fabbc
// 007fabc9  3bf9                 cmp edi, ecx
// 007fabcb  7cef                 jl 0x7fabbc
// 007fabcd  46                   inc esi
// 007fabce  47                   inc edi
// 007fabcf  e94cffffff           jmp 0x7fab20
// 007fabd4  5f                   pop edi
// 007fabd5  5e                   pop esi
// 007fabd6  5d                   pop ebp
// 007fabd7  b801000000           mov eax, 1
// 007fabdc  5b                   pop ebx
// 007fabdd  c20400               ret 4
// 007fabe0  e867d0faff           call 0x7a7c4c
// copied from an identical function in another client (function ?Compare@CXTPControls@@QAEHPBV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp