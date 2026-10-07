// roc 2007-08 004758a0  unit: CInstanceRecord::CNameItem  size: 262 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004758a0
//
// 004758a0  8b442404             mov eax, dword ptr [esp + 4]
// 004758a4  53                   push ebx
// 004758a5  55                   push ebp
// 004758a6  56                   push esi
// 004758a7  8bf1                 mov esi, ecx
// 004758a9  8b6e04               mov ebp, dword ptr [esi + 4]
// 004758ac  b901000000           mov ecx, 1
// 004758b1  894604               mov dword ptr [esi + 4], eax
// 004758b4  840d44d18b00         test byte ptr [0x8bd144], cl
// 004758ba  57                   push edi
// 004758bb  7513                 jne 0x4758d0
// 004758bd  090d44d18b00         or dword ptr [0x8bd144], ecx
// 004758c3  bb10000000           mov ebx, 0x10
// 004758c8  891d40d18b00         mov dword ptr [0x8bd140], ebx
// 004758ce  eb06                 jmp 0x4758d6
// 004758d0  8b1d40d18b00         mov ebx, dword ptr [0x8bd140]
// 004758d6  8b4e08               mov ecx, dword ptr [esi + 8]
// 004758d9  8b7e04               mov edi, dword ptr [esi + 4]
// 004758dc  3bf9                 cmp edi, ecx
// 004758de  0f8e90000000         jle 0x475974
// 004758e4  85c9                 test ecx, ecx
// 004758e6  7512                 jne 0x4758fa
// 004758e8  55                   push ebp
// 004758e9  8bce                 mov ecx, esi
// 004758eb  894608               mov dword ptr [esi + 8], eax
// 004758ee  e8cdf6ffff           call 0x474fc0
// 004758f3  5f                   pop edi
// 004758f4  5e                   pop esi
// 004758f5  5d                   pop ebp
// 004758f6  5b                   pop ebx
// 004758f7  c20800               ret 8
// 004758fa  3bfb                 cmp edi, ebx
// 004758fc  7d12                 jge 0x475910
// 004758fe  55                   push ebp
// 004758ff  8bce                 mov ecx, esi
// 00475901  895e08               mov dword ptr [esi + 8], ebx
// 00475904  e8b7f6ffff           call 0x474fc0
// 00475909  5f                   pop edi
// 0047590a  5e                   pop esi
// 0047590b  5d                   pop ebp
// 0047590c  5b                   pop ebx
// 0047590d  c20800               ret 8
// 00475910  d905387b7900         fld dword ptr [0x797b38]
// 00475916  8bc1                 mov eax, ecx
// 00475918  03c0                 add eax, eax
// 0047591a  d95c2418             fstp dword ptr [esp + 0x18]
// 0047591e  3d801a0600           cmp eax, 0x61a80
// 00475923  7608                 jbe 0x47592d
// 00475925  d905347b7900         fld dword ptr [0x797b34]
// 0047592b  eb0d                 jmp 0x47593a
// 0047592d  3d00fa0000           cmp eax, 0xfa00
// 00475932  760a                 jbe 0x47593e
// 00475934  d90588797900         fld dword ptr [0x797988]
// 0047593a  d95c2418             fstp dword ptr [esp + 0x18]
// 0047593e  8bd9                 mov ebx, ecx
// 00475940  895c2414             mov dword ptr [esp + 0x14], ebx
// 00475944  db442414             fild dword ptr [esp + 0x14]
// 00475948  d84c2418             fmul dword ptr [esp + 0x18]
// 0047594c  e80fb41b00           call 0x630d60
// 00475951  2bc3                 sub eax, ebx
// 00475953  03c7                 add eax, edi
// 00475955  894608               mov dword ptr [esi + 8], eax
// 00475958  8b0d40d18b00         mov ecx, dword ptr [0x8bd140]
// 0047595e  3bc1                 cmp eax, ecx
// 00475960  7d03                 jge 0x475965
// 00475962  894e08               mov dword ptr [esi + 8], ecx
// 00475965  55                   push ebp
// 00475966  8bce                 mov ecx, esi
// 00475968  e853f6ffff           call 0x474fc0
// 0047596d  5f                   pop edi
// 0047596e  5e                   pop esi
// 0047596f  5d                   pop ebp
// 00475970  5b                   pop ebx
// 00475971  c20800               ret 8
// 00475974  b856555555           mov eax, 0x55555556
// 00475979  f7e9                 imul ecx
// 0047597b  8bc2                 mov eax, edx
// 0047597d  c1e81f               shr eax, 0x1f
// 00475980  03c2                 add eax, edx
// 00475982  3bf8                 cmp edi, eax
// 00475984  7f19                 jg 0x47599f
// 00475986  807c241800           cmp byte ptr [esp + 0x18], 0
// 0047598b  7412                 je 0x47599f
// 0047598d  3bfb                 cmp edi, ebx
// 0047598f  7e0e                 jle 0x47599f
// 00475991  3bfd                 cmp edi, ebp
// 00475993  7c02                 jl 0x475997
// 00475995  8bfd                 mov edi, ebp
// 00475997  57                   push edi
// 00475998  8bce                 mov ecx, esi
// 0047599a  e821f6ffff           call 0x474fc0
// 0047599f  5f                   pop edi
// 004759a0  5e                   pop esi
// 004759a1  5d                   pop ebp
// 004759a2  5b                   pop ebx
// 004759a3  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@G@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
