// from server: 100% by auto
// roc 2010-06 00792060  unit: RBX::ContactStage  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00792060
//
// 00792060  56                   push esi
// 00792061  57                   push edi
// 00792062  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00792066  57                   push edi
// 00792067  8bf1                 mov esi, ecx
// 00792069  e8b273c7ff           call 0x409420
// 0079206e  c7065c3fa500         mov dword ptr [esi], 0xa53f5c
// 00792074  8b4728               mov eax, dword ptr [edi + 0x28]
// 00792077  894628               mov dword ptr [esi + 0x28], eax
// 0079207a  5f                   pop edi
// 0079207b  8bc6                 mov eax, esi
// 0079207d  5e                   pop esi
// 0079207e  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
