// roc 2009-06 007aaf30  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007aaf30
//
// 007aaf30  56                   push esi
// 007aaf31  8bf1                 mov esi, ecx
// 007aaf33  837e6800             cmp dword ptr [esi + 0x68], 0
// 007aaf37  7449                 je 0x7aaf82
// 007aaf39  8d8e2c010000         lea ecx, [esi + 0x12c]
// 007aaf3f  e85c5cfeff           call 0x790ba0
// 007aaf44  85c0                 test eax, eax
// 007aaf46  743a                 je 0x7aaf82
// 007aaf48  8b442420             mov eax, dword ptr [esp + 0x20]
// 007aaf4c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007aaf50  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007aaf54  50                   push eax
// 007aaf55  51                   push ecx
// 007aaf56  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007aaf5a  83ec10               sub esp, 0x10
// 007aaf5d  8bc4                 mov eax, esp
// 007aaf5f  8910                 mov dword ptr [eax], edx
// 007aaf61  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007aaf65  894804               mov dword ptr [eax + 4], ecx
// 007aaf68  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007aaf6c  895008               mov dword ptr [eax + 8], edx
// 007aaf6f  8b542420             mov edx, dword ptr [esp + 0x20]
// 007aaf73  89480c               mov dword ptr [eax + 0xc], ecx
// 007aaf76  52                   push edx
// 007aaf77  8bce                 mov ecx, esi
// 007aaf79  e8f2d6f7ff           call 0x728670
// 007aaf7e  5e                   pop esi
// 007aaf7f  c21c00               ret 0x1c
// 007aaf82  8b8630050000         mov eax, dword ptr [esi + 0x530]
// 007aaf88  83f8ff               cmp eax, -1
// 007aaf8b  7508                 jne 0x7aaf95
// 007aaf8d  8b8e2c050000         mov ecx, dword ptr [esi + 0x52c]
// 007aaf93  eb02                 jmp 0x7aaf97
// 007aaf95  8bc8                 mov ecx, eax
// 007aaf97  83f8ff               cmp eax, -1
// 007aaf9a  7506                 jne 0x7aafa2
// 007aaf9c  8b862c050000         mov eax, dword ptr [esi + 0x52c]
// 007aafa2  51                   push ecx
// 007aafa3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007aafa7  50                   push eax
// 007aafa8  8d442414             lea eax, [esp + 0x14]
// 007aafac  50                   push eax
// 007aafad  e818e8f6ff           call 0x7197ca
// 007aafb2  5e                   pop esi
// 007aafb3  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawStatusBarPaneBorder@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
