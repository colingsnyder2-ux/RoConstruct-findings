// roc 2008-06 0064da40  unit: RBX::SimJobStage  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064da40
//
// 0064da40  56                   push esi
// 0064da41  57                   push edi
// 0064da42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0064da46  57                   push edi
// 0064da47  8bf1                 mov esi, ecx
// 0064da49  e842c4dbff           call 0x409e90
// 0064da4e  c70638b28400         mov dword ptr [esi], 0x84b238
// 0064da54  8b4728               mov eax, dword ptr [edi + 0x28]
// 0064da57  894628               mov dword ptr [esi + 0x28], eax
// 0064da5a  5f                   pop edi
// 0064da5b  8bc6                 mov eax, esi
// 0064da5d  5e                   pop esi
// 0064da5e  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
