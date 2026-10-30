// roc 2009-12 007f9210  unit: CXTPControlComboBox  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9210
//
// 007f9210  6aff                 push -1
// 007f9212  68c58a9500           push 0x958ac5
// 007f9217  64a100000000         mov eax, dword ptr fs:[0]
// 007f921d  50                   push eax
// 007f921e  51                   push ecx
// 007f921f  56                   push esi
// 007f9220  a10052b600           mov eax, dword ptr [0xb65200]
// 007f9225  33c4                 xor eax, esp
// 007f9227  50                   push eax
// 007f9228  8d44240c             lea eax, [esp + 0xc]
// 007f922c  64a300000000         mov dword ptr fs:[0], eax
// 007f9232  8bf1                 mov esi, ecx
// 007f9234  89742408             mov dword ptr [esp + 8], esi
// 007f9238  c706cc1b9f00         mov dword ptr [esi], 0x9f1bcc
// 007f923e  c746206c1b9f00       mov dword ptr [esi + 0x20], 0x9f1b6c
// 007f9245  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 007f924b  c744241403000000     mov dword ptr [esp + 0x14], 3
// 007f9253  85c9                 test ecx, ecx
// 007f9255  7409                 je 0x7f9260
// 007f9257  8b01                 mov eax, dword ptr [ecx]
// 007f9259  8b5004               mov edx, dword ptr [eax + 4]
// 007f925c  6a01                 push 1
// 007f925e  ffd2                 call edx
// 007f9260  8b8ed0010000         mov ecx, dword ptr [esi + 0x1d0]
// 007f9266  85c9                 test ecx, ecx
// 007f9268  7412                 je 0x7f927c
// 007f926a  8b01                 mov eax, dword ptr [ecx]
// 007f926c  8b10                 mov edx, dword ptr [eax]
// 007f926e  6a01                 push 1
// 007f9270  ffd2                 call edx
// 007f9272  c786d001000000000000 mov dword ptr [esi + 0x1d0], 0
// 007f927c  8d8ec8010000         lea ecx, [esi + 0x1c8]
// 007f9282  ff15c0de9800         call dword ptr [0x98dec0]
// 007f9288  8d8ea8010000         lea ecx, [esi + 0x1a8]
// 007f928e  ff15c0de9800         call dword ptr [0x98dec0]
// 007f9294  8d8e94010000         lea ecx, [esi + 0x194]
// 007f929a  ff15c0de9800         call dword ptr [0x98dec0]
// 007f92a0  8bce                 mov ecx, esi
// 007f92a2  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007f92aa  e8b1180400           call 0x83ab60
// 007f92af  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f92b3  64890d00000000       mov dword ptr fs:[0], ecx
// 007f92ba  59                   pop ecx
// 007f92bb  5e                   pop esi
// 007f92bc  83c410               add esp, 0x10
// 007f92bf  c3                   ret 
// copied from an identical function in another client (function ??1CXTPControlComboBox@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp