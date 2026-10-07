// roc 2010-06 0055ddc0  unit: G3D::TextInput::WrongSymbol  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055ddc0
//
// 0055ddc0  6aff                 push -1
// 0055ddc2  6878169900           push 0x991678
// 0055ddc7  64a100000000         mov eax, dword ptr fs:[0]
// 0055ddcd  50                   push eax
// 0055ddce  64892500000000       mov dword ptr fs:[0], esp
// 0055ddd5  83ec34               sub esp, 0x34
// 0055ddd8  53                   push ebx
// 0055ddd9  56                   push esi
// 0055ddda  33db                 xor ebx, ebx
// 0055dddc  8bf1                 mov esi, ecx
// 0055ddde  895c2408             mov dword ptr [esp + 8], ebx
// 0055dde2  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0055dde5  57                   push edi
// 0055dde6  3bc3                 cmp eax, ebx
// 0055dde8  0f86cd000000         jbe 0x55debb
// 0055ddee  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0055ddf1  03c7                 add eax, edi
// 0055ddf3  3bf8                 cmp edi, eax
// 0055ddf5  7606                 jbe 0x55ddfd
// 0055ddf7  ff150ca99e00         call dword ptr [0x9ea90c]
// 0055ddfd  8b0e                 mov ecx, dword ptr [esi]
// 0055ddff  894c240c             mov dword ptr [esp + 0xc], ecx
// 0055de03  8d4c240c             lea ecx, [esp + 0xc]
// 0055de07  897c2410             mov dword ptr [esp + 0x10], edi
// 0055de0b  e800590700           call 0x5d3710
// 0055de10  8bf8                 mov edi, eax
// 0055de12  57                   push edi
// 0055de13  8d4c2418             lea ecx, [esp + 0x18]
// 0055de17  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055de1d  8b571c               mov edx, dword ptr [edi + 0x1c]
// 0055de20  89542430             mov dword ptr [esp + 0x30], edx
// 0055de24  8b4720               mov eax, dword ptr [edi + 0x20]
// 0055de27  89442434             mov dword ptr [esp + 0x34], eax
// 0055de2b  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0055de2e  894c2438             mov dword ptr [esp + 0x38], ecx
// 0055de32  8b5728               mov edx, dword ptr [edi + 0x28]
// 0055de35  8954243c             mov dword ptr [esp + 0x3c], edx
// 0055de39  83cfff               or edi, 0xffffffff
// 0055de3c  895c2448             mov dword ptr [esp + 0x48], ebx
// 0055de40  395e1c               cmp dword ptr [esi + 0x1c], ebx
// 0055de43  7425                 je 0x55de6a
// 0055de45  8b4618               mov eax, dword ptr [esi + 0x18]
// 0055de48  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0055de4b  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 0055de4e  ff1500a49e00         call dword ptr [0x9ea400]
// 0055de54  ff4618               inc dword ptr [esi + 0x18]
// 0055de57  8b4618               mov eax, dword ptr [esi + 0x18]
// 0055de5a  394614               cmp dword ptr [esi + 0x14], eax
// 0055de5d  7703                 ja 0x55de62
// 0055de5f  895e18               mov dword ptr [esi + 0x18], ebx
// 0055de62  017e1c               add dword ptr [esi + 0x1c], edi
// 0055de65  7503                 jne 0x55de6a
// 0055de67  895e18               mov dword ptr [esi + 0x18], ebx
// 0055de6a  8b742450             mov esi, dword ptr [esp + 0x50]
// 0055de6e  8d542414             lea edx, [esp + 0x14]
// 0055de72  52                   push edx
// 0055de73  8bce                 mov ecx, esi
// 0055de75  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055de7b  8b442430             mov eax, dword ptr [esp + 0x30]
// 0055de7f  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0055de83  8b542438             mov edx, dword ptr [esp + 0x38]
// 0055de87  89461c               mov dword ptr [esi + 0x1c], eax
// 0055de8a  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0055de8e  894e20               mov dword ptr [esi + 0x20], ecx
// 0055de91  8d4c2414             lea ecx, [esp + 0x14]
// 0055de95  895624               mov dword ptr [esi + 0x24], edx
// 0055de98  894628               mov dword ptr [esi + 0x28], eax
// 0055de9b  897c2448             mov dword ptr [esp + 0x48], edi
// 0055de9f  ff1500a49e00         call dword ptr [0x9ea400]
// 0055dea5  5f                   pop edi
// 0055dea6  8bc6                 mov eax, esi
// 0055dea8  5e                   pop esi
// 0055dea9  5b                   pop ebx
// 0055deaa  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0055deae  64890d00000000       mov dword ptr fs:[0], ecx
// 0055deb5  83c440               add esp, 0x40
// 0055deb8  c20400               ret 4
// 0055debb  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0055debf  57                   push edi
// 0055dec0  e81bf1ffff           call 0x55cfe0
// 0055dec5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0055dec9  8bc7                 mov eax, edi
// 0055decb  5f                   pop edi
// 0055decc  5e                   pop esi
// 0055decd  5b                   pop ebx
// 0055dece  64890d00000000       mov dword ptr fs:[0], ecx
// 0055ded5  83c440               add esp, 0x40
// 0055ded8  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?read@TextInput@G3D@@QAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
