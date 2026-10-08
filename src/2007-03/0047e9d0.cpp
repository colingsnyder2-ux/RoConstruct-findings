// roc 2007-03 0047e9d0  unit: seg_00470000  size: 413 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e9d0
//
// 0047e9d0  a128828b00           mov eax, dword ptr [0x8b8228]
// 0047e9d5  50                   push eax
// 0047e9d6  c605d6b1880000       mov byte ptr [0x88b1d6], 0
// 0047e9dd  e80ef71900           call 0x61e0f0
// 0047e9e2  8b0d64828b00         mov ecx, dword ptr [0x8b8264]
// 0047e9e8  51                   push ecx
// 0047e9e9  e802f71900           call 0x61e0f0
// 0047e9ee  8b1558828b00         mov edx, dword ptr [0x8b8258]
// 0047e9f4  52                   push edx
// 0047e9f5  e8f6f61900           call 0x61e0f0
// 0047e9fa  a140828b00           mov eax, dword ptr [0x8b8240]
// 0047e9ff  50                   push eax
// 0047ea00  e8ebf61900           call 0x61e0f0
// 0047ea05  8b0d5c828b00         mov ecx, dword ptr [0x8b825c]
// 0047ea0b  51                   push ecx
// 0047ea0c  e8dff61900           call 0x61e0f0
// 0047ea11  8b15f0818b00         mov edx, dword ptr [0x8b81f0]
// 0047ea17  52                   push edx
// 0047ea18  e8d3f61900           call 0x61e0f0
// 0047ea1d  a1ec818b00           mov eax, dword ptr [0x8b81ec]
// 0047ea22  50                   push eax
// 0047ea23  e8c8f61900           call 0x61e0f0
// 0047ea28  8b0df4818b00         mov ecx, dword ptr [0x8b81f4]
// 0047ea2e  51                   push ecx
// 0047ea2f  e8bcf61900           call 0x61e0f0
// 0047ea34  8b150c828b00         mov edx, dword ptr [0x8b820c]
// 0047ea3a  52                   push edx
// 0047ea3b  e8b0f61900           call 0x61e0f0
// 0047ea40  a134828b00           mov eax, dword ptr [0x8b8234]
// 0047ea45  50                   push eax
// 0047ea46  e8a5f61900           call 0x61e0f0
// 0047ea4b  8b0d20828b00         mov ecx, dword ptr [0x8b8220]
// 0047ea51  51                   push ecx
// 0047ea52  e899f61900           call 0x61e0f0
// 0047ea57  8b1514828b00         mov edx, dword ptr [0x8b8214]
// 0047ea5d  52                   push edx
// 0047ea5e  e88df61900           call 0x61e0f0
// 0047ea63  a1f8818b00           mov eax, dword ptr [0x8b81f8]
// 0047ea68  50                   push eax
// 0047ea69  e882f61900           call 0x61e0f0
// 0047ea6e  8b0d30828b00         mov ecx, dword ptr [0x8b8230]
// 0047ea74  51                   push ecx
// 0047ea75  e876f61900           call 0x61e0f0
// 0047ea7a  8b1550828b00         mov edx, dword ptr [0x8b8250]
// 0047ea80  52                   push edx
// 0047ea81  e86af61900           call 0x61e0f0
// 0047ea86  a154828b00           mov eax, dword ptr [0x8b8254]
// 0047ea8b  50                   push eax
// 0047ea8c  e85ff61900           call 0x61e0f0
// 0047ea91  8b0de0818b00         mov ecx, dword ptr [0x8b81e0]
// 0047ea97  83c440               add esp, 0x40
// 0047ea9a  51                   push ecx
// 0047ea9b  e850f61900           call 0x61e0f0
// 0047eaa0  8b1508828b00         mov edx, dword ptr [0x8b8208]
// 0047eaa6  52                   push edx
// 0047eaa7  e844f61900           call 0x61e0f0
// 0047eaac  a1e8818b00           mov eax, dword ptr [0x8b81e8]
// 0047eab1  50                   push eax
// 0047eab2  e839f61900           call 0x61e0f0
// 0047eab7  8b0d4c828b00         mov ecx, dword ptr [0x8b824c]
// 0047eabd  51                   push ecx
// 0047eabe  e82df61900           call 0x61e0f0
// 0047eac3  8b1548828b00         mov edx, dword ptr [0x8b8248]
// 0047eac9  52                   push edx
// 0047eaca  e821f61900           call 0x61e0f0
// 0047eacf  a1e4818b00           mov eax, dword ptr [0x8b81e4]
// 0047ead4  50                   push eax
// 0047ead5  e816f61900           call 0x61e0f0
// 0047eada  8b0d00828b00         mov ecx, dword ptr [0x8b8200]
// 0047eae0  51                   push ecx
// 0047eae1  e80af61900           call 0x61e0f0
// 0047eae6  8b15fc818b00         mov edx, dword ptr [0x8b81fc]
// 0047eaec  52                   push edx
// 0047eaed  e8fef51900           call 0x61e0f0
// 0047eaf2  a11c828b00           mov eax, dword ptr [0x8b821c]
// 0047eaf7  50                   push eax
// 0047eaf8  e8f3f51900           call 0x61e0f0
// 0047eafd  8b0d04828b00         mov ecx, dword ptr [0x8b8204]
// 0047eb03  51                   push ecx
// 0047eb04  e8e7f51900           call 0x61e0f0
// 0047eb09  8b1560828b00         mov edx, dword ptr [0x8b8260]
// 0047eb0f  52                   push edx
// 0047eb10  e8dbf51900           call 0x61e0f0
// 0047eb15  a124828b00           mov eax, dword ptr [0x8b8224]
// 0047eb1a  50                   push eax
// 0047eb1b  e8d0f51900           call 0x61e0f0
// 0047eb20  8b0d10828b00         mov ecx, dword ptr [0x8b8210]
// 0047eb26  51                   push ecx
// 0047eb27  e8c4f51900           call 0x61e0f0
// 0047eb2c  8b1568828b00         mov edx, dword ptr [0x8b8268]
// 0047eb32  52                   push edx
// 0047eb33  e8b8f51900           call 0x61e0f0
// 0047eb38  a144828b00           mov eax, dword ptr [0x8b8244]
// 0047eb3d  50                   push eax
// 0047eb3e  e8adf51900           call 0x61e0f0
// 0047eb43  8b0d38828b00         mov ecx, dword ptr [0x8b8238]
// 0047eb49  51                   push ecx
// 0047eb4a  e8a1f51900           call 0x61e0f0
// 0047eb4f  8b152c828b00         mov edx, dword ptr [0x8b822c]
// 0047eb55  83c440               add esp, 0x40
// 0047eb58  52                   push edx
// 0047eb59  e892f51900           call 0x61e0f0
// 0047eb5e  a118828b00           mov eax, dword ptr [0x8b8218]
// 0047eb63  50                   push eax
// 0047eb64  e887f51900           call 0x61e0f0
// 0047eb69  83c408               add esp, 8
// 0047eb6c  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\TextureFormat.cpp (function ??1TextureFormatCleanup@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/TextureFormat.cpp
