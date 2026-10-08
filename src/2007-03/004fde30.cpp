// roc 2007-03 004fde30  unit: seg_004f0000  size: 260 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fde30
//
// 004fde30  8b442404             mov eax, dword ptr [esp + 4]
// 004fde34  53                   push ebx
// 004fde35  55                   push ebp
// 004fde36  56                   push esi
// 004fde37  8bf1                 mov esi, ecx
// 004fde39  8b6e04               mov ebp, dword ptr [esi + 4]
// 004fde3c  b901000000           mov ecx, 1
// 004fde41  894604               mov dword ptr [esi + 4], eax
// 004fde44  840d84ae8b00         test byte ptr [0x8bae84], cl
// 004fde4a  57                   push edi
// 004fde4b  7513                 jne 0x4fde60
// 004fde4d  090d84ae8b00         or dword ptr [0x8bae84], ecx
// 004fde53  bb20000000           mov ebx, 0x20
// 004fde58  891d80ae8b00         mov dword ptr [0x8bae80], ebx
// 004fde5e  eb06                 jmp 0x4fde66
// 004fde60  8b1d80ae8b00         mov ebx, dword ptr [0x8bae80]
// 004fde66  8b4e08               mov ecx, dword ptr [esi + 8]
// 004fde69  8b7e04               mov edi, dword ptr [esi + 4]
// 004fde6c  3bf9                 cmp edi, ecx
// 004fde6e  0f8e8e000000         jle 0x4fdf02
// 004fde74  85c9                 test ecx, ecx
// 004fde76  7512                 jne 0x4fde8a
// 004fde78  55                   push ebp
// 004fde79  8bce                 mov ecx, esi
// 004fde7b  894608               mov dword ptr [esi + 8], eax
// 004fde7e  e87d25f7ff           call 0x470400
// 004fde83  5f                   pop edi
// 004fde84  5e                   pop esi
// 004fde85  5d                   pop ebp
// 004fde86  5b                   pop ebx
// 004fde87  c20800               ret 8
// 004fde8a  3bfb                 cmp edi, ebx
// 004fde8c  7d12                 jge 0x4fdea0
// 004fde8e  55                   push ebp
// 004fde8f  8bce                 mov ecx, esi
// 004fde91  895e08               mov dword ptr [esi + 8], ebx
// 004fde94  e86725f7ff           call 0x470400
// 004fde99  5f                   pop edi
// 004fde9a  5e                   pop esi
// 004fde9b  5d                   pop ebp
// 004fde9c  5b                   pop ebx
// 004fde9d  c20800               ret 8
// 004fdea0  d905104c7900         fld dword ptr [0x794c10]
// 004fdea6  8bc1                 mov eax, ecx
// 004fdea8  3d801a0600           cmp eax, 0x61a80
// 004fdead  d95c2418             fstp dword ptr [esp + 0x18]
// 004fdeb1  7608                 jbe 0x4fdebb
// 004fdeb3  d9050c4c7900         fld dword ptr [0x794c0c]
// 004fdeb9  eb0d                 jmp 0x4fdec8
// 004fdebb  3d00fa0000           cmp eax, 0xfa00
// 004fdec0  760a                 jbe 0x4fdecc
// 004fdec2  d905084c7900         fld dword ptr [0x794c08]
// 004fdec8  d95c2418             fstp dword ptr [esp + 0x18]
// 004fdecc  8bd8                 mov ebx, eax
// 004fdece  895c2414             mov dword ptr [esp + 0x14], ebx
// 004fded2  db442414             fild dword ptr [esp + 0x14]
// 004fded6  d84c2418             fmul dword ptr [esp + 0x18]
// 004fdeda  e821131200           call 0x61f200
// 004fdedf  2bc3                 sub eax, ebx
// 004fdee1  03c7                 add eax, edi
// 004fdee3  894608               mov dword ptr [esi + 8], eax
// 004fdee6  8b0d80ae8b00         mov ecx, dword ptr [0x8bae80]
// 004fdeec  3bc1                 cmp eax, ecx
// 004fdeee  7d03                 jge 0x4fdef3
// 004fdef0  894e08               mov dword ptr [esi + 8], ecx
// 004fdef3  55                   push ebp
// 004fdef4  8bce                 mov ecx, esi
// 004fdef6  e80525f7ff           call 0x470400
// 004fdefb  5f                   pop edi
// 004fdefc  5e                   pop esi
// 004fdefd  5d                   pop ebp
// 004fdefe  5b                   pop ebx
// 004fdeff  c20800               ret 8
// 004fdf02  b856555555           mov eax, 0x55555556
// 004fdf07  f7e9                 imul ecx
// 004fdf09  8bc2                 mov eax, edx
// 004fdf0b  c1e81f               shr eax, 0x1f
// 004fdf0e  03c2                 add eax, edx
// 004fdf10  3bf8                 cmp edi, eax
// 004fdf12  7f19                 jg 0x4fdf2d
// 004fdf14  807c241800           cmp byte ptr [esp + 0x18], 0
// 004fdf19  7412                 je 0x4fdf2d
// 004fdf1b  3bfb                 cmp edi, ebx
// 004fdf1d  7e0e                 jle 0x4fdf2d
// 004fdf1f  3bfd                 cmp edi, ebp
// 004fdf21  7c02                 jl 0x4fdf25
// 004fdf23  8bfd                 mov edi, ebp
// 004fdf25  57                   push edi
// 004fdf26  8bce                 mov ecx, esi
// 004fdf28  e8d324f7ff           call 0x470400
// 004fdf2d  5f                   pop edi
// 004fdf2e  5e                   pop esi
// 004fdf2f  5d                   pop ebp
// 004fdf30  5b                   pop ebx
// 004fdf31  c20800               ret 8
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@_N@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
