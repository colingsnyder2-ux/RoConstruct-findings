// roc 2010-06 00862c00  unit: CXTPDockingPaneMiniWnd  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00862c00
//
// 00862c00  56                   push esi
// 00862c01  8bf1                 mov esi, ecx
// 00862c03  85f6                 test esi, esi
// 00862c05  0f8481000000         je 0x862c8c
// 00862c0b  837e2000             cmp dword ptr [esi + 0x20], 0
// 00862c0f  747b                 je 0x862c8c
// 00862c11  53                   push ebx
// 00862c12  8d9ef8000000         lea ebx, [esi + 0xf8]
// 00862c18  57                   push edi
// 00862c19  8bcb                 mov ecx, ebx
// 00862c1b  e8f01c0000           call 0x864910
// 00862c20  8bb830010000         mov edi, dword ptr [eax + 0x130]
// 00862c26  85ff                 test edi, edi
// 00862c28  7460                 je 0x862c8a
// 00862c2a  8bcb                 mov ecx, ebx
// 00862c2c  e8df1c0000           call 0x864910
// 00862c31  8b980c010000         mov ebx, dword ptr [eax + 0x10c]
// 00862c37  81fbff000000         cmp ebx, 0xff
// 00862c3d  7514                 jne 0x862c53
// 00862c3f  6a00                 push 0
// 00862c41  6a00                 push 0
// 00862c43  6800000800           push 0x80000
// 00862c48  8bce                 mov ecx, esi
// 00862c4a  e8f752f4ff           call 0x7a7f46
// 00862c4f  5f                   pop edi
// 00862c50  5b                   pop ebx
// 00862c51  5e                   pop esi
// 00862c52  c3                   ret 
// 00862c53  83bef000000000       cmp dword ptr [esi + 0xf0], 0
// 00862c5a  751f                 jne 0x862c7b
// 00862c5c  6a00                 push 0
// 00862c5e  6800000800           push 0x80000
// 00862c63  6a00                 push 0
// 00862c65  8bce                 mov ecx, esi
// 00862c67  e8da52f4ff           call 0x7a7f46
// 00862c6c  8b4620               mov eax, dword ptr [esi + 0x20]
// 00862c6f  6a02                 push 2
// 00862c71  53                   push ebx
// 00862c72  6a00                 push 0
// 00862c74  50                   push eax
// 00862c75  ffd7                 call edi
// 00862c77  5f                   pop edi
// 00862c78  5b                   pop ebx
// 00862c79  5e                   pop esi
// 00862c7a  c3                   ret 
// 00862c7b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00862c7e  6a02                 push 2
// 00862c80  68ff000000           push 0xff
// 00862c85  6a00                 push 0
// 00862c87  51                   push ecx
// 00862c88  ffd7                 call edi
// 00862c8a  5f                   pop edi
// 00862c8b  5b                   pop ebx
// 00862c8c  5e                   pop esi
// 00862c8d  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?UpdateWindowOpacity@CXTPDockingPaneMiniWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
