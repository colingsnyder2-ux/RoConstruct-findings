// roc 2009-12 008aeb30  unit: CXTPDockingPaneMiniWnd  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008aeb30
//
// 008aeb30  56                   push esi
// 008aeb31  8bf1                 mov esi, ecx
// 008aeb33  85f6                 test esi, esi
// 008aeb35  0f8481000000         je 0x8aebbc
// 008aeb3b  837e2000             cmp dword ptr [esi + 0x20], 0
// 008aeb3f  747b                 je 0x8aebbc
// 008aeb41  53                   push ebx
// 008aeb42  8d9ef8000000         lea ebx, [esi + 0xf8]
// 008aeb48  57                   push edi
// 008aeb49  8bcb                 mov ecx, ebx
// 008aeb4b  e8f01c0000           call 0x8b0840
// 008aeb50  8bb830010000         mov edi, dword ptr [eax + 0x130]
// 008aeb56  85ff                 test edi, edi
// 008aeb58  7460                 je 0x8aebba
// 008aeb5a  8bcb                 mov ecx, ebx
// 008aeb5c  e8df1c0000           call 0x8b0840
// 008aeb61  8b980c010000         mov ebx, dword ptr [eax + 0x10c]
// 008aeb67  81fbff000000         cmp ebx, 0xff
// 008aeb6d  7514                 jne 0x8aeb83
// 008aeb6f  6a00                 push 0
// 008aeb71  6a00                 push 0
// 008aeb73  6800000800           push 0x80000
// 008aeb78  8bce                 mov ecx, esi
// 008aeb7a  e88152f4ff           call 0x7f3e00
// 008aeb7f  5f                   pop edi
// 008aeb80  5b                   pop ebx
// 008aeb81  5e                   pop esi
// 008aeb82  c3                   ret 
// 008aeb83  83bef000000000       cmp dword ptr [esi + 0xf0], 0
// 008aeb8a  751f                 jne 0x8aebab
// 008aeb8c  6a00                 push 0
// 008aeb8e  6800000800           push 0x80000
// 008aeb93  6a00                 push 0
// 008aeb95  8bce                 mov ecx, esi
// 008aeb97  e86452f4ff           call 0x7f3e00
// 008aeb9c  8b4620               mov eax, dword ptr [esi + 0x20]
// 008aeb9f  6a02                 push 2
// 008aeba1  53                   push ebx
// 008aeba2  6a00                 push 0
// 008aeba4  50                   push eax
// 008aeba5  ffd7                 call edi
// 008aeba7  5f                   pop edi
// 008aeba8  5b                   pop ebx
// 008aeba9  5e                   pop esi
// 008aebaa  c3                   ret 
// 008aebab  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008aebae  6a02                 push 2
// 008aebb0  68ff000000           push 0xff
// 008aebb5  6a00                 push 0
// 008aebb7  51                   push ecx
// 008aebb8  ffd7                 call edi
// 008aebba  5f                   pop edi
// 008aebbb  5b                   pop ebx
// 008aebbc  5e                   pop esi
// 008aebbd  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?UpdateWindowOpacity@CXTPDockingPaneMiniWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
