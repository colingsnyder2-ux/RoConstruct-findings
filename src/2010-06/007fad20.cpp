// roc 2010-06 007fad20  unit: CXTPControls  size: 1504 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fad20
//
// 007fad20  6aff                 push -1
// 007fad22  68022f9b00           push 0x9b2f02
// 007fad27  64a100000000         mov eax, dword ptr fs:[0]
// 007fad2d  50                   push eax
// 007fad2e  83ec60               sub esp, 0x60
// 007fad31  53                   push ebx
// 007fad32  55                   push ebp
// 007fad33  56                   push esi
// 007fad34  57                   push edi
// 007fad35  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007fad3a  33c4                 xor eax, esp
// 007fad3c  50                   push eax
// 007fad3d  8d442474             lea eax, [esp + 0x74]
// 007fad41  64a300000000         mov dword ptr fs:[0], eax
// 007fad47  894c241c             mov dword ptr [esp + 0x1c], ecx
// 007fad4b  8bb42484000000       mov esi, dword ptr [esp + 0x84]
// 007fad52  8bac2488000000       mov ebp, dword ptr [esp + 0x88]
// 007fad59  8b4604               mov eax, dword ptr [esi + 4]
// 007fad5c  55                   push ebp
// 007fad5d  50                   push eax
// 007fad5e  ff1564bc9e00         call dword ptr [0x9ebc64]
// 007fad64  50                   push eax
// 007fad65  e8c0d2faff           call 0x7a802a
// 007fad6a  8b4e04               mov ecx, dword ptr [esi + 4]
// 007fad6d  55                   push ebp
// 007fad6e  51                   push ecx
// 007fad6f  8bd8                 mov ebx, eax
// 007fad71  ff1568bc9e00         call dword ptr [0x9ebc68]
// 007fad77  8b5604               mov edx, dword ptr [esi + 4]
// 007fad7a  6a01                 push 1
// 007fad7c  6a01                 push 1
// 007fad7e  52                   push edx
// 007fad7f  8bf8                 mov edi, eax
// 007fad81  ff1510ba9e00         call dword ptr [0x9eba10]
// 007fad87  33c9                 xor ecx, ecx
// 007fad89  3bc5                 cmp eax, ebp
// 007fad8b  0f94c1               sete cl
// 007fad8e  894c2428             mov dword ptr [esp + 0x28], ecx
// 007fad92  81ff00ff0000         cmp edi, 0xff00
// 007fad98  0f8403040000         je 0x7fb1a1
// 007fad9e  8d8c2484000000       lea ecx, [esp + 0x84]
// 007fada5  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 007fadab  6800040000           push 0x400
// 007fadb0  8d942488000000       lea edx, [esp + 0x88]
// 007fadb7  52                   push edx
// 007fadb8  55                   push ebp
// 007fadb9  56                   push esi
// 007fadba  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 007fadc5  e8e67a0200           call 0x8228b0
// 007fadca  8bc8                 mov ecx, eax
// 007fadcc  e81f760200           call 0x8223f0
// 007fadd1  85db                 test ebx, ebx
// 007fadd3  7467                 je 0x7fae3c
// 007fadd5  6a00                 push 0
// 007fadd7  6a09                 push 9
// 007fadd9  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007fade0  ff1578c69e00         call dword ptr [0x9ec678]
// 007fade6  89442424             mov dword ptr [esp + 0x24], eax
// 007fadea  85c0                 test eax, eax
// 007fadec  7e4e                 jle 0x7fae3c
// 007fadee  40                   inc eax
// 007fadef  50                   push eax
// 007fadf0  8d84248c000000       lea eax, [esp + 0x8c]
// 007fadf7  50                   push eax
// 007fadf8  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007fadff  ff1574c69e00         call dword ptr [0x9ec674]
// 007fae05  8bc8                 mov ecx, eax
// 007fae07  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007fae0d  50                   push eax
// 007fae0e  ff15a8a89e00         call dword ptr [0x9ea8a8]
// 007fae14  83c404               add esp, 4
// 007fae17  8d8c2488000000       lea ecx, [esp + 0x88]
// 007fae1e  8bf8                 mov edi, eax
// 007fae20  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007fae26  85ff                 test edi, edi
// 007fae28  7612                 jbe 0x7fae3c
// 007fae2a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007fae2e  51                   push ecx
// 007fae2f  8d8c2488000000       lea ecx, [esp + 0x88]
// 007fae36  ff1500c49e00         call dword ptr [0x9ec400]
// 007fae3c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007fae40  8b4838               mov ecx, dword ptr [eax + 0x38]
// 007fae43  85c9                 test ecx, ecx
// 007fae45  740f                 je 0x7fae56
// 007fae47  8b91a0000000         mov edx, dword ptr [ecx + 0xa0]
// 007fae4d  89942488000000       mov dword ptr [esp + 0x88], edx
// 007fae54  eb24                 jmp 0x7fae7a
// 007fae56  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007fae59  85c9                 test ecx, ecx
// 007fae5b  7412                 je 0x7fae6f
// 007fae5d  e8fe03fcff           call 0x7bb260
// 007fae62  89842488000000       mov dword ptr [esp + 0x88], eax
// 007fae69  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007fae6d  eb0b                 jmp 0x7fae7a
// 007fae6f  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 007fae7a  8bc8                 mov ecx, eax
// 007fae7c  e80fe3ffff           call 0x7f9190
// 007fae81  89442424             mov dword ptr [esp + 0x24], eax
// 007fae85  33c0                 xor eax, eax
// 007fae87  85db                 test ebx, ebx
// 007fae89  0f95c0               setne al
// 007fae8c  8d4c2468             lea ecx, [esp + 0x68]
// 007fae90  c744242000000000     mov dword ptr [esp + 0x20], 0
// 007fae98  40                   inc eax
// 007fae99  89442418             mov dword ptr [esp + 0x18], eax
// 007fae9d  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 007faea3  33c0                 xor eax, eax
// 007faea5  c644247c01           mov byte ptr [esp + 0x7c], 1
// 007faeaa  39842488000000       cmp dword ptr [esp + 0x88], eax
// 007faeb1  0f8494000000         je 0x7faf4b
// 007faeb7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007faebb  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007faebe  89442454             mov dword ptr [esp + 0x54], eax
// 007faec2  89442458             mov dword ptr [esp + 0x58], eax
// 007faec6  8d842484000000       lea eax, [esp + 0x84]
// 007faecd  50                   push eax
// 007faece  8d4c246c             lea ecx, [esp + 0x6c]
// 007faed2  897c2454             mov dword ptr [esp + 0x54], edi
// 007faed6  89542468             mov dword ptr [esp + 0x68], edx
// 007faeda  89742464             mov dword ptr [esp + 0x64], esi
// 007faede  896c2460             mov dword ptr [esp + 0x60], ebp
// 007faee2  ff1580c59e00         call dword ptr [0x9ec580]
// 007faee8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007faeec  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 007faef3  8d542450             lea edx, [esp + 0x50]
// 007faef7  52                   push edx
// 007faef8  6a00                 push 0
// 007faefa  894c2474             mov dword ptr [esp + 0x74], ecx
// 007faefe  c744247800000000     mov dword ptr [esp + 0x78], 0
// 007faf06  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007faf09  685e280000           push 0x285e
// 007faf0e  51                   push ecx
// 007faf0f  ff1554ba9e00         call dword ptr [0x9eba54]
// 007faf15  85c0                 test eax, eax
// 007faf17  7432                 je 0x7faf4b
// 007faf19  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 007faf1d  8b742454             mov esi, dword ptr [esp + 0x54]
// 007faf21  8d442468             lea eax, [esp + 0x68]
// 007faf25  50                   push eax
// 007faf26  8d8c2488000000       lea ecx, [esp + 0x88]
// 007faf2d  8954241c             mov dword ptr [esp + 0x1c], edx
// 007faf31  ff1580c59e00         call dword ptr [0x9ec580]
// 007faf37  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007faf3b  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 007faf3f  894c2420             mov dword ptr [esp + 0x20], ecx
// 007faf43  85f6                 test esi, esi
// 007faf45  0f8580020000         jne 0x7fb1cb
// 007faf4b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007faf4f  8d41ff               lea eax, [ecx - 1]
// 007faf52  83f80a               cmp eax, 0xa
// 007faf55  0f872f020000         ja 0x7fb18a
// 007faf5b  ff2485d4b27f00       jmp dword ptr [eax*4 + 0x7fb2d4]
// 007faf62  81ffb8880000         cmp edi, 0x88b8
// 007faf68  750c                 jne 0x7faf76
// 007faf6a  e8811a0000           call 0x7fc9f0
// 007faf6f  8bf0                 mov esi, eax
// 007faf71  e910020000           jmp 0x7fb186
// 007faf76  81ffba880000         cmp edi, 0x88ba
// 007faf7c  750c                 jne 0x7faf8a
// 007faf7e  e81d2c0000           call 0x7fdba0
// 007faf83  8bf0                 mov esi, eax
// 007faf85  e9fc010000           jmp 0x7fb186
// 007faf8a  81ff00e80000         cmp edi, 0xe800
// 007faf90  750c                 jne 0x7faf9e
// 007faf92  e8291e0000           call 0x7fcdc0
// 007faf97  8bf0                 mov esi, eax
// 007faf99  e9e8010000           jmp 0x7fb186
// 007faf9e  81ff10e20000         cmp edi, 0xe210
// 007fafa4  7522                 jne 0x7fafc8
// 007fafa6  68b4e9a500           push 0xa5e9b4
// 007fafab  8d8c2488000000       lea ecx, [esp + 0x88]
// 007fafb2  ff15b4ce9e00         call dword ptr [0x9eceb4]
// 007fafb8  85c0                 test eax, eax
// 007fafba  7520                 jne 0x7fafdc
// 007fafbc  e89f210000           call 0x7fd160
// 007fafc1  8bf0                 mov esi, eax
// 007fafc3  e9be010000           jmp 0x7fb186
// 007fafc8  81ff10e10000         cmp edi, 0xe110
// 007fafce  750c                 jne 0x7fafdc
// 007fafd0  e89b240000           call 0x7fd470
// 007fafd5  8bf0                 mov esi, eax
// 007fafd7  e9aa010000           jmp 0x7fb186
// 007fafdc  e86f940400           call 0x844450
// 007fafe1  8bf0                 mov esi, eax
// 007fafe3  e99e010000           jmp 0x7fb186
// 007fafe8  e863bafbff           call 0x7b6a50
// 007fafed  8bf0                 mov esi, eax
// 007fafef  e992010000           jmp 0x7fb186
// 007faff4  e8d73a0400           call 0x83ead0
// 007faff9  8bf0                 mov esi, eax
// 007faffb  e986010000           jmp 0x7fb186
// 007fb000  e8ab2d0000           call 0x7fddb0
// 007fb005  8bf0                 mov esi, eax
// 007fb007  e97a010000           jmp 0x7fb186
// 007fb00c  e84f2e0000           call 0x7fde60
// 007fb011  8bf0                 mov esi, eax
// 007fb013  e96e010000           jmp 0x7fb186
// 007fb018  e8e32e0000           call 0x7fdf00
// 007fb01d  8bf0                 mov esi, eax
// 007fb01f  e962010000           jmp 0x7fb186
// 007fb024  e867c50200           call 0x827590
// 007fb029  8bf0                 mov esi, eax
// 007fb02b  e956010000           jmp 0x7fb186
// 007fb030  51                   push ecx
// 007fb031  e84a43ffff           call 0x7ef380
// 007fb036  83c404               add esp, 4
// 007fb039  8d942484000000       lea edx, [esp + 0x84]
// 007fb040  52                   push edx
// 007fb041  8d4c2418             lea ecx, [esp + 0x18]
// 007fb045  8bf0                 mov esi, eax
// 007fb047  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 007fb04d  8d442414             lea eax, [esp + 0x14]
// 007fb051  50                   push eax
// 007fb052  c684248000000002     mov byte ptr [esp + 0x80], 2
// 007fb05a  e84123fbff           call 0x7ad3a0
// 007fb05f  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 007fb066  83c404               add esp, 4
// 007fb069  85ed                 test ebp, ebp
// 007fb06b  747a                 je 0x7fb0e7
// 007fb06d  33c0                 xor eax, eax
// 007fb06f  89442438             mov dword ptr [esp + 0x38], eax
// 007fb073  8d4c2414             lea ecx, [esp + 0x14]
// 007fb077  89442434             mov dword ptr [esp + 0x34], eax
// 007fb07b  8944243c             mov dword ptr [esp + 0x3c], eax
// 007fb07f  89442440             mov dword ptr [esp + 0x40], eax
// 007fb083  89442444             mov dword ptr [esp + 0x44], eax
// 007fb087  89442448             mov dword ptr [esp + 0x48], eax
// 007fb08b  8944244c             mov dword ptr [esp + 0x4c], eax
// 007fb08f  c744243801000000     mov dword ptr [esp + 0x38], 1
// 007fb097  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007fb09d  8b5520               mov edx, dword ptr [ebp + 0x20]
// 007fb0a0  8d4c2434             lea ecx, [esp + 0x34]
// 007fb0a4  51                   push ecx
// 007fb0a5  6a00                 push 0
// 007fb0a7  6861280000           push 0x2861
// 007fb0ac  52                   push edx
// 007fb0ad  89442458             mov dword ptr [esp + 0x58], eax
// 007fb0b1  897c245c             mov dword ptr [esp + 0x5c], edi
// 007fb0b5  ff1554ba9e00         call dword ptr [0x9eba54]
// 007fb0bb  85c0                 test eax, eax
// 007fb0bd  7428                 je 0x7fb0e7
// 007fb0bf  8b442434             mov eax, dword ptr [esp + 0x34]
// 007fb0c3  50                   push eax
// 007fb0c4  e857a9ffff           call 0x7f5a20
// 007fb0c9  50                   push eax
// 007fb0ca  e8afccfaff           call 0x7a7d7e
// 007fb0cf  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007fb0d3  83c408               add esp, 8
// 007fb0d6  51                   push ecx
// 007fb0d7  8d4c2418             lea ecx, [esp + 0x18]
// 007fb0db  8be8                 mov ebp, eax
// 007fb0dd  ff158cce9e00         call dword ptr [0x9ece8c]
// 007fb0e3  85ed                 test ebp, ebp
// 007fb0e5  750f                 jne 0x7fb0f6
// 007fb0e7  8b542424             mov edx, dword ptr [esp + 0x24]
// 007fb0eb  52                   push edx
// 007fb0ec  e83fa9ffff           call 0x7f5a30
// 007fb0f1  83c404               add esp, 4
// 007fb0f4  8be8                 mov ebp, eax
// 007fb0f6  8d4c2414             lea ecx, [esp + 0x14]
// 007fb0fa  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007fb100  50                   push eax
// 007fb101  8bcd                 mov ecx, ebp
// 007fb103  e848cefcff           call 0x7c7f50
// 007fb108  c744242c3c3da000     mov dword ptr [esp + 0x2c], 0xa03d3c
// 007fb110  c744243000000000     mov dword ptr [esp + 0x30], 0
// 007fb118  c644247c03           mov byte ptr [esp + 0x7c], 3
// 007fb11d  85db                 test ebx, ebx
// 007fb11f  752a                 jne 0x7fb14b
// 007fb121  85ff                 test edi, edi
// 007fb123  7636                 jbe 0x7fb15b
// 007fb125  57                   push edi
// 007fb126  8d4c2430             lea ecx, [esp + 0x30]
// 007fb12a  e8711ec2ff           call 0x41cfa0
// 007fb12f  85c0                 test eax, eax
// 007fb131  7428                 je 0x7fb15b
// 007fb133  8b442430             mov eax, dword ptr [esp + 0x30]
// 007fb137  53                   push ebx
// 007fb138  50                   push eax
// 007fb139  ff1564bc9e00         call dword ptr [0x9ebc64]
// 007fb13f  50                   push eax
// 007fb140  e8e5cefaff           call 0x7a802a
// 007fb145  8bd8                 mov ebx, eax
// 007fb147  85db                 test ebx, ebx
// 007fb149  7410                 je 0x7fb15b
// 007fb14b  8b5500               mov edx, dword ptr [ebp]
// 007fb14e  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 007fb154  6a00                 push 0
// 007fb156  53                   push ebx
// 007fb157  8bcd                 mov ecx, ebp
// 007fb159  ffd0                 call eax
// 007fb15b  89ae78010000         mov dword ptr [esi + 0x178], ebp
// 007fb161  8d4c242c             lea ecx, [esp + 0x2c]
// 007fb165  c644247c02           mov byte ptr [esp + 0x7c], 2
// 007fb16a  c744242c3c3da000     mov dword ptr [esp + 0x2c], 0xa03d3c
// 007fb172  e89bd1faff           call 0x7a8312
// 007fb177  8d4c2414             lea ecx, [esp + 0x14]
// 007fb17b  c644247c01           mov byte ptr [esp + 0x7c], 1
// 007fb180  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007fb186  85f6                 test esi, esi
// 007fb188  751e                 jne 0x7fb1a8
// 007fb18a  8d4c2468             lea ecx, [esp + 0x68]
// 007fb18e  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007fb194  8d8c2484000000       lea ecx, [esp + 0x84]
// 007fb19b  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007fb1a1  33c0                 xor eax, eax
// 007fb1a3  e916010000           jmp 0x7fb2be
// 007fb1a8  8b442420             mov eax, dword ptr [esp + 0x20]
// 007fb1ac  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fb1b0  898efc000000         mov dword ptr [esi + 0xfc], ecx
// 007fb1b6  398648010000         cmp dword ptr [esi + 0x148], eax
// 007fb1bc  740d                 je 0x7fb1cb
// 007fb1be  8bce                 mov ecx, esi
// 007fb1c0  898648010000         mov dword ptr [esi + 0x148], eax
// 007fb1c6  e835ecfaff           call 0x7a9e00
// 007fb1cb  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 007fb1cf  57                   push edi
// 007fb1d0  8bcb                 mov ecx, ebx
// 007fb1d2  e879cffcff           call 0x7c8150
// 007fb1d7  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 007fb1de  8be8                 mov ebp, eax
// 007fb1e0  7571                 jne 0x7fb253
// 007fb1e2  85ed                 test ebp, ebp
// 007fb1e4  753e                 jne 0x7fb224
// 007fb1e6  85db                 test ebx, ebx
// 007fb1e8  7411                 je 0x7fb1fb
// 007fb1ea  394368               cmp dword ptr [ebx + 0x68], eax
// 007fb1ed  740c                 je 0x7fb1fb
// 007fb1ef  85ff                 test edi, edi
// 007fb1f1  7608                 jbe 0x7fb1fb
// 007fb1f3  81ffffffff0f         cmp edi, 0xfffffff
// 007fb1f9  721f                 jb 0x7fb21a
// 007fb1fb  57                   push edi
// 007fb1fc  8bce                 mov ecx, esi
// 007fb1fe  e82dedfaff           call 0x7a9f30
// 007fb203  8d8c2484000000       lea ecx, [esp + 0x84]
// 007fb20a  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007fb210  50                   push eax
// 007fb211  8bce                 mov ecx, esi
// 007fb213  e8f8f5faff           call 0x7aa810
// 007fb218  eb39                 jmp 0x7fb253
// 007fb21a  57                   push edi
// 007fb21b  8bcb                 mov ecx, ebx
// 007fb21d  e81ecffcff           call 0x7c8140
// 007fb222  8be8                 mov ebp, eax
// 007fb224  8b16                 mov edx, dword ptr [esi]
// 007fb226  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 007fb22c  55                   push ebp
// 007fb22d  8bce                 mov ecx, esi
// 007fb22f  ffd0                 call eax
// 007fb231  8d4d40               lea ecx, [ebp + 0x40]
// 007fb234  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007fb23a  84c0                 test al, al
// 007fb23c  7415                 je 0x7fb253
// 007fb23e  8d8c2484000000       lea ecx, [esp + 0x84]
// 007fb245  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007fb24b  50                   push eax
// 007fb24c  8bcd                 mov ecx, ebp
// 007fb24e  e88d0cfbff           call 0x7abee0
// 007fb253  8b442428             mov eax, dword ptr [esp + 0x28]
// 007fb257  85c0                 test eax, eax
// 007fb259  7408                 je 0x7fb263
// 007fb25b  50                   push eax
// 007fb25c  8bce                 mov ecx, esi
// 007fb25e  e81deffaff           call 0x7aa180
// 007fb263  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007fb267  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 007fb26a  6a01                 push 1
// 007fb26c  56                   push esi
// 007fb26d  51                   push ecx
// 007fb26e  8d4f24               lea ecx, [edi + 0x24]
// 007fb271  e84a07fbff           call 0x7ab9c0
// 007fb276  8b17                 mov edx, dword ptr [edi]
// 007fb278  8b4268               mov eax, dword ptr [edx + 0x68]
// 007fb27b  56                   push esi
// 007fb27c  8bcf                 mov ecx, edi
// 007fb27e  ffd0                 call eax
// 007fb280  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 007fb287  85c0                 test eax, eax
// 007fb289  741a                 je 0x7fb2a5
// 007fb28b  8d4c2450             lea ecx, [esp + 0x50]
// 007fb28f  51                   push ecx
// 007fb290  6a00                 push 0
// 007fb292  8974245c             mov dword ptr [esp + 0x5c], esi
// 007fb296  8b5020               mov edx, dword ptr [eax + 0x20]
// 007fb299  685f280000           push 0x285f
// 007fb29e  52                   push edx
// 007fb29f  ff1554ba9e00         call dword ptr [0x9eba54]
// 007fb2a5  8d4c2468             lea ecx, [esp + 0x68]
// 007fb2a9  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007fb2af  8d8c2484000000       lea ecx, [esp + 0x84]
// 007fb2b6  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007fb2bc  8bc6                 mov eax, esi
// 007fb2be  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007fb2c2  64890d00000000       mov dword ptr fs:[0], ecx
// 007fb2c9  59                   pop ecx
// 007fb2ca  5f                   pop edi
// 007fb2cb  5e                   pop esi
// 007fb2cc  5d                   pop ebp
// 007fb2cd  5b                   pop ebx
// 007fb2ce  83c46c               add esp, 0x6c
// 007fb2d1  c20800               ret 8
// 007fb2d4  62af7f0030b0         bound ebp, qword ptr [edi - 0x4fcfff81]
// 007fb2da  7f00                 jg 0x7fb2dc
// 007fb2dc  30b07f0030b0         xor byte ptr [eax - 0x4fcfff81], dh
// 007fb2e2  7f00                 jg 0x7fb2e4
// 007fb2e4  e8af7f00f4           call 0xf4803298
// 007fb2e9  af                   scasd eax, dword ptr es:[edi]
// 007fb2ea  7f00                 jg 0x7fb2ec
// 007fb2ec  8ab17f0000b0         mov dh, byte ptr [ecx - 0x4fffff81]
// 007fb2f2  7f00                 jg 0x7fb2f4
// 007fb2f4  0cb0                 or al, 0xb0
// 007fb2f6  7f00                 jg 0x7fb2f8
// 007fb2f8  24b0                 and al, 0xb0
// 007fb2fa  7f00                 jg 0x7fb2fc
// copied from an identical function in another client (function ?AddMenuItem@CXTPControls@@QAEPAVCXTPControl@@PAVCMenu@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPControls.cpp