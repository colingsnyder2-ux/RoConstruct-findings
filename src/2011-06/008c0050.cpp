// roc 2011-06 008c0050  unit: CXTPDockingPaneMiniWnd  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c0050
//
// 008c0050  56                   push esi
// 008c0051  8bf1                 mov esi, ecx
// 008c0053  85f6                 test esi, esi
// 008c0055  0f8481000000         je 0x8c00dc
// 008c005b  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c005f  747b                 je 0x8c00dc
// 008c0061  53                   push ebx
// 008c0062  8d9ef8000000         lea ebx, [esi + 0xf8]
// 008c0068  57                   push edi
// 008c0069  8bcb                 mov ecx, ebx
// 008c006b  e8f01c0000           call 0x8c1d60
// 008c0070  8bb830010000         mov edi, dword ptr [eax + 0x130]
// 008c0076  85ff                 test edi, edi
// 008c0078  7460                 je 0x8c00da
// 008c007a  8bcb                 mov ecx, ebx
// 008c007c  e8df1c0000           call 0x8c1d60
// 008c0081  8b980c010000         mov ebx, dword ptr [eax + 0x10c]
// 008c0087  81fbff000000         cmp ebx, 0xff
// 008c008d  7514                 jne 0x8c00a3
// 008c008f  6a00                 push 0
// 008c0091  6a00                 push 0
// 008c0093  6800000800           push 0x80000
// 008c0098  8bce                 mov ecx, esi
// 008c009a  e865a5f4ff           call 0x80a604
// 008c009f  5f                   pop edi
// 008c00a0  5b                   pop ebx
// 008c00a1  5e                   pop esi
// 008c00a2  c3                   ret 
// 008c00a3  83bef000000000       cmp dword ptr [esi + 0xf0], 0
// 008c00aa  751f                 jne 0x8c00cb
// 008c00ac  6a00                 push 0
// 008c00ae  6800000800           push 0x80000
// 008c00b3  6a00                 push 0
// 008c00b5  8bce                 mov ecx, esi
// 008c00b7  e848a5f4ff           call 0x80a604
// 008c00bc  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c00bf  6a02                 push 2
// 008c00c1  53                   push ebx
// 008c00c2  6a00                 push 0
// 008c00c4  50                   push eax
// 008c00c5  ffd7                 call edi
// 008c00c7  5f                   pop edi
// 008c00c8  5b                   pop ebx
// 008c00c9  5e                   pop esi
// 008c00ca  c3                   ret 
// 008c00cb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c00ce  6a02                 push 2
// 008c00d0  68ff000000           push 0xff
// 008c00d5  6a00                 push 0
// 008c00d7  51                   push ecx
// 008c00d8  ffd7                 call edi
// 008c00da  5f                   pop edi
// 008c00db  5b                   pop ebx
// 008c00dc  5e                   pop esi
// 008c00dd  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?UpdateWindowOpacity@CXTPDockingPaneMiniWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
