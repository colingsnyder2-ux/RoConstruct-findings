// from server: 100% by auto
// roc 2009-06 005a49f0  unit: seg_005a0000  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a49f0
//
// 005a49f0  83ec08               sub esp, 8
// 005a49f3  53                   push ebx
// 005a49f4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005a49f8  837b3c00             cmp dword ptr [ebx + 0x3c], 0
// 005a49fc  55                   push ebp
// 005a49fd  8bab54010000         mov ebp, dword ptr [ebx + 0x154]
// 005a4a03  57                   push edi
// 005a4a04  8b7b44               mov edi, dword ptr [ebx + 0x44]
// 005a4a07  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a4a0f  7e5f                 jle 0x5a4a70
// 005a4a11  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a4a15  8d0c8500000000       lea ecx, [eax*4]
// 005a4a1c  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a4a20  56                   push esi
// 005a4a21  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a4a25  83c50c               add ebp, 0xc
// 005a4a28  2bc6                 sub eax, esi
// 005a4a2a  894c2414             mov dword ptr [esp + 0x14], ecx
// 005a4a2e  89442410             mov dword ptr [esp + 0x10], eax
// 005a4a32  eb04                 jmp 0x5a4a38
// 005a4a34  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a4a38  8b570c               mov edx, dword ptr [edi + 0xc]
// 005a4a3b  0faf54242c           imul edx, dword ptr [esp + 0x2c]
// 005a4a40  8b0430               mov eax, dword ptr [eax + esi]
// 005a4a43  8d0c90               lea ecx, [eax + edx*4]
// 005a4a46  8b16                 mov edx, dword ptr [esi]
// 005a4a48  03542414             add edx, dword ptr [esp + 0x14]
// 005a4a4c  8b4500               mov eax, dword ptr [ebp]
// 005a4a4f  51                   push ecx
// 005a4a50  52                   push edx
// 005a4a51  57                   push edi
// 005a4a52  53                   push ebx
// 005a4a53  ffd0                 call eax
// 005a4a55  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a4a59  40                   inc eax
// 005a4a5a  83c410               add esp, 0x10
// 005a4a5d  83c604               add esi, 4
// 005a4a60  83c504               add ebp, 4
// 005a4a63  83c754               add edi, 0x54
// 005a4a66  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 005a4a69  8944241c             mov dword ptr [esp + 0x1c], eax
// 005a4a6d  7cc5                 jl 0x5a4a34
// 005a4a6f  5e                   pop esi
// 005a4a70  5f                   pop edi
// 005a4a71  5d                   pop ebp
// 005a4a72  5b                   pop ebx
// 005a4a73  83c408               add esp, 8
// 005a4a76  c3                   ret 
// library jpeg-6b/jcsample.c (function _sep_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
