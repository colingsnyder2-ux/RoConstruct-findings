// roc 2007-03 0047b490  unit: seg_00470000  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047b490
//
// 0047b490  8b442404             mov eax, dword ptr [esp + 4]
// 0047b494  53                   push ebx
// 0047b495  55                   push ebp
// 0047b496  56                   push esi
// 0047b497  8bf1                 mov esi, ecx
// 0047b499  8b6e04               mov ebp, dword ptr [esi + 4]
// 0047b49c  b901000000           mov ecx, 1
// 0047b4a1  894604               mov dword ptr [esi + 4], eax
// 0047b4a4  840d5c7f8b00         test byte ptr [0x8b7f5c], cl
// 0047b4aa  57                   push edi
// 0047b4ab  7513                 jne 0x47b4c0
// 0047b4ad  090d5c7f8b00         or dword ptr [0x8b7f5c], ecx
// 0047b4b3  bb0a000000           mov ebx, 0xa
// 0047b4b8  891d587f8b00         mov dword ptr [0x8b7f58], ebx
// 0047b4be  eb06                 jmp 0x47b4c6
// 0047b4c0  8b1d587f8b00         mov ebx, dword ptr [0x8b7f58]
// 0047b4c6  8b4e08               mov ecx, dword ptr [esi + 8]
// 0047b4c9  8b7e04               mov edi, dword ptr [esi + 4]
// 0047b4cc  3bf9                 cmp edi, ecx
// 0047b4ce  0f8e95000000         jle 0x47b569
// 0047b4d4  85c9                 test ecx, ecx
// 0047b4d6  7512                 jne 0x47b4ea
// 0047b4d8  55                   push ebp
// 0047b4d9  8bce                 mov ecx, esi
// 0047b4db  894608               mov dword ptr [esi + 8], eax
// 0047b4de  e89df5ffff           call 0x47aa80
// 0047b4e3  5f                   pop edi
// 0047b4e4  5e                   pop esi
// 0047b4e5  5d                   pop ebp
// 0047b4e6  5b                   pop ebx
// 0047b4e7  c20800               ret 8
// 0047b4ea  3bfb                 cmp edi, ebx
// 0047b4ec  7d12                 jge 0x47b500
// 0047b4ee  55                   push ebp
// 0047b4ef  8bce                 mov ecx, esi
// 0047b4f1  895e08               mov dword ptr [esi + 8], ebx
// 0047b4f4  e887f5ffff           call 0x47aa80
// 0047b4f9  5f                   pop edi
// 0047b4fa  5e                   pop esi
// 0047b4fb  5d                   pop ebp
// 0047b4fc  5b                   pop ebx
// 0047b4fd  c20800               ret 8
// 0047b500  d905104c7900         fld dword ptr [0x794c10]
// 0047b506  8bc1                 mov eax, ecx
// 0047b508  8d0480               lea eax, [eax + eax*4]
// 0047b50b  d95c2418             fstp dword ptr [esp + 0x18]
// 0047b50f  03c0                 add eax, eax
// 0047b511  03c0                 add eax, eax
// 0047b513  3d801a0600           cmp eax, 0x61a80
// 0047b518  7608                 jbe 0x47b522
// 0047b51a  d9050c4c7900         fld dword ptr [0x794c0c]
// 0047b520  eb0d                 jmp 0x47b52f
// 0047b522  3d00fa0000           cmp eax, 0xfa00
// 0047b527  760a                 jbe 0x47b533
// 0047b529  d905084c7900         fld dword ptr [0x794c08]
// 0047b52f  d95c2418             fstp dword ptr [esp + 0x18]
// 0047b533  8bd9                 mov ebx, ecx
// 0047b535  895c2414             mov dword ptr [esp + 0x14], ebx
// 0047b539  db442414             fild dword ptr [esp + 0x14]
// 0047b53d  d84c2418             fmul dword ptr [esp + 0x18]
// 0047b541  e8ba3c1a00           call 0x61f200
// 0047b546  2bc3                 sub eax, ebx
// 0047b548  03c7                 add eax, edi
// 0047b54a  894608               mov dword ptr [esi + 8], eax
// 0047b54d  8b0d587f8b00         mov ecx, dword ptr [0x8b7f58]
// 0047b553  3bc1                 cmp eax, ecx
// 0047b555  7d03                 jge 0x47b55a
// 0047b557  894e08               mov dword ptr [esi + 8], ecx
// 0047b55a  55                   push ebp
// 0047b55b  8bce                 mov ecx, esi
// 0047b55d  e81ef5ffff           call 0x47aa80
// 0047b562  5f                   pop edi
// 0047b563  5e                   pop esi
// 0047b564  5d                   pop ebp
// 0047b565  5b                   pop ebx
// 0047b566  c20800               ret 8
// 0047b569  b856555555           mov eax, 0x55555556
// 0047b56e  f7e9                 imul ecx
// 0047b570  8bc2                 mov eax, edx
// 0047b572  c1e81f               shr eax, 0x1f
// 0047b575  03c2                 add eax, edx
// 0047b577  3bf8                 cmp edi, eax
// 0047b579  7f19                 jg 0x47b594
// 0047b57b  807c241800           cmp byte ptr [esp + 0x18], 0
// 0047b580  7412                 je 0x47b594
// 0047b582  3bfb                 cmp edi, ebx
// 0047b584  7e0e                 jle 0x47b594
// 0047b586  3bfd                 cmp edi, ebp
// 0047b588  7c02                 jl 0x47b58c
// 0047b58a  8bfd                 mov edi, ebp
// 0047b58c  57                   push edi
// 0047b58d  8bce                 mov ecx, esi
// 0047b58f  e8ecf4ffff           call 0x47aa80
// 0047b594  5f                   pop edi
// 0047b595  5e                   pop esi
// 0047b596  5d                   pop ebp
// 0047b597  5b                   pop ebx
// 0047b598  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?resize@?$Array@TSDL_Event@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
