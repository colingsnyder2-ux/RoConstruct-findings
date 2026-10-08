// from server: 100% by auto
// roc 2011-06 00417e60  unit: VCRbxObject::?$CComObjectNoLock  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00417e60
//
// 00417e60  56                   push esi
// 00417e61  57                   push edi
// 00417e62  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00417e66  57                   push edi
// 00417e67  8bf1                 mov esi, ecx
// 00417e69  e8722bffff           call 0x40a9e0
// 00417e6e  c706a4e9a500         mov dword ptr [esi], 0xa5e9a4
// 00417e74  8b4728               mov eax, dword ptr [edi + 0x28]
// 00417e77  894628               mov dword ptr [esi + 0x28], eax
// 00417e7a  5f                   pop edi
// 00417e7b  8bc6                 mov eax, esi
// 00417e7d  5e                   pop esi
// 00417e7e  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
