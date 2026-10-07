// roc 2008-06 007032c0  unit: CXTPTabClientWnd  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007032c0
//
// 007032c0  56                   push esi
// 007032c1  8bf1                 mov esi, ecx
// 007032c3  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 007032ca  57                   push edi
// 007032cb  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007032cf  7455                 je 0x703326
// 007032d1  8b4704               mov eax, dword ptr [edi + 4]
// 007032d4  3d01020000           cmp eax, 0x201
// 007032d9  741c                 je 0x7032f7
// 007032db  3d04020000           cmp eax, 0x204
// 007032e0  7415                 je 0x7032f7
// 007032e2  3d07020000           cmp eax, 0x207
// 007032e7  740e                 je 0x7032f7
// 007032e9  3d03020000           cmp eax, 0x203
// 007032ee  7407                 je 0x7032f7
// 007032f0  3d06020000           cmp eax, 0x206
// 007032f5  752f                 jne 0x703326
// 007032f7  8b0f                 mov ecx, dword ptr [edi]
// 007032f9  3b4e20               cmp ecx, dword ptr [esi + 0x20]
// 007032fc  7528                 jne 0x703326
// 007032fe  8b570c               mov edx, dword ptr [edi + 0xc]
// 00703301  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00703307  52                   push edx
// 00703308  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0070330b  50                   push eax
// 0070330c  6868280000           push 0x2868
// 00703311  52                   push edx
// 00703312  ff15142e8000         call dword ptr [0x802e14]
// 00703318  85c0                 test eax, eax
// 0070331a  740a                 je 0x703326
// 0070331c  5f                   pop edi
// 0070331d  b801000000           mov eax, 1
// 00703322  5e                   pop esi
// 00703323  c20400               ret 4
// 00703326  57                   push edi
// 00703327  8bce                 mov ecx, esi
// 00703329  e86ad9f9ff           call 0x6a0c98
// 0070332e  5f                   pop edi
// 0070332f  5e                   pop esi
// 00703330  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?PreTranslateMessage@CXTPTabClientWnd@@MAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
