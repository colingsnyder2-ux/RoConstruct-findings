// roc 2008-06 006e76b0  unit: CXTPToolBar::CControlButtonExpand  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e76b0
//
// 006e76b0  56                   push esi
// 006e76b1  8bf1                 mov esi, ecx
// 006e76b3  57                   push edi
// 006e76b4  8bbe78010000         mov edi, dword ptr [esi + 0x178]
// 006e76ba  85ff                 test edi, edi
// 006e76bc  7466                 je 0x6e7724
// 006e76be  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 006e76c4  8b8a00010000         mov ecx, dword ptr [edx + 0x100]
// 006e76ca  83f905               cmp ecx, 5
// 006e76cd  7455                 je 0x6e7724
// 006e76cf  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 006e76d5  83f802               cmp eax, 2
// 006e76d8  740a                 je 0x6e76e4
// 006e76da  83f803               cmp eax, 3
// 006e76dd  7405                 je 0x6e76e4
// 006e76df  83f804               cmp eax, 4
// 006e76e2  7540                 jne 0x6e7724
// 006e76e4  83f904               cmp ecx, 4
// 006e76e7  7509                 jne 0x6e76f2
// 006e76e9  83baf800000002       cmp dword ptr [edx + 0xf8], 2
// 006e76f0  7432                 je 0x6e7724
// 006e76f2  57                   push edi
// 006e76f3  e8c86a0000           call 0x6ee1c0
// 006e76f8  50                   push eax
// 006e76f9  e82895fbff           call 0x6a0c26
// 006e76fe  83c408               add esp, 8
// 006e7701  85c0                 test eax, eax
// 006e7703  741f                 je 0x6e7724
// 006e7705  83b8fc01000000       cmp dword ptr [eax + 0x1fc], 0
// 006e770c  7416                 je 0x6e7724
// 006e770e  83be8001000000       cmp dword ptr [esi + 0x180], 0
// 006e7715  740d                 je 0x6e7724
// 006e7717  56                   push esi
// 006e7718  e8c35b0800           call 0x76d2e0
// 006e771d  8bc8                 mov ecx, eax
// 006e771f  e8cc660800           call 0x76ddf0
// 006e7724  5f                   pop edi
// 006e7725  5e                   pop esi
// 006e7726  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlPopup.cpp (function ?UpdateShadow@CXTPControlPopup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp
