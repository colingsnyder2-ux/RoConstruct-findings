// from server: 100% by auto
// roc 2011-06 00424ba0  unit: CInstanceRecord::CNameItem  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00424ba0
//
// 00424ba0  56                   push esi
// 00424ba1  33f6                 xor esi, esi
// 00424ba3  39356c82d100         cmp dword ptr [0xd1826c], esi
// 00424ba9  740d                 je 0x424bb8
// 00424bab  686c82d100           push 0xd1826c
// 00424bb0  ff154803a400         call dword ptr [0xa40348]
// 00424bb6  8bf0                 mov esi, eax
// 00424bb8  833d7482d10000       cmp dword ptr [0xd18274], 0
// 00424bbf  7434                 je 0x424bf5
// 00424bc1  8b442408             mov eax, dword ptr [esp + 8]
// 00424bc5  8b0d6882d100         mov ecx, dword ptr [0xd18268]
// 00424bcb  50                   push eax
// 00424bcc  6a00                 push 0
// 00424bce  51                   push ecx
// 00424bcf  ff15b401a400         call dword ptr [0xa401b4]
// 00424bd5  85f6                 test esi, esi
// 00424bd7  751a                 jne 0x424bf3
// 00424bd9  a16882d100           mov eax, dword ptr [0xd18268]
// 00424bde  85c0                 test eax, eax
// 00424be0  7407                 je 0x424be9
// 00424be2  50                   push eax
// 00424be3  ff159002a400         call dword ptr [0xa40290]
// 00424be9  c7056882d10000000000 mov dword ptr [0xd18268], 0
// 00424bf3  5e                   pop esi
// 00424bf4  c3                   ret 
// 00424bf5  5e                   pop esi
// 00424bf6  e95d543e00           jmp 0x80a058
// library xtp-15.2.1/Source\Chart\XTPChartSeriesPoint.cpp (function ?Free_mem@?$CXTPHeapAllocatorT@UCXTPChartSeriesPointAllocatorData@@@@SAXPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Chart/XTPChartSeriesPoint.cpp
