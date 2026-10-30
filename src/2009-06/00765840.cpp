// roc 2009-06 00765840  unit: CXTPCustomizeOptionsPage  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00765840
//
// 00765840  56                   push esi
// 00765841  8bf1                 mov esi, ecx
// 00765843  e8143bfbff           call 0x71935c
// 00765848  33c0                 xor eax, eax
// 0076584a  398688000000         cmp dword ptr [esi + 0x88], eax
// 00765850  8bce                 mov ecx, esi
// 00765852  0f94c0               sete al
// 00765855  50                   push eax
// 00765856  6a65                 push 0x65
// 00765858  e89f40fbff           call 0x7198fc
// 0076585d  8bc8                 mov ecx, eax
// 0076585f  e85238fbff           call 0x7190b6
// 00765864  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0076586a  51                   push ecx
// 0076586b  6a69                 push 0x69
// 0076586d  8bce                 mov ecx, esi
// 0076586f  e88840fbff           call 0x7198fc
// 00765874  8bc8                 mov ecx, eax
// 00765876  e83b38fbff           call 0x7190b6
// 0076587b  6a6c                 push 0x6c
// 0076587d  8bce                 mov ecx, esi
// 0076587f  e87840fbff           call 0x7198fc
// 00765884  85c0                 test eax, eax
// 00765886  740e                 je 0x765896
// 00765888  56                   push esi
// 00765889  6a6c                 push 0x6c
// 0076588b  8d8ef4000000         lea ecx, [esi + 0xf4]
// 00765891  e838680e00           call 0x84c0ce
// 00765896  6a6b                 push 0x6b
// 00765898  8bce                 mov ecx, esi
// 0076589a  e85d40fbff           call 0x7198fc
// 0076589f  85c0                 test eax, eax
// 007658a1  740e                 je 0x7658b1
// 007658a3  56                   push esi
// 007658a4  6a6b                 push 0x6b
// 007658a6  8d8e54010000         lea ecx, [esi + 0x154]
// 007658ac  e81d680e00           call 0x84c0ce
// 007658b1  68db230000           push 0x23db
// 007658b6  8bce                 mov ecx, esi
// 007658b8  e8f3feffff           call 0x7657b0
// 007658bd  68dc230000           push 0x23dc
// 007658c2  8bce                 mov ecx, esi
// 007658c4  e8e7feffff           call 0x7657b0
// 007658c9  68dd230000           push 0x23dd
// 007658ce  8bce                 mov ecx, esi
// 007658d0  e8dbfeffff           call 0x7657b0
// 007658d5  68de230000           push 0x23de
// 007658da  8bce                 mov ecx, esi
// 007658dc  e8cffeffff           call 0x7657b0
// 007658e1  68df230000           push 0x23df
// 007658e6  8bce                 mov ecx, esi
// 007658e8  e8c3feffff           call 0x7657b0
// 007658ed  68e0230000           push 0x23e0
// 007658f2  8bce                 mov ecx, esi
// 007658f4  e8b7feffff           call 0x7657b0
// 007658f9  6a00                 push 0
// 007658fb  8bce                 mov ecx, esi
// 007658fd  e8be33fbff           call 0x718cc0
// 00765902  b801000000           mov eax, 1
// 00765907  5e                   pop esi
// 00765908  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeOptionsPage.cpp (function ?OnInitDialog@CXTPCustomizeOptionsPage@@MAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeOptionsPage.cpp
