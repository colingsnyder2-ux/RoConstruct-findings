// roc 2012-06 0059a0d0  unit: RBX::Network::Marker  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059a0d0
//
// 0059a0d0  8b542404             mov edx, dword ptr [esp + 4]
// 0059a0d4  8b4a1c               mov ecx, dword ptr [edx + 0x1c]
// 0059a0d7  b818000000           mov eax, 0x18
// 0059a0dc  83f902               cmp ecx, 2
// 0059a0df  7414                 je 0x59a0f5
// 0059a0e1  83f904               cmp ecx, 4
// 0059a0e4  740f                 je 0x59a0f5
// 0059a0e6  83f903               cmp ecx, 3
// 0059a0e9  740a                 je 0x59a0f5
// 0059a0eb  83f906               cmp ecx, 6
// 0059a0ee  7405                 je 0x59a0f5
// 0059a0f0  83f907               cmp ecx, 7
// 0059a0f3  7505                 jne 0x59a0fa
// 0059a0f5  b830000000           mov eax, 0x30
// 0059a0fa  83f901               cmp ecx, 1
// 0059a0fd  7405                 je 0x59a104
// 0059a0ff  83f904               cmp ecx, 4
// 0059a102  7503                 jne 0x59a107
// 0059a104  83c018               add eax, 0x18
// 0059a107  83f901               cmp ecx, 1
// 0059a10a  740f                 je 0x59a11b
// 0059a10c  83f904               cmp ecx, 4
// 0059a10f  740a                 je 0x59a11b
// 0059a111  83f903               cmp ecx, 3
// 0059a114  7405                 je 0x59a11b
// 0059a116  83f907               cmp ecx, 7
// 0059a119  7503                 jne 0x59a11e
// 0059a11b  83c020               add eax, 0x20
// 0059a11e  837a1400             cmp dword ptr [edx + 0x14], 0
// 0059a122  7603                 jbe 0x59a127
// 0059a124  83c050               add eax, 0x50
// 0059a127  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?GetMessageHeaderLengthBits@ReliabilityLayer@RakNet@@AAEIQBUInternalPacket@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
