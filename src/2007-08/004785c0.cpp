// from server: 100% by tester
// roc 2007-03 00478710  unit: seg_00470000  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00478710
//
// 00478710  6aff                 push -1
// 00478712  68fc757400           push 0x7475fc
// 00478717  64a100000000         mov eax, dword ptr fs:[0]
// 0047871d  50                   push eax
// 0047871e  83ec08               sub esp, 8
// 00478721  53                   push ebx
// 00478722  55                   push ebp
// 00478723  56                   push esi
// 00478724  57                   push edi
// 00478725  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047872a  33c4                 xor eax, esp
// 0047872c  50                   push eax
// 0047872d  8d44241c             lea eax, [esp + 0x1c]
// 00478731  64a300000000         mov dword ptr fs:[0], eax
// 00478737  8bf1                 mov esi, ecx
// 00478739  89742418             mov dword ptr [esp + 0x18], esi
// 0047873d  8b4604               mov eax, dword ptr [esi + 4]
// 00478740  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00478744  3be8                 cmp ebp, eax
// 00478746  89442414             mov dword ptr [esp + 0x14], eax
// 0047874a  896e04               mov dword ptr [esi + 4], ebp
// 0047874d  7d29                 jge 0x478778
// 0047874f  8bfd                 mov edi, ebp
// 00478751  8bd8                 mov ebx, eax
// 00478753  69ff60070000         imul edi, edi, 0x760
// 00478759  2bdd                 sub ebx, ebp
// 0047875b  eb03                 jmp 0x478760
// 0047875d  8d4900               lea ecx, [ecx]
// 00478760  8b0e                 mov ecx, dword ptr [esi]
// 00478762  03cf                 add ecx, edi
// 00478764  e857e2ffff           call 0x4769c0
// 00478769  81c760070000         add edi, 0x760
// 0047876f  83eb01               sub ebx, 1
// 00478772  75ec                 jne 0x478760
// 00478774  8b442414             mov eax, dword ptr [esp + 0x14]
// 00478778  f60518788b0001       test byte ptr [0x8b7818], 1
// 0047877f  7514                 jne 0x478795
// 00478781  830d18788b0001       or dword ptr [0x8b7818], 1
// 00478788  bb0a000000           mov ebx, 0xa
// 0047878d  891d14788b00         mov dword ptr [0x8b7814], ebx
// 00478793  eb06                 jmp 0x47879b
// 00478795  8b1d14788b00         mov ebx, dword ptr [0x8b7814]
// 0047879b  8b7e04               mov edi, dword ptr [esi + 4]
// 0047879e  8b4e08               mov ecx, dword ptr [esi + 8]
// 004787a1  3bf9                 cmp edi, ecx
// 004787a3  7e7a                 jle 0x47881f
// 004787a5  85c9                 test ecx, ecx
// 004787a7  7509                 jne 0x4787b2
// 004787a9  896e08               mov dword ptr [esi + 8], ebp
// 004787ac  50                   push eax
// 004787ad  e995000000           jmp 0x478847
// 004787b2  3bfb                 cmp edi, ebx
// 004787b4  7d09                 jge 0x4787bf
// 004787b6  895e08               mov dword ptr [esi + 8], ebx
// 004787b9  50                   push eax
// 004787ba  e988000000           jmp 0x478847
// 004787bf  d905104c7900         fld dword ptr [0x794c10]
// 004787c5  8bc1                 mov eax, ecx
// 004787c7  69c060070000         imul eax, eax, 0x760
// 004787cd  d95c2430             fstp dword ptr [esp + 0x30]
// 004787d1  3d801a0600           cmp eax, 0x61a80
// 004787d6  7608                 jbe 0x4787e0
// 004787d8  d9050c4c7900         fld dword ptr [0x794c0c]
// 004787de  eb0d                 jmp 0x4787ed
// 004787e0  3d00fa0000           cmp eax, 0xfa00
// 004787e5  760a                 jbe 0x4787f1
// 004787e7  d905084c7900         fld dword ptr [0x794c08]
// 004787ed  d95c2430             fstp dword ptr [esp + 0x30]
// 004787f1  8bd9                 mov ebx, ecx
// 004787f3  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004787f7  db44242c             fild dword ptr [esp + 0x2c]
// 004787fb  d84c2430             fmul dword ptr [esp + 0x30]
// 004787ff  e8fc691a00           call 0x61f200
// 00478804  2bc3                 sub eax, ebx
// 00478806  03c7                 add eax, edi
// 00478808  894608               mov dword ptr [esi + 8], eax
// 0047880b  8b0d14788b00         mov ecx, dword ptr [0x8b7814]
// 00478811  3bc1                 cmp eax, ecx
// 00478813  8b442414             mov eax, dword ptr [esp + 0x14]
// 00478817  7d03                 jge 0x47881c
// 00478819  894e08               mov dword ptr [esi + 8], ecx
// 0047881c  50                   push eax
// 0047881d  eb28                 jmp 0x478847
// 0047881f  b856555555           mov eax, 0x55555556
// 00478824  f7e9                 imul ecx
// 00478826  8bc2                 mov eax, edx
// 00478828  c1e81f               shr eax, 0x1f
// 0047882b  03c2                 add eax, edx
// 0047882d  3bf8                 cmp edi, eax
// 0047882f  7f1d                 jg 0x47884e
// 00478831  807c243000           cmp byte ptr [esp + 0x30], 0
// 00478836  7416                 je 0x47884e
// 00478838  3bfb                 cmp edi, ebx
// 0047883a  7e12                 jle 0x47884e
// 0047883c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00478840  3bf8                 cmp edi, eax
// 00478842  7c02                 jl 0x478846
// 00478844  8bf8                 mov edi, eax
// 00478846  57                   push edi
// 00478847  8bce                 mov ecx, esi
// 00478849  e802f8ffff           call 0x478050
// 0047884e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00478852  3b7e04               cmp edi, dword ptr [esi + 4]
// 00478855  897c2430             mov dword ptr [esp + 0x30], edi
// 00478859  7d38                 jge 0x478893
// 0047885b  83cbff               or ebx, 0xffffffff
// 0047885e  8bff                 mov edi, edi
// 00478860  8bcf                 mov ecx, edi
// 00478862  69c960070000         imul ecx, ecx, 0x760
// 00478868  030e                 add ecx, dword ptr [esi]
// 0047886a  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0047886e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00478876  740b                 je 0x478883
// 00478878  6a08                 push 8
// 0047887a  6a01                 push 1
// 0047887c  6a01                 push 1
// 0047887e  e8dde3ffff           call 0x476c60
// 00478883  83c701               add edi, 1
// 00478886  3b7e04               cmp edi, dword ptr [esi + 4]
// 00478889  895c2424             mov dword ptr [esp + 0x24], ebx
// 0047888d  897c2430             mov dword ptr [esp + 0x30], edi
// 00478891  7ccd                 jl 0x478860
// 00478893  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00478897  64890d00000000       mov dword ptr fs:[0], ecx
// 0047889e  59                   pop ecx
// 0047889f  5f                   pop edi
// 004788a0  5e                   pop esi
// 004788a1  5d                   pop ebp
// 004788a2  5b                   pop ebx
// 004788a3  83c414               add esp, 0x14
// 004788a6  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?resize@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
