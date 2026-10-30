// from server: 100% by auto
// roc 2008-06 006ad780  unit: CXTPControl  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ad780
//
// 006ad780  56                   push esi
// 006ad781  8bf1                 mov esi, ecx
// 006ad783  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 006ad789  85c9                 test ecx, ecx
// 006ad78b  7506                 jne 0x6ad793
// 006ad78d  33c0                 xor eax, eax
// 006ad78f  5e                   pop esi
// 006ad790  c20800               ret 8
// 006ad793  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ad797  8b542408             mov edx, dword ptr [esp + 8]
// 006ad79b  50                   push eax
// 006ad79c  52                   push edx
// 006ad79d  e87ea20000           call 0x6b7a20
// 006ad7a2  50                   push eax
// 006ad7a3  8bce                 mov ecx, esi
// 006ad7a5  e8a6e2ffff           call 0x6aba50
// 006ad7aa  5e                   pop esi
// 006ad7ab  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?NotifySite@CXTPControl@@QAEJIPAUNMXTPCONTROL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
