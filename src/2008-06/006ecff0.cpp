// roc 2008-06 006ecff0  unit: CXTPCustomizeCommandsPage  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ecff0
//
// 006ecff0  56                   push esi
// 006ecff1  8bf1                 mov esi, ecx
// 006ecff3  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 006ecff9  8b5620               mov edx, dword ptr [esi + 0x20]
// 006ecffc  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 006ed002  52                   push edx
// 006ed003  e8d875fbff           call 0x6a45e0
// 006ed008  8bc8                 mov ecx, eax
// 006ed00a  e8e1010300           call 0x71d1f0
// 006ed00f  8bce                 mov ecx, esi
// 006ed011  5e                   pop esi
// 006ed012  e96540fbff           jmp 0x6a107c
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeCommandsPage.cpp (function ?OnDestroy@CXTPCustomizeCommandsPage@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeCommandsPage.cpp
