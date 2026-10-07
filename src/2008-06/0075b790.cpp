// roc 2008-06 0075b790  unit: CXTPDockingPaneMiniWnd  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075b790
//
// 0075b790  56                   push esi
// 0075b791  8bf1                 mov esi, ecx
// 0075b793  85f6                 test esi, esi
// 0075b795  0f8481000000         je 0x75b81c
// 0075b79b  837e2000             cmp dword ptr [esi + 0x20], 0
// 0075b79f  747b                 je 0x75b81c
// 0075b7a1  53                   push ebx
// 0075b7a2  8d9ef8000000         lea ebx, [esi + 0xf8]
// 0075b7a8  57                   push edi
// 0075b7a9  8bcb                 mov ecx, ebx
// 0075b7ab  e8f01c0000           call 0x75d4a0
// 0075b7b0  8bb830010000         mov edi, dword ptr [eax + 0x130]
// 0075b7b6  85ff                 test edi, edi
// 0075b7b8  7460                 je 0x75b81a
// 0075b7ba  8bcb                 mov ecx, ebx
// 0075b7bc  e8df1c0000           call 0x75d4a0
// 0075b7c1  8b980c010000         mov ebx, dword ptr [eax + 0x10c]
// 0075b7c7  81fbff000000         cmp ebx, 0xff
// 0075b7cd  7514                 jne 0x75b7e3
// 0075b7cf  6a00                 push 0
// 0075b7d1  6a00                 push 0
// 0075b7d3  6800000800           push 0x80000
// 0075b7d8  8bce                 mov ecx, esi
// 0075b7da  e85954f4ff           call 0x6a0c38
// 0075b7df  5f                   pop edi
// 0075b7e0  5b                   pop ebx
// 0075b7e1  5e                   pop esi
// 0075b7e2  c3                   ret 
// 0075b7e3  83bef000000000       cmp dword ptr [esi + 0xf0], 0
// 0075b7ea  751f                 jne 0x75b80b
// 0075b7ec  6a00                 push 0
// 0075b7ee  6800000800           push 0x80000
// 0075b7f3  6a00                 push 0
// 0075b7f5  8bce                 mov ecx, esi
// 0075b7f7  e83c54f4ff           call 0x6a0c38
// 0075b7fc  8b4620               mov eax, dword ptr [esi + 0x20]
// 0075b7ff  6a02                 push 2
// 0075b801  53                   push ebx
// 0075b802  6a00                 push 0
// 0075b804  50                   push eax
// 0075b805  ffd7                 call edi
// 0075b807  5f                   pop edi
// 0075b808  5b                   pop ebx
// 0075b809  5e                   pop esi
// 0075b80a  c3                   ret 
// 0075b80b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0075b80e  6a02                 push 2
// 0075b810  68ff000000           push 0xff
// 0075b815  6a00                 push 0
// 0075b817  51                   push ecx
// 0075b818  ffd7                 call edi
// 0075b81a  5f                   pop edi
// 0075b81b  5b                   pop ebx
// 0075b81c  5e                   pop esi
// 0075b81d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?UpdateWindowOpacity@CXTPDockingPaneMiniWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
