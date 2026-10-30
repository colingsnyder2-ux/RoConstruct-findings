// roc 2007-03 00692010  unit: seg_00690000  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00692010
//
// 00692010  83ec20               sub esp, 0x20
// 00692013  53                   push ebx
// 00692014  55                   push ebp
// 00692015  33ed                 xor ebp, ebp
// 00692017  396c2444             cmp dword ptr [esp + 0x44], ebp
// 0069201b  56                   push esi
// 0069201c  57                   push edi
// 0069201d  0f848f000000         je 0x6920b2
// 00692023  687c097d00           push 0x7d097c
// 00692028  e803420100           call 0x6a6230
// 0069202d  8bf0                 mov esi, eax
// 0069202f  3bf5                 cmp esi, ebp
// 00692031  747f                 je 0x6920b2
// 00692033  33c0                 xor eax, eax
// 00692035  396c245c             cmp dword ptr [esp + 0x5c], ebp
// 00692039  7507                 jne 0x692042
// 0069203b  b803000000           mov eax, 3
// 00692040  eb12                 jmp 0x692054
// 00692042  396c2450             cmp dword ptr [esp + 0x50], ebp
// 00692046  740c                 je 0x692054
// 00692048  33c0                 xor eax, eax
// 0069204a  396c2454             cmp dword ptr [esp + 0x54], ebp
// 0069204e  0f95c0               setne al
// 00692051  83c001               add eax, 1
// 00692054  396c2458             cmp dword ptr [esp + 0x58], ebp
// 00692058  7403                 je 0x69205d
// 0069205a  83c004               add eax, 4
// 0069205d  6a08                 push 8
// 0069205f  50                   push eax
// 00692060  8d442428             lea eax, [esp + 0x28]
// 00692064  50                   push eax
// 00692065  8bce                 mov ecx, esi
// 00692067  33ff                 xor edi, edi
// 00692069  33db                 xor ebx, ebx
// 0069206b  896c2428             mov dword ptr [esp + 0x28], ebp
// 0069206f  e8ec0e0600           call 0x6f2f60
// 00692074  83ec10               sub esp, 0x10
// 00692077  8bcc                 mov ecx, esp
// 00692079  8939                 mov dword ptr [ecx], edi
// 0069207b  895904               mov dword ptr [ecx + 4], ebx
// 0069207e  896908               mov dword ptr [ecx + 8], ebp
// 00692081  83ec10               sub esp, 0x10
// 00692084  8bd5                 mov edx, ebp
// 00692086  89510c               mov dword ptr [ecx + 0xc], edx
// 00692089  8b10                 mov edx, dword ptr [eax]
// 0069208b  8bcc                 mov ecx, esp
// 0069208d  8911                 mov dword ptr [ecx], edx
// 0069208f  8b5004               mov edx, dword ptr [eax + 4]
// 00692092  895104               mov dword ptr [ecx + 4], edx
// 00692095  8b5008               mov edx, dword ptr [eax + 8]
// 00692098  8b400c               mov eax, dword ptr [eax + 0xc]
// 0069209b  895108               mov dword ptr [ecx + 8], edx
// 0069209e  8b542458             mov edx, dword ptr [esp + 0x58]
// 006920a2  89410c               mov dword ptr [ecx + 0xc], eax
// 006920a5  8d4c245c             lea ecx, [esp + 0x5c]
// 006920a9  51                   push ecx
// 006920aa  52                   push edx
// 006920ab  8bce                 mov ecx, esi
// 006920ad  e86e070600           call 0x6f2820
// 006920b2  8b442434             mov eax, dword ptr [esp + 0x34]
// 006920b6  5f                   pop edi
// 006920b7  5e                   pop esi
// 006920b8  5d                   pop ebp
// 006920b9  c7000d000000         mov dword ptr [eax], 0xd
// 006920bf  c740040d000000       mov dword ptr [eax + 4], 0xd
// 006920c6  5b                   pop ebx
// 006920c7  83c420               add esp, 0x20
// 006920ca  c22c00               ret 0x2c
// library xtp-11.2.2-vc8/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlRadioButtonMark@CXTPRibbonTheme@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonTheme.cpp
