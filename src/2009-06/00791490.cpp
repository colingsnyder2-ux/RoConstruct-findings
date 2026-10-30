// roc 2009-06 00791490  unit: CXTCaptionButton  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00791490
//
// 00791490  53                   push ebx
// 00791491  56                   push esi
// 00791492  8bf1                 mov esi, ecx
// 00791494  8b4620               mov eax, dword ptr [esi + 0x20]
// 00791497  8b9e80000000         mov ebx, dword ptr [esi + 0x80]
// 0079149d  57                   push edi
// 0079149e  85c0                 test eax, eax
// 007914a0  740f                 je 0x7914b1
// 007914a2  50                   push eax
// 007914a3  ff1598ee8900         call dword ptr [0x89ee98]
// 007914a9  50                   push eax
// 007914aa  e85378f8ff           call 0x718d02
// 007914af  eb02                 jmp 0x7914b3
// 007914b1  33c0                 xor eax, eax
// 007914b3  50                   push eax
// 007914b4  e877fdffff           call 0x791230
// 007914b9  50                   push eax
// 007914ba  e8077bf8ff           call 0x718fc6
// 007914bf  8bf8                 mov edi, eax
// 007914c1  83c408               add esp, 8
// 007914c4  85ff                 test edi, edi
// 007914c6  747a                 je 0x791542
// 007914c8  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 007914cb  8b06                 mov eax, dword ptr [esi]
// 007914cd  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 007914d3  51                   push ecx
// 007914d4  8bce                 mov ecx, esi
// 007914d6  ffd2                 call edx
// 007914d8  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 007914db  8b06                 mov eax, dword ptr [esi]
// 007914dd  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 007914e3  51                   push ecx
// 007914e4  8bce                 mov ecx, esi
// 007914e6  ffd2                 call edx
// 007914e8  e83336fcff           call 0x754b20
// 007914ed  6a15                 push 0x15
// 007914ef  8bc8                 mov ecx, eax
// 007914f1  e8aa2dfcff           call 0x7542a0
// 007914f6  8b16                 mov edx, dword ptr [esi]
// 007914f8  50                   push eax
// 007914f9  8b8280010000         mov eax, dword ptr [edx + 0x180]
// 007914ff  8bce                 mov ecx, esi
// 00791501  ffd0                 call eax
// 00791503  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00791506  8b3d90ee8900         mov edi, dword ptr [0x89ee90]
// 0079150c  6a00                 push 0
// 0079150e  6a00                 push 0
// 00791510  6a31                 push 0x31
// 00791512  51                   push ecx
// 00791513  ffd7                 call edi
// 00791515  50                   push eax
// 00791516  e81b80f8ff           call 0x719536
// 0079151b  85c0                 test eax, eax
// 0079151d  7403                 je 0x791522
// 0079151f  8b4004               mov eax, dword ptr [eax + 4]
// 00791522  8b5620               mov edx, dword ptr [esi + 0x20]
// 00791525  6a01                 push 1
// 00791527  50                   push eax
// 00791528  6a30                 push 0x30
// 0079152a  52                   push edx
// 0079152b  ffd7                 call edi
// 0079152d  837c241400           cmp dword ptr [esp + 0x14], 0
// 00791532  740e                 je 0x791542
// 00791534  8b4620               mov eax, dword ptr [esi + 0x20]
// 00791537  6a01                 push 1
// 00791539  6a00                 push 0
// 0079153b  50                   push eax
// 0079153c  ff157cee8900         call dword ptr [0x89ee7c]
// 00791542  5f                   pop edi
// 00791543  5e                   pop esi
// 00791544  8bc3                 mov eax, ebx
// 00791546  5b                   pop ebx
// 00791547  c20800               ret 8
// copied from an identical function in another client (function ?SetXButtonStyle@CXTCaptionButton@@UAEKKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp