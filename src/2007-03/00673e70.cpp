// roc 2007-03 00673e70  unit: seg_00670000  size: 219 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00673e70
//
// 00673e70  53                   push ebx
// 00673e71  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00673e75  55                   push ebp
// 00673e76  56                   push esi
// 00673e77  57                   push edi
// 00673e78  33ff                 xor edi, edi
// 00673e7a  8be9                 mov ebp, ecx
// 00673e7c  33f6                 xor esi, esi
// 00673e7e  8bff                 mov edi, edi
// 00673e80  8b552c               mov edx, dword ptr [ebp + 0x2c]
// 00673e83  3bf2                 cmp esi, edx
// 00673e85  7c0d                 jl 0x673e94
// 00673e87  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 00673e8a  0f8daa000000         jge 0x673f3a
// 00673e90  3bf2                 cmp esi, edx
// 00673e92  7d22                 jge 0x673eb6
// 00673e94  85f6                 test esi, esi
// 00673e96  7c0c                 jl 0x673ea4
// 00673e98  3bf2                 cmp esi, edx
// 00673e9a  7d08                 jge 0x673ea4
// 00673e9c  8b4528               mov eax, dword ptr [ebp + 0x28]
// 00673e9f  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00673ea2  eb02                 jmp 0x673ea6
// 00673ea4  33c0                 xor eax, eax
// 00673ea6  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 00673ead  7407                 je 0x673eb6
// 00673eaf  83c601               add esi, 1
// 00673eb2  3bf2                 cmp esi, edx
// 00673eb4  7cde                 jl 0x673e94
// 00673eb6  8b4b2c               mov ecx, dword ptr [ebx + 0x2c]
// 00673eb9  3bf9                 cmp edi, ecx
// 00673ebb  7d25                 jge 0x673ee2
// 00673ebd  8d4900               lea ecx, [ecx]
// 00673ec0  85ff                 test edi, edi
// 00673ec2  7c0c                 jl 0x673ed0
// 00673ec4  3bf9                 cmp edi, ecx
// 00673ec6  7d08                 jge 0x673ed0
// 00673ec8  8b4328               mov eax, dword ptr [ebx + 0x28]
// 00673ecb  8b04b8               mov eax, dword ptr [eax + edi*4]
// 00673ece  eb02                 jmp 0x673ed2
// 00673ed0  33c0                 xor eax, eax
// 00673ed2  83b8ac00000000       cmp dword ptr [eax + 0xac], 0
// 00673ed9  7407                 je 0x673ee2
// 00673edb  83c701               add edi, 1
// 00673ede  3bf9                 cmp edi, ecx
// 00673ee0  7cde                 jl 0x673ec0
// 00673ee2  3bf2                 cmp esi, edx
// 00673ee4  7d45                 jge 0x673f2b
// 00673ee6  3bf9                 cmp edi, ecx
// 00673ee8  7d3d                 jge 0x673f27
// 00673eea  85f6                 test esi, esi
// 00673eec  7c0c                 jl 0x673efa
// 00673eee  3bf2                 cmp esi, edx
// 00673ef0  7d54                 jge 0x673f46
// 00673ef2  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 00673ef5  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00673ef8  eb02                 jmp 0x673efc
// 00673efa  33c9                 xor ecx, ecx
// 00673efc  85ff                 test edi, edi
// 00673efe  7c0d                 jl 0x673f0d
// 00673f00  3b7b2c               cmp edi, dword ptr [ebx + 0x2c]
// 00673f03  7d41                 jge 0x673f46
// 00673f05  8b5328               mov edx, dword ptr [ebx + 0x28]
// 00673f08  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00673f0b  eb02                 jmp 0x673f0f
// 00673f0d  33c0                 xor eax, eax
// 00673f0f  8b11                 mov edx, dword ptr [ecx]
// 00673f11  50                   push eax
// 00673f12  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 00673f18  ffd0                 call eax
// 00673f1a  85c0                 test eax, eax
// 00673f1c  7511                 jne 0x673f2f
// 00673f1e  5f                   pop edi
// 00673f1f  5e                   pop esi
// 00673f20  5d                   pop ebp
// 00673f21  33c0                 xor eax, eax
// 00673f23  5b                   pop ebx
// 00673f24  c20400               ret 4
// 00673f27  3bf2                 cmp esi, edx
// 00673f29  7cf3                 jl 0x673f1e
// 00673f2b  3bf9                 cmp edi, ecx
// 00673f2d  7cef                 jl 0x673f1e
// 00673f2f  83c601               add esi, 1
// 00673f32  83c701               add edi, 1
// 00673f35  e946ffffff           jmp 0x673e80
// 00673f3a  5f                   pop edi
// 00673f3b  5e                   pop esi
// 00673f3c  5d                   pop ebp
// 00673f3d  b801000000           mov eax, 1
// 00673f42  5b                   pop ebx
// 00673f43  c20400               ret 4
// 00673f46  e863a4faff           call 0x61e3ae
// copied from an identical function in another client (function ?Compare@CXTPControls@@QAEHPBV1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPControls.cpp