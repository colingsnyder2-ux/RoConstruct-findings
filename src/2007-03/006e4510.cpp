// roc 2007-03 006e4510  unit: seg_006e0000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006e4510
//
// 006e4510  56                   push esi
// 006e4511  8bf1                 mov esi, ecx
// 006e4513  e8880af7ff           call 0x654fa0
// 006e4518  6a00                 push 0
// 006e451a  8bc8                 mov ecx, eax
// 006e451c  e84f04f7ff           call 0x654970
// 006e4521  85c0                 test eax, eax
// 006e4523  7404                 je 0x6e4529
// 006e4525  33c0                 xor eax, eax
// 006e4527  5e                   pop esi
// 006e4528  c3                   ret 
// 006e4529  33c0                 xor eax, eax
// 006e452b  3906                 cmp dword ptr [esi], eax
// 006e452d  5e                   pop esi
// 006e452e  0f95c0               setne al
// 006e4531  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPShadowsManager.cpp (function ?AlphaShadow@CXTPShadowsManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPShadowsManager.cpp
