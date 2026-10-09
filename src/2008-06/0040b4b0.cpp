// roc 2008-06 0040b4b0  unit: 1RBX::Metadata::VReflection::?$FactoryProduct::Creator  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040b4b0
//
// 0040b4b0  56                   push esi
// 0040b4b1  8bf1                 mov esi, ecx
// 0040b4b3  e828031500           call 0x55b7e0
// 0040b4b8  c706ecbc8000         mov dword ptr [esi], 0x80bcec
// 0040b4be  c74610e0bc8000       mov dword ptr [esi + 0x10], 0x80bce0
// 0040b4c5  c74614d8bc8000       mov dword ptr [esi + 0x14], 0x80bcd8
// 0040b4cc  c74620d0bc8000       mov dword ptr [esi + 0x20], 0x80bcd0
// 0040b4d3  c74624c0bc8000       mov dword ptr [esi + 0x24], 0x80bcc0
// 0040b4da  c74644b0bc8000       mov dword ptr [esi + 0x44], 0x80bcb0
// 0040b4e1  c74664a0bc8000       mov dword ptr [esi + 0x64], 0x80bca0
// 0040b4e8  c7868400000090bc8000 mov dword ptr [esi + 0x84], 0x80bc90
// 0040b4f2  c786a400000080bc8000 mov dword ptr [esi + 0xa4], 0x80bc80
// 0040b4fc  c786c400000070bc8000 mov dword ptr [esi + 0xc4], 0x80bc70
// 0040b506  8bc6                 mov eax, esi
// 0040b508  5e                   pop esi
// 0040b509  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$FactoryProduct@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
