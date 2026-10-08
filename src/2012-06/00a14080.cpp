// roc 2012-06 00a14080  unit: CXTPControlEdit  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a14080
//
// 00a14080  56                   push esi
// 00a14081  8bf1                 mov esi, ecx
// 00a14083  8b4660               mov eax, dword ptr [esi + 0x60]
// 00a14086  85c0                 test eax, eax
// 00a14088  740b                 je 0xa14095
// 00a1408a  0598010000           add eax, 0x198
// 00a1408f  50                   push eax
// 00a14090  e8cba3f7ff           call 0x98e460
// 00a14095  8bce                 mov ecx, esi
// 00a14097  5e                   pop esi
// 00a14098  e909ebf6ff           jmp 0x982ba6
// library xtp-11.2.2/Source\CommandBars\XTPControlEdit.cpp (function ?OnDestroy@CXTPControlEditCtrl@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlEdit.cpp
