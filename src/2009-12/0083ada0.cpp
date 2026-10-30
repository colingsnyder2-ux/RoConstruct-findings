// roc 2009-12 0083ada0  unit: CXTPToolBar::CControlButtonExpand  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ada0
//
// 0083ada0  56                   push esi
// 0083ada1  8bf1                 mov esi, ecx
// 0083ada3  57                   push edi
// 0083ada4  8bbe78010000         mov edi, dword ptr [esi + 0x178]
// 0083adaa  85ff                 test edi, edi
// 0083adac  7466                 je 0x83ae14
// 0083adae  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 0083adb4  8b8a00010000         mov ecx, dword ptr [edx + 0x100]
// 0083adba  83f905               cmp ecx, 5
// 0083adbd  7455                 je 0x83ae14
// 0083adbf  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0083adc5  83f802               cmp eax, 2
// 0083adc8  740a                 je 0x83add4
// 0083adca  83f803               cmp eax, 3
// 0083adcd  7405                 je 0x83add4
// 0083adcf  83f804               cmp eax, 4
// 0083add2  7540                 jne 0x83ae14
// 0083add4  83f904               cmp ecx, 4
// 0083add7  7509                 jne 0x83ade2
// 0083add9  83baf800000002       cmp dword ptr [edx + 0xf8], 2
// 0083ade0  7432                 je 0x83ae14
// 0083ade2  57                   push edi
// 0083ade3  e8986b0000           call 0x841980
// 0083ade8  50                   push eax
// 0083ade9  e8508efbff           call 0x7f3c3e
// 0083adee  83c408               add esp, 8
// 0083adf1  85c0                 test eax, eax
// 0083adf3  741f                 je 0x83ae14
// 0083adf5  83b8fc01000000       cmp dword ptr [eax + 0x1fc], 0
// 0083adfc  7416                 je 0x83ae14
// 0083adfe  83be8001000000       cmp dword ptr [esi + 0x180], 0
// 0083ae05  740d                 je 0x83ae14
// 0083ae07  56                   push esi
// 0083ae08  e8a3560800           call 0x8c04b0
// 0083ae0d  8bc8                 mov ecx, eax
// 0083ae0f  e8ac610800           call 0x8c0fc0
// 0083ae14  5f                   pop edi
// 0083ae15  5e                   pop esi
// 0083ae16  c3                   ret 
// copied from an identical function in another client (function ?UpdateShadow@CXTPControlPopup@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlPopup.cpp