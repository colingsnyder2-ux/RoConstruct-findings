// from server: 100% by auto
// roc 2011-06 004089b0  unit: VCApp::?$CComAggObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004089b0
//
// 004089b0  8b442404             mov eax, dword ptr [esp + 4]
// 004089b4  ff4004               inc dword ptr [eax + 4]
// 004089b7  8b4004               mov eax, dword ptr [eax + 4]
// 004089ba  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Shell\XTPDropSource.cpp (function ?AddRef@CXTPDropSource@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPDropSource.cpp
