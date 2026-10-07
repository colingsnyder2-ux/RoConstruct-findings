// roc 2009-06 004d9e10  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004d9e10
//
// 004d9e10  56                   push esi
// 004d9e11  57                   push edi
// 004d9e12  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d9e16  8bf1                 mov esi, ecx
// 004d9e18  85ff                 test edi, edi
// 004d9e1a  7450                 je 0x4d9e6c
// 004d9e1c  f60607               test byte ptr [esi], 7
// 004d9e1f  7535                 jne 0x4d9e56
// 004d9e21  8d04fd00000000       lea eax, [edi*8]
// 004d9e28  50                   push eax
// 004d9e29  e822fbffff           call 0x4d9950
// 004d9e2e  8b16                 mov edx, dword ptr [esi]
// 004d9e30  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004d9e34  83c207               add edx, 7
// 004d9e37  c1ea03               shr edx, 3
// 004d9e3a  03560c               add edx, dword ptr [esi + 0xc]
// 004d9e3d  57                   push edi
// 004d9e3e  51                   push ecx
// 004d9e3f  52                   push edx
// 004d9e40  e871002400           call 0x719eb6
// 004d9e45  83c40c               add esp, 0xc
// 004d9e48  8d04fd00000000       lea eax, [edi*8]
// 004d9e4f  0106                 add dword ptr [esi], eax
// 004d9e51  5f                   pop edi
// 004d9e52  5e                   pop esi
// 004d9e53  c20800               ret 8
// 004d9e56  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004d9e5a  6a01                 push 1
// 004d9e5c  8d0cfd00000000       lea ecx, [edi*8]
// 004d9e63  51                   push ecx
// 004d9e64  52                   push edx
// 004d9e65  8bce                 mov ecx, esi
// 004d9e67  e8d4fdffff           call 0x4d9c40
// 004d9e6c  5f                   pop edi
// 004d9e6d  5e                   pop esi
// 004d9e6e  c20800               ret 8
// library rbx2016-raknet/BitStream.cpp (function ?Write@BitStream@RakNet@@QAEXPBDI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
