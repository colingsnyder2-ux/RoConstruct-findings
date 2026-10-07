// roc 2007-08 006de930  unit: CXTPDockingPaneMiniWnd  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006de930
//
// 006de930  56                   push esi
// 006de931  8bf1                 mov esi, ecx
// 006de933  85f6                 test esi, esi
// 006de935  0f8481000000         je 0x6de9bc
// 006de93b  837e2000             cmp dword ptr [esi + 0x20], 0
// 006de93f  747b                 je 0x6de9bc
// 006de941  53                   push ebx
// 006de942  8d9ee4000000         lea ebx, [esi + 0xe4]
// 006de948  57                   push edi
// 006de949  8bcb                 mov ecx, ebx
// 006de94b  e8f01b0000           call 0x6e0540
// 006de950  8bb830010000         mov edi, dword ptr [eax + 0x130]
// 006de956  85ff                 test edi, edi
// 006de958  7460                 je 0x6de9ba
// 006de95a  8bcb                 mov ecx, ebx
// 006de95c  e8df1b0000           call 0x6e0540
// 006de961  8b980c010000         mov ebx, dword ptr [eax + 0x10c]
// 006de967  81fbff000000         cmp ebx, 0xff
// 006de96d  7514                 jne 0x6de983
// 006de96f  6a00                 push 0
// 006de971  6a00                 push 0
// 006de973  6800000800           push 0x80000
// 006de978  8bce                 mov ecx, esi
// 006de97a  e89518f5ff           call 0x630214
// 006de97f  5f                   pop edi
// 006de980  5b                   pop ebx
// 006de981  5e                   pop esi
// 006de982  c3                   ret 
// 006de983  83bedc00000000       cmp dword ptr [esi + 0xdc], 0
// 006de98a  751f                 jne 0x6de9ab
// 006de98c  6a00                 push 0
// 006de98e  6800000800           push 0x80000
// 006de993  6a00                 push 0
// 006de995  8bce                 mov ecx, esi
// 006de997  e87818f5ff           call 0x630214
// 006de99c  8b4620               mov eax, dword ptr [esi + 0x20]
// 006de99f  6a02                 push 2
// 006de9a1  53                   push ebx
// 006de9a2  6a00                 push 0
// 006de9a4  50                   push eax
// 006de9a5  ffd7                 call edi
// 006de9a7  5f                   pop edi
// 006de9a8  5b                   pop ebx
// 006de9a9  5e                   pop esi
// 006de9aa  c3                   ret 
// 006de9ab  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006de9ae  6a02                 push 2
// 006de9b0  68ff000000           push 0xff
// 006de9b5  6a00                 push 0
// 006de9b7  51                   push ecx
// 006de9b8  ffd7                 call edi
// 006de9ba  5f                   pop edi
// 006de9bb  5b                   pop ebx
// 006de9bc  5e                   pop esi
// 006de9bd  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?UpdateWindowOpacity@CXTPDockingPaneMiniWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
