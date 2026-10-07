// roc 2012-06 00a06630  unit: CXTPRibbonTheme  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a06630
//
// 00a06630  83ec20               sub esp, 0x20
// 00a06633  53                   push ebx
// 00a06634  55                   push ebp
// 00a06635  33ed                 xor ebp, ebp
// 00a06637  56                   push esi
// 00a06638  57                   push edi
// 00a06639  396c244c             cmp dword ptr [esp + 0x4c], ebp
// 00a0663d  0f848b000000         je 0xa066ce
// 00a06643  68f0c1c100           push 0xc1c1f0
// 00a06648  e823120000           call 0xa07870
// 00a0664d  8bf0                 mov esi, eax
// 00a0664f  3bf5                 cmp esi, ebp
// 00a06651  747b                 je 0xa066ce
// 00a06653  33c0                 xor eax, eax
// 00a06655  396c245c             cmp dword ptr [esp + 0x5c], ebp
// 00a06659  7505                 jne 0xa06660
// 00a0665b  8d4503               lea eax, [ebp + 3]
// 00a0665e  eb10                 jmp 0xa06670
// 00a06660  396c2450             cmp dword ptr [esp + 0x50], ebp
// 00a06664  740a                 je 0xa06670
// 00a06666  33c0                 xor eax, eax
// 00a06668  396c2454             cmp dword ptr [esp + 0x54], ebp
// 00a0666c  0f95c0               setne al
// 00a0666f  40                   inc eax
// 00a06670  396c2458             cmp dword ptr [esp + 0x58], ebp
// 00a06674  7403                 je 0xa06679
// 00a06676  83c004               add eax, 4
// 00a06679  6a08                 push 8
// 00a0667b  50                   push eax
// 00a0667c  8d442428             lea eax, [esp + 0x28]
// 00a06680  50                   push eax
// 00a06681  8bce                 mov ecx, esi
// 00a06683  33ff                 xor edi, edi
// 00a06685  33db                 xor ebx, ebx
// 00a06687  896c2428             mov dword ptr [esp + 0x28], ebp
// 00a0668b  e860f40500           call 0xa65af0
// 00a06690  83ec10               sub esp, 0x10
// 00a06693  8bcc                 mov ecx, esp
// 00a06695  8939                 mov dword ptr [ecx], edi
// 00a06697  895904               mov dword ptr [ecx + 4], ebx
// 00a0669a  896908               mov dword ptr [ecx + 8], ebp
// 00a0669d  83ec10               sub esp, 0x10
// 00a066a0  8bd5                 mov edx, ebp
// 00a066a2  89510c               mov dword ptr [ecx + 0xc], edx
// 00a066a5  8b10                 mov edx, dword ptr [eax]
// 00a066a7  8bcc                 mov ecx, esp
// 00a066a9  8911                 mov dword ptr [ecx], edx
// 00a066ab  8b5004               mov edx, dword ptr [eax + 4]
// 00a066ae  895104               mov dword ptr [ecx + 4], edx
// 00a066b1  8b5008               mov edx, dword ptr [eax + 8]
// 00a066b4  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a066b7  895108               mov dword ptr [ecx + 8], edx
// 00a066ba  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a066be  89410c               mov dword ptr [ecx + 0xc], eax
// 00a066c1  8d4c245c             lea ecx, [esp + 0x5c]
// 00a066c5  51                   push ecx
// 00a066c6  52                   push edx
// 00a066c7  8bce                 mov ecx, esi
// 00a066c9  e8f2ec0500           call 0xa653c0
// 00a066ce  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a066d2  5f                   pop edi
// 00a066d3  5e                   pop esi
// 00a066d4  5d                   pop ebp
// 00a066d5  c7000d000000         mov dword ptr [eax], 0xd
// 00a066db  c740040d000000       mov dword ptr [eax + 4], 0xd
// 00a066e2  5b                   pop ebx
// 00a066e3  83c420               add esp, 0x20
// 00a066e6  c22c00               ret 0x2c
// library xtp-15.2.1/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawControlRadioButtonMark@CXTPRibbonTheme@@MAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonTheme.cpp
