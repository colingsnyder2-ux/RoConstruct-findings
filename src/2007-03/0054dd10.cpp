// roc 2007-03 0054dd10  unit: seg_00540000  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054dd10
//
// 0054dd10  56                   push esi
// 0054dd11  8bf1                 mov esi, ecx
// 0054dd13  f6465801             test byte ptr [esi + 0x58], 1
// 0054dd17  7443                 je 0x54dd5c
// 0054dd19  8b4640               mov eax, dword ptr [esi + 0x40]
// 0054dd1c  8b10                 mov edx, dword ptr [eax]
// 0054dd1e  57                   push edi
// 0054dd1f  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0054dd23  57                   push edi
// 0054dd24  8d4c2410             lea ecx, [esp + 0x10]
// 0054dd28  51                   push ecx
// 0054dd29  8b4a04               mov ecx, dword ptr [edx + 4]
// 0054dd2c  03c8                 add ecx, eax
// 0054dd2e  ff15c0e57700         call dword ptr [0x77e5c0]
// 0054dd34  8d4c240c             lea ecx, [esp + 0xc]
// 0054dd38  ff15c4e57700         call dword ptr [0x77e5c4]
// 0054dd3e  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0054dd41  85c9                 test ecx, ecx
// 0054dd43  7416                 je 0x54dd5b
// 0054dd45  57                   push edi
// 0054dd46  8d442410             lea eax, [esp + 0x10]
// 0054dd4a  50                   push eax
// 0054dd4b  ff15bce57700         call dword ptr [0x77e5bc]
// 0054dd51  8d4c240c             lea ecx, [esp + 0xc]
// 0054dd55  ff15c4e57700         call dword ptr [0x77e5c4]
// 0054dd5b  5f                   pop edi
// 0054dd5c  5e                   pop esi
// 0054dd5d  c20400               ret 4
// copied from an identical function in another client (function ?imbue@?$indirect_streambuf@V?$reference_wrapper@V?$basic_istream@DU?$char_traits@D@std@@@std@@@boost@@U?$char_traits@D@std@@V?$allocator@D@4@Uinput_seekable@iostreams@2@@detail@iostreams@boost@@MAEXABVlocale@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1-dll roc_boost_resume_389d0bd197ae56e1.cpp