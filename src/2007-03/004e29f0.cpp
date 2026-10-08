// roc 2007-03 004e29f0  unit: seg_004e0000  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e29f0
//
// 004e29f0  8b442404             mov eax, dword ptr [esp + 4]
// 004e29f4  56                   push esi
// 004e29f5  50                   push eax
// 004e29f6  8bf1                 mov esi, ecx
// 004e29f8  e8e3fcffff           call 0x4e26e0
// 004e29fd  d9ee                 fldz 
// 004e29ff  d85e20               fcomp dword ptr [esi + 0x20]
// 004e2a02  dfe0                 fnstsw ax
// 004e2a04  f6c405               test ah, 5
// 004e2a07  0f8a1c010000         jp 0x4e2b29
// 004e2a0d  6a04                 push 4
// 004e2a0f  6a05                 push 5
// 004e2a11  6a03                 push 3
// 004e2a13  6a00                 push 0
// 004e2a15  8bce                 mov ecx, esi
// 004e2a17  e894ffffff           call 0x4e29b0
// 004e2a1c  6a0b                 push 0xb
// 004e2a1e  6a08                 push 8
// 004e2a20  6a07                 push 7
// 004e2a22  6a04                 push 4
// 004e2a24  8bce                 mov ecx, esi
// 004e2a26  e885ffffff           call 0x4e29b0
// 004e2a2b  6a00                 push 0
// 004e2a2d  6a01                 push 1
// 004e2a2f  6a0a                 push 0xa
// 004e2a31  6a0b                 push 0xb
// 004e2a33  8bce                 mov ecx, esi
// 004e2a35  e876ffffff           call 0x4e29b0
// 004e2a3a  6a0f                 push 0xf
// 004e2a3c  6a0c                 push 0xc
// 004e2a3e  6a06                 push 6
// 004e2a40  6a07                 push 7
// 004e2a42  8bce                 mov ecx, esi
// 004e2a44  e867ffffff           call 0x4e29b0
// 004e2a49  6a09                 push 9
// 004e2a4b  6a0a                 push 0xa
// 004e2a4d  6a13                 push 0x13
// 004e2a4f  6a10                 push 0x10
// 004e2a51  8bce                 mov ecx, esi
// 004e2a53  e858ffffff           call 0x4e29b0
// 004e2a58  6a14                 push 0x14
// 004e2a5a  6a15                 push 0x15
// 004e2a5c  6a02                 push 2
// 004e2a5e  6a03                 push 3
// 004e2a60  8bce                 mov ecx, esi
// 004e2a62  e849ffffff           call 0x4e29b0
// 004e2a67  6a01                 push 1
// 004e2a69  6a02                 push 2
// 004e2a6b  6a12                 push 0x12
// 004e2a6d  6a13                 push 0x13
// 004e2a6f  8bce                 mov ecx, esi
// 004e2a71  e83affffff           call 0x4e29b0
// 004e2a76  6a17                 push 0x17
// 004e2a78  6a14                 push 0x14
// 004e2a7a  6a05                 push 5
// 004e2a7c  6a06                 push 6
// 004e2a7e  8bce                 mov ecx, esi
// 004e2a80  e82bffffff           call 0x4e29b0
// 004e2a85  6a08                 push 8
// 004e2a87  6a09                 push 9
// 004e2a89  6a0e                 push 0xe
// 004e2a8b  6a0f                 push 0xf
// 004e2a8d  8bce                 mov ecx, esi
// 004e2a8f  e81cffffff           call 0x4e29b0
// 004e2a94  6a10                 push 0x10
// 004e2a96  6a11                 push 0x11
// 004e2a98  6a0d                 push 0xd
// 004e2a9a  6a0e                 push 0xe
// 004e2a9c  8bce                 mov ecx, esi
// 004e2a9e  e80dffffff           call 0x4e29b0
// 004e2aa3  6a15                 push 0x15
// 004e2aa5  6a16                 push 0x16
// 004e2aa7  6a11                 push 0x11
// 004e2aa9  6a12                 push 0x12
// 004e2aab  8bce                 mov ecx, esi
// 004e2aad  e8fefeffff           call 0x4e29b0
// 004e2ab2  6a0c                 push 0xc
// 004e2ab4  6a0d                 push 0xd
// 004e2ab6  6a16                 push 0x16
// 004e2ab8  6a17                 push 0x17
// 004e2aba  8bce                 mov ecx, esi
// 004e2abc  e8effeffff           call 0x4e29b0
// 004e2ac1  6a0b                 push 0xb
// 004e2ac3  6a04                 push 4
// 004e2ac5  6a00                 push 0
// 004e2ac7  8bce                 mov ecx, esi
// 004e2ac9  e8b2feffff           call 0x4e2980
// 004e2ace  6a14                 push 0x14
// 004e2ad0  6a03                 push 3
// 004e2ad2  6a05                 push 5
// 004e2ad4  8bce                 mov ecx, esi
// 004e2ad6  e8a5feffff           call 0x4e2980
// 004e2adb  6a13                 push 0x13
// 004e2add  6a0a                 push 0xa
// 004e2adf  6a01                 push 1
// 004e2ae1  8bce                 mov ecx, esi
// 004e2ae3  e898feffff           call 0x4e2980
// 004e2ae8  6a15                 push 0x15
// 004e2aea  6a12                 push 0x12
// 004e2aec  6a02                 push 2
// 004e2aee  8bce                 mov ecx, esi
// 004e2af0  e88bfeffff           call 0x4e2980
// 004e2af5  6a07                 push 7
// 004e2af7  6a08                 push 8
// 004e2af9  6a0f                 push 0xf
// 004e2afb  8bce                 mov ecx, esi
// 004e2afd  e87efeffff           call 0x4e2980
// 004e2b02  6a17                 push 0x17
// 004e2b04  6a06                 push 6
// 004e2b06  6a0c                 push 0xc
// 004e2b08  8bce                 mov ecx, esi
// 004e2b0a  e871feffff           call 0x4e2980
// 004e2b0f  6a09                 push 9
// 004e2b11  6a10                 push 0x10
// 004e2b13  6a0e                 push 0xe
// 004e2b15  8bce                 mov ecx, esi
// 004e2b17  e864feffff           call 0x4e2980
// 004e2b1c  6a11                 push 0x11
// 004e2b1e  6a16                 push 0x16
// 004e2b20  6a0d                 push 0xd
// 004e2b22  8bce                 mov ecx, esi
// 004e2b24  e857feffff           call 0x4e2980
// 004e2b29  5e                   pop esi
// 004e2b2a  c20400               ret 4
// library rbxgs-view/BevelMesh.cpp (function ?build@Builder@BevelMesh@View@RBX@@UAEXW4Purpose@LevelBuilder@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view BevelMesh.cpp
