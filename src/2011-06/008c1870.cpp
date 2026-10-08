// roc 2011-06 008c1870  unit: CXTPDockingPaneMiniWnd  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1870
//
// 008c1870  83ec10               sub esp, 0x10
// 008c1873  56                   push esi
// 008c1874  8bf1                 mov esi, ecx
// 008c1876  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c187a  0f84bd000000         je 0x8c193d
// 008c1880  57                   push edi
// 008c1881  8bbe48010000         mov edi, dword ptr [esi + 0x148]
// 008c1887  8bc7                 mov eax, edi
// 008c1889  f7d8                 neg eax
// 008c188b  1bc0                 sbb eax, eax
// 008c188d  83e0f6               and eax, 0xfffffff6
// 008c1890  83c012               add eax, 0x12
// 008c1893  50                   push eax
// 008c1894  e887f6ffff           call 0x8c0f20
// 008c1899  85c0                 test eax, eax
// 008c189b  0f859b000000         jne 0x8c193c
// 008c18a1  398648010000         cmp dword ptr [esi + 0x148], eax
// 008c18a7  750b                 jne 0x8c18b4
// 008c18a9  6a01                 push 1
// 008c18ab  8bce                 mov ecx, esi
// 008c18ad  e8aefdffff           call 0x8c1660
// 008c18b2  eb63                 jmp 0x8c1917
// 008c18b4  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 008c18ba  3b8e40010000         cmp ecx, dword ptr [esi + 0x140]
// 008c18c0  7429                 je 0x8c18eb
// 008c18c2  56                   push esi
// 008c18c3  8d4c240c             lea ecx, [esp + 0xc]
// 008c18c7  e864b4f9ff           call 0x85cd30
// 008c18cc  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c18d0  8b9638010000         mov edx, dword ptr [esi + 0x138]
// 008c18d6  2b442408             sub eax, dword ptr [esp + 8]
// 008c18da  6a06                 push 6
// 008c18dc  52                   push edx
// 008c18dd  50                   push eax
// 008c18de  6a00                 push 0
// 008c18e0  6a00                 push 0
// 008c18e2  6a00                 push 0
// 008c18e4  8bce                 mov ecx, esi
// 008c18e6  e83f8bf4ff           call 0x80a42a
// 008c18eb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c18ee  53                   push ebx
// 008c18ef  8b1dd019a400         mov ebx, dword ptr [0xa419d0]
// 008c18f5  6a01                 push 1
// 008c18f7  51                   push ecx
// 008c18f8  c7864801000000000000 mov dword ptr [esi + 0x148], 0
// 008c1902  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 008c190c  ffd3                 call ebx
// 008c190e  8b5620               mov edx, dword ptr [esi + 0x20]
// 008c1911  6a03                 push 3
// 008c1913  52                   push edx
// 008c1914  ffd3                 call ebx
// 008c1916  5b                   pop ebx
// 008c1917  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c191a  6a00                 push 0
// 008c191c  6a00                 push 0
// 008c191e  6885000000           push 0x85
// 008c1923  50                   push eax
// 008c1924  ff15c019a400         call dword ptr [0xa419c0]
// 008c192a  f7df                 neg edi
// 008c192c  1bff                 sbb edi, edi
// 008c192e  83e7f6               and edi, 0xfffffff6
// 008c1931  83c713               add edi, 0x13
// 008c1934  57                   push edi
// 008c1935  8bce                 mov ecx, esi
// 008c1937  e8e4f5ffff           call 0x8c0f20
// 008c193c  5f                   pop edi
// 008c193d  5e                   pop esi
// 008c193e  83c410               add esp, 0x10
// 008c1941  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnPinButtonClick@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
