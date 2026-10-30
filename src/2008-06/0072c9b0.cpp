// from server: 100% by auto
// roc 2008-06 0072c9b0  unit: CXTPRibbonTheme  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072c9b0
//
// 0072c9b0  83ec20               sub esp, 0x20
// 0072c9b3  53                   push ebx
// 0072c9b4  55                   push ebp
// 0072c9b5  33ed                 xor ebp, ebp
// 0072c9b7  56                   push esi
// 0072c9b8  57                   push edi
// 0072c9b9  396c244c             cmp dword ptr [esp + 0x4c], ebp
// 0072c9bd  0f849c000000         je 0x72ca5f
// 0072c9c3  68a0208600           push 0x8620a0
// 0072c9c8  e8238d0000           call 0x7356f0
// 0072c9cd  8bf0                 mov esi, eax
// 0072c9cf  3bf5                 cmp esi, ebp
// 0072c9d1  0f8488000000         je 0x72ca5f
// 0072c9d7  33c0                 xor eax, eax
// 0072c9d9  396c245c             cmp dword ptr [esp + 0x5c], ebp
// 0072c9dd  7505                 jne 0x72c9e4
// 0072c9df  8d4503               lea eax, [ebp + 3]
// 0072c9e2  eb10                 jmp 0x72c9f4
// 0072c9e4  396c2450             cmp dword ptr [esp + 0x50], ebp
// 0072c9e8  740a                 je 0x72c9f4
// 0072c9ea  33c0                 xor eax, eax
// 0072c9ec  396c2454             cmp dword ptr [esp + 0x54], ebp
// 0072c9f0  0f95c0               setne al
// 0072c9f3  40                   inc eax
// 0072c9f4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0072c9f8  83f901               cmp ecx, 1
// 0072c9fb  7505                 jne 0x72ca02
// 0072c9fd  83c004               add eax, 4
// 0072ca00  eb08                 jmp 0x72ca0a
// 0072ca02  83f902               cmp ecx, 2
// 0072ca05  7503                 jne 0x72ca0a
// 0072ca07  83c008               add eax, 8
// 0072ca0a  6a0c                 push 0xc
// 0072ca0c  50                   push eax
// 0072ca0d  8d442428             lea eax, [esp + 0x28]
// 0072ca11  50                   push eax
// 0072ca12  8bce                 mov ecx, esi
// 0072ca14  33ff                 xor edi, edi
// 0072ca16  33db                 xor ebx, ebx
// 0072ca18  896c2428             mov dword ptr [esp + 0x28], ebp
// 0072ca1c  e80f0d0600           call 0x78d730
// 0072ca21  83ec10               sub esp, 0x10
// 0072ca24  8bcc                 mov ecx, esp
// 0072ca26  8939                 mov dword ptr [ecx], edi
// 0072ca28  895904               mov dword ptr [ecx + 4], ebx
// 0072ca2b  896908               mov dword ptr [ecx + 8], ebp
// 0072ca2e  83ec10               sub esp, 0x10
// 0072ca31  8bd5                 mov edx, ebp
// 0072ca33  89510c               mov dword ptr [ecx + 0xc], edx
// 0072ca36  8b10                 mov edx, dword ptr [eax]
// 0072ca38  8bcc                 mov ecx, esp
// 0072ca3a  8911                 mov dword ptr [ecx], edx
// 0072ca3c  8b5004               mov edx, dword ptr [eax + 4]
// 0072ca3f  895104               mov dword ptr [ecx + 4], edx
// 0072ca42  8b5008               mov edx, dword ptr [eax + 8]
// 0072ca45  8b400c               mov eax, dword ptr [eax + 0xc]
// 0072ca48  895108               mov dword ptr [ecx + 8], edx
// 0072ca4b  8b542458             mov edx, dword ptr [esp + 0x58]
// 0072ca4f  89410c               mov dword ptr [ecx + 0xc], eax
// 0072ca52  8d4c245c             lea ecx, [esp + 0x5c]
// 0072ca56  51                   push ecx
// 0072ca57  52                   push edx
// 0072ca58  8bce                 mov ecx, esi
// 0072ca5a  e8a1050600           call 0x78d000
// 0072ca5f  8b442434             mov eax, dword ptr [esp + 0x34]
// 0072ca63  5f                   pop edi
// 0072ca64  5e                   pop esi
// 0072ca65  5d                   pop ebp
// 0072ca66  c7000d000000         mov dword ptr [eax], 0xd
// 0072ca6c  c740040d000000       mov dword ptr [eax + 4], 0xd
// 0072ca73  5b                   pop ebx
// 0072ca74  83c420               add esp, 0x20
// 0072ca77  c22c00               ret 0x2c
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlCheckBoxMark@CXTPRibbonTheme@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
