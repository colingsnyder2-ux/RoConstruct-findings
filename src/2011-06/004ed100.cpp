// roc 2011-06 004ed100  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ed100
//
// 004ed100  56                   push esi
// 004ed101  57                   push edi
// 004ed102  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004ed106  8bf1                 mov esi, ecx
// 004ed108  85ff                 test edi, edi
// 004ed10a  7450                 je 0x4ed15c
// 004ed10c  f60607               test byte ptr [esi], 7
// 004ed10f  7535                 jne 0x4ed146
// 004ed111  8d04fd00000000       lea eax, [edi*8]
// 004ed118  50                   push eax
// 004ed119  e8b2faffff           call 0x4ecbd0
// 004ed11e  8b16                 mov edx, dword ptr [esi]
// 004ed120  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ed124  83c207               add edx, 7
// 004ed127  c1ea03               shr edx, 3
// 004ed12a  03560c               add edx, dword ptr [esi + 0xc]
// 004ed12d  57                   push edi
// 004ed12e  51                   push ecx
// 004ed12f  52                   push edx
// 004ed130  e8a7e43100           call 0x80b5dc
// 004ed135  83c40c               add esp, 0xc
// 004ed138  8d04fd00000000       lea eax, [edi*8]
// 004ed13f  0106                 add dword ptr [esi], eax
// 004ed141  5f                   pop edi
// 004ed142  5e                   pop esi
// 004ed143  c20800               ret 8
// 004ed146  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004ed14a  6a01                 push 1
// 004ed14c  8d0cfd00000000       lea ecx, [edi*8]
// 004ed153  51                   push ecx
// 004ed154  52                   push edx
// 004ed155  8bce                 mov ecx, esi
// 004ed157  e874feffff           call 0x4ecfd0
// 004ed15c  5f                   pop edi
// 004ed15d  5e                   pop esi
// 004ed15e  c20800               ret 8
// library rbx2016-raknet/BitStream.cpp (function ?Write@BitStream@RakNet@@QAEXPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
