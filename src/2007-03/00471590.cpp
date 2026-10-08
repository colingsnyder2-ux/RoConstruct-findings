// roc 2007-03 00471590  unit: seg_00470000  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00471590
//
// 00471590  6aff                 push -1
// 00471592  68116e7400           push 0x746e11
// 00471597  64a100000000         mov eax, dword ptr fs:[0]
// 0047159d  50                   push eax
// 0047159e  83ec28               sub esp, 0x28
// 004715a1  53                   push ebx
// 004715a2  55                   push ebp
// 004715a3  56                   push esi
// 004715a4  57                   push edi
// 004715a5  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004715aa  33c4                 xor eax, esp
// 004715ac  50                   push eax
// 004715ad  8d44243c             lea eax, [esp + 0x3c]
// 004715b1  64a300000000         mov dword ptr fs:[0], eax
// 004715b7  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004715bb  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 004715bf  33db                 xor ebx, ebx
// 004715c1  895c2414             mov dword ptr [esp + 0x14], ebx
// 004715c5  8b4738               mov eax, dword ptr [edi + 0x38]
// 004715c8  0fafc5               imul eax, ebp
// 004715cb  0faf442454           imul eax, dword ptr [esp + 0x54]
// 004715d0  99                   cdq 
// 004715d1  83e207               and edx, 7
// 004715d4  03c2                 add eax, edx
// 004715d6  c1f803               sar eax, 3
// 004715d9  3bc3                 cmp eax, ebx
// 004715db  895c2444             mov dword ptr [esp + 0x44], ebx
// 004715df  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004715e3  895c2420             mov dword ptr [esp + 0x20], ebx
// 004715e7  895c2418             mov dword ptr [esp + 0x18], ebx
// 004715eb  7e12                 jle 0x4715ff
// 004715ed  6a01                 push 1
// 004715ef  50                   push eax
// 004715f0  8d4c2420             lea ecx, [esp + 0x20]
// 004715f4  e8f7f3ffff           call 0x4709f0
// 004715f9  8b742418             mov esi, dword ptr [esp + 0x18]
// 004715fd  eb06                 jmp 0x471605
// 004715ff  33f6                 xor esi, esi
// 00471601  89742418             mov dword ptr [esp + 0x18], esi
// 00471605  d9e8                 fld1 
// 00471607  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0047160b  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0047160f  8b542464             mov edx, dword ptr [esp + 0x64]
// 00471613  83ec08               sub esp, 8
// 00471616  d95c2404             fstp dword ptr [esp + 4]
// 0047161a  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 00471622  d9442478             fld dword ptr [esp + 0x78]
// 00471626  8974242c             mov dword ptr [esp + 0x2c], esi
// 0047162a  d91c24               fstp dword ptr [esp]
// 0047162d  50                   push eax
// 0047162e  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00471632  51                   push ecx
// 00471633  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00471637  52                   push edx
// 00471638  50                   push eax
// 00471639  8b442470             mov eax, dword ptr [esp + 0x70]
// 0047163d  57                   push edi
// 0047163e  6a01                 push 1
// 00471640  51                   push ecx
// 00471641  55                   push ebp
// 00471642  57                   push edi
// 00471643  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00471647  8d542450             lea edx, [esp + 0x50]
// 0047164b  52                   push edx
// 0047164c  50                   push eax
// 0047164d  57                   push edi
// 0047164e  89742460             mov dword ptr [esp + 0x60], esi
// 00471652  89742464             mov dword ptr [esp + 0x64], esi
// 00471656  89742468             mov dword ptr [esp + 0x68], esi
// 0047165a  8974246c             mov dword ptr [esp + 0x6c], esi
// 0047165e  89742470             mov dword ptr [esp + 0x70], esi
// 00471662  e839fcffff           call 0x4712a0
// 00471667  56                   push esi
// 00471668  c744245001000000     mov dword ptr [esp + 0x50], 1
// 00471670  889c2480000000       mov byte ptr [esp + 0x80], bl
// 00471677  e8041d0800           call 0x4f3380
// 0047167c  83c43c               add esp, 0x3c
// 0047167f  8bc7                 mov eax, edi
// 00471681  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00471685  64890d00000000       mov dword ptr fs:[0], ecx
// 0047168c  59                   pop ecx
// 0047168d  5f                   pop edi
// 0047168e  5e                   pop esi
// 0047168f  5d                   pop ebp
// 00471690  5b                   pop ebx
// 00471691  83c434               add esp, 0x34
// 00471694  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createEmpty@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@HHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
