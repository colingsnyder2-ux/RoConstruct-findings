// roc 2012-06 009f2970  unit: CPropertyGridItemBrickColor  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f2970
//
// 009f2970  8b442404             mov eax, dword ptr [esp + 4]
// 009f2974  85c0                 test eax, eax
// 009f2976  7c0e                 jl 0x9f2986
// 009f2978  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 009f297b  7d09                 jge 0x9f2986
// 009f297d  8b4924               mov ecx, dword ptr [ecx + 0x24]
// 009f2980  8b0481               mov eax, dword ptr [ecx + eax*4]
// 009f2983  c20400               ret 4
// 009f2986  33c0                 xor eax, eax
// 009f2988  c20400               ret 4
// library xtp-15.2.1/Source\FlowGraph\XTPFlowGraphConnectionPoint.cpp (function ?GetAt@CXTPFlowGraphImages@@QBEPAVCXTPFlowGraphImage@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/FlowGraph/XTPFlowGraphConnectionPoint.cpp
