// roc 2007-08 004785c0  unit: CInstanceRecord::CNameItem  size: 409 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004785c0
//
// 004785c0  6aff                 push -1
// 004785c2  684c517400           push 0x74514c
// 004785c7  64a100000000         mov eax, dword ptr fs:[0]
// 004785cd  50                   push eax
// 004785ce  83ec08               sub esp, 8
// 004785d1  53                   push ebx
// 004785d2  55                   push ebp
// 004785d3  56                   push esi
// 004785d4  57                   push edi
// 004785d5  a188518b00           mov eax, dword ptr [0x8b5188]
// 004785da  33c4                 xor eax, esp
// 004785dc  50                   push eax
// 004785dd  8d44241c             lea eax, [esp + 0x1c]
// 004785e1  64a300000000         mov dword ptr fs:[0], eax
// 004785e7  8bf1                 mov esi, ecx
// 004785e9  89742418             mov dword ptr [esp + 0x18], esi
// 004785ed  8b4604               mov eax, dword ptr [esi + 4]
// 004785f0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 004785f4  3be8                 cmp ebp, eax
// 004785f6  89442414             mov dword ptr [esp + 0x14], eax
// 004785fa  896e04               mov dword ptr [esi + 4], ebp
// 004785fd  7d29                 jge 0x478628
// 004785ff  8bfd                 mov edi, ebp
// 00478601  8bd8                 mov ebx, eax
// 00478603  69ff60070000         imul edi, edi, 0x760
// 00478609  2bdd                 sub ebx, ebp
// 0047860b  eb03                 jmp 0x478610
// 0047860d  8d4900               lea ecx, [ecx]
// 00478610  8b0e                 mov ecx, dword ptr [esi]
// 00478612  03cf                 add ecx, edi
// 00478614  e847e2ffff           call 0x476860
// 00478619  81c760070000         add edi, 0x760
// 0047861f  83eb01               sub ebx, 1
// 00478622  75ec                 jne 0x478610
// 00478624  8b442414             mov eax, dword ptr [esp + 0x14]
// 00478628  f60550d18b0001       test byte ptr [0x8bd150], 1
// 0047862f  7514                 jne 0x478645
// 00478631  830d50d18b0001       or dword ptr [0x8bd150], 1
// 00478638  bb0a000000           mov ebx, 0xa
// 0047863d  891d4cd18b00         mov dword ptr [0x8bd14c], ebx
// 00478643  eb06                 jmp 0x47864b
// 00478645  8b1d4cd18b00         mov ebx, dword ptr [0x8bd14c]
// 0047864b  8b7e04               mov edi, dword ptr [esi + 4]
// 0047864e  8b4e08               mov ecx, dword ptr [esi + 8]
// 00478651  3bf9                 cmp edi, ecx
// 00478653  7e7a                 jle 0x4786cf
// 00478655  85c9                 test ecx, ecx
// 00478657  7509                 jne 0x478662
// 00478659  896e08               mov dword ptr [esi + 8], ebp
// 0047865c  50                   push eax
// 0047865d  e995000000           jmp 0x4786f7
// 00478662  3bfb                 cmp edi, ebx
// 00478664  7d09                 jge 0x47866f
// 00478666  895e08               mov dword ptr [esi + 8], ebx
// 00478669  50                   push eax
// 0047866a  e988000000           jmp 0x4786f7
// 0047866f  d905387b7900         fld dword ptr [0x797b38]
// 00478675  8bc1                 mov eax, ecx
// 00478677  69c060070000         imul eax, eax, 0x760
// 0047867d  d95c2430             fstp dword ptr [esp + 0x30]
// 00478681  3d801a0600           cmp eax, 0x61a80
// 00478686  7608                 jbe 0x478690
// 00478688  d905347b7900         fld dword ptr [0x797b34]
// 0047868e  eb0d                 jmp 0x47869d
// 00478690  3d00fa0000           cmp eax, 0xfa00
// 00478695  760a                 jbe 0x4786a1
// 00478697  d90588797900         fld dword ptr [0x797988]
// 0047869d  d95c2430             fstp dword ptr [esp + 0x30]
// 004786a1  8bd9                 mov ebx, ecx
// 004786a3  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004786a7  db44242c             fild dword ptr [esp + 0x2c]
// 004786ab  d84c2430             fmul dword ptr [esp + 0x30]
// 004786af  e8ac861b00           call 0x630d60
// 004786b4  2bc3                 sub eax, ebx
// 004786b6  03c7                 add eax, edi
// 004786b8  894608               mov dword ptr [esi + 8], eax
// 004786bb  8b0d4cd18b00         mov ecx, dword ptr [0x8bd14c]
// 004786c1  3bc1                 cmp eax, ecx
// 004786c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 004786c7  7d03                 jge 0x4786cc
// 004786c9  894e08               mov dword ptr [esi + 8], ecx
// 004786cc  50                   push eax
// 004786cd  eb28                 jmp 0x4786f7
// 004786cf  b856555555           mov eax, 0x55555556
// 004786d4  f7e9                 imul ecx
// 004786d6  8bc2                 mov eax, edx
// 004786d8  c1e81f               shr eax, 0x1f
// 004786db  03c2                 add eax, edx
// 004786dd  3bf8                 cmp edi, eax
// 004786df  7f1d                 jg 0x4786fe
// 004786e1  807c243000           cmp byte ptr [esp + 0x30], 0
// 004786e6  7416                 je 0x4786fe
// 004786e8  3bfb                 cmp edi, ebx
// 004786ea  7e12                 jle 0x4786fe
// 004786ec  8b442414             mov eax, dword ptr [esp + 0x14]
// 004786f0  3bf8                 cmp edi, eax
// 004786f2  7c02                 jl 0x4786f6
// 004786f4  8bf8                 mov edi, eax
// 004786f6  57                   push edi
// 004786f7  8bce                 mov ecx, esi
// 004786f9  e8f2f7ffff           call 0x477ef0
// 004786fe  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00478702  3b7e04               cmp edi, dword ptr [esi + 4]
// 00478705  897c2430             mov dword ptr [esp + 0x30], edi
// 00478709  7d38                 jge 0x478743
// 0047870b  83cbff               or ebx, 0xffffffff
// 0047870e  8bff                 mov edi, edi
// 00478710  8bcf                 mov ecx, edi
// 00478712  69c960070000         imul ecx, ecx, 0x760
// 00478718  030e                 add ecx, dword ptr [esi]
// 0047871a  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0047871e  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00478726  740b                 je 0x478733
// 00478728  6a08                 push 8
// 0047872a  6a01                 push 1
// 0047872c  6a01                 push 1
// 0047872e  e8cde3ffff           call 0x476b00
// 00478733  83c701               add edi, 1
// 00478736  3b7e04               cmp edi, dword ptr [esi + 4]
// 00478739  895c2424             mov dword ptr [esp + 0x24], ebx
// 0047873d  897c2430             mov dword ptr [esp + 0x30], edi
// 00478741  7ccd                 jl 0x478710
// 00478743  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00478747  64890d00000000       mov dword ptr fs:[0], ecx
// 0047874e  59                   pop ecx
// 0047874f  5f                   pop edi
// 00478750  5e                   pop esi
// 00478751  5d                   pop ebp
// 00478752  5b                   pop ebx
// 00478753  83c414               add esp, 0x14
// 00478756  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\RenderDevice.cpp (function ?resize@?$Array@VRenderState@RenderDevice@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/RenderDevice.cpp
