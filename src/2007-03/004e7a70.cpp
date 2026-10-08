// roc 2007-03 004e7a70  unit: seg_004e0000  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e7a70
//
// 004e7a70  8b442404             mov eax, dword ptr [esp + 4]
// 004e7a74  53                   push ebx
// 004e7a75  55                   push ebp
// 004e7a76  56                   push esi
// 004e7a77  8bf1                 mov esi, ecx
// 004e7a79  8b6e04               mov ebp, dword ptr [esi + 4]
// 004e7a7c  894604               mov dword ptr [esi + 4], eax
// 004e7a7f  f60574a08b0001       test byte ptr [0x8ba074], 1
// 004e7a86  57                   push edi
// 004e7a87  7514                 jne 0x4e7a9d
// 004e7a89  830d74a08b0001       or dword ptr [0x8ba074], 1
// 004e7a90  bb0a000000           mov ebx, 0xa
// 004e7a95  891d70a08b00         mov dword ptr [0x8ba070], ebx
// 004e7a9b  eb06                 jmp 0x4e7aa3
// 004e7a9d  8b1d70a08b00         mov ebx, dword ptr [0x8ba070]
// 004e7aa3  8b7e04               mov edi, dword ptr [esi + 4]
// 004e7aa6  8b4e08               mov ecx, dword ptr [esi + 8]
// 004e7aa9  3bf9                 cmp edi, ecx
// 004e7aab  7e77                 jle 0x4e7b24
// 004e7aad  85c9                 test ecx, ecx
// 004e7aaf  7509                 jne 0x4e7aba
// 004e7ab1  894608               mov dword ptr [esi + 8], eax
// 004e7ab4  55                   push ebp
// 004e7ab5  e98e000000           jmp 0x4e7b48
// 004e7aba  3bfb                 cmp edi, ebx
// 004e7abc  7d09                 jge 0x4e7ac7
// 004e7abe  895e08               mov dword ptr [esi + 8], ebx
// 004e7ac1  55                   push ebp
// 004e7ac2  e981000000           jmp 0x4e7b48
// 004e7ac7  d905104c7900         fld dword ptr [0x794c10]
// 004e7acd  8bc1                 mov eax, ecx
// 004e7acf  8d0440               lea eax, [eax + eax*2]
// 004e7ad2  d95c2418             fstp dword ptr [esp + 0x18]
// 004e7ad6  03c0                 add eax, eax
// 004e7ad8  03c0                 add eax, eax
// 004e7ada  3d801a0600           cmp eax, 0x61a80
// 004e7adf  7608                 jbe 0x4e7ae9
// 004e7ae1  d9050c4c7900         fld dword ptr [0x794c0c]
// 004e7ae7  eb0d                 jmp 0x4e7af6
// 004e7ae9  3d00fa0000           cmp eax, 0xfa00
// 004e7aee  760a                 jbe 0x4e7afa
// 004e7af0  d905084c7900         fld dword ptr [0x794c08]
// 004e7af6  d95c2418             fstp dword ptr [esp + 0x18]
// 004e7afa  8bd9                 mov ebx, ecx
// 004e7afc  895c2414             mov dword ptr [esp + 0x14], ebx
// 004e7b00  db442414             fild dword ptr [esp + 0x14]
// 004e7b04  d84c2418             fmul dword ptr [esp + 0x18]
// 004e7b08  e8f3761300           call 0x61f200
// 004e7b0d  2bc3                 sub eax, ebx
// 004e7b0f  03c7                 add eax, edi
// 004e7b11  894608               mov dword ptr [esi + 8], eax
// 004e7b14  8b0d70a08b00         mov ecx, dword ptr [0x8ba070]
// 004e7b1a  3bc1                 cmp eax, ecx
// 004e7b1c  7d03                 jge 0x4e7b21
// 004e7b1e  894e08               mov dword ptr [esi + 8], ecx
// 004e7b21  55                   push ebp
// 004e7b22  eb24                 jmp 0x4e7b48
// 004e7b24  b856555555           mov eax, 0x55555556
// 004e7b29  f7e9                 imul ecx
// 004e7b2b  8bc2                 mov eax, edx
// 004e7b2d  c1e81f               shr eax, 0x1f
// 004e7b30  03c2                 add eax, edx
// 004e7b32  3bf8                 cmp edi, eax
// 004e7b34  7f19                 jg 0x4e7b4f
// 004e7b36  807c241800           cmp byte ptr [esp + 0x18], 0
// 004e7b3b  7412                 je 0x4e7b4f
// 004e7b3d  3bfb                 cmp edi, ebx
// 004e7b3f  7e0e                 jle 0x4e7b4f
// 004e7b41  3bfd                 cmp edi, ebp
// 004e7b43  7c02                 jl 0x4e7b47
// 004e7b45  8bfd                 mov edi, ebp
// 004e7b47  57                   push edi
// 004e7b48  8bce                 mov ecx, esi
// 004e7b4a  e8c1fbffff           call 0x4e7710
// 004e7b4f  3b6e04               cmp ebp, dword ptr [esi + 4]
// 004e7b52  8bd5                 mov edx, ebp
// 004e7b54  7d25                 jge 0x4e7b7b
// 004e7b56  d9ee                 fldz 
// 004e7b58  8d4c6d00             lea ecx, [ebp + ebp*2]
// 004e7b5c  03c9                 add ecx, ecx
// 004e7b5e  03c9                 add ecx, ecx
// 004e7b60  8b06                 mov eax, dword ptr [esi]
// 004e7b62  03c1                 add eax, ecx
// 004e7b64  7408                 je 0x4e7b6e
// 004e7b66  d910                 fst dword ptr [eax]
// 004e7b68  d95004               fst dword ptr [eax + 4]
// 004e7b6b  d95008               fst dword ptr [eax + 8]
// 004e7b6e  83c201               add edx, 1
// 004e7b71  83c10c               add ecx, 0xc
// 004e7b74  3b5604               cmp edx, dword ptr [esi + 4]
// 004e7b77  7ce7                 jl 0x4e7b60
// 004e7b79  ddd8                 fstp st(0)
// 004e7b7b  5f                   pop edi
// 004e7b7c  5e                   pop esi
// 004e7b7d  5d                   pop ebp
// 004e7b7e  5b                   pop ebx
// 004e7b7f  c20800               ret 8
// library rbxgs-render/Chunk.cpp (function ?resize@?$Array@VVector3@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Chunk.cpp
