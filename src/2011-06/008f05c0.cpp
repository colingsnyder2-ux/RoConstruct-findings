// roc 2011-06 008f05c0  unit: PAVCXTShadowWnd::?$CList  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f05c0
//
// 008f05c0  56                   push esi
// 008f05c1  57                   push edi
// 008f05c2  6a0a                 push 0xa
// 008f05c4  8bf1                 mov esi, ecx
// 008f05c6  e845fdffff           call 0x8f0310
// 008f05cb  8d7e1c               lea edi, [esi + 0x1c]
// 008f05ce  6a0a                 push 0xa
// 008f05d0  8bcf                 mov ecx, edi
// 008f05d2  c7069ca0ad00         mov dword ptr [esi], 0xada09c
// 008f05d8  e833fdffff           call 0x8f0310
// 008f05dd  68381aac00           push 0xac1a38
// 008f05e2  c7079ca0ad00         mov dword ptr [edi], 0xada09c
// 008f05e8  ff156803a400         call dword ptr [0xa40368]
// 008f05ee  c7463800000000       mov dword ptr [esi + 0x38], 0
// 008f05f5  85c0                 test eax, eax
// 008f05f7  740f                 je 0x8f0608
// 008f05f9  682876ad00           push 0xad7628
// 008f05fe  50                   push eax
// 008f05ff  ff156c03a400         call dword ptr [0xa4036c]
// 008f0605  894638               mov dword ptr [esi + 0x38], eax
// 008f0608  5f                   pop edi
// 008f0609  8bc6                 mov eax, esi
// 008f060b  5e                   pop esi
// 008f060c  c3                   ret 
// copied from an identical function in another client (function ??0CXTShadowsManager@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp