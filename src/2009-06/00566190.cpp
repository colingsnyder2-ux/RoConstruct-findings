// roc 2009-06 00566190  unit: RBX::RbxG3D::RenderScene  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00566190
//
// 00566190  8b442404             mov eax, dword ptr [esp + 4]
// 00566194  53                   push ebx
// 00566195  55                   push ebp
// 00566196  56                   push esi
// 00566197  8bf1                 mov esi, ecx
// 00566199  8b6e04               mov ebp, dword ptr [esi + 4]
// 0056619c  b901000000           mov ecx, 1
// 005661a1  894604               mov dword ptr [esi + 4], eax
// 005661a4  57                   push edi
// 005661a5  840dc81ca400         test byte ptr [0xa41cc8], cl
// 005661ab  7513                 jne 0x5661c0
// 005661ad  090dc81ca400         or dword ptr [0xa41cc8], ecx
// 005661b3  bb0a000000           mov ebx, 0xa
// 005661b8  891dc41ca400         mov dword ptr [0xa41cc4], ebx
// 005661be  eb06                 jmp 0x5661c6
// 005661c0  8b1dc41ca400         mov ebx, dword ptr [0xa41cc4]
// 005661c6  8b4e08               mov ecx, dword ptr [esi + 8]
// 005661c9  8b7e04               mov edi, dword ptr [esi + 4]
// 005661cc  3bf9                 cmp edi, ecx
// 005661ce  0f8e8a000000         jle 0x56625e
// 005661d4  85c9                 test ecx, ecx
// 005661d6  7512                 jne 0x5661ea
// 005661d8  55                   push ebp
// 005661d9  8bce                 mov ecx, esi
// 005661db  894608               mov dword ptr [esi + 8], eax
// 005661de  e8bdfb1000           call 0x675da0
// 005661e3  5f                   pop edi
// 005661e4  5e                   pop esi
// 005661e5  5d                   pop ebp
// 005661e6  5b                   pop ebx
// 005661e7  c20800               ret 8
// 005661ea  3bfb                 cmp edi, ebx
// 005661ec  7d12                 jge 0x566200
// 005661ee  55                   push ebp
// 005661ef  8bce                 mov ecx, esi
// 005661f1  895e08               mov dword ptr [esi + 8], ebx
// 005661f4  e8a7fb1000           call 0x675da0
// 005661f9  5f                   pop edi
// 005661fa  5e                   pop esi
// 005661fb  5d                   pop ebp
// 005661fc  5b                   pop ebx
// 005661fd  c20800               ret 8
// 00566200  d90548e88b00         fld dword ptr [0x8be848]
// 00566206  8bc1                 mov eax, ecx
// 00566208  03c0                 add eax, eax
// 0056620a  03c0                 add eax, eax
// 0056620c  3d801a0600           cmp eax, 0x61a80
// 00566211  760a                 jbe 0x56621d
// 00566213  ddd8                 fstp st(0)
// 00566215  d905a0ef8b00         fld dword ptr [0x8befa0]
// 0056621b  eb0f                 jmp 0x56622c
// 0056621d  3d00fa0000           cmp eax, 0xfa00
// 00566222  7608                 jbe 0x56622c
// 00566224  ddd8                 fstp st(0)
// 00566226  d90544d08b00         fld dword ptr [0x8bd044]
// 0056622c  8bd9                 mov ebx, ecx
// 0056622e  895c2418             mov dword ptr [esp + 0x18], ebx
// 00566232  da4c2418             fimul dword ptr [esp + 0x18]
// 00566236  e8853c1b00           call 0x719ec0
// 0056623b  2bc3                 sub eax, ebx
// 0056623d  03c7                 add eax, edi
// 0056623f  894608               mov dword ptr [esi + 8], eax
// 00566242  8b0dc41ca400         mov ecx, dword ptr [0xa41cc4]
// 00566248  3bc1                 cmp eax, ecx
// 0056624a  7d03                 jge 0x56624f
// 0056624c  894e08               mov dword ptr [esi + 8], ecx
// 0056624f  55                   push ebp
// 00566250  8bce                 mov ecx, esi
// 00566252  e849fb1000           call 0x675da0
// 00566257  5f                   pop edi
// 00566258  5e                   pop esi
// 00566259  5d                   pop ebp
// 0056625a  5b                   pop ebx
// 0056625b  c20800               ret 8
// 0056625e  b856555555           mov eax, 0x55555556
// 00566263  f7e9                 imul ecx
// 00566265  8bc2                 mov eax, edx
// 00566267  c1e81f               shr eax, 0x1f
// 0056626a  03c2                 add eax, edx
// 0056626c  3bf8                 cmp edi, eax
// 0056626e  7f19                 jg 0x566289
// 00566270  807c241800           cmp byte ptr [esp + 0x18], 0
// 00566275  7412                 je 0x566289
// 00566277  3bfb                 cmp edi, ebx
// 00566279  7e0e                 jle 0x566289
// 0056627b  3bfd                 cmp edi, ebp
// 0056627d  7c02                 jl 0x566281
// 0056627f  8bfd                 mov edi, ebp
// 00566281  57                   push edi
// 00566282  8bce                 mov ecx, esi
// 00566284  e817fb1000           call 0x675da0
// 00566289  5f                   pop edi
// 0056628a  5e                   pop esi
// 0056628b  5d                   pop ebp
// 0056628c  5b                   pop ebx
// 0056628d  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
