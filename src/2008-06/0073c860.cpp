// roc 2008-06 0073c860  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0073c860
//
// 0073c860  56                   push esi
// 0073c861  8bf1                 mov esi, ecx
// 0073c863  837e6800             cmp dword ptr [esi + 0x68], 0
// 0073c867  7449                 je 0x73c8b2
// 0073c869  8d8e2c010000         lea ecx, [esi + 0x12c]
// 0073c86f  e8bcbbfdff           call 0x718430
// 0073c874  85c0                 test eax, eax
// 0073c876  743a                 je 0x73c8b2
// 0073c878  8b442420             mov eax, dword ptr [esp + 0x20]
// 0073c87c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073c880  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0073c884  50                   push eax
// 0073c885  51                   push ecx
// 0073c886  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0073c88a  83ec10               sub esp, 0x10
// 0073c88d  8bc4                 mov eax, esp
// 0073c88f  8910                 mov dword ptr [eax], edx
// 0073c891  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0073c895  894804               mov dword ptr [eax + 4], ecx
// 0073c898  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0073c89c  895008               mov dword ptr [eax + 8], edx
// 0073c89f  8b542420             mov edx, dword ptr [esp + 0x20]
// 0073c8a3  89480c               mov dword ptr [eax + 0xc], ecx
// 0073c8a6  52                   push edx
// 0073c8a7  8bce                 mov ecx, esi
// 0073c8a9  e8a276f7ff           call 0x6b3f50
// 0073c8ae  5e                   pop esi
// 0073c8af  c21c00               ret 0x1c
// 0073c8b2  8b8630050000         mov eax, dword ptr [esi + 0x530]
// 0073c8b8  83f8ff               cmp eax, -1
// 0073c8bb  7508                 jne 0x73c8c5
// 0073c8bd  8b8e2c050000         mov ecx, dword ptr [esi + 0x52c]
// 0073c8c3  eb02                 jmp 0x73c8c7
// 0073c8c5  8bc8                 mov ecx, eax
// 0073c8c7  83f8ff               cmp eax, -1
// 0073c8ca  7506                 jne 0x73c8d2
// 0073c8cc  8b862c050000         mov eax, dword ptr [esi + 0x52c]
// 0073c8d2  51                   push ecx
// 0073c8d3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073c8d7  50                   push eax
// 0073c8d8  8d442414             lea eax, [esp + 0x14]
// 0073c8dc  50                   push eax
// 0073c8dd  e8764af6ff           call 0x6a1358
// 0073c8e2  5e                   pop esi
// 0073c8e3  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPOffice2003Theme.cpp (function ?DrawStatusBarPaneBorder@CXTPOffice2003Theme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2003Theme.cpp
