// from server: 100% by auto
// roc 2008-06 006dc140  unit: CXTTreeBase  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dc140
//
// 006dc140  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006dc143  8b442404             mov eax, dword ptr [esp + 4]
// 006dc147  895048               mov dword ptr [eax + 0x48], edx
// 006dc14a  83410cff             add dword ptr [ecx + 0xc], -1
// 006dc14e  894110               mov dword ptr [ecx + 0x10], eax
// 006dc151  7505                 jne 0x6dc158
// 006dc153  e898ffffff           call 0x6dc0f0
// 006dc158  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?FreeAssoc@?$CMap@PAXPAXUCLRFONT@CXTTreeBase@@AAU12@@@IAEXPAVCAssoc@1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
