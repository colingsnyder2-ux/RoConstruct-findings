// from server: 100% by auto
// roc 2007-08 00408bc0  unit: boost::thread_exception  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00408bc0
//
// 00408bc0  83ec10               sub esp, 0x10
// 00408bc3  56                   push esi
// 00408bc4  8bf1                 mov esi, ecx
// 00408bc6  807e0400             cmp byte ptr [esi + 4], 0
// 00408bca  7518                 jne 0x408be4
// 00408bcc  8d4c2404             lea ecx, [esp + 4]
// 00408bd0  e8fbcb3100           call 0x7257d0
// 00408bd5  686cfd8300           push 0x83fd6c
// 00408bda  8d442408             lea eax, [esp + 8]
// 00408bde  50                   push eax
// 00408bdf  e8ba7f2200           call 0x630b9e
// 00408be4  8b0e                 mov ecx, dword ptr [esi]
// 00408be6  e885cb3100           call 0x725770
// 00408beb  c6460400             mov byte ptr [esi + 4], 0
// 00408bef  5e                   pop esi
// 00408bf0  83c410               add esp, 0x10
// 00408bf3  c3                   ret 
// library boost-1.34.1/libs\thread\src\barrier.cpp (function ?unlock@?$scoped_lock@Vmutex@boost@@@thread@detail@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/barrier.cpp
