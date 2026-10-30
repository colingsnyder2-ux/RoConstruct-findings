// roc 2007-03 0044b5d0  unit: seg_00440000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044b5d0
//
// 0044b5d0  8b442404             mov eax, dword ptr [esp + 4]
// 0044b5d4  8b542408             mov edx, dword ptr [esp + 8]
// 0044b5d8  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0044b5de  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0044b5e2  8991c4000000         mov dword ptr [ecx + 0xc4], edx
// 0044b5e8  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044b5ec  8981c8000000         mov dword ptr [ecx + 0xc8], eax
// 0044b5f2  8991cc000000         mov dword ptr [ecx + 0xcc], edx
// 0044b5f8  c21000               ret 0x10
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?SetRect@CXTPControl@@UAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
