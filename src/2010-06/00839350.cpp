// roc 2010-06 00839350  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00839350
//
// 00839350  56                   push esi
// 00839351  8bf1                 mov esi, ecx
// 00839353  837e6800             cmp dword ptr [esi + 0x68], 0
// 00839357  7449                 je 0x8393a2
// 00839359  8d8e2c010000         lea ecx, [esi + 0x12c]
// 0083935f  e85c68feff           call 0x81fbc0
// 00839364  85c0                 test eax, eax
// 00839366  743a                 je 0x8393a2
// 00839368  8b442420             mov eax, dword ptr [esp + 0x20]
// 0083936c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00839370  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00839374  50                   push eax
// 00839375  51                   push ecx
// 00839376  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083937a  83ec10               sub esp, 0x10
// 0083937d  8bc4                 mov eax, esp
// 0083937f  8910                 mov dword ptr [eax], edx
// 00839381  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00839385  894804               mov dword ptr [eax + 4], ecx
// 00839388  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0083938c  895008               mov dword ptr [eax + 8], edx
// 0083938f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00839393  89480c               mov dword ptr [eax + 0xc], ecx
// 00839396  52                   push edx
// 00839397  8bce                 mov ecx, esi
// 00839399  e8529df7ff           call 0x7b30f0
// 0083939e  5e                   pop esi
// 0083939f  c21c00               ret 0x1c
// 008393a2  8b8630050000         mov eax, dword ptr [esi + 0x530]
// 008393a8  83f8ff               cmp eax, -1
// 008393ab  7508                 jne 0x8393b5
// 008393ad  8b8e2c050000         mov ecx, dword ptr [esi + 0x52c]
// 008393b3  eb02                 jmp 0x8393b7
// 008393b5  8bc8                 mov ecx, eax
// 008393b7  83f8ff               cmp eax, -1
// 008393ba  7506                 jne 0x8393c2
// 008393bc  8b862c050000         mov eax, dword ptr [esi + 0x52c]
// 008393c2  51                   push ecx
// 008393c3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008393c7  50                   push eax
// 008393c8  8d442414             lea eax, [esp + 0x14]
// 008393cc  50                   push eax
// 008393cd  e866f3f6ff           call 0x7a8738
// 008393d2  5e                   pop esi
// 008393d3  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawStatusBarPaneBorder@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
