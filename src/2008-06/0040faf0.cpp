// roc 2008-06 0040faf0  unit: VCWorkspace::?$CComAggObject  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040faf0
//
// 0040faf0  8b442404             mov eax, dword ptr [esp + 4]
// 0040faf4  ff4004               inc dword ptr [eax + 4]
// 0040faf7  8b4004               mov eax, dword ptr [eax + 4]
// 0040fafa  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTDropSource.cpp (function ?AddRef@CXTDropSource@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTDropSource.cpp
