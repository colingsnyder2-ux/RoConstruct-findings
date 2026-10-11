// roc 2007-08 0053ed80  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053ed80
//
// 0053ed80  83ec10               sub esp, 0x10
// 0053ed83  53                   push ebx
// 0053ed84  56                   push esi
// 0053ed85  8bf1                 mov esi, ecx
// 0053ed87  8b5608               mov edx, dword ptr [esi + 8]
// 0053ed8a  33c9                 xor ecx, ecx
// 0053ed8c  85d2                 test edx, edx
// 0053ed8e  57                   push edi
// 0053ed8f  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053ed93  7504                 jne 0x53ed99
// 0053ed95  33c0                 xor eax, eax
// 0053ed97  eb08                 jmp 0x53eda1
// 0053ed99  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053ed9c  2bc2                 sub eax, edx
// 0053ed9e  c1f802               sar eax, 2
// 0053eda1  85c0                 test eax, eax
// 0053eda3  8b5614               mov edx, dword ptr [esi + 0x14]
// 0053eda6  89542418             mov dword ptr [esp + 0x18], edx
// 0053edaa  8d542410             lea edx, [esp + 0x10]
// 0053edae  89442414             mov dword ptr [esp + 0x14], eax
// 0053edb2  895614               mov dword ptr [esi + 0x14], edx
// 0053edb5  0f868c000000         jbe 0x53ee47
// 0053edbb  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 0053edc1  8b5608               mov edx, dword ptr [esi + 8]
// 0053edc4  85d2                 test edx, edx
// 0053edc6  8bf9                 mov edi, ecx
// 0053edc8  740c                 je 0x53edd6
// 0053edca  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053edcd  2bc2                 sub eax, edx
// 0053edcf  c1f802               sar eax, 2
// 0053edd2  3bc8                 cmp ecx, eax
// 0053edd4  7202                 jb 0x53edd8
// 0053edd6  ffd3                 call ebx
// 0053edd8  8b4608               mov eax, dword ptr [esi + 8]
// 0053eddb  8b04b8               mov eax, dword ptr [eax + edi*4]
// 0053edde  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053ede2  50                   push eax
// 0053ede3  83ec10               sub esp, 0x10
// 0053ede6  8bc4                 mov eax, esp
// 0053ede8  8908                 mov dword ptr [eax], ecx
// 0053edea  8b542438             mov edx, dword ptr [esp + 0x38]
// 0053edee  895004               mov dword ptr [eax + 4], edx
// 0053edf1  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0053edf5  85c9                 test ecx, ecx
// 0053edf7  89642420             mov dword ptr [esp + 0x20], esp
// 0053edfb  740c                 je 0x53ee09
// 0053edfd  83c104               add ecx, 4
// 0053ee00  ba01000000           mov edx, 1
// 0053ee05  f00fc111             lock xadd dword ptr [ecx], edx
// 0053ee09  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0053ee0d  894808               mov dword ptr [eax + 8], ecx
// 0053ee10  8b542440             mov edx, dword ptr [esp + 0x40]
// 0053ee14  89500c               mov dword ptr [eax + 0xc], edx
// 0053ee17  8b442440             mov eax, dword ptr [esp + 0x40]
// 0053ee1b  85c0                 test eax, eax
// 0053ee1d  740c                 je 0x53ee2b
// 0053ee1f  83c004               add eax, 4
// 0053ee22  b901000000           mov ecx, 1
// 0053ee27  f00fc108             lock xadd dword ptr [eax], ecx
// 0053ee2b  8bce                 mov ecx, esi
// 0053ee2d  e8eef5ffff           call 0x53e420
// 0053ee32  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053ee36  83c101               add ecx, 1
// 0053ee39  3b4c2414             cmp ecx, dword ptr [esp + 0x14]
// 0053ee3d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053ee41  0f827affffff         jb 0x53edc1
// 0053ee47  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053ee4b  8d4c2420             lea ecx, [esp + 0x20]
// 0053ee4f  895614               mov dword ptr [esi + 0x14], edx
// 0053ee52  e8a9ebedff           call 0x41da00
// 0053ee57  5f                   pop edi
// 0053ee58  5e                   pop esi
// 0053ee59  5b                   pop ebx
// 0053ee5a  83c410               add esp, 0x10
// 0053ee5d  c21000               ret 0x10
// library openrbx-client/App\v8datamodel\Selection.cpp (function ?raise@?$Notifier@VSelection@RBX@@VSelectionChanged@2@@RBX@@IBEXVSelectionChanged@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8datamodel/Selection.cpp
