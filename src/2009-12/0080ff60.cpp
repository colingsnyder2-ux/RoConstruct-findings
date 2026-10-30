// roc 2009-12 0080ff60  unit: CXTPImageManagerIcon  size: 383 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080ff60
//
// 0080ff60  6aff                 push -1
// 0080ff62  68a89f9500           push 0x959fa8
// 0080ff67  64a100000000         mov eax, dword ptr fs:[0]
// 0080ff6d  50                   push eax
// 0080ff6e  83ec10               sub esp, 0x10
// 0080ff71  53                   push ebx
// 0080ff72  55                   push ebp
// 0080ff73  56                   push esi
// 0080ff74  57                   push edi
// 0080ff75  a10052b600           mov eax, dword ptr [0xb65200]
// 0080ff7a  33c4                 xor eax, esp
// 0080ff7c  50                   push eax
// 0080ff7d  8d442424             lea eax, [esp + 0x24]
// 0080ff81  64a300000000         mov dword ptr fs:[0], eax
// 0080ff87  8be9                 mov ebp, ecx
// 0080ff89  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0080ff8d  8b07                 mov eax, dword ptr [edi]
// 0080ff8f  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0080ff95  68a8329f00           push 0x9f32a8
// 0080ff9a  8bcf                 mov ecx, edi
// 0080ff9c  8d5d28               lea ebx, [ebp + 0x28]
// 0080ff9f  ffd2                 call edx
// 0080ffa1  8bf0                 mov esi, eax
// 0080ffa3  8974241c             mov dword ptr [esp + 0x1c], esi
// 0080ffa7  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0080ffaa  8b16                 mov edx, dword ptr [esi]
// 0080ffac  6a01                 push 1
// 0080ffae  50                   push eax
// 0080ffaf  8b4204               mov eax, dword ptr [edx + 4]
// 0080ffb2  8bce                 mov ecx, esi
// 0080ffb4  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0080ffbc  ffd0                 call eax
// 0080ffbe  837f2800             cmp dword ptr [edi + 0x28], 0
// 0080ffc2  89442434             mov dword ptr [esp + 0x34], eax
// 0080ffc6  0f857c000000         jne 0x810048
// 0080ffcc  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0080ffcf  f7d8                 neg eax
// 0080ffd1  1bc0                 sbb eax, eax
// 0080ffd3  89442418             mov dword ptr [esp + 0x18], eax
// 0080ffd7  0f84da000000         je 0x8100b7
// 0080ffdd  8d4900               lea ecx, [ecx]
// 0080ffe0  8d4c2420             lea ecx, [esp + 0x20]
// 0080ffe4  51                   push ecx
// 0080ffe5  8d542418             lea edx, [esp + 0x18]
// 0080ffe9  52                   push edx
// 0080ffea  8d442420             lea eax, [esp + 0x20]
// 0080ffee  50                   push eax
// 0080ffef  8bcb                 mov ecx, ebx
// 0080fff1  e82a98ffff           call 0x809820
// 0080fff6  8b16                 mov edx, dword ptr [esi]
// 0080fff8  8b5208               mov edx, dword ptr [edx + 8]
// 0080fffb  8d442434             lea eax, [esp + 0x34]
// 0080ffff  50                   push eax
// 00810000  8bce                 mov ecx, esi
// 00810002  ffd2                 call edx
// 00810004  8bf8                 mov edi, eax
// 00810006  897c2420             mov dword ptr [esp + 0x20], edi
// 0081000a  8d442414             lea eax, [esp + 0x14]
// 0081000e  50                   push eax
// 0081000f  68a4329f00           push 0x9f32a4
// 00810014  57                   push edi
// 00810015  c644243801           mov byte ptr [esp + 0x38], 1
// 0081001a  e8b1090400           call 0x8509d0
// 0081001f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00810023  83c40c               add esp, 0xc
// 00810026  57                   push edi
// 00810027  51                   push ecx
// 00810028  8bcd                 mov ecx, ebp
// 0081002a  e8a1fbffff           call 0x80fbd0
// 0081002f  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00810034  85ff                 test edi, edi
// 00810036  7407                 je 0x81003f
// 00810038  8bcf                 mov ecx, edi
// 0081003a  e89d3dfeff           call 0x7f3ddc
// 0081003f  837c241800           cmp dword ptr [esp + 0x18], 0
// 00810044  759a                 jne 0x80ffe0
// 00810046  eb6f                 jmp 0x8100b7
// 00810048  8bcd                 mov ecx, ebp
// 0081004a  e841d8ffff           call 0x80d890
// 0081004f  837c243400           cmp dword ptr [esp + 0x34], 0
// 00810054  7461                 je 0x8100b7
// 00810056  b302                 mov bl, 2
// 00810058  eb06                 jmp 0x810060
// 0081005a  8d9b00000000         lea ebx, [ebx]
// 00810060  8b16                 mov edx, dword ptr [esi]
// 00810062  8b5208               mov edx, dword ptr [edx + 8]
// 00810065  8d442434             lea eax, [esp + 0x34]
// 00810069  50                   push eax
// 0081006a  8bce                 mov ecx, esi
// 0081006c  ffd2                 call edx
// 0081006e  8bf8                 mov edi, eax
// 00810070  897c2420             mov dword ptr [esp + 0x20], edi
// 00810074  8d442418             lea eax, [esp + 0x18]
// 00810078  50                   push eax
// 00810079  68a4329f00           push 0x9f32a4
// 0081007e  57                   push edi
// 0081007f  885c2438             mov byte ptr [esp + 0x38], bl
// 00810083  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0081008b  e840090400           call 0x8509d0
// 00810090  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00810094  83c40c               add esp, 0xc
// 00810097  57                   push edi
// 00810098  51                   push ecx
// 00810099  8bcd                 mov ecx, ebp
// 0081009b  e830fbffff           call 0x80fbd0
// 008100a0  c644242c00           mov byte ptr [esp + 0x2c], 0
// 008100a5  85ff                 test edi, edi
// 008100a7  7407                 je 0x8100b0
// 008100a9  8bcf                 mov ecx, edi
// 008100ab  e82c3dfeff           call 0x7f3ddc
// 008100b0  837c243400           cmp dword ptr [esp + 0x34], 0
// 008100b5  75a9                 jne 0x810060
// 008100b7  8b16                 mov edx, dword ptr [esi]
// 008100b9  8b02                 mov eax, dword ptr [edx]
// 008100bb  6a01                 push 1
// 008100bd  8bce                 mov ecx, esi
// 008100bf  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008100c7  ffd0                 call eax
// 008100c9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008100cd  64890d00000000       mov dword ptr fs:[0], ecx
// 008100d4  59                   pop ecx
// 008100d5  5f                   pop edi
// 008100d6  5e                   pop esi
// 008100d7  5d                   pop ebp
// 008100d8  5b                   pop ebx
// 008100d9  83c41c               add esp, 0x1c
// 008100dc  c20400               ret 4
// copied from an identical function in another client (function ?DoPropExchange@CXTPImageManager@@QAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp