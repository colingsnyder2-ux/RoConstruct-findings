// roc 2007-08 00470910  unit: std::D::DU?$char_traits::V?$basic_string::?$Set  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00470910
//
// 00470910  8b442404             mov eax, dword ptr [esp + 4]
// 00470914  53                   push ebx
// 00470915  55                   push ebp
// 00470916  56                   push esi
// 00470917  8bf1                 mov esi, ecx
// 00470919  8b6e04               mov ebp, dword ptr [esi + 4]
// 0047091c  b901000000           mov ecx, 1
// 00470921  894604               mov dword ptr [esi + 4], eax
// 00470924  840d98d08b00         test byte ptr [0x8bd098], cl
// 0047092a  57                   push edi
// 0047092b  7513                 jne 0x470940
// 0047092d  090d98d08b00         or dword ptr [0x8bd098], ecx
// 00470933  bb0a000000           mov ebx, 0xa
// 00470938  891d94d08b00         mov dword ptr [0x8bd094], ebx
// 0047093e  eb06                 jmp 0x470946
// 00470940  8b1d94d08b00         mov ebx, dword ptr [0x8bd094]
// 00470946  8b4e08               mov ecx, dword ptr [esi + 8]
// 00470949  8b7e04               mov edi, dword ptr [esi + 4]
// 0047094c  3bf9                 cmp edi, ecx
// 0047094e  0f8e92000000         jle 0x4709e6
// 00470954  85c9                 test ecx, ecx
// 00470956  7512                 jne 0x47096a
// 00470958  55                   push ebp
// 00470959  8bce                 mov ecx, esi
// 0047095b  894608               mov dword ptr [esi + 8], eax
// 0047095e  e89d8d1200           call 0x599700
// 00470963  5f                   pop edi
// 00470964  5e                   pop esi
// 00470965  5d                   pop ebp
// 00470966  5b                   pop ebx
// 00470967  c20800               ret 8
// 0047096a  3bfb                 cmp edi, ebx
// 0047096c  7d12                 jge 0x470980
// 0047096e  55                   push ebp
// 0047096f  8bce                 mov ecx, esi
// 00470971  895e08               mov dword ptr [esi + 8], ebx
// 00470974  e8878d1200           call 0x599700
// 00470979  5f                   pop edi
// 0047097a  5e                   pop esi
// 0047097b  5d                   pop ebp
// 0047097c  5b                   pop ebx
// 0047097d  c20800               ret 8
// 00470980  d905387b7900         fld dword ptr [0x797b38]
// 00470986  8bc1                 mov eax, ecx
// 00470988  03c0                 add eax, eax
// 0047098a  d95c2418             fstp dword ptr [esp + 0x18]
// 0047098e  03c0                 add eax, eax
// 00470990  3d801a0600           cmp eax, 0x61a80
// 00470995  7608                 jbe 0x47099f
// 00470997  d905347b7900         fld dword ptr [0x797b34]
// 0047099d  eb0d                 jmp 0x4709ac
// 0047099f  3d00fa0000           cmp eax, 0xfa00
// 004709a4  760a                 jbe 0x4709b0
// 004709a6  d90588797900         fld dword ptr [0x797988]
// 004709ac  d95c2418             fstp dword ptr [esp + 0x18]
// 004709b0  8bd9                 mov ebx, ecx
// 004709b2  895c2414             mov dword ptr [esp + 0x14], ebx
// 004709b6  db442414             fild dword ptr [esp + 0x14]
// 004709ba  d84c2418             fmul dword ptr [esp + 0x18]
// 004709be  e89d031c00           call 0x630d60
// 004709c3  2bc3                 sub eax, ebx
// 004709c5  03c7                 add eax, edi
// 004709c7  894608               mov dword ptr [esi + 8], eax
// 004709ca  8b0d94d08b00         mov ecx, dword ptr [0x8bd094]
// 004709d0  3bc1                 cmp eax, ecx
// 004709d2  7d03                 jge 0x4709d7
// 004709d4  894e08               mov dword ptr [esi + 8], ecx
// 004709d7  55                   push ebp
// 004709d8  8bce                 mov ecx, esi
// 004709da  e8218d1200           call 0x599700
// 004709df  5f                   pop edi
// 004709e0  5e                   pop esi
// 004709e1  5d                   pop ebp
// 004709e2  5b                   pop ebx
// 004709e3  c20800               ret 8
// 004709e6  b856555555           mov eax, 0x55555556
// 004709eb  f7e9                 imul ecx
// 004709ed  8bc2                 mov eax, edx
// 004709ef  c1e81f               shr eax, 0x1f
// 004709f2  03c2                 add eax, edx
// 004709f4  3bf8                 cmp edi, eax
// 004709f6  7f19                 jg 0x470a11
// 004709f8  807c241800           cmp byte ptr [esp + 0x18], 0
// 004709fd  7412                 je 0x470a11
// 004709ff  3bfb                 cmp edi, ebx
// 00470a01  7e0e                 jle 0x470a11
// 00470a03  3bfd                 cmp edi, ebp
// 00470a05  7c02                 jl 0x470a09
// 00470a07  8bfd                 mov edi, ebp
// 00470a09  57                   push edi
// 00470a0a  8bce                 mov ecx, esi
// 00470a0c  e8ef8c1200           call 0x599700
// 00470a11  5f                   pop edi
// 00470a12  5e                   pop esi
// 00470a13  5d                   pop ebp
// 00470a14  5b                   pop ebx
// 00470a15  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?resize@?$Array@PBX@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
