// roc 2012-06 0059ba70  unit: VAuthoringSettings::?$FactoryProduct  size: 212 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059ba70
//
// 0059ba70  56                   push esi
// 0059ba71  8b742408             mov esi, dword ptr [esp + 8]
// 0059ba75  57                   push edi
// 0059ba76  8bf9                 mov edi, ecx
// 0059ba78  8bce                 mov ecx, esi
// 0059ba7a  e8d1c2fcff           call 0x567d50
// 0059ba7f  807f0800             cmp byte ptr [edi + 8], 0
// 0059ba83  8bce                 mov ecx, esi
// 0059ba85  7442                 je 0x59bac9
// 0059ba87  e8c4c2fcff           call 0x567d50
// 0059ba8c  807f0b00             cmp byte ptr [edi + 0xb], 0
// 0059ba90  8bce                 mov ecx, esi
// 0059ba92  7407                 je 0x59ba9b
// 0059ba94  e8b7c2fcff           call 0x567d50
// 0059ba99  eb05                 jmp 0x59baa0
// 0059ba9b  e890c2fcff           call 0x567d30
// 0059baa0  8b06                 mov eax, dword ptr [esi]
// 0059baa2  8d48ff               lea ecx, [eax - 1]
// 0059baa5  83e107               and ecx, 7
// 0059baa8  2bc1                 sub eax, ecx
// 0059baaa  83c007               add eax, 7
// 0059baad  8906                 mov dword ptr [esi], eax
// 0059baaf  807f0b00             cmp byte ptr [edi + 0xb], 0
// 0059bab3  0f8486000000         je 0x59bb3f
// 0059bab9  83c704               add edi, 4
// 0059babc  57                   push edi
// 0059babd  8bce                 mov ecx, esi
// 0059babf  e80c05fdff           call 0x56bfd0
// 0059bac4  5f                   pop edi
// 0059bac5  5e                   pop esi
// 0059bac6  c20400               ret 4
// 0059bac9  807f0900             cmp byte ptr [edi + 9], 0
// 0059bacd  7411                 je 0x59bae0
// 0059bacf  e85cc2fcff           call 0x567d30
// 0059bad4  8bce                 mov ecx, esi
// 0059bad6  e875c2fcff           call 0x567d50
// 0059badb  5f                   pop edi
// 0059badc  5e                   pop esi
// 0059badd  c20400               ret 4
// 0059bae0  e84bc2fcff           call 0x567d30
// 0059bae5  8bce                 mov ecx, esi
// 0059bae7  e844c2fcff           call 0x567d30
// 0059baec  807f0a00             cmp byte ptr [edi + 0xa], 0
// 0059baf0  8bce                 mov ecx, esi
// 0059baf2  7407                 je 0x59bafb
// 0059baf4  e857c2fcff           call 0x567d50
// 0059baf9  eb05                 jmp 0x59bb00
// 0059bafb  e830c2fcff           call 0x567d30
// 0059bb00  807f0c00             cmp byte ptr [edi + 0xc], 0
// 0059bb04  8bce                 mov ecx, esi
// 0059bb06  7407                 je 0x59bb0f
// 0059bb08  e843c2fcff           call 0x567d50
// 0059bb0d  eb05                 jmp 0x59bb14
// 0059bb0f  e81cc2fcff           call 0x567d30
// 0059bb14  807f0d00             cmp byte ptr [edi + 0xd], 0
// 0059bb18  8bce                 mov ecx, esi
// 0059bb1a  7407                 je 0x59bb23
// 0059bb1c  e82fc2fcff           call 0x567d50
// 0059bb21  eb05                 jmp 0x59bb28
// 0059bb23  e808c2fcff           call 0x567d30
// 0059bb28  8b06                 mov eax, dword ptr [esi]
// 0059bb2a  8d50ff               lea edx, [eax - 1]
// 0059bb2d  83e207               and edx, 7
// 0059bb30  2bc2                 sub eax, edx
// 0059bb32  83c007               add eax, 7
// 0059bb35  57                   push edi
// 0059bb36  8bce                 mov ecx, esi
// 0059bb38  8906                 mov dword ptr [esi], eax
// 0059bb3a  e891efffff           call 0x59aad0
// 0059bb3f  5f                   pop edi
// 0059bb40  5e                   pop esi
// 0059bb41  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Serialize@DatagramHeaderFormat@@QAEXPAVBitStream@RakNet@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
