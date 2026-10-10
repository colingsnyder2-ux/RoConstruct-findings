// roc 2012-06 00a6ad30  unit: CXTCaptionButton  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6ad30
//
// 00a6ad30  83ec40               sub esp, 0x40
// 00a6ad33  56                   push esi
// 00a6ad34  57                   push edi
// 00a6ad35  6a30                 push 0x30
// 00a6ad37  8d44241c             lea eax, [esp + 0x1c]
// 00a6ad3b  6a00                 push 0
// 00a6ad3d  50                   push eax
// 00a6ad3e  8bf1                 mov esi, ecx
// 00a6ad40  e82f86f1ff           call 0x983374
// 00a6ad45  83c40c               add esp, 0xc
// 00a6ad48  8bce                 mov ecx, esi
// 00a6ad4a  c744241804000000     mov dword ptr [esp + 0x18], 4
// 00a6ad52  e879ea0200           call 0xa997d0
// 00a6ad57  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00a6ad5a  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a6ad5e  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00a6ad66  ff15e83bb200         call dword ptr [0xb23be8]
// 00a6ad6c  3bc7                 cmp eax, edi
// 00a6ad6e  7505                 jne 0xa6ad75
// 00a6ad70  834c242810           or dword ptr [esp + 0x28], 0x10
// 00a6ad75  83bea400000000       cmp dword ptr [esi + 0xa4], 0
// 00a6ad7c  7405                 je 0xa6ad83
// 00a6ad7e  834c242801           or dword ptr [esp + 0x28], 1
// 00a6ad83  6a00                 push 0
// 00a6ad85  6a00                 push 0
// 00a6ad87  6829010000           push 0x129
// 00a6ad8c  57                   push edi
// 00a6ad8d  ff15043cb200         call dword ptr [0xb23c04]
// 00a6ad93  a802                 test al, 2
// 00a6ad95  7408                 je 0xa6ad9f
// 00a6ad97  814c242800010000     or dword ptr [esp + 0x28], 0x100
// 00a6ad9f  a801                 test al, 1
// 00a6ada1  7408                 je 0xa6adab
// 00a6ada3  814c242800020000     or dword ptr [esp + 0x28], 0x200
// 00a6adab  8bce                 mov ecx, esi
// 00a6adad  e8fae90200           call 0xa997ac
// 00a6adb2  85c0                 test eax, eax
// 00a6adb4  7505                 jne 0xa6adbb
// 00a6adb6  834c242804           or dword ptr [esp + 0x28], 4
// 00a6adbb  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a6adbf  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a6adc2  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a6adc6  85c0                 test eax, eax
// 00a6adc8  7506                 jne 0xa6add0
// 00a6adca  89442430             mov dword ptr [esp + 0x30], eax
// 00a6adce  eb07                 jmp 0xa6add7
// 00a6add0  8b5004               mov edx, dword ptr [eax + 4]
// 00a6add3  89542430             mov dword ptr [esp + 0x30], edx
// 00a6add7  56                   push esi
// 00a6add8  8d4c240c             lea ecx, [esp + 0xc]
// 00a6addc  e8bfa3f6ff           call 0x9d51a0
// 00a6ade1  8b08                 mov ecx, dword ptr [eax]
// 00a6ade3  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a6ade7  8b5004               mov edx, dword ptr [eax + 4]
// 00a6adea  89542438             mov dword ptr [esp + 0x38], edx
// 00a6adee  8b4808               mov ecx, dword ptr [eax + 8]
// 00a6adf1  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00a6adf5  8b500c               mov edx, dword ptr [eax + 0xc]
// 00a6adf8  8b06                 mov eax, dword ptr [esi]
// 00a6adfa  8d4c2418             lea ecx, [esp + 0x18]
// 00a6adfe  89542440             mov dword ptr [esp + 0x40], edx
// 00a6ae02  8b9048010000         mov edx, dword ptr [eax + 0x148]
// 00a6ae08  51                   push ecx
// 00a6ae09  8bce                 mov ecx, esi
// 00a6ae0b  ffd2                 call edx
// 00a6ae0d  5f                   pop edi
// 00a6ae0e  5e                   pop esi
// 00a6ae0f  83c440               add esp, 0x40
// 00a6ae12  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Controls\Deprecated\XTButton.cpp (function ?OnDraw@CXTButton@@MAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTButton.cpp
