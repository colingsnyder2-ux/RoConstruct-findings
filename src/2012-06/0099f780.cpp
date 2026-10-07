// roc 2012-06 0099f780  unit: CXTPToolBar  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099f780
//
// 0099f780  56                   push esi
// 0099f781  8bf1                 mov esi, ecx
// 0099f783  e86835ffff           call 0x992cf0
// 0099f788  8bc8                 mov ecx, eax
// 0099f78a  85c9                 test ecx, ecx
// 0099f78c  7422                 je 0x99f7b0
// 0099f78e  8b542408             mov edx, dword ptr [esp + 8]
// 0099f792  83fa02               cmp edx, 2
// 0099f795  740e                 je 0x99f7a5
// 0099f797  85d2                 test edx, edx
// 0099f799  740a                 je 0x99f7a5
// 0099f79b  83fa03               cmp edx, 3
// 0099f79e  7405                 je 0x99f7a5
// 0099f7a0  83fa01               cmp edx, 1
// 0099f7a3  7511                 jne 0x99f7b6
// 0099f7a5  52                   push edx
// 0099f7a6  56                   push esi
// 0099f7a7  e8c42b0000           call 0x9a2370
// 0099f7ac  85c0                 test eax, eax
// 0099f7ae  7515                 jne 0x99f7c5
// 0099f7b0  33c0                 xor eax, eax
// 0099f7b2  5e                   pop esi
// 0099f7b3  c20400               ret 4
// 0099f7b6  83fa04               cmp edx, 4
// 0099f7b9  75f5                 jne 0x99f7b0
// 0099f7bb  56                   push esi
// 0099f7bc  e8ef2b0000           call 0x9a23b0
// 0099f7c1  85c0                 test eax, eax
// 0099f7c3  74eb                 je 0x99f7b0
// 0099f7c5  b801000000           mov eax, 1
// 0099f7ca  5e                   pop esi
// 0099f7cb  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPToolBar.cpp (function ?SetPosition@CXTPToolBar@@UAEHW4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPToolBar.cpp
