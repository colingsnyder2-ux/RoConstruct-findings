// roc 2007-08 00643600  unit: CXTPPaintManager  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643600
//
// 00643600  8b442404             mov eax, dword ptr [esp + 4]
// 00643604  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 0064360a  8910                 mov dword ptr [eax], edx
// 0064360c  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 00643612  895004               mov dword ptr [eax + 4], edx
// 00643615  8b91b8000000         mov edx, dword ptr [ecx + 0xb8]
// 0064361b  8b89bc000000         mov ecx, dword ptr [ecx + 0xbc]
// 00643621  895008               mov dword ptr [eax + 8], edx
// 00643624  89480c               mov dword ptr [eax + 0xc], ecx
// 00643627  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDefaultTheme.cpp (function ?GetRowRect@CXTPControl@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDefaultTheme.cpp
