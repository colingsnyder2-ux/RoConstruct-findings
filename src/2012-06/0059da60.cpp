// roc 2012-06 0059da60  unit: VAuthoringSettings::?$FactoryProduct  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059da60
//
// 0059da60  83ec1c               sub esp, 0x1c
// 0059da63  57                   push edi
// 0059da64  8bf9                 mov edi, ecx
// 0059da66  8d8fa00e0000         lea ecx, [edi + 0xea0]
// 0059da6c  e8af01eeff           call 0x47dc20
// 0059da71  83bf540f000000       cmp dword ptr [edi + 0xf54], 0
// 0059da78  8d04c5b8ffffff       lea eax, [eax*8 - 0x48]
// 0059da7f  89442404             mov dword ptr [esp + 4], eax
// 0059da83  0f86ce000000         jbe 0x59db57
// 0059da89  53                   push ebx
// 0059da8a  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0059da8e  55                   push ebp
// 0059da8f  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0059da93  56                   push esi
// 0059da94  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0059da98  8bce                 mov ecx, esi
// 0059da9a  e8419cfcff           call 0x5676e0
// 0059da9f  80bf680f000000       cmp byte ptr [edi + 0xf68], 0
// 0059daa6  c644242401           mov byte ptr [esp + 0x24], 1
// 0059daab  c644242500           mov byte ptr [esp + 0x25], 0
// 0059dab0  c644242600           mov byte ptr [esp + 0x26], 0
// 0059dab5  742e                 je 0x59dae5
// 0059dab7  8d4c2438             lea ecx, [esp + 0x38]
// 0059dabb  51                   push ecx
// 0059dabc  8d542418             lea edx, [esp + 0x18]
// 0059dac0  52                   push edx
// 0059dac1  8d442454             lea eax, [esp + 0x54]
// 0059dac5  50                   push eax
// 0059dac6  55                   push ebp
// 0059dac7  53                   push ebx
// 0059dac8  8d8fa00e0000         lea ecx, [edi + 0xea0]
// 0059dace  e86da90200           call 0x5c8440
// 0059dad3  dd442438             fld qword ptr [esp + 0x38]
// 0059dad7  8a4c244c             mov cl, byte ptr [esp + 0x4c]
// 0059dadb  d95c2420             fstp dword ptr [esp + 0x20]
// 0059dadf  884c2427             mov byte ptr [esp + 0x27], cl
// 0059dae3  eb05                 jmp 0x59daea
// 0059dae5  c644242700           mov byte ptr [esp + 0x27], 0
// 0059daea  8bce                 mov ecx, esi
// 0059daec  e8ef9bfcff           call 0x5676e0
// 0059daf1  56                   push esi
// 0059daf2  8d4c2420             lea ecx, [esp + 0x20]
// 0059daf6  e875dfffff           call 0x59ba70
// 0059dafb  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059daff  6a01                 push 1
// 0059db01  52                   push edx
// 0059db02  56                   push esi
// 0059db03  8d8f500f0000         lea ecx, [edi + 0xf50]
// 0059db09  e872ebffff           call 0x59c680
// 0059db0e  8b442448             mov eax, dword ptr [esp + 0x48]
// 0059db12  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0059db16  8b542440             mov edx, dword ptr [esp + 0x40]
// 0059db1a  55                   push ebp
// 0059db1b  53                   push ebx
// 0059db1c  50                   push eax
// 0059db1d  8b442440             mov eax, dword ptr [esp + 0x40]
// 0059db21  51                   push ecx
// 0059db22  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0059db26  52                   push edx
// 0059db27  56                   push esi
// 0059db28  50                   push eax
// 0059db29  51                   push ecx
// 0059db2a  8bcf                 mov ecx, edi
// 0059db2c  e85ff2ffff           call 0x59cd90
// 0059db31  8b16                 mov edx, dword ptr [esi]
// 0059db33  83c207               add edx, 7
// 0059db36  c1ea03               shr edx, 3
// 0059db39  52                   push edx
// 0059db3a  55                   push ebp
// 0059db3b  53                   push ebx
// 0059db3c  8d8fa00e0000         lea ecx, [edi + 0xea0]
// 0059db42  e809a90200           call 0x5c8450
// 0059db47  83bf540f000000       cmp dword ptr [edi + 0xf54], 0
// 0059db4e  0f8744ffffff         ja 0x59da98
// 0059db54  5e                   pop esi
// 0059db55  5d                   pop ebp
// 0059db56  5b                   pop ebx
// 0059db57  5f                   pop edi
// 0059db58  83c41c               add esp, 0x1c
// 0059db5b  c22000               ret 0x20
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?SendACKs@ReliabilityLayer@RakNet@@AAEXIAAUSystemAddress@2@_KPAVRakNetRandom@2@GIAAVBitStream@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
