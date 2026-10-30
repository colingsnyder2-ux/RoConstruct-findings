// roc 2009-12 00885df0  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00885df0
//
// 00885df0  56                   push esi
// 00885df1  8bf1                 mov esi, ecx
// 00885df3  837e6800             cmp dword ptr [esi + 0x68], 0
// 00885df7  7449                 je 0x885e42
// 00885df9  8d8e2c010000         lea ecx, [esi + 0x12c]
// 00885dff  e8bc5dfeff           call 0x86bbc0
// 00885e04  85c0                 test eax, eax
// 00885e06  743a                 je 0x885e42
// 00885e08  8b442420             mov eax, dword ptr [esp + 0x20]
// 00885e0c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00885e10  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00885e14  50                   push eax
// 00885e15  51                   push ecx
// 00885e16  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00885e1a  83ec10               sub esp, 0x10
// 00885e1d  8bc4                 mov eax, esp
// 00885e1f  8910                 mov dword ptr [eax], edx
// 00885e21  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00885e25  894804               mov dword ptr [eax + 4], ecx
// 00885e28  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00885e2c  895008               mov dword ptr [eax + 8], edx
// 00885e2f  8b542420             mov edx, dword ptr [esp + 0x20]
// 00885e33  89480c               mov dword ptr [eax + 0xc], ecx
// 00885e36  52                   push edx
// 00885e37  8bce                 mov ecx, esi
// 00885e39  e8a2d7f7ff           call 0x8035e0
// 00885e3e  5e                   pop esi
// 00885e3f  c21c00               ret 0x1c
// 00885e42  8b8630050000         mov eax, dword ptr [esi + 0x530]
// 00885e48  83f8ff               cmp eax, -1
// 00885e4b  7508                 jne 0x885e55
// 00885e4d  8b8e2c050000         mov ecx, dword ptr [esi + 0x52c]
// 00885e53  eb02                 jmp 0x885e57
// 00885e55  8bc8                 mov ecx, eax
// 00885e57  83f8ff               cmp eax, -1
// 00885e5a  7506                 jne 0x885e62
// 00885e5c  8b862c050000         mov eax, dword ptr [esi + 0x52c]
// 00885e62  51                   push ecx
// 00885e63  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00885e67  50                   push eax
// 00885e68  8d442414             lea eax, [esp + 0x14]
// 00885e6c  50                   push eax
// 00885e6d  e886e7f6ff           call 0x7f45f8
// 00885e72  5e                   pop esi
// 00885e73  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawStatusBarPaneBorder@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
