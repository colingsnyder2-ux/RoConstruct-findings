// from server: 100% by auto
// roc 2008-06 0070ff70  unit: CXTPStatusBar  size: 717 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070ff70
//
// 0070ff70  56                   push esi
// 0070ff71  8bf1                 mov esi, ecx
// 0070ff73  e89819fdff           call 0x6e1910
// 0070ff78  e8c3fdfcff           call 0x6dfd40
// 0070ff7d  6a0f                 push 0xf
// 0070ff7f  8bc8                 mov ecx, eax
// 0070ff81  e89af5fcff           call 0x6df520
// 0070ff86  894604               mov dword ptr [esi + 4], eax
// 0070ff89  e8b2fdfcff           call 0x6dfd40
// 0070ff8e  6a10                 push 0x10
// 0070ff90  8bc8                 mov ecx, eax
// 0070ff92  e889f5fcff           call 0x6df520
// 0070ff97  894608               mov dword ptr [esi + 8], eax
// 0070ff9a  e8a1fdfcff           call 0x6dfd40
// 0070ff9f  6a15                 push 0x15
// 0070ffa1  8bc8                 mov ecx, eax
// 0070ffa3  e878f5fcff           call 0x6df520
// 0070ffa8  89460c               mov dword ptr [esi + 0xc], eax
// 0070ffab  e890fdfcff           call 0x6dfd40
// 0070ffb0  6a14                 push 0x14
// 0070ffb2  8bc8                 mov ecx, eax
// 0070ffb4  e867f5fcff           call 0x6df520
// 0070ffb9  894610               mov dword ptr [esi + 0x10], eax
// 0070ffbc  e87ffdfcff           call 0x6dfd40
// 0070ffc1  6a16                 push 0x16
// 0070ffc3  8bc8                 mov ecx, eax
// 0070ffc5  e856f5fcff           call 0x6df520
// 0070ffca  894614               mov dword ptr [esi + 0x14], eax
// 0070ffcd  e86efdfcff           call 0x6dfd40
// 0070ffd2  6a12                 push 0x12
// 0070ffd4  8bc8                 mov ecx, eax
// 0070ffd6  e845f5fcff           call 0x6df520
// 0070ffdb  894618               mov dword ptr [esi + 0x18], eax
// 0070ffde  e85dfdfcff           call 0x6dfd40
// 0070ffe3  6a11                 push 0x11
// 0070ffe5  8bc8                 mov ecx, eax
// 0070ffe7  e834f5fcff           call 0x6df520
// 0070ffec  89461c               mov dword ptr [esi + 0x1c], eax
// 0070ffef  e84cfdfcff           call 0x6dfd40
// 0070fff4  6a0d                 push 0xd
// 0070fff6  8bc8                 mov ecx, eax
// 0070fff8  e823f5fcff           call 0x6df520
// 0070fffd  894620               mov dword ptr [esi + 0x20], eax
// 00710000  e83bfdfcff           call 0x6dfd40
// 00710005  6a0e                 push 0xe
// 00710007  8bc8                 mov ecx, eax
// 00710009  e812f5fcff           call 0x6df520
// 0071000e  894624               mov dword ptr [esi + 0x24], eax
// 00710011  e82afdfcff           call 0x6dfd40
// 00710016  6a04                 push 4
// 00710018  8bc8                 mov ecx, eax
// 0071001a  e801f5fcff           call 0x6df520
// 0071001f  894628               mov dword ptr [esi + 0x28], eax
// 00710022  e819fdfcff           call 0x6dfd40
// 00710027  6a07                 push 7
// 00710029  8bc8                 mov ecx, eax
// 0071002b  e8f0f4fcff           call 0x6df520
// 00710030  89462c               mov dword ptr [esi + 0x2c], eax
// 00710033  e808fdfcff           call 0x6dfd40
// 00710038  6a05                 push 5
// 0071003a  8bc8                 mov ecx, eax
// 0071003c  e8dff4fcff           call 0x6df520
// 00710041  894630               mov dword ptr [esi + 0x30], eax
// 00710044  e8f7fcfcff           call 0x6dfd40
// 00710049  6a06                 push 6
// 0071004b  8bc8                 mov ecx, eax
// 0071004d  e8cef4fcff           call 0x6df520
// 00710052  894634               mov dword ptr [esi + 0x34], eax
// 00710055  e8e6fcfcff           call 0x6dfd40
// 0071005a  6a08                 push 8
// 0071005c  8bc8                 mov ecx, eax
// 0071005e  e8bdf4fcff           call 0x6df520
// 00710063  894638               mov dword ptr [esi + 0x38], eax
// 00710066  e8d5fcfcff           call 0x6dfd40
// 0071006b  6a02                 push 2
// 0071006d  8bc8                 mov ecx, eax
// 0071006f  e8acf4fcff           call 0x6df520
// 00710074  89463c               mov dword ptr [esi + 0x3c], eax
// 00710077  e8c4fcfcff           call 0x6dfd40
// 0071007c  6a03                 push 3
// 0071007e  8bc8                 mov ecx, eax
// 00710080  e89bf4fcff           call 0x6df520
// 00710085  894640               mov dword ptr [esi + 0x40], eax
// 00710088  e8b3fcfcff           call 0x6dfd40
// 0071008d  6a1b                 push 0x1b
// 0071008f  8bc8                 mov ecx, eax
// 00710091  e88af4fcff           call 0x6df520
// 00710096  894644               mov dword ptr [esi + 0x44], eax
// 00710099  e8a2fcfcff           call 0x6dfd40
// 0071009e  6a1c                 push 0x1c
// 007100a0  8bc8                 mov ecx, eax
// 007100a2  e879f4fcff           call 0x6df520
// 007100a7  894648               mov dword ptr [esi + 0x48], eax
// 007100aa  e891fcfcff           call 0x6dfd40
// 007100af  6a09                 push 9
// 007100b1  8bc8                 mov ecx, eax
// 007100b3  e868f4fcff           call 0x6df520
// 007100b8  89464c               mov dword ptr [esi + 0x4c], eax
// 007100bb  e880fcfcff           call 0x6dfd40
// 007100c0  6a13                 push 0x13
// 007100c2  8bc8                 mov ecx, eax
// 007100c4  e857f4fcff           call 0x6df520
// 007100c9  894650               mov dword ptr [esi + 0x50], eax
// 007100cc  e86ffcfcff           call 0x6dfd40
// 007100d1  6a1e                 push 0x1e
// 007100d3  8bc8                 mov ecx, eax
// 007100d5  e846f4fcff           call 0x6df520
// 007100da  894654               mov dword ptr [esi + 0x54], eax
// 007100dd  e85efcfcff           call 0x6dfd40
// 007100e2  6a1f                 push 0x1f
// 007100e4  8bc8                 mov ecx, eax
// 007100e6  e835f4fcff           call 0x6df520
// 007100eb  894658               mov dword ptr [esi + 0x58], eax
// 007100ee  e84dfcfcff           call 0x6dfd40
// 007100f3  6a20                 push 0x20
// 007100f5  8bc8                 mov ecx, eax
// 007100f7  e824f4fcff           call 0x6df520
// 007100fc  89465c               mov dword ptr [esi + 0x5c], eax
// 007100ff  e83cfcfcff           call 0x6dfd40
// 00710104  6a21                 push 0x21
// 00710106  8bc8                 mov ecx, eax
// 00710108  e813f4fcff           call 0x6df520
// 0071010d  894660               mov dword ptr [esi + 0x60], eax
// 00710110  e82bfcfcff           call 0x6dfd40
// 00710115  6a22                 push 0x22
// 00710117  8bc8                 mov ecx, eax
// 00710119  e802f4fcff           call 0x6df520
// 0071011e  894664               mov dword ptr [esi + 0x64], eax
// 00710121  e81afcfcff           call 0x6dfd40
// 00710126  6a23                 push 0x23
// 00710128  8bc8                 mov ecx, eax
// 0071012a  e8f1f3fcff           call 0x6df520
// 0071012f  894668               mov dword ptr [esi + 0x68], eax
// 00710132  e809fcfcff           call 0x6dfd40
// 00710137  6a24                 push 0x24
// 00710139  8bc8                 mov ecx, eax
// 0071013b  e8e0f3fcff           call 0x6df520
// 00710140  89466c               mov dword ptr [esi + 0x6c], eax
// 00710143  e8f8fbfcff           call 0x6dfd40
// 00710148  6a25                 push 0x25
// 0071014a  8bc8                 mov ecx, eax
// 0071014c  e8cff3fcff           call 0x6df520
// 00710151  894670               mov dword ptr [esi + 0x70], eax
// 00710154  e8e7fbfcff           call 0x6dfd40
// 00710159  6a26                 push 0x26
// 0071015b  8bc8                 mov ecx, eax
// 0071015d  e8bef3fcff           call 0x6df520
// 00710162  894674               mov dword ptr [esi + 0x74], eax
// 00710165  e8d6fbfcff           call 0x6dfd40
// 0071016a  6a27                 push 0x27
// 0071016c  8bc8                 mov ecx, eax
// 0071016e  e8adf3fcff           call 0x6df520
// 00710173  894678               mov dword ptr [esi + 0x78], eax
// 00710176  e8c5fbfcff           call 0x6dfd40
// 0071017b  6a28                 push 0x28
// 0071017d  8bc8                 mov ecx, eax
// 0071017f  e89cf3fcff           call 0x6df520
// 00710184  89467c               mov dword ptr [esi + 0x7c], eax
// 00710187  e8b4fbfcff           call 0x6dfd40
// 0071018c  6a29                 push 0x29
// 0071018e  8bc8                 mov ecx, eax
// 00710190  e88bf3fcff           call 0x6df520
// 00710195  898680000000         mov dword ptr [esi + 0x80], eax
// 0071019b  e8a0fbfcff           call 0x6dfd40
// 007101a0  6a2a                 push 0x2a
// 007101a2  8bc8                 mov ecx, eax
// 007101a4  e877f3fcff           call 0x6df520
// 007101a9  898684000000         mov dword ptr [esi + 0x84], eax
// 007101af  e88cfbfcff           call 0x6dfd40
// 007101b4  6a2b                 push 0x2b
// 007101b6  8bc8                 mov ecx, eax
// 007101b8  e863f3fcff           call 0x6df520
// 007101bd  898688000000         mov dword ptr [esi + 0x88], eax
// 007101c3  e878fbfcff           call 0x6dfd40
// 007101c8  6a2c                 push 0x2c
// 007101ca  8bc8                 mov ecx, eax
// 007101cc  e84ff3fcff           call 0x6df520
// 007101d1  89868c000000         mov dword ptr [esi + 0x8c], eax
// 007101d7  e864fbfcff           call 0x6dfd40
// 007101dc  6a2d                 push 0x2d
// 007101de  8bc8                 mov ecx, eax
// 007101e0  e83bf3fcff           call 0x6df520
// 007101e5  898690000000         mov dword ptr [esi + 0x90], eax
// 007101eb  e850fbfcff           call 0x6dfd40
// 007101f0  6a2e                 push 0x2e
// 007101f2  8bc8                 mov ecx, eax
// 007101f4  e827f3fcff           call 0x6df520
// 007101f9  898694000000         mov dword ptr [esi + 0x94], eax
// 007101ff  e83cfbfcff           call 0x6dfd40
// 00710204  6a2f                 push 0x2f
// 00710206  8bc8                 mov ecx, eax
// 00710208  e813f3fcff           call 0x6df520
// 0071020d  898698000000         mov dword ptr [esi + 0x98], eax
// 00710213  e828fbfcff           call 0x6dfd40
// 00710218  6a30                 push 0x30
// 0071021a  8bc8                 mov ecx, eax
// 0071021c  e8fff2fcff           call 0x6df520
// 00710221  89869c000000         mov dword ptr [esi + 0x9c], eax
// 00710227  e814fbfcff           call 0x6dfd40
// 0071022c  6a31                 push 0x31
// 0071022e  8bc8                 mov ecx, eax
// 00710230  e8ebf2fcff           call 0x6df520
// 00710235  8986a0000000         mov dword ptr [esi + 0xa0], eax
// 0071023b  5e                   pop esi
// 0071023c  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTGlobal.cpp (function ?UpdateSysColors@CXTAuxData@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTGlobal.cpp
