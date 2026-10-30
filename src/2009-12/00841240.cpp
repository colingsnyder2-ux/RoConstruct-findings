// roc 2009-12 00841240  unit: PAUXTP_COMMANDBARS_CATEGORYINFO::?$CArray  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841240
//
// 00841240  6aff                 push -1
// 00841242  6844cf9500           push 0x95cf44
// 00841247  64a100000000         mov eax, dword ptr fs:[0]
// 0084124d  50                   push eax
// 0084124e  83ec08               sub esp, 8
// 00841251  53                   push ebx
// 00841252  55                   push ebp
// 00841253  56                   push esi
// 00841254  57                   push edi
// 00841255  a10052b600           mov eax, dword ptr [0xb65200]
// 0084125a  33c4                 xor eax, esp
// 0084125c  50                   push eax
// 0084125d  8d44241c             lea eax, [esp + 0x1c]
// 00841261  64a300000000         mov dword ptr fs:[0], eax
// 00841267  8bf9                 mov edi, ecx
// 00841269  897c2414             mov dword ptr [esp + 0x14], edi
// 0084126d  8d4c2418             lea ecx, [esp + 0x18]
// 00841271  ff1574de9800         call dword ptr [0x98de74]
// 00841277  33db                 xor ebx, ebx
// 00841279  895c2424             mov dword ptr [esp + 0x24], ebx
// 0084127d  e81ed60200           call 0x86e8a0
// 00841282  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00841286  8b10                 mov edx, dword ptr [eax]
// 00841288  8b5208               mov edx, dword ptr [edx + 8]
// 0084128b  51                   push ecx
// 0084128c  8d4c241c             lea ecx, [esp + 0x1c]
// 00841290  51                   push ecx
// 00841291  8bc8                 mov ecx, eax
// 00841293  ffd2                 call edx
// 00841295  6a08                 push 8
// 00841297  e8c425fbff           call 0x7f3860
// 0084129c  8bf0                 mov esi, eax
// 0084129e  83c404               add esp, 4
// 008412a1  8974242c             mov dword ptr [esp + 0x2c], esi
// 008412a5  c644242401           mov byte ptr [esp + 0x24], 1
// 008412aa  3bf3                 cmp esi, ebx
// 008412ac  7423                 je 0x8412d1
// 008412ae  8b8738010000         mov eax, dword ptr [edi + 0x138]
// 008412b4  8b80b8000000         mov eax, dword ptr [eax + 0xb8]
// 008412ba  50                   push eax
// 008412bb  8d4c241c             lea ecx, [esp + 0x1c]
// 008412bf  ff1580de9800         call dword ptr [0x98de80]
// 008412c5  50                   push eax
// 008412c6  8bce                 mov ecx, esi
// 008412c8  e853f5ffff           call 0x840820
// 008412cd  8be8                 mov ebp, eax
// 008412cf  eb02                 jmp 0x8412d3
// 008412d1  33ed                 xor ebp, ebp
// 008412d3  83bf4401000000       cmp dword ptr [edi + 0x144], 0
// 008412da  c644242400           mov byte ptr [esp + 0x24], 0
// 008412df  7e64                 jle 0x841345
// 008412e1  85db                 test ebx, ebx
// 008412e3  0f8c9a000000         jl 0x841383
// 008412e9  3b9f44010000         cmp ebx, dword ptr [edi + 0x144]
// 008412ef  0f8d8e000000         jge 0x841383
// 008412f5  8b8f40010000         mov ecx, dword ptr [edi + 0x140]
// 008412fb  8b1499               mov edx, dword ptr [ecx + ebx*4]
// 008412fe  8b7a04               mov edi, dword ptr [edx + 4]
// 00841301  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00841304  33f6                 xor esi, esi
// 00841306  85c0                 test eax, eax
// 00841308  7e2c                 jle 0x841336
// 0084130a  85f6                 test esi, esi
// 0084130c  7c11                 jl 0x84131f
// 0084130e  3bf0                 cmp esi, eax
// 00841310  7d0d                 jge 0x84131f
// 00841312  3b772c               cmp esi, dword ptr [edi + 0x2c]
// 00841315  7d6c                 jge 0x841383
// 00841317  8b4728               mov eax, dword ptr [edi + 0x28]
// 0084131a  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0084131d  eb02                 jmp 0x841321
// 0084131f  33c0                 xor eax, eax
// 00841321  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00841324  6a00                 push 0
// 00841326  6aff                 push -1
// 00841328  50                   push eax
// 00841329  e8825f0000           call 0x8472b0
// 0084132e  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00841331  46                   inc esi
// 00841332  3bf0                 cmp esi, eax
// 00841334  7cd4                 jl 0x84130a
// 00841336  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0084133a  43                   inc ebx
// 0084133b  3b9944010000         cmp ebx, dword ptr [ecx + 0x144]
// 00841341  8bf9                 mov edi, ecx
// 00841343  7c9c                 jl 0x8412e1
// 00841345  8b442430             mov eax, dword ptr [esp + 0x30]
// 00841349  83f8ff               cmp eax, -1
// 0084134c  7506                 jne 0x841354
// 0084134e  8b8744010000         mov eax, dword ptr [edi + 0x144]
// 00841354  6a01                 push 1
// 00841356  55                   push ebp
// 00841357  50                   push eax
// 00841358  8d8f3c010000         lea ecx, [edi + 0x13c]
// 0084135e  e8ddc70a00           call 0x8edb40
// 00841363  8d4c2418             lea ecx, [esp + 0x18]
// 00841367  ff15c0de9800         call dword ptr [0x98dec0]
// 0084136d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00841371  64890d00000000       mov dword ptr fs:[0], ecx
// 00841378  59                   pop ecx
// 00841379  5f                   pop edi
// 0084137a  5e                   pop esi
// 0084137b  5d                   pop ebp
// 0084137c  5b                   pop ebx
// 0084137d  83c414               add esp, 0x14
// 00841380  c20800               ret 8
// 00841383  e88427fbff           call 0x7f3b0c
// copied from an identical function in another client (function ?InsertAllCommandsCategory@CXTPCustomizeCommandsPage@@QAEXIH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPCustomizeCommandsPage.cpp