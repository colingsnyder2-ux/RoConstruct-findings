// roc 2008-06 007453d0  unit: VCRect::?$CArray  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007453d0
//
// 007453d0  83ec10               sub esp, 0x10
// 007453d3  56                   push esi
// 007453d4  57                   push edi
// 007453d5  8bf1                 mov esi, ecx
// 007453d7  33ff                 xor edi, edi
// 007453d9  897e08               mov dword ptr [esi + 8], edi
// 007453dc  e875b8f5ff           call 0x6a0c56
// 007453e1  b07f                 mov al, 0x7f
// 007453e3  88442408             mov byte ptr [esp + 8], al
// 007453e7  88442409             mov byte ptr [esp + 9], al
// 007453eb  8844240a             mov byte ptr [esp + 0xa], al
// 007453ef  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007453f3  897c240c             mov dword ptr [esp + 0xc], edi
// 007453f7  3bc7                 cmp eax, edi
// 007453f9  750a                 jne 0x745405
// 007453fb  5f                   pop edi
// 007453fc  33c0                 xor eax, eax
// 007453fe  5e                   pop esi
// 007453ff  83c410               add esp, 0x10
// 00745402  c20400               ret 4
// 00745405  53                   push ebx
// 00745406  8d4c240c             lea ecx, [esp + 0xc]
// 0074540a  51                   push ecx
// 0074540b  8d542424             lea edx, [esp + 0x24]
// 0074540f  52                   push edx
// 00745410  8d4c2420             lea ecx, [esp + 0x20]
// 00745414  51                   push ecx
// 00745415  8d542420             lea edx, [esp + 0x20]
// 00745419  52                   push edx
// 0074541a  8d4c2420             lea ecx, [esp + 0x20]
// 0074541e  51                   push ecx
// 0074541f  50                   push eax
// 00745420  e83bfcffff           call 0x745060
// 00745425  83c418               add esp, 0x18
// 00745428  85c0                 test eax, eax
// 0074542a  751d                 jne 0x745449
// 0074542c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00745430  3bc7                 cmp eax, edi
// 00745432  740a                 je 0x74543e
// 00745434  50                   push eax
// 00745435  ff15c0288000         call dword ptr [0x8028c0]
// 0074543b  83c404               add esp, 4
// 0074543e  5b                   pop ebx
// 0074543f  5f                   pop edi
// 00745440  33c0                 xor eax, eax
// 00745442  5e                   pop esi
// 00745443  83c410               add esp, 0x10
// 00745446  c20400               ret 4
// 00745449  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0074544d  3bdf                 cmp ebx, edi
// 0074544f  74ed                 je 0x74543e
// 00745451  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00745455  8b442414             mov eax, dword ptr [esp + 0x14]
// 00745459  55                   push ebp
// 0074545a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0074545e  55                   push ebp
// 0074545f  51                   push ecx
// 00745460  50                   push eax
// 00745461  53                   push ebx
// 00745462  8bce                 mov ecx, esi
// 00745464  e8b7faffff           call 0x744f20
// 00745469  53                   push ebx
// 0074546a  8bf8                 mov edi, eax
// 0074546c  ff15c0288000         call dword ptr [0x8028c0]
// 00745472  83c404               add esp, 4
// 00745475  85ff                 test edi, edi
// 00745477  750c                 jne 0x745485
// 00745479  5d                   pop ebp
// 0074547a  5b                   pop ebx
// 0074547b  5f                   pop edi
// 0074547c  33c0                 xor eax, eax
// 0074547e  5e                   pop esi
// 0074547f  83c410               add esp, 0x10
// 00745482  c20400               ret 4
// 00745485  33d2                 xor edx, edx
// 00745487  83fd04               cmp ebp, 4
// 0074548a  0f94c2               sete dl
// 0074548d  57                   push edi
// 0074548e  8bce                 mov ecx, esi
// 00745490  895608               mov dword ptr [esi + 8], edx
// 00745493  e8cab7f5ff           call 0x6a0c62
// 00745498  5d                   pop ebp
// 00745499  5b                   pop ebx
// 0074549a  5f                   pop edi
// 0074549b  b801000000           mov eax, 1
// 007454a0  5e                   pop esi
// 007454a1  83c410               add esp, 0x10
// 007454a4  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\GraphicLibrary\XTPGraphicBitmapPng.cpp (function ?LoadFromFile@CXTPGraphicBitmapPng@@QAEHPAVCFile@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/GraphicLibrary/XTPGraphicBitmapPng.cpp
