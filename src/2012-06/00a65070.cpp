// roc 2012-06 00a65070  unit: CXTPRichRender::XTextHost  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a65070
//
// 00a65070  51                   push ecx
// 00a65071  56                   push esi
// 00a65072  8bf1                 mov esi, ecx
// 00a65074  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a65077  57                   push edi
// 00a65078  33ff                 xor edi, edi
// 00a6507a  897e28               mov dword ptr [esi + 0x28], edi
// 00a6507d  897e30               mov dword ptr [esi + 0x30], edi
// 00a65080  3bc7                 cmp eax, edi
// 00a65082  740a                 je 0xa6508e
// 00a65084  50                   push eax
// 00a65085  ff157021b200         call dword ptr [0xb22170]
// 00a6508b  897e20               mov dword ptr [esi + 0x20], edi
// 00a6508e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a65092  3bc7                 cmp eax, edi
// 00a65094  7508                 jne 0xa6509e
// 00a65096  5f                   pop edi
// 00a65097  33c0                 xor eax, eax
// 00a65099  5e                   pop esi
// 00a6509a  59                   pop ecx
// 00a6509b  c20800               ret 8
// 00a6509e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a650a2  8d4c2408             lea ecx, [esp + 8]
// 00a650a6  51                   push ecx
// 00a650a7  52                   push edx
// 00a650a8  50                   push eax
// 00a650a9  897e24               mov dword ptr [esi + 0x24], edi
// 00a650ac  897c2414             mov dword ptr [esp + 0x14], edi
// 00a650b0  e8db51f3ff           call 0x99a290
// 00a650b5  83c40c               add esp, 0xc
// 00a650b8  3bc7                 cmp eax, edi
// 00a650ba  74da                 je 0xa65096
// 00a650bc  894620               mov dword ptr [esi + 0x20], eax
// 00a650bf  397c2408             cmp dword ptr [esp + 8], edi
// 00a650c3  7407                 je 0xa650cc
// 00a650c5  c7462401000000       mov dword ptr [esi + 0x24], 1
// 00a650cc  5f                   pop edi
// 00a650cd  b801000000           mov eax, 1
// 00a650d2  5e                   pop esi
// 00a650d3  59                   pop ecx
// 00a650d4  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?LoadFile@CXTPOffice2007Image@@QAEHPAUHINSTANCE__@@PBD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
