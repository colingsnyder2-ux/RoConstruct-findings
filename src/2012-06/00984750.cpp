// roc 2012-06 00984750  unit: CRobloxControlColorSelector  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00984750
//
// 00984750  8b814c010000         mov eax, dword ptr [ecx + 0x14c]
// 00984756  83f8ff               cmp eax, -1
// 00984759  7524                 jne 0x98477f
// 0098475b  8b8148010000         mov eax, dword ptr [ecx + 0x148]
// 00984761  85c0                 test eax, eax
// 00984763  751a                 jne 0x98477f
// 00984765  8b8150010000         mov eax, dword ptr [ecx + 0x150]
// 0098476b  85c0                 test eax, eax
// 0098476d  7510                 jne 0x98477f
// 0098476f  8b8900010000         mov ecx, dword ptr [ecx + 0x100]
// 00984775  85c9                 test ecx, ecx
// 00984777  7406                 je 0x98477f
// 00984779  8b8170010000         mov eax, dword ptr [ecx + 0x170]
// 0098477f  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?GetStyle@CXTPControl@@QBE?AW4XTPButtonStyle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
