// roc 2007-03 0044b590  unit: seg_00440000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044b590
//
// 0044b590  8b442404             mov eax, dword ptr [esp + 4]
// 0044b594  39819c000000         cmp dword ptr [ecx + 0x9c], eax
// 0044b59a  7413                 je 0x44b5af
// 0044b59c  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 0044b5a2  c744240401000000     mov dword ptr [esp + 4], 1
// 0044b5aa  e901461e00           jmp 0x62fbb0
// 0044b5af  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetEnabled@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
