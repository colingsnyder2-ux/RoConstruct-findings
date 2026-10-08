// from server: 100% by auto
// roc 2007-08 006fdbc0  unit: CXTPTabManagerNavigateButton  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fdbc0
//
// 006fdbc0  56                   push esi
// 006fdbc1  57                   push edi
// 006fdbc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006fdbc6  8bf1                 mov esi, ecx
// 006fdbc8  397e04               cmp dword ptr [esi + 4], edi
// 006fdbcb  7435                 je 0x6fdc02
// 006fdbcd  8b06                 mov eax, dword ptr [esi]
// 006fdbcf  85c0                 test eax, eax
// 006fdbd1  740f                 je 0x6fdbe2
// 006fdbd3  50                   push eax
// 006fdbd4  e84d23f3ff           call 0x62ff26
// 006fdbd9  83c404               add esp, 4
// 006fdbdc  c70600000000         mov dword ptr [esi], 0
// 006fdbe2  33c9                 xor ecx, ecx
// 006fdbe4  8bc7                 mov eax, edi
// 006fdbe6  ba08000000           mov edx, 8
// 006fdbeb  f7e2                 mul edx
// 006fdbed  0f90c1               seto cl
// 006fdbf0  f7d9                 neg ecx
// 006fdbf2  0bc8                 or ecx, eax
// 006fdbf4  51                   push ecx
// 006fdbf5  e83823f3ff           call 0x62ff32
// 006fdbfa  83c404               add esp, 4
// 006fdbfd  8906                 mov dword ptr [esi], eax
// 006fdbff  897e04               mov dword ptr [esi + 4], edi
// 006fdc02  85ff                 test edi, edi
// 006fdc04  8b06                 mov eax, dword ptr [esi]
// 006fdc06  7e16                 jle 0x6fdc1e
// 006fdc08  c70000000000         mov dword ptr [eax], 0
// 006fdc0e  8b4e08               mov ecx, dword ptr [esi + 8]
// 006fdc11  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 006fdc14  8b06                 mov eax, dword ptr [esi]
// 006fdc16  83ea01               sub edx, 1
// 006fdc19  895004               mov dword ptr [eax + 4], edx
// 006fdc1c  8b06                 mov eax, dword ptr [esi]
// 006fdc1e  5f                   pop edi
// 006fdc1f  5e                   pop esi
// 006fdc20  c20400               ret 4
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabManager.cpp (function ?CreateIndexer@CRowIndexer@CXTPTabManager@@QAEPAUROW_ITEMS@2@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabManager.cpp
