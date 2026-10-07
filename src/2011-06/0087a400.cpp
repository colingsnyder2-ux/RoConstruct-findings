// roc 2011-06 0087a400  unit: CPropertyGridItemBrickColor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087a400
//
// 0087a400  8b442404             mov eax, dword ptr [esp + 4]
// 0087a404  85c0                 test eax, eax
// 0087a406  7c0e                 jl 0x87a416
// 0087a408  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 0087a40b  7d09                 jge 0x87a416
// 0087a40d  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 0087a410  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0087a413  c20400               ret 4
// 0087a416  33c0                 xor eax, eax
// 0087a418  c20400               ret 4
// library xtp-15.2.1/Source\FlowGraph\XTPFlowGraphConnectionPoint.cpp (function ?GetAt@CXTPFlowGraphImages@@QBEPAVCXTPFlowGraphImage@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/FlowGraph/XTPFlowGraphConnectionPoint.cpp
