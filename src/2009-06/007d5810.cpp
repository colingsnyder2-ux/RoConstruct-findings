// roc 2009-06 007d5810  unit: CXTPDockingPaneMiniWnd  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d5810
//
// 007d5810  83ec10               sub esp, 0x10
// 007d5813  56                   push esi
// 007d5814  8bf1                 mov esi, ecx
// 007d5816  837e2000             cmp dword ptr [esi + 0x20], 0
// 007d581a  0f84bd000000         je 0x7d58dd
// 007d5820  57                   push edi
// 007d5821  8bbe48010000         mov edi, dword ptr [esi + 0x148]
// 007d5827  8bc7                 mov eax, edi
// 007d5829  f7d8                 neg eax
// 007d582b  1bc0                 sbb eax, eax
// 007d582d  83e0f6               and eax, 0xfffffff6
// 007d5830  83c012               add eax, 0x12
// 007d5833  50                   push eax
// 007d5834  e867f6ffff           call 0x7d4ea0
// 007d5839  85c0                 test eax, eax
// 007d583b  0f859b000000         jne 0x7d58dc
// 007d5841  398648010000         cmp dword ptr [esi + 0x148], eax
// 007d5847  750b                 jne 0x7d5854
// 007d5849  6a01                 push 1
// 007d584b  8bce                 mov ecx, esi
// 007d584d  e8aefdffff           call 0x7d5600
// 007d5852  eb63                 jmp 0x7d58b7
// 007d5854  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 007d585a  3b8e40010000         cmp ecx, dword ptr [esi + 0x140]
// 007d5860  7429                 je 0x7d588b
// 007d5862  56                   push esi
// 007d5863  8d4c240c             lea ecx, [esp + 0xc]
// 007d5867  e804acf9ff           call 0x770470
// 007d586c  8b442410             mov eax, dword ptr [esp + 0x10]
// 007d5870  8b9638010000         mov edx, dword ptr [esi + 0x138]
// 007d5876  2b442408             sub eax, dword ptr [esp + 8]
// 007d587a  6a06                 push 6
// 007d587c  52                   push edx
// 007d587d  50                   push eax
// 007d587e  6a00                 push 0
// 007d5880  6a00                 push 0
// 007d5882  6a00                 push 0
// 007d5884  8bce                 mov ecx, esi
// 007d5886  e87935f4ff           call 0x718e04
// 007d588b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007d588e  53                   push ebx
// 007d588f  8b1d84ee8900         mov ebx, dword ptr [0x89ee84]
// 007d5895  6a01                 push 1
// 007d5897  51                   push ecx
// 007d5898  c7864801000000000000 mov dword ptr [esi + 0x148], 0
// 007d58a2  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 007d58ac  ffd3                 call ebx
// 007d58ae  8b5620               mov edx, dword ptr [esi + 0x20]
// 007d58b1  6a03                 push 3
// 007d58b3  52                   push edx
// 007d58b4  ffd3                 call ebx
// 007d58b6  5b                   pop ebx
// 007d58b7  8b4620               mov eax, dword ptr [esi + 0x20]
// 007d58ba  6a00                 push 0
// 007d58bc  6a00                 push 0
// 007d58be  6885000000           push 0x85
// 007d58c3  50                   push eax
// 007d58c4  ff1590ee8900         call dword ptr [0x89ee90]
// 007d58ca  f7df                 neg edi
// 007d58cc  1bff                 sbb edi, edi
// 007d58ce  83e7f6               and edi, 0xfffffff6
// 007d58d1  83c713               add edi, 0x13
// 007d58d4  57                   push edi
// 007d58d5  8bce                 mov ecx, esi
// 007d58d7  e8c4f5ffff           call 0x7d4ea0
// 007d58dc  5f                   pop edi
// 007d58dd  5e                   pop esi
// 007d58de  83c410               add esp, 0x10
// 007d58e1  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnPinButtonClick@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
