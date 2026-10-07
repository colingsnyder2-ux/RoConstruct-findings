// roc 2008-06 00474950  unit: G3D::Texture  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00474950
//
// 00474950  6aff                 push -1
// 00474952  6881467c00           push 0x7c4681
// 00474957  64a100000000         mov eax, dword ptr fs:[0]
// 0047495d  50                   push eax
// 0047495e  64892500000000       mov dword ptr fs:[0], esp
// 00474965  83ec28               sub esp, 0x28
// 00474968  53                   push ebx
// 00474969  55                   push ebp
// 0047496a  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0047496e  33db                 xor ebx, ebx
// 00474970  56                   push esi
// 00474971  895c240c             mov dword ptr [esp + 0xc], ebx
// 00474975  57                   push edi
// 00474976  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0047497a  8b4738               mov eax, dword ptr [edi + 0x38]
// 0047497d  0fafc5               imul eax, ebp
// 00474980  0faf442450           imul eax, dword ptr [esp + 0x50]
// 00474985  99                   cdq 
// 00474986  83e207               and edx, 7
// 00474989  03c2                 add eax, edx
// 0047498b  c1f803               sar eax, 3
// 0047498e  3bc3                 cmp eax, ebx
// 00474990  895c2440             mov dword ptr [esp + 0x40], ebx
// 00474994  895c2418             mov dword ptr [esp + 0x18], ebx
// 00474998  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0047499c  895c2414             mov dword ptr [esp + 0x14], ebx
// 004749a0  7e12                 jle 0x4749b4
// 004749a2  6a01                 push 1
// 004749a4  50                   push eax
// 004749a5  8d4c241c             lea ecx, [esp + 0x1c]
// 004749a9  e822f4ffff           call 0x473dd0
// 004749ae  8b742414             mov esi, dword ptr [esp + 0x14]
// 004749b2  eb06                 jmp 0x4749ba
// 004749b4  33f6                 xor esi, esi
// 004749b6  89742414             mov dword ptr [esp + 0x14], esi
// 004749ba  d9e8                 fld1 
// 004749bc  8b442468             mov eax, dword ptr [esp + 0x68]
// 004749c0  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004749c4  8b542460             mov edx, dword ptr [esp + 0x60]
// 004749c8  83ec08               sub esp, 8
// 004749cb  d95c2404             fstp dword ptr [esp + 4]
// 004749cf  c744244801000000     mov dword ptr [esp + 0x48], 1
// 004749d7  d9442474             fld dword ptr [esp + 0x74]
// 004749db  89742428             mov dword ptr [esp + 0x28], esi
// 004749df  d91c24               fstp dword ptr [esp]
// 004749e2  50                   push eax
// 004749e3  8b442468             mov eax, dword ptr [esp + 0x68]
// 004749e7  51                   push ecx
// 004749e8  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 004749ec  52                   push edx
// 004749ed  50                   push eax
// 004749ee  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004749f2  57                   push edi
// 004749f3  6a01                 push 1
// 004749f5  51                   push ecx
// 004749f6  55                   push ebp
// 004749f7  57                   push edi
// 004749f8  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 004749fc  8d54244c             lea edx, [esp + 0x4c]
// 00474a00  52                   push edx
// 00474a01  50                   push eax
// 00474a02  57                   push edi
// 00474a03  8974245c             mov dword ptr [esp + 0x5c], esi
// 00474a07  89742460             mov dword ptr [esp + 0x60], esi
// 00474a0b  89742464             mov dword ptr [esp + 0x64], esi
// 00474a0f  89742468             mov dword ptr [esp + 0x68], esi
// 00474a13  8974246c             mov dword ptr [esp + 0x6c], esi
// 00474a17  e874fcffff           call 0x474690
// 00474a1c  56                   push esi
// 00474a1d  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 00474a25  885c247c             mov byte ptr [esp + 0x7c], bl
// 00474a29  e8f2320900           call 0x507d20
// 00474a2e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00474a32  83c43c               add esp, 0x3c
// 00474a35  8bc7                 mov eax, edi
// 00474a37  5f                   pop edi
// 00474a38  5e                   pop esi
// 00474a39  5d                   pop ebp
// 00474a3a  5b                   pop ebx
// 00474a3b  64890d00000000       mov dword ptr fs:[0], ecx
// 00474a42  83c434               add esp, 0x34
// 00474a45  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createEmpty@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@HHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
