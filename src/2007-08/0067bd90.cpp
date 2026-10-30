// roc 2007-08 0067bd90  unit: CXTPControls  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067bd90
//
// 0067bd90  53                   push ebx
// 0067bd91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0067bd95  55                   push ebp
// 0067bd96  56                   push esi
// 0067bd97  57                   push edi
// 0067bd98  33ff                 xor edi, edi
// 0067bd9a  8be9                 mov ebp, ecx
// 0067bd9c  33f6                 xor esi, esi
// 0067bd9e  8bff                 mov edi, edi
// 0067bda0  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 0067bda3  3bf2                 cmp esi, edx
// 0067bda5  7c0d                 jl 0x67bdb4
// 0067bda7  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 0067bdaa  0f8daa000000         jge 0x67be5a
// 0067bdb0  3bf2                 cmp esi, edx
// 0067bdb2  7d22                 jge 0x67bdd6
// 0067bdb4  85f6                 test esi, esi
// 0067bdb6  7c0c                 jl 0x67bdc4
// 0067bdb8  3bf2                 cmp esi, edx
// 0067bdba  7d08                 jge 0x67bdc4
// 0067bdbc  8b4528               mov eax, dword ptr [ebp + 0x28]
// 0067bdbf  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0067bdc2  eb02                 jmp 0x67bdc6
// 0067bdc4  33c0                 xor eax, eax
// 0067bdc6  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 0067bdcd  7407                 je 0x67bdd6
// 0067bdcf  83c601               add esi, 1
// 0067bdd2  3bf2                 cmp esi, edx
// 0067bdd4  7cde                 jl 0x67bdb4
// 0067bdd6  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 0067bdd9  3bf9                 cmp edi, ecx
// 0067bddb  7d25                 jge 0x67be02
// 0067bddd  8d4900               lea ecx, [ecx]
// 0067bde0  85ff                 test edi, edi
// 0067bde2  7c0c                 jl 0x67bdf0
// 0067bde4  3bf9                 cmp edi, ecx
// 0067bde6  7d08                 jge 0x67bdf0
// 0067bde8  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0067bdeb  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0067bdee  eb02                 jmp 0x67bdf2
// 0067bdf0  33c0                 xor eax, eax
// 0067bdf2  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 0067bdf9  7407                 je 0x67be02
// 0067bdfb  83c701               add edi, 1
// 0067bdfe  3bf9                 cmp edi, ecx
// 0067be00  7cde                 jl 0x67bde0
// 0067be02  3bf2                 cmp esi, edx
// 0067be04  7d45                 jge 0x67be4b
// 0067be06  3bf9                 cmp edi, ecx
// 0067be08  7d3d                 jge 0x67be47
// 0067be0a  85f6                 test esi, esi
// 0067be0c  7c0c                 jl 0x67be1a
// 0067be0e  3bf2                 cmp esi, edx
// 0067be10  7d54                 jge 0x67be66
// 0067be12  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 0067be15  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0067be18  eb02                 jmp 0x67be1c
// 0067be1a  33c9                 xor ecx, ecx
// 0067be1c  85ff                 test edi, edi
// 0067be1e  7c0d                 jl 0x67be2d
// 0067be20  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 0067be23  7d41                 jge 0x67be66
// 0067be25  8b5328               mov edx, dword ptr [ebx + 0x28]
// 0067be28  8b04ba               mov eax, dword ptr [edx + edi*4]
// 0067be2b  eb02                 jmp 0x67be2f
// 0067be2d  33c0                 xor eax, eax
// 0067be2f  8b11                 mov edx, dword ptr [ecx]
// 0067be31  50                   push eax
// 0067be32  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0067be38  ffd0                 call eax
// 0067be3a  85c0                 test eax, eax
// 0067be3c  7511                 jne 0x67be4f
// 0067be3e  5f                   pop edi
// 0067be3f  5e                   pop esi
// 0067be40  5d                   pop ebp
// 0067be41  33c0                 xor eax, eax
// 0067be43  5b                   pop ebx
// 0067be44  c20400               ret 4
// 0067be47  3bf2                 cmp esi, edx
// 0067be49  7cf3                 jl 0x67be3e
// 0067be4b  3bf9                 cmp edi, ecx
// 0067be4d  7cef                 jl 0x67be3e
// 0067be4f  83c601               add esi, 1
// 0067be52  83c701               add edi, 1
// 0067be55  e946ffffff           jmp 0x67bda0
// 0067be5a  5f                   pop edi
// 0067be5b  5e                   pop esi
// 0067be5c  5d                   pop ebp
// 0067be5d  b801000000           mov eax, 1
// 0067be62  5b                   pop ebx
// 0067be63  c20400               ret 4
// 0067be66  e8b540fbff           call 0x62ff20
// copied from an identical function in another client (function ?Compare@CXTPControls@@QAEHPBV1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPControls.cpp