// roc 2009-12 007fb2a0  unit: CXTPControlComboBoxList  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fb2a0
//
// 007fb2a0  83ec10               sub esp, 0x10
// 007fb2a3  53                   push ebx
// 007fb2a4  55                   push ebp
// 007fb2a5  56                   push esi
// 007fb2a6  57                   push edi
// 007fb2a7  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007fb2ab  8bf1                 mov esi, ecx
// 007fb2ad  89be80010000         mov dword ptr [esi + 0x180], edi
// 007fb2b3  e8d8920000           call 0x804590
// 007fb2b8  05a4000000           add eax, 0xa4
// 007fb2bd  7403                 je 0x7fb2c2
// 007fb2bf  8b4004               mov eax, dword ptr [eax + 4]
// 007fb2c2  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 007fb2c8  6a01                 push 1
// 007fb2ca  50                   push eax
// 007fb2cb  8b4620               mov eax, dword ptr [esi + 0x20]
// 007fb2ce  6a30                 push 0x30
// 007fb2d0  50                   push eax
// 007fb2d1  ffd3                 call ebx
// 007fb2d3  8bce                 mov ecx, esi
// 007fb2d5  e816be0000           call 0x8070f0
// 007fb2da  85c0                 test eax, eax
// 007fb2dc  740e                 je 0x7fb2ec
// 007fb2de  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007fb2e1  56                   push esi
// 007fb2e2  6a00                 push 0
// 007fb2e4  685b280000           push 0x285b
// 007fb2e9  51                   push ecx
// 007fb2ea  ffd3                 call ebx
// 007fb2ec  8bce                 mov ecx, esi
// 007fb2ee  e8dd910000           call 0x8044d0
// 007fb2f3  85c0                 test eax, eax
// 007fb2f5  7419                 je 0x7fb310
// 007fb2f7  8bc8                 mov ecx, eax
// 007fb2f9  e8a2900100           call 0x8143a0
// 007fb2fe  85c0                 test eax, eax
// 007fb300  740e                 je 0x7fb310
// 007fb302  6a00                 push 0
// 007fb304  6800700000           push 0x7000
// 007fb309  6800004000           push 0x400000
// 007fb30e  eb09                 jmp 0x7fb319
// 007fb310  6a00                 push 0
// 007fb312  6a00                 push 0
// 007fb314  6800700000           push 0x7000
// 007fb319  8bce                 mov ecx, esi
// 007fb31b  e8e08affff           call 0x7f3e00
// 007fb320  8b16                 mov edx, dword ptr [esi]
// 007fb322  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 007fb328  6a00                 push 0
// 007fb32a  6a00                 push 0
// 007fb32c  6a01                 push 1
// 007fb32e  8bce                 mov ecx, esi
// 007fb330  ffd0                 call eax
// 007fb332  8b16                 mov edx, dword ptr [esi]
// 007fb334  8b8208020000         mov eax, dword ptr [edx + 0x208]
// 007fb33a  8bce                 mov ecx, esi
// 007fb33c  ffd0                 call eax
// 007fb33e  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 007fb344  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 007fb34a  8b97c4000000         mov edx, dword ptr [edi + 0xc4]
// 007fb350  8bafc8000000         mov ebp, dword ptr [edi + 0xc8]
// 007fb356  894c2410             mov dword ptr [esp + 0x10], ecx
// 007fb35a  8bce                 mov ecx, esi
// 007fb35c  89542414             mov dword ptr [esp + 0x14], edx
// 007fb360  8944241c             mov dword ptr [esp + 0x1c], eax
// 007fb364  e80778c2ff           call 0x422b70
// 007fb369  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007fb36c  6a00                 push 0
// 007fb36e  6a00                 push 0
// 007fb370  8d7820               lea edi, [eax + 0x20]
// 007fb373  68a1010000           push 0x1a1
// 007fb378  51                   push ecx
// 007fb379  ffd3                 call ebx
// 007fb37b  8b17                 mov edx, dword ptr [edi]
// 007fb37d  6a00                 push 0
// 007fb37f  6a00                 push 0
// 007fb381  688b010000           push 0x18b
// 007fb386  52                   push edx
// 007fb387  89442434             mov dword ptr [esp + 0x34], eax
// 007fb38b  ffd3                 call ebx
// 007fb38d  83f801               cmp eax, 1
// 007fb390  7d07                 jge 0x7fb399
// 007fb392  b801000000           mov eax, 1
// 007fb397  eb0e                 jmp 0x7fb3a7
// 007fb399  8b07                 mov eax, dword ptr [edi]
// 007fb39b  6a00                 push 0
// 007fb39d  6a00                 push 0
// 007fb39f  688b010000           push 0x18b
// 007fb3a4  50                   push eax
// 007fb3a5  ffd3                 call ebx
// 007fb3a7  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 007fb3ad  8b89c4010000         mov ecx, dword ptr [ecx + 0x1c4]
// 007fb3b3  3bc8                 cmp ecx, eax
// 007fb3b5  7d04                 jge 0x7fb3bb
// 007fb3b7  8bc1                 mov eax, ecx
// 007fb3b9  eb28                 jmp 0x7fb3e3
// 007fb3bb  8b17                 mov edx, dword ptr [edi]
// 007fb3bd  6a00                 push 0
// 007fb3bf  6a00                 push 0
// 007fb3c1  688b010000           push 0x18b
// 007fb3c6  52                   push edx
// 007fb3c7  ffd3                 call ebx
// 007fb3c9  83f801               cmp eax, 1
// 007fb3cc  7d07                 jge 0x7fb3d5
// 007fb3ce  b801000000           mov eax, 1
// 007fb3d3  eb0e                 jmp 0x7fb3e3
// 007fb3d5  8b07                 mov eax, dword ptr [edi]
// 007fb3d7  6a00                 push 0
// 007fb3d9  6a00                 push 0
// 007fb3db  688b010000           push 0x18b
// 007fb3e0  50                   push eax
// 007fb3e1  ffd3                 call ebx
// 007fb3e3  0faf442424           imul eax, dword ptr [esp + 0x24]
// 007fb3e8  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 007fb3ee  83c004               add eax, 4
// 007fb3f1  85c9                 test ecx, ecx
// 007fb3f3  7f06                 jg 0x7fb3fb
// 007fb3f5  2b6c2410             sub ebp, dword ptr [esp + 0x10]
// 007fb3f9  8bcd                 mov ecx, ebp
// 007fb3fb  50                   push eax
// 007fb3fc  51                   push ecx
// 007fb3fd  8bce                 mov ecx, esi
// 007fb3ff  e8bc760400           call 0x842ac0
// 007fb404  6a01                 push 1
// 007fb406  8bce                 mov ecx, esi
// 007fb408  e8d18affff           call 0x7f3ede
// 007fb40d  5f                   pop edi
// 007fb40e  5e                   pop esi
// 007fb40f  5d                   pop ebp
// 007fb410  b801000000           mov eax, 1
// 007fb415  5b                   pop ebx
// 007fb416  83c410               add esp, 0x10
// 007fb419  c20800               ret 8
// copied from an identical function in another client (function ?Popup@CXTPControlComboBoxList@@MAEHPAVCXTPControlPopup@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp