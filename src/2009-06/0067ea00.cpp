// roc 2009-06 0067ea00  unit: RBX::Mechanism  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067ea00
//
// 0067ea00  8b442404             mov eax, dword ptr [esp + 4]
// 0067ea04  53                   push ebx
// 0067ea05  55                   push ebp
// 0067ea06  56                   push esi
// 0067ea07  8bf1                 mov esi, ecx
// 0067ea09  8b6e04               mov ebp, dword ptr [esi + 4]
// 0067ea0c  b901000000           mov ecx, 1
// 0067ea11  894604               mov dword ptr [esi + 4], eax
// 0067ea14  57                   push edi
// 0067ea15  840da0e5a400         test byte ptr [0xa4e5a0], cl
// 0067ea1b  7513                 jne 0x67ea30
// 0067ea1d  090da0e5a400         or dword ptr [0xa4e5a0], ecx
// 0067ea23  bb0a000000           mov ebx, 0xa
// 0067ea28  891d9ce5a400         mov dword ptr [0xa4e59c], ebx
// 0067ea2e  eb06                 jmp 0x67ea36
// 0067ea30  8b1d9ce5a400         mov ebx, dword ptr [0xa4e59c]
// 0067ea36  8b4e08               mov ecx, dword ptr [esi + 8]
// 0067ea39  8b7e04               mov edi, dword ptr [esi + 4]
// 0067ea3c  3bf9                 cmp edi, ecx
// 0067ea3e  0f8e8a000000         jle 0x67eace
// 0067ea44  85c9                 test ecx, ecx
// 0067ea46  7512                 jne 0x67ea5a
// 0067ea48  55                   push ebp
// 0067ea49  8bce                 mov ecx, esi
// 0067ea4b  894608               mov dword ptr [esi + 8], eax
// 0067ea4e  e84d73ffff           call 0x675da0
// 0067ea53  5f                   pop edi
// 0067ea54  5e                   pop esi
// 0067ea55  5d                   pop ebp
// 0067ea56  5b                   pop ebx
// 0067ea57  c20800               ret 8
// 0067ea5a  3bfb                 cmp edi, ebx
// 0067ea5c  7d12                 jge 0x67ea70
// 0067ea5e  55                   push ebp
// 0067ea5f  8bce                 mov ecx, esi
// 0067ea61  895e08               mov dword ptr [esi + 8], ebx
// 0067ea64  e83773ffff           call 0x675da0
// 0067ea69  5f                   pop edi
// 0067ea6a  5e                   pop esi
// 0067ea6b  5d                   pop ebp
// 0067ea6c  5b                   pop ebx
// 0067ea6d  c20800               ret 8
// 0067ea70  d90548e88b00         fld dword ptr [0x8be848]
// 0067ea76  8bc1                 mov eax, ecx
// 0067ea78  03c0                 add eax, eax
// 0067ea7a  03c0                 add eax, eax
// 0067ea7c  3d801a0600           cmp eax, 0x61a80
// 0067ea81  760a                 jbe 0x67ea8d
// 0067ea83  ddd8                 fstp st(0)
// 0067ea85  d905a0ef8b00         fld dword ptr [0x8befa0]
// 0067ea8b  eb0f                 jmp 0x67ea9c
// 0067ea8d  3d00fa0000           cmp eax, 0xfa00
// 0067ea92  7608                 jbe 0x67ea9c
// 0067ea94  ddd8                 fstp st(0)
// 0067ea96  d90544d08b00         fld dword ptr [0x8bd044]
// 0067ea9c  8bd9                 mov ebx, ecx
// 0067ea9e  895c2418             mov dword ptr [esp + 0x18], ebx
// 0067eaa2  da4c2418             fimul dword ptr [esp + 0x18]
// 0067eaa6  e815b40900           call 0x719ec0
// 0067eaab  2bc3                 sub eax, ebx
// 0067eaad  03c7                 add eax, edi
// 0067eaaf  894608               mov dword ptr [esi + 8], eax
// 0067eab2  8b0d9ce5a400         mov ecx, dword ptr [0xa4e59c]
// 0067eab8  3bc1                 cmp eax, ecx
// 0067eaba  7d03                 jge 0x67eabf
// 0067eabc  894e08               mov dword ptr [esi + 8], ecx
// 0067eabf  55                   push ebp
// 0067eac0  8bce                 mov ecx, esi
// 0067eac2  e8d972ffff           call 0x675da0
// 0067eac7  5f                   pop edi
// 0067eac8  5e                   pop esi
// 0067eac9  5d                   pop ebp
// 0067eaca  5b                   pop ebx
// 0067eacb  c20800               ret 8
// 0067eace  b856555555           mov eax, 0x55555556
// 0067ead3  f7e9                 imul ecx
// 0067ead5  8bc2                 mov eax, edx
// 0067ead7  c1e81f               shr eax, 0x1f
// 0067eada  03c2                 add eax, edx
// 0067eadc  3bf8                 cmp edi, eax
// 0067eade  7f19                 jg 0x67eaf9
// 0067eae0  807c241800           cmp byte ptr [esp + 0x18], 0
// 0067eae5  7412                 je 0x67eaf9
// 0067eae7  3bfb                 cmp edi, ebx
// 0067eae9  7e0e                 jle 0x67eaf9
// 0067eaeb  3bfd                 cmp edi, ebp
// 0067eaed  7c02                 jl 0x67eaf1
// 0067eaef  8bfd                 mov edi, ebp
// 0067eaf1  57                   push edi
// 0067eaf2  8bce                 mov ecx, esi
// 0067eaf4  e8a772ffff           call 0x675da0
// 0067eaf9  5f                   pop edi
// 0067eafa  5e                   pop esi
// 0067eafb  5d                   pop ebp
// 0067eafc  5b                   pop ebx
// 0067eafd  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
