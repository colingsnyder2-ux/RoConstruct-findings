// roc 2009-12 008f2220  unit: CXTPRibbonControlSystemPopupBarButton  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f2220
//
// 008f2220  83ec30               sub esp, 0x30
// 008f2223  53                   push ebx
// 008f2224  56                   push esi
// 008f2225  57                   push edi
// 008f2226  8bf1                 mov esi, ecx
// 008f2228  e8133df0ff           call 0x7f5f40
// 008f222d  681cf8a000           push 0xa0f81c
// 008f2232  8bc8                 mov ecx, eax
// 008f2234  e8c7caf8ff           call 0x87ed00
// 008f2239  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 008f223d  8bf8                 mov edi, eax
// 008f223f  85ff                 test edi, edi
// 008f2241  0f848c000000         je 0x8f22d3
// 008f2247  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 008f224d  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 008f2253  b802000000           mov eax, 2
// 008f2258  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008f225c  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 008f2262  89542420             mov dword ptr [esp + 0x20], edx
// 008f2266  8b96cc000000         mov edx, dword ptr [esi + 0xcc]
// 008f226c  8944240c             mov dword ptr [esp + 0xc], eax
// 008f2270  89442410             mov dword ptr [esp + 0x10], eax
// 008f2274  89442414             mov dword ptr [esp + 0x14], eax
// 008f2278  89442418             mov dword ptr [esp + 0x18], eax
// 008f227c  50                   push eax
// 008f227d  8b06                 mov eax, dword ptr [esi]
// 008f227f  894c2428             mov dword ptr [esp + 0x28], ecx
// 008f2283  8954242c             mov dword ptr [esp + 0x2c], edx
// 008f2287  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008f228a  8bce                 mov ecx, esi
// 008f228c  ffd2                 call edx
// 008f228e  f7d8                 neg eax
// 008f2290  1bc0                 sbb eax, eax
// 008f2292  f7d8                 neg eax
// 008f2294  50                   push eax
// 008f2295  8d442434             lea eax, [esp + 0x34]
// 008f2299  50                   push eax
// 008f229a  8bcf                 mov ecx, edi
// 008f229c  e81fe6feff           call 0x8e08c0
// 008f22a1  8b10                 mov edx, dword ptr [eax]
// 008f22a3  68ff00ff00           push 0xff00ff
// 008f22a8  8d4c2410             lea ecx, [esp + 0x10]
// 008f22ac  51                   push ecx
// 008f22ad  83ec10               sub esp, 0x10
// 008f22b0  8bcc                 mov ecx, esp
// 008f22b2  8911                 mov dword ptr [ecx], edx
// 008f22b4  8b5004               mov edx, dword ptr [eax + 4]
// 008f22b7  895104               mov dword ptr [ecx + 4], edx
// 008f22ba  8b5008               mov edx, dword ptr [eax + 8]
// 008f22bd  8b400c               mov eax, dword ptr [eax + 0xc]
// 008f22c0  895108               mov dword ptr [ecx + 8], edx
// 008f22c3  89410c               mov dword ptr [ecx + 0xc], eax
// 008f22c6  8d4c2434             lea ecx, [esp + 0x34]
// 008f22ca  51                   push ecx
// 008f22cb  53                   push ebx
// 008f22cc  8bcf                 mov ecx, edi
// 008f22ce  e82debfeff           call 0x8e0e00
// 008f22d3  8bce                 mov ecx, esi
// 008f22d5  e8663cf0ff           call 0x7f5f40
// 008f22da  8b10                 mov edx, dword ptr [eax]
// 008f22dc  8b525c               mov edx, dword ptr [edx + 0x5c]
// 008f22df  6a01                 push 1
// 008f22e1  56                   push esi
// 008f22e2  53                   push ebx
// 008f22e3  8d4c2418             lea ecx, [esp + 0x18]
// 008f22e7  51                   push ecx
// 008f22e8  8bc8                 mov ecx, eax
// 008f22ea  ffd2                 call edx
// 008f22ec  5f                   pop edi
// 008f22ed  5e                   pop esi
// 008f22ee  5b                   pop ebx
// 008f22ef  83c430               add esp, 0x30
// 008f22f2  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CXTPRibbonControlSystemPopupBarButton@@UAEXPAVCDC@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp