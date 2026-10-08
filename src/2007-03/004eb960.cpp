// roc 2007-03 004eb960  unit: seg_004e0000  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eb960
//
// 004eb960  8b442404             mov eax, dword ptr [esp + 4]
// 004eb964  53                   push ebx
// 004eb965  55                   push ebp
// 004eb966  56                   push esi
// 004eb967  8bf1                 mov esi, ecx
// 004eb969  8b6e04               mov ebp, dword ptr [esi + 4]
// 004eb96c  b901000000           mov ecx, 1
// 004eb971  894604               mov dword ptr [esi + 4], eax
// 004eb974  840dd4a08b00         test byte ptr [0x8ba0d4], cl
// 004eb97a  57                   push edi
// 004eb97b  7513                 jne 0x4eb990
// 004eb97d  090dd4a08b00         or dword ptr [0x8ba0d4], ecx
// 004eb983  bb0a000000           mov ebx, 0xa
// 004eb988  891dd0a08b00         mov dword ptr [0x8ba0d0], ebx
// 004eb98e  eb06                 jmp 0x4eb996
// 004eb990  8b1dd0a08b00         mov ebx, dword ptr [0x8ba0d0]
// 004eb996  8b4e08               mov ecx, dword ptr [esi + 8]
// 004eb999  8b7e04               mov edi, dword ptr [esi + 4]
// 004eb99c  3bf9                 cmp edi, ecx
// 004eb99e  0f8e92000000         jle 0x4eba36
// 004eb9a4  85c9                 test ecx, ecx
// 004eb9a6  7512                 jne 0x4eb9ba
// 004eb9a8  55                   push ebp
// 004eb9a9  8bce                 mov ecx, esi
// 004eb9ab  894608               mov dword ptr [esi + 8], eax
// 004eb9ae  e81dc10d00           call 0x5c7ad0
// 004eb9b3  5f                   pop edi
// 004eb9b4  5e                   pop esi
// 004eb9b5  5d                   pop ebp
// 004eb9b6  5b                   pop ebx
// 004eb9b7  c20800               ret 8
// 004eb9ba  3bfb                 cmp edi, ebx
// 004eb9bc  7d12                 jge 0x4eb9d0
// 004eb9be  55                   push ebp
// 004eb9bf  8bce                 mov ecx, esi
// 004eb9c1  895e08               mov dword ptr [esi + 8], ebx
// 004eb9c4  e807c10d00           call 0x5c7ad0
// 004eb9c9  5f                   pop edi
// 004eb9ca  5e                   pop esi
// 004eb9cb  5d                   pop ebp
// 004eb9cc  5b                   pop ebx
// 004eb9cd  c20800               ret 8
// 004eb9d0  d905104c7900         fld dword ptr [0x794c10]
// 004eb9d6  8bc1                 mov eax, ecx
// 004eb9d8  03c0                 add eax, eax
// 004eb9da  d95c2418             fstp dword ptr [esp + 0x18]
// 004eb9de  03c0                 add eax, eax
// 004eb9e0  3d801a0600           cmp eax, 0x61a80
// 004eb9e5  7608                 jbe 0x4eb9ef
// 004eb9e7  d9050c4c7900         fld dword ptr [0x794c0c]
// 004eb9ed  eb0d                 jmp 0x4eb9fc
// 004eb9ef  3d00fa0000           cmp eax, 0xfa00
// 004eb9f4  760a                 jbe 0x4eba00
// 004eb9f6  d905084c7900         fld dword ptr [0x794c08]
// 004eb9fc  d95c2418             fstp dword ptr [esp + 0x18]
// 004eba00  8bd9                 mov ebx, ecx
// 004eba02  895c2414             mov dword ptr [esp + 0x14], ebx
// 004eba06  db442414             fild dword ptr [esp + 0x14]
// 004eba0a  d84c2418             fmul dword ptr [esp + 0x18]
// 004eba0e  e8ed371300           call 0x61f200
// 004eba13  2bc3                 sub eax, ebx
// 004eba15  03c7                 add eax, edi
// 004eba17  894608               mov dword ptr [esi + 8], eax
// 004eba1a  8b0dd0a08b00         mov ecx, dword ptr [0x8ba0d0]
// 004eba20  3bc1                 cmp eax, ecx
// 004eba22  7d03                 jge 0x4eba27
// 004eba24  894e08               mov dword ptr [esi + 8], ecx
// 004eba27  55                   push ebp
// 004eba28  8bce                 mov ecx, esi
// 004eba2a  e8a1c00d00           call 0x5c7ad0
// 004eba2f  5f                   pop edi
// 004eba30  5e                   pop esi
// 004eba31  5d                   pop ebp
// 004eba32  5b                   pop ebx
// 004eba33  c20800               ret 8
// 004eba36  b856555555           mov eax, 0x55555556
// 004eba3b  f7e9                 imul ecx
// 004eba3d  8bc2                 mov eax, edx
// 004eba3f  c1e81f               shr eax, 0x1f
// 004eba42  03c2                 add eax, edx
// 004eba44  3bf8                 cmp edi, eax
// 004eba46  7f19                 jg 0x4eba61
// 004eba48  807c241800           cmp byte ptr [esp + 0x18], 0
// 004eba4d  7412                 je 0x4eba61
// 004eba4f  3bfb                 cmp edi, ebx
// 004eba51  7e0e                 jle 0x4eba61
// 004eba53  3bfd                 cmp edi, ebp
// 004eba55  7c02                 jl 0x4eba59
// 004eba57  8bfd                 mov edi, ebp
// 004eba59  57                   push edi
// 004eba5a  8bce                 mov ecx, esi
// 004eba5c  e86fc00d00           call 0x5c7ad0
// 004eba61  5f                   pop edi
// 004eba62  5e                   pop esi
// 004eba63  5d                   pop ebp
// 004eba64  5b                   pop ebx
// 004eba65  c20800               ret 8
// library rbxgs/tool\DragUtilities.cpp (function ?resize@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
