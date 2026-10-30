// roc 2012-06 00a38460  unit: CXTPDockingPaneMiniWnd  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a38460
//
// 00a38460  56                   push esi
// 00a38461  8bf1                 mov esi, ecx
// 00a38463  85f6                 test esi, esi
// 00a38465  0f8481000000         je 0xa384ec
// 00a3846b  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a3846f  747b                 je 0xa384ec
// 00a38471  53                   push ebx
// 00a38472  8d9ef8000000         lea ebx, [esi + 0xf8]
// 00a38478  57                   push edi
// 00a38479  8bcb                 mov ecx, ebx
// 00a3847b  e8f01c0000           call 0xa3a170
// 00a38480  8bb830010000         mov edi, dword ptr [eax + 0x130]
// 00a38486  85ff                 test edi, edi
// 00a38488  7460                 je 0xa384ea
// 00a3848a  8bcb                 mov ecx, ebx
// 00a3848c  e8df1c0000           call 0xa3a170
// 00a38491  8b980c010000         mov ebx, dword ptr [eax + 0x10c]
// 00a38497  81fbff000000         cmp ebx, 0xff
// 00a3849d  7514                 jne 0xa384b3
// 00a3849f  6a00                 push 0
// 00a384a1  6a00                 push 0
// 00a384a3  6800000800           push 0x80000
// 00a384a8  8bce                 mov ecx, esi
// 00a384aa  e805a2f4ff           call 0x9826b4
// 00a384af  5f                   pop edi
// 00a384b0  5b                   pop ebx
// 00a384b1  5e                   pop esi
// 00a384b2  c3                   ret 
// 00a384b3  83bef000000000       cmp dword ptr [esi + 0xf0], 0
// 00a384ba  751f                 jne 0xa384db
// 00a384bc  6a00                 push 0
// 00a384be  6800000800           push 0x80000
// 00a384c3  6a00                 push 0
// 00a384c5  8bce                 mov ecx, esi
// 00a384c7  e8e8a1f4ff           call 0x9826b4
// 00a384cc  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a384cf  6a02                 push 2
// 00a384d1  53                   push ebx
// 00a384d2  6a00                 push 0
// 00a384d4  50                   push eax
// 00a384d5  ffd7                 call edi
// 00a384d7  5f                   pop edi
// 00a384d8  5b                   pop ebx
// 00a384d9  5e                   pop esi
// 00a384da  c3                   ret 
// 00a384db  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a384de  6a02                 push 2
// 00a384e0  68ff000000           push 0xff
// 00a384e5  6a00                 push 0
// 00a384e7  51                   push ecx
// 00a384e8  ffd7                 call edi
// 00a384ea  5f                   pop edi
// 00a384eb  5b                   pop ebx
// 00a384ec  5e                   pop esi
// 00a384ed  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?UpdateWindowOpacity@CXTPDockingPaneMiniWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
