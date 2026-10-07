// roc 2011-06 004ecc80  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ecc80
//
// 004ecc80  56                   push esi
// 004ecc81  8bf1                 mov esi, ecx
// 004ecc83  8b06                 mov eax, dword ptr [esi]
// 004ecc85  8d4807               lea ecx, [eax + 7]
// 004ecc88  57                   push edi
// 004ecc89  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004ecc8d  c1e903               shr ecx, 3
// 004ecc90  3bcf                 cmp ecx, edi
// 004ecc92  7344                 jae 0x4eccd8
// 004ecc94  8d50ff               lea edx, [eax - 1]
// 004ecc97  83e207               and edx, 7
// 004ecc9a  2bc2                 sub eax, edx
// 004ecc9c  83c007               add eax, 7
// 004ecc9f  8906                 mov dword ptr [esi], eax
// 004ecca1  83c007               add eax, 7
// 004ecca4  c1e803               shr eax, 3
// 004ecca7  2bf8                 sub edi, eax
// 004ecca9  8d04fd00000000       lea eax, [edi*8]
// 004eccb0  50                   push eax
// 004eccb1  8bce                 mov ecx, esi
// 004eccb3  e818ffffff           call 0x4ecbd0
// 004eccb8  8b0e                 mov ecx, dword ptr [esi]
// 004eccba  83c107               add ecx, 7
// 004eccbd  c1e903               shr ecx, 3
// 004eccc0  034e0c               add ecx, dword ptr [esi + 0xc]
// 004eccc3  57                   push edi
// 004eccc4  6a00                 push 0
// 004eccc6  51                   push ecx
// 004eccc7  e818e63100           call 0x80b2e4
// 004ecccc  8d14fd00000000       lea edx, [edi*8]
// 004eccd3  83c40c               add esp, 0xc
// 004eccd6  0116                 add dword ptr [esi], edx
// 004eccd8  5f                   pop edi
// 004eccd9  5e                   pop esi
// 004eccda  c20400               ret 4
// library rbx2016-raknet/BitStream.cpp (function ?PadWithZeroToByteLength@BitStream@RakNet@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet BitStream.cpp
