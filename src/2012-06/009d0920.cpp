// roc 2012-06 009d0920  unit: CXTPControls  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d0920
//
// 009d0920  53                   push ebx
// 009d0921  8b5c2408             mov ebx, dword ptr [esp + 8]
// 009d0925  55                   push ebp
// 009d0926  56                   push esi
// 009d0927  57                   push edi
// 009d0928  33ff                 xor edi, edi
// 009d092a  8be9                 mov ebp, ecx
// 009d092c  33f6                 xor esi, esi
// 009d092e  8bff                 mov edi, edi
// 009d0930  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 009d0933  3bf2                 cmp esi, edx
// 009d0935  7c0d                 jl 0x9d0944
// 009d0937  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 009d093a  0f8da4000000         jge 0x9d09e4
// 009d0940  3bf2                 cmp esi, edx
// 009d0942  7d20                 jge 0x9d0964
// 009d0944  85f6                 test esi, esi
// 009d0946  7c0c                 jl 0x9d0954
// 009d0948  3bf2                 cmp esi, edx
// 009d094a  7d08                 jge 0x9d0954
// 009d094c  8b4528               mov eax, dword ptr [ebp + 0x28]
// 009d094f  8b04b0               mov eax, dword ptr [eax + esi*4]
// 009d0952  eb02                 jmp 0x9d0956
// 009d0954  33c0                 xor eax, eax
// 009d0956  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 009d095d  7405                 je 0x9d0964
// 009d095f  46                   inc esi
// 009d0960  3bf2                 cmp esi, edx
// 009d0962  7ce0                 jl 0x9d0944
// 009d0964  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 009d0967  3bf9                 cmp edi, ecx
// 009d0969  7d25                 jge 0x9d0990
// 009d096b  eb03                 jmp 0x9d0970
// 009d096d  8d4900               lea ecx, [ecx]
// 009d0970  85ff                 test edi, edi
// 009d0972  7c0c                 jl 0x9d0980
// 009d0974  3bf9                 cmp edi, ecx
// 009d0976  7d08                 jge 0x9d0980
// 009d0978  8b4328               mov eax, dword ptr [ebx + 0x28]
// 009d097b  8b04b8               mov eax, dword ptr [eax + edi*4]
// 009d097e  eb02                 jmp 0x9d0982
// 009d0980  33c0                 xor eax, eax
// 009d0982  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 009d0989  7405                 je 0x9d0990
// 009d098b  47                   inc edi
// 009d098c  3bf9                 cmp edi, ecx
// 009d098e  7ce0                 jl 0x9d0970
// 009d0990  3bf2                 cmp esi, edx
// 009d0992  7d45                 jge 0x9d09d9
// 009d0994  3bf9                 cmp edi, ecx
// 009d0996  7d3d                 jge 0x9d09d5
// 009d0998  85f6                 test esi, esi
// 009d099a  7c0c                 jl 0x9d09a8
// 009d099c  3bf2                 cmp esi, edx
// 009d099e  7d50                 jge 0x9d09f0
// 009d09a0  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 009d09a3  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 009d09a6  eb02                 jmp 0x9d09aa
// 009d09a8  33c9                 xor ecx, ecx
// 009d09aa  85ff                 test edi, edi
// 009d09ac  7c0d                 jl 0x9d09bb
// 009d09ae  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 009d09b1  7d3d                 jge 0x9d09f0
// 009d09b3  8b5328               mov edx, dword ptr [ebx + 0x28]
// 009d09b6  8b04ba               mov eax, dword ptr [edx + edi*4]
// 009d09b9  eb02                 jmp 0x9d09bd
// 009d09bb  33c0                 xor eax, eax
// 009d09bd  8b11                 mov edx, dword ptr [ecx]
// 009d09bf  50                   push eax
// 009d09c0  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 009d09c6  ffd0                 call eax
// 009d09c8  85c0                 test eax, eax
// 009d09ca  7511                 jne 0x9d09dd
// 009d09cc  5f                   pop edi
// 009d09cd  5e                   pop esi
// 009d09ce  5d                   pop ebp
// 009d09cf  33c0                 xor eax, eax
// 009d09d1  5b                   pop ebx
// 009d09d2  c20400               ret 4
// 009d09d5  3bf2                 cmp esi, edx
// 009d09d7  7cf3                 jl 0x9d09cc
// 009d09d9  3bf9                 cmp edi, ecx
// 009d09db  7cef                 jl 0x9d09cc
// 009d09dd  46                   inc esi
// 009d09de  47                   inc edi
// 009d09df  e94cffffff           jmp 0x9d0930
// 009d09e4  5f                   pop edi
// 009d09e5  5e                   pop esi
// 009d09e6  5d                   pop ebp
// 009d09e7  b801000000           mov eax, 1
// 009d09ec  5b                   pop ebx
// 009d09ed  c20400               ret 4
// 009d09f0  e8cb19fbff           call 0x9823c0
// copied from an identical function in another client (function ?Compare@CXTPControls@@QAEHPBV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp