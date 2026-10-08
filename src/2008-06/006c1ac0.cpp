// from server: 100% by auto
// roc 2008-06 006c1ac0  unit: CXTPImageManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c1ac0
//
// 006c1ac0  56                   push esi
// 006c1ac1  8bf1                 mov esi, ecx
// 006c1ac3  e818a50f00           call 0x7bbfe0
// 006c1ac8  8b542408             mov edx, dword ptr [esp + 8]
// 006c1acc  894604               mov dword ptr [esi + 4], eax
// 006c1acf  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 006c1ad5  890e                 mov dword ptr [esi], ecx
// 006c1ad7  8990ec000000         mov dword ptr [eax + 0xec], edx
// 006c1add  8bc6                 mov eax, esi
// 006c1adf  5e                   pop esi
// 006c1ae0  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??0CXTPPushRoutingFrame@@QAE@PAVCFrameWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
