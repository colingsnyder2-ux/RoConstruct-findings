// roc 2010-06 004dd620  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004dd620
//
// 004dd620  56                   push esi
// 004dd621  57                   push edi
// 004dd622  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004dd626  8bf1                 mov esi, ecx
// 004dd628  85ff                 test edi, edi
// 004dd62a  7450                 je 0x4dd67c
// 004dd62c  f60607               test byte ptr [esi], 7
// 004dd62f  7535                 jne 0x4dd666
// 004dd631  8d04fd00000000       lea eax, [edi*8]
// 004dd638  50                   push eax
// 004dd639  e822fbffff           call 0x4dd160
// 004dd63e  8b16                 mov edx, dword ptr [esi]
// 004dd640  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004dd644  83c207               add edx, 7
// 004dd647  c1ea03               shr edx, 3
// 004dd64a  03560c               add edx, dword ptr [esi + 0xc]
// 004dd64d  57                   push edi
// 004dd64e  51                   push ecx
// 004dd64f  52                   push edx
// 004dd650  e8d1b72c00           call 0x7a8e26
// 004dd655  83c40c               add esp, 0xc
// 004dd658  8d04fd00000000       lea eax, [edi*8]
// 004dd65f  0106                 add dword ptr [esi], eax
// 004dd661  5f                   pop edi
// 004dd662  5e                   pop esi
// 004dd663  c20800               ret 8
// 004dd666  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004dd66a  6a01                 push 1
// 004dd66c  8d0cfd00000000       lea ecx, [edi*8]
// 004dd673  51                   push ecx
// 004dd674  52                   push edx
// 004dd675  8bce                 mov ecx, esi
// 004dd677  e8d4fdffff           call 0x4dd450
// 004dd67c  5f                   pop edi
// 004dd67d  5e                   pop esi
// 004dd67e  c20800               ret 8
// library rbx2016-raknet/BitStream.cpp (function ?Write@BitStream@RakNet@@QAEXPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
