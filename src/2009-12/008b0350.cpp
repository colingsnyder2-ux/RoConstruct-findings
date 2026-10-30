// roc 2009-12 008b0350  unit: CXTPDockingPaneMiniWnd  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b0350
//
// 008b0350  83ec10               sub esp, 0x10
// 008b0353  56                   push esi
// 008b0354  8bf1                 mov esi, ecx
// 008b0356  837e2000             cmp dword ptr [esi + 0x20], 0
// 008b035a  0f84bd000000         je 0x8b041d
// 008b0360  57                   push edi
// 008b0361  8bbe48010000         mov edi, dword ptr [esi + 0x148]
// 008b0367  8bc7                 mov eax, edi
// 008b0369  f7d8                 neg eax
// 008b036b  1bc0                 sbb eax, eax
// 008b036d  83e0f6               and eax, 0xfffffff6
// 008b0370  83c012               add eax, 0x12
// 008b0373  50                   push eax
// 008b0374  e867f6ffff           call 0x8af9e0
// 008b0379  85c0                 test eax, eax
// 008b037b  0f859b000000         jne 0x8b041c
// 008b0381  398648010000         cmp dword ptr [esi + 0x148], eax
// 008b0387  750b                 jne 0x8b0394
// 008b0389  6a01                 push 1
// 008b038b  8bce                 mov ecx, esi
// 008b038d  e8aefdffff           call 0x8b0140
// 008b0392  eb63                 jmp 0x8b03f7
// 008b0394  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 008b039a  3b8e40010000         cmp ecx, dword ptr [esi + 0x140]
// 008b03a0  7429                 je 0x8b03cb
// 008b03a2  56                   push esi
// 008b03a3  8d4c240c             lea ecx, [esp + 0xc]
// 008b03a7  e8c4aef9ff           call 0x84b270
// 008b03ac  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b03b0  8b9638010000         mov edx, dword ptr [esi + 0x138]
// 008b03b6  2b442408             sub eax, dword ptr [esp + 8]
// 008b03ba  6a06                 push 6
// 008b03bc  52                   push edx
// 008b03bd  50                   push eax
// 008b03be  6a00                 push 0
// 008b03c0  6a00                 push 0
// 008b03c2  6a00                 push 0
// 008b03c4  8bce                 mov ecx, esi
// 008b03c6  e86138f4ff           call 0x7f3c2c
// 008b03cb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008b03ce  53                   push ebx
// 008b03cf  8b1dd0cb9800         mov ebx, dword ptr [0x98cbd0]
// 008b03d5  6a01                 push 1
// 008b03d7  51                   push ecx
// 008b03d8  c7864801000000000000 mov dword ptr [esi + 0x148], 0
// 008b03e2  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 008b03ec  ffd3                 call ebx
// 008b03ee  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b03f1  6a03                 push 3
// 008b03f3  52                   push edx
// 008b03f4  ffd3                 call ebx
// 008b03f6  5b                   pop ebx
// 008b03f7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008b03fa  6a00                 push 0
// 008b03fc  6a00                 push 0
// 008b03fe  6885000000           push 0x85
// 008b0403  50                   push eax
// 008b0404  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008b040a  f7df                 neg edi
// 008b040c  1bff                 sbb edi, edi
// 008b040e  83e7f6               and edi, 0xfffffff6
// 008b0411  83c713               add edi, 0x13
// 008b0414  57                   push edi
// 008b0415  8bce                 mov ecx, esi
// 008b0417  e8c4f5ffff           call 0x8af9e0
// 008b041c  5f                   pop edi
// 008b041d  5e                   pop esi
// 008b041e  83c410               add esp, 0x10
// 008b0421  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnPinButtonClick@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
