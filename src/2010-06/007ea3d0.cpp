// roc 2010-06 007ea3d0  unit: CXTPPopupBar  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ea3d0
//
// 007ea3d0  53                   push ebx
// 007ea3d1  55                   push ebp
// 007ea3d2  56                   push esi
// 007ea3d3  8b742410             mov esi, dword ptr [esp + 0x10]
// 007ea3d7  57                   push edi
// 007ea3d8  56                   push esi
// 007ea3d9  8bf9                 mov edi, ecx
// 007ea3db  e840faffff           call 0x7e9e20
// 007ea3e0  6a00                 push 0
// 007ea3e2  8d87b0010000         lea eax, [edi + 0x1b0]
// 007ea3e8  50                   push eax
// 007ea3e9  68a0bea500           push 0xa5bea0
// 007ea3ee  56                   push esi
// 007ea3ef  e8dca60100           call 0x804ad0
// 007ea3f4  68fe08a000           push 0xa008fe
// 007ea3f9  8d8ff0010000         lea ecx, [edi + 0x1f0]
// 007ea3ff  51                   push ecx
// 007ea400  6890bea500           push 0xa5be90
// 007ea405  56                   push esi
// 007ea406  e825a70100           call 0x804b30
// 007ea40b  6a00                 push 0
// 007ea40d  8d97f4010000         lea edx, [edi + 0x1f4]
// 007ea413  52                   push edx
// 007ea414  6884bea500           push 0xa5be84
// 007ea419  56                   push esi
// 007ea41a  e821a60100           call 0x804a40
// 007ea41f  6a00                 push 0
// 007ea421  8d87f8010000         lea eax, [edi + 0x1f8]
// 007ea427  50                   push eax
// 007ea428  6874bea500           push 0xa5be74
// 007ea42d  56                   push esi
// 007ea42e  e80da60100           call 0x804a40
// 007ea433  83c440               add esp, 0x40
// 007ea436  837e2c03             cmp dword ptr [esi + 0x2c], 3
// 007ea43a  7647                 jbe 0x7ea483
// 007ea43c  83ec10               sub esp, 0x10
// 007ea43f  8bc4                 mov eax, esp
// 007ea441  b902000000           mov ecx, 2
// 007ea446  8908                 mov dword ptr [eax], ecx
// 007ea448  8bd9                 mov ebx, ecx
// 007ea44a  8d8f00020000         lea ecx, [edi + 0x200]
// 007ea450  51                   push ecx
// 007ea451  ba04000000           mov edx, 4
// 007ea456  895004               mov dword ptr [eax + 4], edx
// 007ea459  8bea                 mov ebp, edx
// 007ea45b  686cbea500           push 0xa5be6c
// 007ea460  895808               mov dword ptr [eax + 8], ebx
// 007ea463  56                   push esi
// 007ea464  89680c               mov dword ptr [eax + 0xc], ebp
// 007ea467  e884a70100           call 0x804bf0
// 007ea46c  6a01                 push 1
// 007ea46e  8d97fc010000         lea edx, [edi + 0x1fc]
// 007ea474  52                   push edx
// 007ea475  6860bea500           push 0xa5be60
// 007ea47a  56                   push esi
// 007ea47b  e850a60100           call 0x804ad0
// 007ea480  83c42c               add esp, 0x2c
// 007ea483  837e2c08             cmp dword ptr [esi + 0x2c], 8
// 007ea487  7617                 jbe 0x7ea4a0
// 007ea489  6a00                 push 0
// 007ea48b  8d8710020000         lea eax, [edi + 0x210]
// 007ea491  50                   push eax
// 007ea492  6850bea500           push 0xa5be50
// 007ea497  56                   push esi
// 007ea498  e833a60100           call 0x804ad0
// 007ea49d  83c410               add esp, 0x10
// 007ea4a0  837e2c14             cmp dword ptr [esi + 0x2c], 0x14
// 007ea4a4  7309                 jae 0x7ea4af
// 007ea4a6  6a01                 push 1
// 007ea4a8  8bcf                 mov ecx, edi
// 007ea4aa  e8d1dffcff           call 0x7b8480
// 007ea4af  837e2c12             cmp dword ptr [esi + 0x2c], 0x12
// 007ea4b3  7617                 jbe 0x7ea4cc
// 007ea4b5  6a00                 push 0
// 007ea4b7  81c714020000         add edi, 0x214
// 007ea4bd  57                   push edi
// 007ea4be  6844bea500           push 0xa5be44
// 007ea4c3  56                   push esi
// 007ea4c4  e807a60100           call 0x804ad0
// 007ea4c9  83c410               add esp, 0x10
// 007ea4cc  5f                   pop edi
// 007ea4cd  5e                   pop esi
// 007ea4ce  5d                   pop ebp
// 007ea4cf  5b                   pop ebx
// 007ea4d0  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPPopupBar@@MAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
