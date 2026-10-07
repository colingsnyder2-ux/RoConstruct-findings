// roc 2012-06 0041b2f0  unit: VCRbxObject::?$CComObjectNoLock  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041b2f0
//
// 0041b2f0  56                   push esi
// 0041b2f1  57                   push edi
// 0041b2f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0041b2f6  57                   push edi
// 0041b2f7  8bf1                 mov esi, ecx
// 0041b2f9  e8120effff           call 0x40c110
// 0041b2fe  c7069470b400         mov dword ptr [esi], 0xb47094
// 0041b304  8b4728               mov eax, dword ptr [edi + 0x28]
// 0041b307  894628               mov dword ptr [esi + 0x28], eax
// 0041b30a  5f                   pop edi
// 0041b30b  8bc6                 mov eax, esi
// 0041b30d  5e                   pop esi
// 0041b30e  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
