// from server: 100% by auto
// roc 2011-06 0088df80  unit: CXTPRibbonTheme  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088df80
//
// 0088df80  83ec20               sub esp, 0x20
// 0088df83  53                   push ebx
// 0088df84  55                   push ebp
// 0088df85  33ed                 xor ebp, ebp
// 0088df87  56                   push esi
// 0088df88  57                   push edi
// 0088df89  396c244c             cmp dword ptr [esp + 0x4c], ebp
// 0088df8d  0f849c000000         je 0x88e02f
// 0088df93  68200bad00           push 0xad0b20
// 0088df98  e8f3120000           call 0x88f290
// 0088df9d  8bf0                 mov esi, eax
// 0088df9f  3bf5                 cmp esi, ebp
// 0088dfa1  0f8488000000         je 0x88e02f
// 0088dfa7  33c0                 xor eax, eax
// 0088dfa9  396c245c             cmp dword ptr [esp + 0x5c], ebp
// 0088dfad  7505                 jne 0x88dfb4
// 0088dfaf  8d4503               lea eax, [ebp + 3]
// 0088dfb2  eb10                 jmp 0x88dfc4
// 0088dfb4  396c2450             cmp dword ptr [esp + 0x50], ebp
// 0088dfb8  740a                 je 0x88dfc4
// 0088dfba  33c0                 xor eax, eax
// 0088dfbc  396c2454             cmp dword ptr [esp + 0x54], ebp
// 0088dfc0  0f95c0               setne al
// 0088dfc3  40                   inc eax
// 0088dfc4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0088dfc8  83f901               cmp ecx, 1
// 0088dfcb  7505                 jne 0x88dfd2
// 0088dfcd  83c004               add eax, 4
// 0088dfd0  eb08                 jmp 0x88dfda
// 0088dfd2  83f902               cmp ecx, 2
// 0088dfd5  7503                 jne 0x88dfda
// 0088dfd7  83c008               add eax, 8
// 0088dfda  6a0c                 push 0xc
// 0088dfdc  50                   push eax
// 0088dfdd  8d442428             lea eax, [esp + 0x28]
// 0088dfe1  50                   push eax
// 0088dfe2  8bce                 mov ecx, esi
// 0088dfe4  33ff                 xor edi, edi
// 0088dfe6  33db                 xor ebx, ebx
// 0088dfe8  896c2428             mov dword ptr [esp + 0x28], ebp
// 0088dfec  e81ff70500           call 0x8ed710
// 0088dff1  83ec10               sub esp, 0x10
// 0088dff4  8bcc                 mov ecx, esp
// 0088dff6  8939                 mov dword ptr [ecx], edi
// 0088dff8  895904               mov dword ptr [ecx + 4], ebx
// 0088dffb  896908               mov dword ptr [ecx + 8], ebp
// 0088dffe  83ec10               sub esp, 0x10
// 0088e001  8bd5                 mov edx, ebp
// 0088e003  89510c               mov dword ptr [ecx + 0xc], edx
// 0088e006  8b10                 mov edx, dword ptr [eax]
// 0088e008  8bcc                 mov ecx, esp
// 0088e00a  8911                 mov dword ptr [ecx], edx
// 0088e00c  8b5004               mov edx, dword ptr [eax + 4]
// 0088e00f  895104               mov dword ptr [ecx + 4], edx
// 0088e012  8b5008               mov edx, dword ptr [eax + 8]
// 0088e015  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088e018  895108               mov dword ptr [ecx + 8], edx
// 0088e01b  8b542458             mov edx, dword ptr [esp + 0x58]
// 0088e01f  89410c               mov dword ptr [ecx + 0xc], eax
// 0088e022  8d4c245c             lea ecx, [esp + 0x5c]
// 0088e026  51                   push ecx
// 0088e027  52                   push edx
// 0088e028  8bce                 mov ecx, esi
// 0088e02a  e8b1ef0500           call 0x8ecfe0
// 0088e02f  8b442434             mov eax, dword ptr [esp + 0x34]
// 0088e033  5f                   pop edi
// 0088e034  5e                   pop esi
// 0088e035  5d                   pop ebp
// 0088e036  c7000d000000         mov dword ptr [eax], 0xd
// 0088e03c  c740040d000000       mov dword ptr [eax + 4], 0xd
// 0088e043  5b                   pop ebx
// 0088e044  83c420               add esp, 0x20
// 0088e047  c22c00               ret 0x2c
// library xtp-15.2.1/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlCheckBoxMark@CXTPRibbonTheme@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonTheme.cpp
