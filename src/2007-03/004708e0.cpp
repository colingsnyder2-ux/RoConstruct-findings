// roc 2007-03 004708e0  unit: seg_00470000  size: 264 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004708e0
//
// 004708e0  8b442404             mov eax, dword ptr [esp + 4]
// 004708e4  53                   push ebx
// 004708e5  55                   push ebp
// 004708e6  56                   push esi
// 004708e7  8bf1                 mov esi, ecx
// 004708e9  8b6e04               mov ebp, dword ptr [esi + 4]
// 004708ec  b901000000           mov ecx, 1
// 004708f1  894604               mov dword ptr [esi + 4], eax
// 004708f4  840d60778b00         test byte ptr [0x8b7760], cl
// 004708fa  57                   push edi
// 004708fb  7513                 jne 0x470910
// 004708fd  090d60778b00         or dword ptr [0x8b7760], ecx
// 00470903  bb0a000000           mov ebx, 0xa
// 00470908  891d5c778b00         mov dword ptr [0x8b775c], ebx
// 0047090e  eb06                 jmp 0x470916
// 00470910  8b1d5c778b00         mov ebx, dword ptr [0x8b775c]
// 00470916  8b4e08               mov ecx, dword ptr [esi + 8]
// 00470919  8b7e04               mov edi, dword ptr [esi + 4]
// 0047091c  3bf9                 cmp edi, ecx
// 0047091e  0f8e92000000         jle 0x4709b6
// 00470924  85c9                 test ecx, ecx
// 00470926  7512                 jne 0x47093a
// 00470928  55                   push ebp
// 00470929  8bce                 mov ecx, esi
// 0047092b  894608               mov dword ptr [esi + 8], eax
// 0047092e  e89d711500           call 0x5c7ad0
// 00470933  5f                   pop edi
// 00470934  5e                   pop esi
// 00470935  5d                   pop ebp
// 00470936  5b                   pop ebx
// 00470937  c20800               ret 8
// 0047093a  3bfb                 cmp edi, ebx
// 0047093c  7d12                 jge 0x470950
// 0047093e  55                   push ebp
// 0047093f  8bce                 mov ecx, esi
// 00470941  895e08               mov dword ptr [esi + 8], ebx
// 00470944  e887711500           call 0x5c7ad0
// 00470949  5f                   pop edi
// 0047094a  5e                   pop esi
// 0047094b  5d                   pop ebp
// 0047094c  5b                   pop ebx
// 0047094d  c20800               ret 8
// 00470950  d905104c7900         fld dword ptr [0x794c10]
// 00470956  8bc1                 mov eax, ecx
// 00470958  03c0                 add eax, eax
// 0047095a  d95c2418             fstp dword ptr [esp + 0x18]
// 0047095e  03c0                 add eax, eax
// 00470960  3d801a0600           cmp eax, 0x61a80
// 00470965  7608                 jbe 0x47096f
// 00470967  d9050c4c7900         fld dword ptr [0x794c0c]
// 0047096d  eb0d                 jmp 0x47097c
// 0047096f  3d00fa0000           cmp eax, 0xfa00
// 00470974  760a                 jbe 0x470980
// 00470976  d905084c7900         fld dword ptr [0x794c08]
// 0047097c  d95c2418             fstp dword ptr [esp + 0x18]
// 00470980  8bd9                 mov ebx, ecx
// 00470982  895c2414             mov dword ptr [esp + 0x14], ebx
// 00470986  db442414             fild dword ptr [esp + 0x14]
// 0047098a  d84c2418             fmul dword ptr [esp + 0x18]
// 0047098e  e86de81a00           call 0x61f200
// 00470993  2bc3                 sub eax, ebx
// 00470995  03c7                 add eax, edi
// 00470997  894608               mov dword ptr [esi + 8], eax
// 0047099a  8b0d5c778b00         mov ecx, dword ptr [0x8b775c]
// 004709a0  3bc1                 cmp eax, ecx
// 004709a2  7d03                 jge 0x4709a7
// 004709a4  894e08               mov dword ptr [esi + 8], ecx
// 004709a7  55                   push ebp
// 004709a8  8bce                 mov ecx, esi
// 004709aa  e821711500           call 0x5c7ad0
// 004709af  5f                   pop edi
// 004709b0  5e                   pop esi
// 004709b1  5d                   pop ebp
// 004709b2  5b                   pop ebx
// 004709b3  c20800               ret 8
// 004709b6  b856555555           mov eax, 0x55555556
// 004709bb  f7e9                 imul ecx
// 004709bd  8bc2                 mov eax, edx
// 004709bf  c1e81f               shr eax, 0x1f
// 004709c2  03c2                 add eax, edx
// 004709c4  3bf8                 cmp edi, eax
// 004709c6  7f19                 jg 0x4709e1
// 004709c8  807c241800           cmp byte ptr [esp + 0x18], 0
// 004709cd  7412                 je 0x4709e1
// 004709cf  3bfb                 cmp edi, ebx
// 004709d1  7e0e                 jle 0x4709e1
// 004709d3  3bfd                 cmp edi, ebp
// 004709d5  7c02                 jl 0x4709d9
// 004709d7  8bfd                 mov edi, ebp
// 004709d9  57                   push edi
// 004709da  8bce                 mov ecx, esi
// 004709dc  e8ef701500           call 0x5c7ad0
// 004709e1  5f                   pop edi
// 004709e2  5e                   pop esi
// 004709e3  5d                   pop ebp
// 004709e4  5b                   pop ebx
// 004709e5  c20800               ret 8
// library rbxgs/tool\DragUtilities.cpp (function ?resize@?$Array@PAVPrimitive@RBX@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
