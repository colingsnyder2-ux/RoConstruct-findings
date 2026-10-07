// roc 2007-08 004715c0  unit: G3D::Texture  size: 261 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004715c0
//
// 004715c0  6aff                 push -1
// 004715c2  6891497400           push 0x744991
// 004715c7  64a100000000         mov eax, dword ptr fs:[0]
// 004715cd  50                   push eax
// 004715ce  83ec28               sub esp, 0x28
// 004715d1  53                   push ebx
// 004715d2  55                   push ebp
// 004715d3  56                   push esi
// 004715d4  57                   push edi
// 004715d5  a188518b00           mov eax, dword ptr [0x8b5188]
// 004715da  33c4                 xor eax, esp
// 004715dc  50                   push eax
// 004715dd  8d44243c             lea eax, [esp + 0x3c]
// 004715e1  64a300000000         mov dword ptr fs:[0], eax
// 004715e7  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004715eb  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 004715ef  33db                 xor ebx, ebx
// 004715f1  895c2414             mov dword ptr [esp + 0x14], ebx
// 004715f5  8b4738               mov eax, dword ptr [edi + 0x38]
// 004715f8  0fafc5               imul eax, ebp
// 004715fb  0faf442454           imul eax, dword ptr [esp + 0x54]
// 00471600  99                   cdq 
// 00471601  83e207               and edx, 7
// 00471604  03c2                 add eax, edx
// 00471606  c1f803               sar eax, 3
// 00471609  3bc3                 cmp eax, ebx
// 0047160b  895c2444             mov dword ptr [esp + 0x44], ebx
// 0047160f  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00471613  895c2420             mov dword ptr [esp + 0x20], ebx
// 00471617  895c2418             mov dword ptr [esp + 0x18], ebx
// 0047161b  7e12                 jle 0x47162f
// 0047161d  6a01                 push 1
// 0047161f  50                   push eax
// 00471620  8d4c2420             lea ecx, [esp + 0x20]
// 00471624  e8f7f3ffff           call 0x470a20
// 00471629  8b742418             mov esi, dword ptr [esp + 0x18]
// 0047162d  eb06                 jmp 0x471635
// 0047162f  33f6                 xor esi, esi
// 00471631  89742418             mov dword ptr [esp + 0x18], esi
// 00471635  d9e8                 fld1 
// 00471637  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0047163b  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0047163f  8b542464             mov edx, dword ptr [esp + 0x64]
// 00471643  83ec08               sub esp, 8
// 00471646  d95c2404             fstp dword ptr [esp + 4]
// 0047164a  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 00471652  d9442478             fld dword ptr [esp + 0x78]
// 00471656  8974242c             mov dword ptr [esp + 0x2c], esi
// 0047165a  d91c24               fstp dword ptr [esp]
// 0047165d  50                   push eax
// 0047165e  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00471662  51                   push ecx
// 00471663  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00471667  52                   push edx
// 00471668  50                   push eax
// 00471669  8b442470             mov eax, dword ptr [esp + 0x70]
// 0047166d  57                   push edi
// 0047166e  6a01                 push 1
// 00471670  51                   push ecx
// 00471671  55                   push ebp
// 00471672  57                   push edi
// 00471673  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00471677  8d542450             lea edx, [esp + 0x50]
// 0047167b  52                   push edx
// 0047167c  50                   push eax
// 0047167d  57                   push edi
// 0047167e  89742460             mov dword ptr [esp + 0x60], esi
// 00471682  89742464             mov dword ptr [esp + 0x64], esi
// 00471686  89742468             mov dword ptr [esp + 0x68], esi
// 0047168a  8974246c             mov dword ptr [esp + 0x6c], esi
// 0047168e  89742470             mov dword ptr [esp + 0x70], esi
// 00471692  e839fcffff           call 0x4712d0
// 00471697  56                   push esi
// 00471698  c744245001000000     mov dword ptr [esp + 0x50], 1
// 004716a0  889c2480000000       mov byte ptr [esp + 0x80], bl
// 004716a7  e864e10800           call 0x4ff810
// 004716ac  83c43c               add esp, 0x3c
// 004716af  8bc7                 mov eax, edi
// 004716b1  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004716b5  64890d00000000       mov dword ptr fs:[0], ecx
// 004716bc  59                   pop ecx
// 004716bd  5f                   pop edi
// 004716be  5e                   pop esi
// 004716bf  5d                   pop ebp
// 004716c0  5b                   pop ebx
// 004716c1  83c434               add esp, 0x34
// 004716c4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createEmpty@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@HHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
