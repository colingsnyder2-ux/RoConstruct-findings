// roc 2007-08 0047fa40  unit: G3D::Win32Window  size: 476 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047fa40
//
// 0047fa40  6aff                 push -1
// 0047fa42  68f15c7400           push 0x745cf1
// 0047fa47  64a100000000         mov eax, dword ptr fs:[0]
// 0047fa4d  50                   push eax
// 0047fa4e  83ec0c               sub esp, 0xc
// 0047fa51  53                   push ebx
// 0047fa52  55                   push ebp
// 0047fa53  56                   push esi
// 0047fa54  57                   push edi
// 0047fa55  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047fa5a  33c4                 xor eax, esp
// 0047fa5c  50                   push eax
// 0047fa5d  8d442420             lea eax, [esp + 0x20]
// 0047fa61  64a300000000         mov dword ptr fs:[0], eax
// 0047fa67  8bf9                 mov edi, ecx
// 0047fa69  897c2418             mov dword ptr [esp + 0x18], edi
// 0047fa6d  8b7704               mov esi, dword ptr [edi + 4]
// 0047fa70  8b442430             mov eax, dword ptr [esp + 0x30]
// 0047fa74  3bc6                 cmp eax, esi
// 0047fa76  89742414             mov dword ptr [esp + 0x14], esi
// 0047fa7a  894704               mov dword ptr [edi + 4], eax
// 0047fa7d  7d5b                 jge 0x47fada
// 0047fa7f  8d2cc500000000       lea ebp, [eax*8]
// 0047fa86  2be8                 sub ebp, eax
// 0047fa88  03ed                 add ebp, ebp
// 0047fa8a  03ed                 add ebp, ebp
// 0047fa8c  8bde                 mov ebx, esi
// 0047fa8e  03ed                 add ebp, ebp
// 0047fa90  2bd8                 sub ebx, eax
// 0047fa92  8b37                 mov esi, dword ptr [edi]
// 0047fa94  03f5                 add esi, ebp
// 0047fa96  8974241c             mov dword ptr [esp + 0x1c], esi
// 0047fa9a  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0047fa9d  50                   push eax
// 0047fa9e  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0047faa6  e865fd0700           call 0x4ff810
// 0047faab  33c0                 xor eax, eax
// 0047faad  83c404               add esp, 4
// 0047fab0  8d4e04               lea ecx, [esi + 4]
// 0047fab3  89462c               mov dword ptr [esi + 0x2c], eax
// 0047fab6  894630               mov dword ptr [esi + 0x30], eax
// 0047fab9  894634               mov dword ptr [esi + 0x34], eax
// 0047fabc  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0047fac4  ff15ace67700         call dword ptr [0x77e6ac]
// 0047faca  83c538               add ebp, 0x38
// 0047facd  83eb01               sub ebx, 1
// 0047fad0  75c0                 jne 0x47fa92
// 0047fad2  8b742414             mov esi, dword ptr [esp + 0x14]
// 0047fad6  8b442430             mov eax, dword ptr [esp + 0x30]
// 0047fada  f605c8d88b0001       test byte ptr [0x8bd8c8], 1
// 0047fae1  7514                 jne 0x47faf7
// 0047fae3  830dc8d88b0001       or dword ptr [0x8bd8c8], 1
// 0047faea  bb0a000000           mov ebx, 0xa
// 0047faef  891dc4d88b00         mov dword ptr [0x8bd8c4], ebx
// 0047faf5  eb06                 jmp 0x47fafd
// 0047faf7  8b1dc4d88b00         mov ebx, dword ptr [0x8bd8c4]
// 0047fafd  8b6f04               mov ebp, dword ptr [edi + 4]
// 0047fb00  8b4f08               mov ecx, dword ptr [edi + 8]
// 0047fb03  3be9                 cmp ebp, ecx
// 0047fb05  7e7e                 jle 0x47fb85
// 0047fb07  85c9                 test ecx, ecx
// 0047fb09  7508                 jne 0x47fb13
// 0047fb0b  894708               mov dword ptr [edi + 8], eax
// 0047fb0e  e995000000           jmp 0x47fba8
// 0047fb13  3beb                 cmp ebp, ebx
// 0047fb15  7d08                 jge 0x47fb1f
// 0047fb17  895f08               mov dword ptr [edi + 8], ebx
// 0047fb1a  e989000000           jmp 0x47fba8
// 0047fb1f  d905387b7900         fld dword ptr [0x797b38]
// 0047fb25  8d04cd00000000       lea eax, [ecx*8]
// 0047fb2c  2bc1                 sub eax, ecx
// 0047fb2e  d95c2434             fstp dword ptr [esp + 0x34]
// 0047fb32  03c0                 add eax, eax
// 0047fb34  03c0                 add eax, eax
// 0047fb36  03c0                 add eax, eax
// 0047fb38  3d801a0600           cmp eax, 0x61a80
// 0047fb3d  7608                 jbe 0x47fb47
// 0047fb3f  d905347b7900         fld dword ptr [0x797b34]
// 0047fb45  eb0d                 jmp 0x47fb54
// 0047fb47  3d00fa0000           cmp eax, 0xfa00
// 0047fb4c  760a                 jbe 0x47fb58
// 0047fb4e  d90588797900         fld dword ptr [0x797988]
// 0047fb54  d95c2434             fstp dword ptr [esp + 0x34]
// 0047fb58  8bf1                 mov esi, ecx
// 0047fb5a  89742430             mov dword ptr [esp + 0x30], esi
// 0047fb5e  db442430             fild dword ptr [esp + 0x30]
// 0047fb62  d84c2434             fmul dword ptr [esp + 0x34]
// 0047fb66  e8f5111b00           call 0x630d60
// 0047fb6b  2bc6                 sub eax, esi
// 0047fb6d  8b742414             mov esi, dword ptr [esp + 0x14]
// 0047fb71  03c5                 add eax, ebp
// 0047fb73  894708               mov dword ptr [edi + 8], eax
// 0047fb76  8b0dc4d88b00         mov ecx, dword ptr [0x8bd8c4]
// 0047fb7c  3bc1                 cmp eax, ecx
// 0047fb7e  7d28                 jge 0x47fba8
// 0047fb80  894f08               mov dword ptr [edi + 8], ecx
// 0047fb83  eb23                 jmp 0x47fba8
// 0047fb85  b856555555           mov eax, 0x55555556
// 0047fb8a  f7e9                 imul ecx
// 0047fb8c  8bca                 mov ecx, edx
// 0047fb8e  c1e91f               shr ecx, 0x1f
// 0047fb91  03ca                 add ecx, edx
// 0047fb93  3be9                 cmp ebp, ecx
// 0047fb95  7f1d                 jg 0x47fbb4
// 0047fb97  807c243400           cmp byte ptr [esp + 0x34], 0
// 0047fb9c  7416                 je 0x47fbb4
// 0047fb9e  3beb                 cmp ebp, ebx
// 0047fba0  7e12                 jle 0x47fbb4
// 0047fba2  3bee                 cmp ebp, esi
// 0047fba4  7d02                 jge 0x47fba8
// 0047fba6  8bf5                 mov esi, ebp
// 0047fba8  56                   push esi
// 0047fba9  8bcf                 mov ecx, edi
// 0047fbab  e860f4ffff           call 0x47f010
// 0047fbb0  8b742414             mov esi, dword ptr [esp + 0x14]
// 0047fbb4  3b7704               cmp esi, dword ptr [edi + 4]
// 0047fbb7  89742434             mov dword ptr [esp + 0x34], esi
// 0047fbbb  7d49                 jge 0x47fc06
// 0047fbbd  8d4900               lea ecx, [ecx]
// 0047fbc0  8b07                 mov eax, dword ptr [edi]
// 0047fbc2  8d14f500000000       lea edx, [esi*8]
// 0047fbc9  2bd6                 sub edx, esi
// 0047fbcb  8d2cd0               lea ebp, [eax + edx*8]
// 0047fbce  896c2430             mov dword ptr [esp + 0x30], ebp
// 0047fbd2  33db                 xor ebx, ebx
// 0047fbd4  3beb                 cmp ebp, ebx
// 0047fbd6  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0047fbde  7412                 je 0x47fbf2
// 0047fbe0  8d4d04               lea ecx, [ebp + 4]
// 0047fbe3  ff15a4e67700         call dword ptr [0x77e6a4]
// 0047fbe9  895d30               mov dword ptr [ebp + 0x30], ebx
// 0047fbec  895d34               mov dword ptr [ebp + 0x34], ebx
// 0047fbef  895d2c               mov dword ptr [ebp + 0x2c], ebx
// 0047fbf2  83c601               add esi, 1
// 0047fbf5  3b7704               cmp esi, dword ptr [edi + 4]
// 0047fbf8  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0047fc00  89742434             mov dword ptr [esp + 0x34], esi
// 0047fc04  7cba                 jl 0x47fbc0
// 0047fc06  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0047fc0a  64890d00000000       mov dword ptr fs:[0], ecx
// 0047fc11  59                   pop ecx
// 0047fc12  5f                   pop edi
// 0047fc13  5e                   pop esi
// 0047fc14  5d                   pop ebp
// 0047fc15  5b                   pop ebx
// 0047fc16  83c418               add esp, 0x18
// 0047fc19  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?resize@?$Array@UJoystickInfo@_DirectInput@_internal@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
