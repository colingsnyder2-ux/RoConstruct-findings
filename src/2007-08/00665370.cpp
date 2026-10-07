// roc 2007-08 00665370  unit: CXTTreeBase  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00665370
//
// 00665370  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00665373  8b442404             mov eax, dword ptr [esp + 4]
// 00665377  895048               mov dword ptr [eax + 0x48], edx
// 0066537a  83410cff             add dword ptr [ecx + 0xc], -1
// 0066537e  894110               mov dword ptr [ecx + 0x10], eax
// 00665381  7505                 jne 0x665388
// 00665383  e898ffffff           call 0x665320
// 00665388  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?FreeAssoc@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@IAEXPAVCAssoc@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
