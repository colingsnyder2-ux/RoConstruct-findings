// roc 2007-03 006333a0  unit: seg_00630000  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006333a0
//
// 006333a0  53                   push ebx
// 006333a1  55                   push ebp
// 006333a2  56                   push esi
// 006333a3  57                   push edi
// 006333a4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006333a8  57                   push edi
// 006333a9  8bf1                 mov esi, ecx
// 006333ab  e800990300           call 0x66ccb0
// 006333b0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 006333b4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006333b8  8b542420             mov edx, dword ptr [esp + 0x20]
// 006333bc  83c404               add esp, 4
// 006333bf  8bd8                 mov ebx, eax
// 006333c1  53                   push ebx
// 006333c2  55                   push ebp
// 006333c3  83ec10               sub esp, 0x10
// 006333c6  8bc4                 mov eax, esp
// 006333c8  8908                 mov dword ptr [eax], ecx
// 006333ca  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006333ce  895004               mov dword ptr [eax + 4], edx
// 006333d1  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006333d5  894808               mov dword ptr [eax + 8], ecx
// 006333d8  57                   push edi
// 006333d9  8bce                 mov ecx, esi
// 006333db  89500c               mov dword ptr [eax + 0xc], edx
// 006333de  e83dfdffff           call 0x633120
// 006333e3  837e6000             cmp dword ptr [esi + 0x60], 0
// 006333e7  7439                 je 0x633422
// 006333e9  6a01                 push 1
// 006333eb  6a00                 push 0
// 006333ed  8d442420             lea eax, [esp + 0x20]
// 006333f1  50                   push eax
// 006333f2  ff1558ed7700         call dword ptr [0x77ed58]
// 006333f8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006333fc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00633400  53                   push ebx
// 00633401  55                   push ebp
// 00633402  83ec10               sub esp, 0x10
// 00633405  8bc4                 mov eax, esp
// 00633407  8908                 mov dword ptr [eax], ecx
// 00633409  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0063340d  895004               mov dword ptr [eax + 4], edx
// 00633410  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00633414  894808               mov dword ptr [eax + 8], ecx
// 00633417  57                   push edi
// 00633418  8bce                 mov ecx, esi
// 0063341a  89500c               mov dword ptr [eax + 0xc], edx
// 0063341d  e8fefcffff           call 0x633120
// 00633422  5f                   pop edi
// 00633423  5e                   pop esi
// 00633424  5d                   pop ebp
// 00633425  5b                   pop ebx
// 00633426  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawCheckMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
