// roc 2011-06 008d56f0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d56f0
//
// 008d56f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008d56f4  56                   push esi
// 008d56f5  6a00                 push 0
// 008d56f7  6a00                 push 0
// 008d56f9  8bf1                 mov esi, ecx
// 008d56fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d56ff  50                   push eax
// 008d5700  51                   push ecx
// 008d5701  8bce                 mov ecx, esi
// 008d5703  e838f3ffff           call 0x8d4a40
// 008d5708  85c0                 test eax, eax
// 008d570a  7421                 je 0x8d572d
// 008d570c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d5710  8b10                 mov edx, dword ptr [eax]
// 008d5712  8b520c               mov edx, dword ptr [edx + 0xc]
// 008d5715  51                   push ecx
// 008d5716  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d571a  51                   push ecx
// 008d571b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d571f  51                   push ecx
// 008d5720  8bc8                 mov ecx, eax
// 008d5722  ffd2                 call edx
// 008d5724  b801000000           mov eax, 1
// 008d5729  5e                   pop esi
// 008d572a  c21000               ret 0x10
// 008d572d  837c241400           cmp dword ptr [esp + 0x14], 0
// 008d5732  7406                 je 0x8d573a
// 008d5734  33c0                 xor eax, eax
// 008d5736  5e                   pop esi
// 008d5737  c21000               ret 0x10
// 008d573a  8b442410             mov eax, dword ptr [esp + 0x10]
// 008d573e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d5742  57                   push edi
// 008d5743  50                   push eax
// 008d5744  51                   push ecx
// 008d5745  8bce                 mov ecx, esi
// 008d5747  e814f0ffff           call 0x8d4760
// 008d574c  8bf8                 mov edi, eax
// 008d574e  85ff                 test edi, edi
// 008d5750  0f8484000000         je 0x8d57da
// 008d5756  8b16                 mov edx, dword ptr [esi]
// 008d5758  8b4264               mov eax, dword ptr [edx + 0x64]
// 008d575b  57                   push edi
// 008d575c  8bce                 mov ecx, esi
// 008d575e  ffd0                 call eax
// 008d5760  85c0                 test eax, eax
// 008d5762  7476                 je 0x8d57da
// 008d5764  8b16                 mov edx, dword ptr [esi]
// 008d5766  8b4238               mov eax, dword ptr [edx + 0x38]
// 008d5769  8bce                 mov ecx, esi
// 008d576b  ffd0                 call eax
// 008d576d  85c0                 test eax, eax
// 008d576f  7423                 je 0x8d5794
// 008d5771  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d5775  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d5779  8b16                 mov edx, dword ptr [esi]
// 008d577b  8b5268               mov edx, dword ptr [edx + 0x68]
// 008d577e  57                   push edi
// 008d577f  50                   push eax
// 008d5780  8b442414             mov eax, dword ptr [esp + 0x14]
// 008d5784  51                   push ecx
// 008d5785  50                   push eax
// 008d5786  8bce                 mov ecx, esi
// 008d5788  ffd2                 call edx
// 008d578a  5f                   pop edi
// 008d578b  b801000000           mov eax, 1
// 008d5790  5e                   pop esi
// 008d5791  c21000               ret 0x10
// 008d5794  8b06                 mov eax, dword ptr [esi]
// 008d5796  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008d5799  8bce                 mov ecx, esi
// 008d579b  ffd2                 call edx
// 008d579d  83b8b800000000       cmp dword ptr [eax + 0xb8], 0
// 008d57a4  57                   push edi
// 008d57a5  7413                 je 0x8d57ba
// 008d57a7  8b06                 mov eax, dword ptr [esi]
// 008d57a9  8b5060               mov edx, dword ptr [eax + 0x60]
// 008d57ac  8bce                 mov ecx, esi
// 008d57ae  ffd2                 call edx
// 008d57b0  5f                   pop edi
// 008d57b1  b801000000           mov eax, 1
// 008d57b6  5e                   pop esi
// 008d57b7  c21000               ret 0x10
// 008d57ba  8b442418             mov eax, dword ptr [esp + 0x18]
// 008d57be  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008d57c2  8b542410             mov edx, dword ptr [esp + 0x10]
// 008d57c6  50                   push eax
// 008d57c7  51                   push ecx
// 008d57c8  52                   push edx
// 008d57c9  8bce                 mov ecx, esi
// 008d57cb  e8f0faffff           call 0x8d52c0
// 008d57d0  5f                   pop edi
// 008d57d1  b801000000           mov eax, 1
// 008d57d6  5e                   pop esi
// 008d57d7  c21000               ret 0x10
// 008d57da  5f                   pop edi
// 008d57db  33c0                 xor eax, eax
// 008d57dd  5e                   pop esi
// 008d57de  c21000               ret 0x10
// library xtp-11.2.2/Source\TabManager\XTPTabManager.cpp (function ?PerformClick@CXTPTabManager@@QAEHPAUHWND__@@VCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabManager.cpp
