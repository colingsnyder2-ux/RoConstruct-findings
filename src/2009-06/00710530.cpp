// roc 2009-06 00710530  unit: RBX::TaskScheduler::VThread::?$sp_counted_impl_p  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00710530
//
// 00710530  56                   push esi
// 00710531  57                   push edi
// 00710532  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00710536  57                   push edi
// 00710537  8bf1                 mov esi, ecx
// 00710539  e8428fcfff           call 0x409480
// 0071053e  c706bcfe8e00         mov dword ptr [esi], 0x8efebc
// 00710544  8b4728               mov eax, dword ptr [edi + 0x28]
// 00710547  894628               mov dword ptr [esi + 0x28], eax
// 0071054a  5f                   pop edi
// 0071054b  8bc6                 mov eax, esi
// 0071054d  5e                   pop esi
// 0071054e  c20400               ret 4
// library boost-1.34.1/libs\iostreams\src\zlib.cpp (function ??0zlib_error@iostreams@boost@@QAE@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/iostreams/src/zlib.cpp
