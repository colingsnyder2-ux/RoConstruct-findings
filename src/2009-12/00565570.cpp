// roc 2009-12 00565570  unit: CXTPRichRender::XTextHost  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00565570
//
// 00565570  8bc1                 mov eax, ecx
// 00565572  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00565576  8b11                 mov edx, dword ptr [ecx]
// 00565578  8910                 mov dword ptr [eax], edx
// 0056557a  8b5104               mov edx, dword ptr [ecx + 4]
// 0056557d  895004               mov dword ptr [eax + 4], edx
// 00565580  8b5108               mov edx, dword ptr [ecx + 8]
// 00565583  895008               mov dword ptr [eax + 8], edx
// 00565586  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 00565589  89480c               mov dword ptr [eax + 0xc], ecx
// 0056558c  c20400               ret 4
// library g3d-6.09/G3Dcpp\NetAddress.cpp (function ??0NetAddress@G3D@@AAE@ABUsockaddr_in@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/NetAddress.cpp
