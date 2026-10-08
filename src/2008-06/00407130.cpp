// from server: 100% by auto
// roc 2008-06 00407130  unit: VCApp::?$CComObject  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00407130
//
// 00407130  807c240800           cmp byte ptr [esp + 8], 0
// 00407135  56                   push esi
// 00407136  8bf1                 mov esi, ecx
// 00407138  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040713c  890e                 mov dword ptr [esi], ecx
// 0040713e  c6460400             mov byte ptr [esi + 4], 0
// 00407142  7409                 je 0x40714d
// 00407144  e847bf1500           call 0x563090
// 00407149  c6460401             mov byte ptr [esi + 4], 1
// 0040714d  8bc6                 mov eax, esi
// 0040714f  5e                   pop esi
// 00407150  c20800               ret 8
// library boost-1.34.1/libs\thread\src\barrier.cpp (function ??0?$scoped_lock@Vmutex@boost@@@thread@detail@boost@@QAE@AAVmutex@3@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/barrier.cpp
