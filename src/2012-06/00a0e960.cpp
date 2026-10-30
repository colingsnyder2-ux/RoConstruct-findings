// roc 2012-06 00a0e960  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0e960
//
// 00a0e960  56                   push esi
// 00a0e961  8bf1                 mov esi, ecx
// 00a0e963  837e6800             cmp dword ptr [esi + 0x68], 0
// 00a0e967  7449                 je 0xa0e9b2
// 00a0e969  8d8e2c010000         lea ecx, [esi + 0x12c]
// 00a0e96f  e8fc6efeff           call 0x9f5870
// 00a0e974  85c0                 test eax, eax
// 00a0e976  743a                 je 0xa0e9b2
// 00a0e978  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a0e97c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a0e980  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a0e984  50                   push eax
// 00a0e985  51                   push ecx
// 00a0e986  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a0e98a  83ec10               sub esp, 0x10
// 00a0e98d  8bc4                 mov eax, esp
// 00a0e98f  8910                 mov dword ptr [eax], edx
// 00a0e991  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a0e995  894804               mov dword ptr [eax + 4], ecx
// 00a0e998  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a0e99c  895008               mov dword ptr [eax + 8], edx
// 00a0e99f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a0e9a3  89480c               mov dword ptr [eax + 0xc], ecx
// 00a0e9a6  52                   push edx
// 00a0e9a7  8bce                 mov ecx, esi
// 00a0e9a9  e842eef7ff           call 0x98d7f0
// 00a0e9ae  5e                   pop esi
// 00a0e9af  c21c00               ret 0x1c
// 00a0e9b2  8b8630050000         mov eax, dword ptr [esi + 0x530]
// 00a0e9b8  83f8ff               cmp eax, -1
// 00a0e9bb  7508                 jne 0xa0e9c5
// 00a0e9bd  8b8e2c050000         mov ecx, dword ptr [esi + 0x52c]
// 00a0e9c3  eb02                 jmp 0xa0e9c7
// 00a0e9c5  8bc8                 mov ecx, eax
// 00a0e9c7  83f8ff               cmp eax, -1
// 00a0e9ca  7506                 jne 0xa0e9d2
// 00a0e9cc  8b862c050000         mov eax, dword ptr [esi + 0x52c]
// 00a0e9d2  51                   push ecx
// 00a0e9d3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a0e9d7  50                   push eax
// 00a0e9d8  8d442414             lea eax, [esp + 0x14]
// 00a0e9dc  50                   push eax
// 00a0e9dd  e8c444f7ff           call 0x982ea6
// 00a0e9e2  5e                   pop esi
// 00a0e9e3  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawStatusBarPaneBorder@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
