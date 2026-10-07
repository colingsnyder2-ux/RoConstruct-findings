// roc 2009-06 0049c070  unit: G3D::Texture  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0049c070
//
// 0049c070  6aff                 push -1
// 0049c072  68b16c8500           push 0x856cb1
// 0049c077  64a100000000         mov eax, dword ptr fs:[0]
// 0049c07d  50                   push eax
// 0049c07e  64892500000000       mov dword ptr fs:[0], esp
// 0049c085  83ec28               sub esp, 0x28
// 0049c088  53                   push ebx
// 0049c089  55                   push ebp
// 0049c08a  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0049c08e  33db                 xor ebx, ebx
// 0049c090  56                   push esi
// 0049c091  895c240c             mov dword ptr [esp + 0xc], ebx
// 0049c095  57                   push edi
// 0049c096  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0049c09a  8b4738               mov eax, dword ptr [edi + 0x38]
// 0049c09d  0fafc5               imul eax, ebp
// 0049c0a0  0faf442450           imul eax, dword ptr [esp + 0x50]
// 0049c0a5  99                   cdq 
// 0049c0a6  83e207               and edx, 7
// 0049c0a9  03c2                 add eax, edx
// 0049c0ab  c1f803               sar eax, 3
// 0049c0ae  3bc3                 cmp eax, ebx
// 0049c0b0  895c2440             mov dword ptr [esp + 0x40], ebx
// 0049c0b4  895c2418             mov dword ptr [esp + 0x18], ebx
// 0049c0b8  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0049c0bc  895c2414             mov dword ptr [esp + 0x14], ebx
// 0049c0c0  7e12                 jle 0x49c0d4
// 0049c0c2  6a01                 push 1
// 0049c0c4  50                   push eax
// 0049c0c5  8d4c241c             lea ecx, [esp + 0x1c]
// 0049c0c9  e822f4ffff           call 0x49b4f0
// 0049c0ce  8b742414             mov esi, dword ptr [esp + 0x14]
// 0049c0d2  eb06                 jmp 0x49c0da
// 0049c0d4  33f6                 xor esi, esi
// 0049c0d6  89742414             mov dword ptr [esp + 0x14], esi
// 0049c0da  d9e8                 fld1 
// 0049c0dc  8b442468             mov eax, dword ptr [esp + 0x68]
// 0049c0e0  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0049c0e4  8b542460             mov edx, dword ptr [esp + 0x60]
// 0049c0e8  83ec08               sub esp, 8
// 0049c0eb  d95c2404             fstp dword ptr [esp + 4]
// 0049c0ef  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0049c0f7  d9442474             fld dword ptr [esp + 0x74]
// 0049c0fb  89742428             mov dword ptr [esp + 0x28], esi
// 0049c0ff  d91c24               fstp dword ptr [esp]
// 0049c102  50                   push eax
// 0049c103  8b442468             mov eax, dword ptr [esp + 0x68]
// 0049c107  51                   push ecx
// 0049c108  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0049c10c  52                   push edx
// 0049c10d  50                   push eax
// 0049c10e  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0049c112  57                   push edi
// 0049c113  6a01                 push 1
// 0049c115  51                   push ecx
// 0049c116  55                   push ebp
// 0049c117  57                   push edi
// 0049c118  8b7c2474             mov edi, dword ptr [esp + 0x74]
// 0049c11c  8d54244c             lea edx, [esp + 0x4c]
// 0049c120  52                   push edx
// 0049c121  50                   push eax
// 0049c122  57                   push edi
// 0049c123  8974245c             mov dword ptr [esp + 0x5c], esi
// 0049c127  89742460             mov dword ptr [esp + 0x60], esi
// 0049c12b  89742464             mov dword ptr [esp + 0x64], esi
// 0049c12f  89742468             mov dword ptr [esp + 0x68], esi
// 0049c133  8974246c             mov dword ptr [esp + 0x6c], esi
// 0049c137  e874fcffff           call 0x49bdb0
// 0049c13c  56                   push esi
// 0049c13d  c744244c01000000     mov dword ptr [esp + 0x4c], 1
// 0049c145  885c247c             mov byte ptr [esp + 0x7c], bl
// 0049c149  e842f10c00           call 0x56b290
// 0049c14e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0049c152  83c43c               add esp, 0x3c
// 0049c155  8bc7                 mov eax, edi
// 0049c157  5f                   pop edi
// 0049c158  5e                   pop esi
// 0049c159  5d                   pop ebp
// 0049c15a  5b                   pop ebx
// 0049c15b  64890d00000000       mov dword ptr fs:[0], ecx
// 0049c162  83c434               add esp, 0x34
// 0049c165  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?createEmpty@Texture@G3D@@SA?AV?$ReferenceCountedPointer@VTexture@G3D@@@2@HHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@12@W4InterpolateMode@12@W4Dimension@12@W4DepthReadMode@12@M@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
