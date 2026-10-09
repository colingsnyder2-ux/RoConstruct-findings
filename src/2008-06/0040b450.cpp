// roc 2008-06 0040b450  unit: 1RBX::Metadata::VReflection::?$FactoryProduct::Creator  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b450
//
// 0040b450  c701ecbc8000         mov dword ptr [ecx], 0x80bcec
// 0040b456  c74110e0bc8000       mov dword ptr [ecx + 0x10], 0x80bce0
// 0040b45d  c74114d8bc8000       mov dword ptr [ecx + 0x14], 0x80bcd8
// 0040b464  c74120d0bc8000       mov dword ptr [ecx + 0x20], 0x80bcd0
// 0040b46b  c74124c0bc8000       mov dword ptr [ecx + 0x24], 0x80bcc0
// 0040b472  c74144b0bc8000       mov dword ptr [ecx + 0x44], 0x80bcb0
// 0040b479  c74164a0bc8000       mov dword ptr [ecx + 0x64], 0x80bca0
// 0040b480  c7818400000090bc8000 mov dword ptr [ecx + 0x84], 0x80bc90
// 0040b48a  c781a400000080bc8000 mov dword ptr [ecx + 0xa4], 0x80bc80
// 0040b494  c781c400000070bc8000 mov dword ptr [ecx + 0xc4], 0x80bc70
// 0040b49e  e99df01400           jmp 0x55a540
// library openrbx-client/App\script\Script.cpp (function ??1?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
