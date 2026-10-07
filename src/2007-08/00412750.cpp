// roc 2007-08 00412750  unit: VCWorkspace::?$CComAggObject  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412750
//
// 00412750  8b442404             mov eax, dword ptr [esp + 4]
// 00412754  83400401             add dword ptr [eax + 4], 1
// 00412758  8b4004               mov eax, dword ptr [eax + 4]
// 0041275b  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTDropSource.cpp (function ?AddRef@CXTDropSource@@UAGKXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTDropSource.cpp
