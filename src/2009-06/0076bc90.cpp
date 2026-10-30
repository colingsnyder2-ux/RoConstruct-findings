// roc 2009-06 0076bc90  unit: CXTPControls  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076bc90
//
// 0076bc90  53                   push ebx
// 0076bc91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0076bc95  55                   push ebp
// 0076bc96  56                   push esi
// 0076bc97  57                   push edi
// 0076bc98  33ff                 xor edi, edi
// 0076bc9a  8be9                 mov ebp, ecx
// 0076bc9c  33f6                 xor esi, esi
// 0076bc9e  8bff                 mov edi, edi
// 0076bca0  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 0076bca3  3bf2                 cmp esi, edx
// 0076bca5  7c0d                 jl 0x76bcb4
// 0076bca7  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 0076bcaa  0f8da4000000         jge 0x76bd54
// 0076bcb0  3bf2                 cmp esi, edx
// 0076bcb2  7d20                 jge 0x76bcd4
// 0076bcb4  85f6                 test esi, esi
// 0076bcb6  7c0c                 jl 0x76bcc4
// 0076bcb8  3bf2                 cmp esi, edx
// 0076bcba  7d08                 jge 0x76bcc4
// 0076bcbc  8b4528               mov eax, dword ptr [ebp + 0x28]
// 0076bcbf  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0076bcc2  eb02                 jmp 0x76bcc6
// 0076bcc4  33c0                 xor eax, eax
// 0076bcc6  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 0076bccd  7405                 je 0x76bcd4
// 0076bccf  46                   inc esi
// 0076bcd0  3bf2                 cmp esi, edx
// 0076bcd2  7ce0                 jl 0x76bcb4
// 0076bcd4  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 0076bcd7  3bf9                 cmp edi, ecx
// 0076bcd9  7d25                 jge 0x76bd00
// 0076bcdb  eb03                 jmp 0x76bce0
// 0076bcdd  8d4900               lea ecx, [ecx]
// 0076bce0  85ff                 test edi, edi
// 0076bce2  7c0c                 jl 0x76bcf0
// 0076bce4  3bf9                 cmp edi, ecx
// 0076bce6  7d08                 jge 0x76bcf0
// 0076bce8  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0076bceb  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0076bcee  eb02                 jmp 0x76bcf2
// 0076bcf0  33c0                 xor eax, eax
// 0076bcf2  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 0076bcf9  7405                 je 0x76bd00
// 0076bcfb  47                   inc edi
// 0076bcfc  3bf9                 cmp edi, ecx
// 0076bcfe  7ce0                 jl 0x76bce0
// 0076bd00  3bf2                 cmp esi, edx
// 0076bd02  7d45                 jge 0x76bd49
// 0076bd04  3bf9                 cmp edi, ecx
// 0076bd06  7d3d                 jge 0x76bd45
// 0076bd08  85f6                 test esi, esi
// 0076bd0a  7c0c                 jl 0x76bd18
// 0076bd0c  3bf2                 cmp esi, edx
// 0076bd0e  7d50                 jge 0x76bd60
// 0076bd10  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 0076bd13  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0076bd16  eb02                 jmp 0x76bd1a
// 0076bd18  33c9                 xor ecx, ecx
// 0076bd1a  85ff                 test edi, edi
// 0076bd1c  7c0d                 jl 0x76bd2b
// 0076bd1e  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 0076bd21  7d3d                 jge 0x76bd60
// 0076bd23  8b5328               mov edx, dword ptr [ebx + 0x28]
// 0076bd26  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0076bd29  eb02                 jmp 0x76bd2d
// 0076bd2b  33c0                 xor eax, eax
// 0076bd2d  8b11                 mov edx, dword ptr [ecx]
// 0076bd2f  50                   push eax
// 0076bd30  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0076bd36  ffd0                 call eax
// 0076bd38  85c0                 test eax, eax
// 0076bd3a  7511                 jne 0x76bd4d
// 0076bd3c  5f                   pop edi
// 0076bd3d  5e                   pop esi
// 0076bd3e  5d                   pop ebp
// 0076bd3f  33c0                 xor eax, eax
// 0076bd41  5b                   pop ebx
// 0076bd42  c20400               ret 4
// 0076bd45  3bf2                 cmp esi, edx
// 0076bd47  7cf3                 jl 0x76bd3c
// 0076bd49  3bf9                 cmp edi, ecx
// 0076bd4b  7cef                 jl 0x76bd3c
// 0076bd4d  46                   inc esi
// 0076bd4e  47                   inc edi
// 0076bd4f  e94cffffff           jmp 0x76bca0
// 0076bd54  5f                   pop edi
// 0076bd55  5e                   pop esi
// 0076bd56  5d                   pop ebp
// 0076bd57  b801000000           mov eax, 1
// 0076bd5c  5b                   pop ebx
// 0076bd5d  c20400               ret 4
// 0076bd60  e87fcffaff           call 0x718ce4
// copied from an identical function in another client (function ?Compare@CXTPControls@@QAEHPBV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp