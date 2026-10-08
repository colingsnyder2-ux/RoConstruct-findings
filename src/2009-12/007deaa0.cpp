// roc 2009-12 007deaa0  unit: RBX::ContactStage  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007deaa0
//
// 007deaa0  56                   push esi
// 007deaa1  57                   push edi
// 007deaa2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007deaa6  57                   push edi
// 007deaa7  8bf1                 mov esi, ecx
// 007deaa9  e872a9c2ff           call 0x409420
// 007deaae  c7067cfc9e00         mov dword ptr [esi], 0x9efc7c
// 007deab4  8b4728               mov eax, dword ptr [edi + 0x28]
// 007deab7  894628               mov dword ptr [esi + 0x28], eax
// 007deaba  5f                   pop edi
// 007deabb  8bc6                 mov eax, esi
// 007deabd  5e                   pop esi
// 007deabe  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
