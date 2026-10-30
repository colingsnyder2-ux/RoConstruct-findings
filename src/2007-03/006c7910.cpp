// roc 2007-03 006c7910  unit: seg_006c0000  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c7910
//
// 006c7910  56                   push esi
// 006c7911  8bf1                 mov esi, ecx
// 006c7913  85f6                 test esi, esi
// 006c7915  0f8481000000         je 0x6c799c
// 006c791b  837e2000             cmp dword ptr [esi + 0x20], 0
// 006c791f  747b                 je 0x6c799c
// 006c7921  53                   push ebx
// 006c7922  8d9ee4000000         lea ebx, [esi + 0xe4]
// 006c7928  57                   push edi
// 006c7929  8bcb                 mov ecx, ebx
// 006c792b  e8f01b0000           call 0x6c9520
// 006c7930  8bb830010000         mov edi, dword ptr [eax + 0x130]
// 006c7936  85ff                 test edi, edi
// 006c7938  7460                 je 0x6c799a
// 006c793a  8bcb                 mov ecx, ebx
// 006c793c  e8df1b0000           call 0x6c9520
// 006c7941  8b980c010000         mov ebx, dword ptr [eax + 0x10c]
// 006c7947  81fbff000000         cmp ebx, 0xff
// 006c794d  7514                 jne 0x6c7963
// 006c794f  6a00                 push 0
// 006c7951  6a00                 push 0
// 006c7953  6800000800           push 0x80000
// 006c7958  8bce                 mov ecx, esi
// 006c795a  e8436df5ff           call 0x61e6a2
// 006c795f  5f                   pop edi
// 006c7960  5b                   pop ebx
// 006c7961  5e                   pop esi
// 006c7962  c3                   ret 
// 006c7963  83bedc00000000       cmp dword ptr [esi + 0xdc], 0
// 006c796a  751f                 jne 0x6c798b
// 006c796c  6a00                 push 0
// 006c796e  6800000800           push 0x80000
// 006c7973  6a00                 push 0
// 006c7975  8bce                 mov ecx, esi
// 006c7977  e8266df5ff           call 0x61e6a2
// 006c797c  8b4620               mov eax, dword ptr [esi + 0x20]
// 006c797f  6a02                 push 2
// 006c7981  53                   push ebx
// 006c7982  6a00                 push 0
// 006c7984  50                   push eax
// 006c7985  ffd7                 call edi
// 006c7987  5f                   pop edi
// 006c7988  5b                   pop ebx
// 006c7989  5e                   pop esi
// 006c798a  c3                   ret 
// 006c798b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006c798e  6a02                 push 2
// 006c7990  68ff000000           push 0xff
// 006c7995  6a00                 push 0
// 006c7997  51                   push ecx
// 006c7998  ffd7                 call edi
// 006c799a  5f                   pop edi
// 006c799b  5b                   pop ebx
// 006c799c  5e                   pop esi
// 006c799d  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?UpdateWindowOpacity@CXTPDockingPaneMiniWnd@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
