// from server: 100% by auto
// roc 2012-06 00a06560  unit: CXTPRibbonTheme  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a06560
//
// 00a06560  83ec20               sub esp, 0x20
// 00a06563  53                   push ebx
// 00a06564  55                   push ebp
// 00a06565  33ed                 xor ebp, ebp
// 00a06567  56                   push esi
// 00a06568  57                   push edi
// 00a06569  396c244c             cmp dword ptr [esp + 0x4c], ebp
// 00a0656d  0f849c000000         je 0xa0660f
// 00a06573  68d8c1c100           push 0xc1c1d8
// 00a06578  e8f3120000           call 0xa07870
// 00a0657d  8bf0                 mov esi, eax
// 00a0657f  3bf5                 cmp esi, ebp
// 00a06581  0f8488000000         je 0xa0660f
// 00a06587  33c0                 xor eax, eax
// 00a06589  396c245c             cmp dword ptr [esp + 0x5c], ebp
// 00a0658d  7505                 jne 0xa06594
// 00a0658f  8d4503               lea eax, [ebp + 3]
// 00a06592  eb10                 jmp 0xa065a4
// 00a06594  396c2450             cmp dword ptr [esp + 0x50], ebp
// 00a06598  740a                 je 0xa065a4
// 00a0659a  33c0                 xor eax, eax
// 00a0659c  396c2454             cmp dword ptr [esp + 0x54], ebp
// 00a065a0  0f95c0               setne al
// 00a065a3  40                   inc eax
// 00a065a4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a065a8  83f901               cmp ecx, 1
// 00a065ab  7505                 jne 0xa065b2
// 00a065ad  83c004               add eax, 4
// 00a065b0  eb08                 jmp 0xa065ba
// 00a065b2  83f902               cmp ecx, 2
// 00a065b5  7503                 jne 0xa065ba
// 00a065b7  83c008               add eax, 8
// 00a065ba  6a0c                 push 0xc
// 00a065bc  50                   push eax
// 00a065bd  8d442428             lea eax, [esp + 0x28]
// 00a065c1  50                   push eax
// 00a065c2  8bce                 mov ecx, esi
// 00a065c4  33ff                 xor edi, edi
// 00a065c6  33db                 xor ebx, ebx
// 00a065c8  896c2428             mov dword ptr [esp + 0x28], ebp
// 00a065cc  e81ff50500           call 0xa65af0
// 00a065d1  83ec10               sub esp, 0x10
// 00a065d4  8bcc                 mov ecx, esp
// 00a065d6  8939                 mov dword ptr [ecx], edi
// 00a065d8  895904               mov dword ptr [ecx + 4], ebx
// 00a065db  896908               mov dword ptr [ecx + 8], ebp
// 00a065de  83ec10               sub esp, 0x10
// 00a065e1  8bd5                 mov edx, ebp
// 00a065e3  89510c               mov dword ptr [ecx + 0xc], edx
// 00a065e6  8b10                 mov edx, dword ptr [eax]
// 00a065e8  8bcc                 mov ecx, esp
// 00a065ea  8911                 mov dword ptr [ecx], edx
// 00a065ec  8b5004               mov edx, dword ptr [eax + 4]
// 00a065ef  895104               mov dword ptr [ecx + 4], edx
// 00a065f2  8b5008               mov edx, dword ptr [eax + 8]
// 00a065f5  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a065f8  895108               mov dword ptr [ecx + 8], edx
// 00a065fb  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a065ff  89410c               mov dword ptr [ecx + 0xc], eax
// 00a06602  8d4c245c             lea ecx, [esp + 0x5c]
// 00a06606  51                   push ecx
// 00a06607  52                   push edx
// 00a06608  8bce                 mov ecx, esi
// 00a0660a  e8b1ed0500           call 0xa653c0
// 00a0660f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a06613  5f                   pop edi
// 00a06614  5e                   pop esi
// 00a06615  5d                   pop ebp
// 00a06616  c7000d000000         mov dword ptr [eax], 0xd
// 00a0661c  c740040d000000       mov dword ptr [eax + 4], 0xd
// 00a06623  5b                   pop ebx
// 00a06624  83c420               add esp, 0x20
// 00a06627  c22c00               ret 0x2c
// library xtp-15.2.1/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlCheckBoxMark@CXTPRibbonTheme@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonTheme.cpp
