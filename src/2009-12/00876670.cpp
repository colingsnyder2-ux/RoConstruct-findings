// roc 2009-12 00876670  unit: CXTPRibbonTheme  size: 986 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00876670
//
// 00876670  83ec58               sub esp, 0x58
// 00876673  837c246800           cmp dword ptr [esp + 0x68], 0
// 00876678  53                   push ebx
// 00876679  55                   push ebp
// 0087667a  56                   push esi
// 0087667b  57                   push edi
// 0087667c  8bd9                 mov ebx, ecx
// 0087667e  7524                 jne 0x8766a4
// 00876680  8b442474             mov eax, dword ptr [esp + 0x74]
// 00876684  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00876688  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 0087668c  6a00                 push 0
// 0087668e  50                   push eax
// 0087668f  51                   push ecx
// 00876690  56                   push esi
// 00876691  8bcb                 mov ecx, ebx
// 00876693  e86898f8ff           call 0x7fff00
// 00876698  8bc6                 mov eax, esi
// 0087669a  5f                   pop edi
// 0087669b  5e                   pop esi
// 0087669c  5d                   pop ebp
// 0087669d  5b                   pop ebx
// 0087669e  83c458               add esp, 0x58
// 008766a1  c21000               ret 0x10
// 008766a4  8b742474             mov esi, dword ptr [esp + 0x74]
// 008766a8  8b9600010000         mov edx, dword ptr [esi + 0x100]
// 008766ae  33c0                 xor eax, eax
// 008766b0  83baf800000002       cmp dword ptr [edx + 0xf8], 2
// 008766b7  8b16                 mov edx, dword ptr [esi]
// 008766b9  0f94c0               sete al
// 008766bc  8bce                 mov ecx, esi
// 008766be  8bf8                 mov edi, eax
// 008766c0  8b426c               mov eax, dword ptr [edx + 0x6c]
// 008766c3  897c2414             mov dword ptr [esp + 0x14], edi
// 008766c7  ffd0                 call eax
// 008766c9  8be8                 mov ebp, eax
// 008766cb  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008766d1  896c2410             mov dword ptr [esp + 0x10], ebp
// 008766d5  83f8ff               cmp eax, -1
// 008766d8  750f                 jne 0x8766e9
// 008766da  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 008766e0  85c9                 test ecx, ecx
// 008766e2  7405                 je 0x8766e9
// 008766e4  e8c7fef7ff           call 0x7f65b0
// 008766e9  89442474             mov dword ptr [esp + 0x74], eax
// 008766ed  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008766f3  85ff                 test edi, edi
// 008766f5  7441                 je 0x876738
// 008766f7  83f8ff               cmp eax, -1
// 008766fa  750f                 jne 0x87670b
// 008766fc  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00876702  85c9                 test ecx, ecx
// 00876704  7405                 je 0x87670b
// 00876706  e8a5fef7ff           call 0x7f65b0
// 0087670b  85c0                 test eax, eax
// 0087670d  7507                 jne 0x876716
// 0087670f  b823000000           mov eax, 0x23
// 00876714  eb0a                 jmp 0x876720
// 00876716  33c0                 xor eax, eax
// 00876718  85ed                 test ebp, ebp
// 0087671a  0f95c0               setne al
// 0087671d  83c02c               add eax, 0x2c
// 00876720  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 00876724  8b2f                 mov ebp, dword ptr [edi]
// 00876726  50                   push eax
// 00876727  8bcb                 mov ecx, ebx
// 00876729  e8126ff8ff           call 0x7fd640
// 0087672e  8b5538               mov edx, dword ptr [ebp + 0x38]
// 00876731  50                   push eax
// 00876732  8bcf                 mov ecx, edi
// 00876734  ffd2                 call edx
// 00876736  eb34                 jmp 0x87676c
// 00876738  83f8ff               cmp eax, -1
// 0087673b  750f                 jne 0x87674c
// 0087673d  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00876743  85c9                 test ecx, ecx
// 00876745  7405                 je 0x87674c
// 00876747  e864fef7ff           call 0x7f65b0
// 0087674c  8b7c2470             mov edi, dword ptr [esp + 0x70]
// 00876750  8b2f                 mov ebp, dword ptr [edi]
// 00876752  f7d8                 neg eax
// 00876754  1bc0                 sbb eax, eax
// 00876756  83e0f2               and eax, 0xfffffff2
// 00876759  83c03c               add eax, 0x3c
// 0087675c  50                   push eax
// 0087675d  8bcb                 mov ecx, ebx
// 0087675f  e8dc6ef8ff           call 0x7fd640
// 00876764  50                   push eax
// 00876765  8b4538               mov eax, dword ptr [ebp + 0x38]
// 00876768  8bcf                 mov ecx, edi
// 0087676a  ffd0                 call eax
// 0087676c  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00876770  51                   push ecx
// 00876771  56                   push esi
// 00876772  57                   push edi
// 00876773  8d542424             lea edx, [esp + 0x24]
// 00876777  52                   push edx
// 00876778  8bcb                 mov ecx, ebx
// 0087677a  e88197f8ff           call 0x7fff00
// 0087677f  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00876785  038e80010000         add ecx, dword ptr [esi + 0x180]
// 0087678b  837c247400           cmp dword ptr [esp + 0x74], 0
// 00876790  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00876796  8baec8000000         mov ebp, dword ptr [esi + 0xc8]
// 0087679c  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 008767a2  8954242c             mov dword ptr [esp + 0x2c], edx
// 008767a6  896c2430             mov dword ptr [esp + 0x30], ebp
// 008767aa  89442434             mov dword ptr [esp + 0x34], eax
// 008767ae  894c2428             mov dword ptr [esp + 0x28], ecx
// 008767b2  7549                 jne 0x8767fd
// 008767b4  8b442410             mov eax, dword ptr [esp + 0x10]
// 008767b8  41                   inc ecx
// 008767b9  894c2428             mov dword ptr [esp + 0x28], ecx
// 008767bd  83f802               cmp eax, 2
// 008767c0  7409                 je 0x8767cb
// 008767c2  83f803               cmp eax, 3
// 008767c5  7404                 je 0x8767cb
// 008767c7  33c0                 xor eax, eax
// 008767c9  eb05                 jmp 0x8767d0
// 008767cb  b801000000           mov eax, 1
// 008767d0  f7d8                 neg eax
// 008767d2  1bc0                 sbb eax, eax
// 008767d4  83e0eb               and eax, 0xffffffeb
// 008767d7  6a0f                 push 0xf
// 008767d9  83c035               add eax, 0x35
// 008767dc  50                   push eax
// 008767dd  83ec10               sub esp, 0x10
// 008767e0  8bc4                 mov eax, esp
// 008767e2  8908                 mov dword ptr [eax], ecx
// 008767e4  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008767e8  895004               mov dword ptr [eax + 4], edx
// 008767eb  896808               mov dword ptr [eax + 8], ebp
// 008767ee  89480c               mov dword ptr [eax + 0xc], ecx
// 008767f1  57                   push edi
// 008767f2  8bcb                 mov ecx, ebx
// 008767f4  e8677ff8ff           call 0x7fe760
// 008767f9  33ed                 xor ebp, ebp
// 008767fb  eb66                 jmp 0x876863
// 008767fd  837c241000           cmp dword ptr [esp + 0x10], 0
// 00876802  7424                 je 0x876828
// 00876804  6a05                 push 5
// 00876806  6a35                 push 0x35
// 00876808  83ec10               sub esp, 0x10
// 0087680b  8bc4                 mov eax, esp
// 0087680d  8908                 mov dword ptr [eax], ecx
// 0087680f  895004               mov dword ptr [eax + 4], edx
// 00876812  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00876816  896808               mov dword ptr [eax + 8], ebp
// 00876819  57                   push edi
// 0087681a  8bcb                 mov ecx, ebx
// 0087681c  89500c               mov dword ptr [eax + 0xc], edx
// 0087681f  e83c7ff8ff           call 0x7fe760
// 00876824  33ed                 xor ebp, ebp
// 00876826  eb3b                 jmp 0x876863
// 00876828  33ed                 xor ebp, ebp
// 0087682a  396c2414             cmp dword ptr [esp + 0x14], ebp
// 0087682e  7513                 jne 0x876843
// 00876830  8b8378060000         mov eax, dword ptr [ebx + 0x678]
// 00876836  50                   push eax
// 00876837  8d4c242c             lea ecx, [esp + 0x2c]
// 0087683b  51                   push ecx
// 0087683c  8bcf                 mov ecx, edi
// 0087683e  e8bbddf7ff           call 0x7f45fe
// 00876843  6a35                 push 0x35
// 00876845  8bcb                 mov ecx, ebx
// 00876847  e8f46df8ff           call 0x7fd640
// 0087684c  50                   push eax
// 0087684d  6a35                 push 0x35
// 0087684f  8bcb                 mov ecx, ebx
// 00876851  e8ea6df8ff           call 0x7fd640
// 00876856  50                   push eax
// 00876857  8d542430             lea edx, [esp + 0x30]
// 0087685b  52                   push edx
// 0087685c  8bcf                 mov ecx, edi
// 0087685e  e895ddf7ff           call 0x7f45f8
// 00876863  39aeac010000         cmp dword ptr [esi + 0x1ac], ebp
// 00876869  0f848c010000         je 0x8769fb
// 0087686f  682c18a000           push 0xa0182c
// 00876874  8bcb                 mov ecx, ebx
// 00876876  e885840000           call 0x87ed00
// 0087687b  8bd8                 mov ebx, eax
// 0087687d  3bdd                 cmp ebx, ebp
// 0087687f  0f84b2010000         je 0x876a37
// 00876885  8b06                 mov eax, dword ptr [esi]
// 00876887  8b5078               mov edx, dword ptr [eax + 0x78]
// 0087688a  8bce                 mov ecx, esi
// 0087688c  ffd2                 call edx
// 0087688e  89442478             mov dword ptr [esp + 0x78], eax
// 00876892  396c2474             cmp dword ptr [esp + 0x74], ebp
// 00876896  750a                 jne 0x8768a2
// 00876898  c744247004000000     mov dword ptr [esp + 0x70], 4
// 008768a0  eb2d                 jmp 0x8768cf
// 008768a2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008768a6  3bcd                 cmp ecx, ebp
// 008768a8  740b                 je 0x8768b5
// 008768aa  83f803               cmp eax, 3
// 008768ad  7506                 jne 0x8768b5
// 008768af  89442470             mov dword ptr [esp + 0x70], eax
// 008768b3  eb1a                 jmp 0x8768cf
// 008768b5  83f903               cmp ecx, 3
// 008768b8  750a                 jne 0x8768c4
// 008768ba  c744247002000000     mov dword ptr [esp + 0x70], 2
// 008768c2  eb0b                 jmp 0x8768cf
// 008768c4  33c0                 xor eax, eax
// 008768c6  3bcd                 cmp ecx, ebp
// 008768c8  0f95c0               setne al
// 008768cb  89442470             mov dword ptr [esp + 0x70], eax
// 008768cf  8b442430             mov eax, dword ptr [esp + 0x30]
// 008768d3  8d48ee               lea ecx, [eax - 0x12]
// 008768d6  48                   dec eax
// 008768d7  89442420             mov dword ptr [esp + 0x20], eax
// 008768db  8b442434             mov eax, dword ptr [esp + 0x34]
// 008768df  894c2418             mov dword ptr [esp + 0x18], ecx
// 008768e3  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008768e7  8d5101               lea edx, [ecx + 1]
// 008768ea  03c1                 add eax, ecx
// 008768ec  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008768f0  8954241c             mov dword ptr [esp + 0x1c], edx
// 008768f4  99                   cdq 
// 008768f5  6a0a                 push 0xa
// 008768f7  2bc2                 sub eax, edx
// 008768f9  51                   push ecx
// 008768fa  8d542460             lea edx, [esp + 0x60]
// 008768fe  d1f8                 sar eax, 1
// 00876900  52                   push edx
// 00876901  8bcb                 mov ecx, ebx
// 00876903  89442430             mov dword ptr [esp + 0x30], eax
// 00876907  896c2444             mov dword ptr [esp + 0x44], ebp
// 0087690b  896c2448             mov dword ptr [esp + 0x48], ebp
// 0087690f  896c244c             mov dword ptr [esp + 0x4c], ebp
// 00876913  896c2450             mov dword ptr [esp + 0x50], ebp
// 00876917  e8a49f0600           call 0x8e08c0
// 0087691c  8b10                 mov edx, dword ptr [eax]
// 0087691e  68ff00ff00           push 0xff00ff
// 00876923  8d4c243c             lea ecx, [esp + 0x3c]
// 00876927  51                   push ecx
// 00876928  83ec10               sub esp, 0x10
// 0087692b  8bcc                 mov ecx, esp
// 0087692d  8911                 mov dword ptr [ecx], edx
// 0087692f  8b5004               mov edx, dword ptr [eax + 4]
// 00876932  895104               mov dword ptr [ecx + 4], edx
// 00876935  8b5008               mov edx, dword ptr [eax + 8]
// 00876938  8b400c               mov eax, dword ptr [eax + 0xc]
// 0087693b  895108               mov dword ptr [ecx + 8], edx
// 0087693e  89410c               mov dword ptr [ecx + 0xc], eax
// 00876941  8d4c2430             lea ecx, [esp + 0x30]
// 00876945  51                   push ecx
// 00876946  57                   push edi
// 00876947  8bcb                 mov ecx, ebx
// 00876949  e8b2a40600           call 0x8e0e00
// 0087694e  396c2474             cmp dword ptr [esp + 0x74], ebp
// 00876952  7507                 jne 0x87695b
// 00876954  b809000000           mov eax, 9
// 00876959  eb2e                 jmp 0x876989
// 0087695b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087695f  3bc5                 cmp eax, ebp
// 00876961  740e                 je 0x876971
// 00876963  837c247804           cmp dword ptr [esp + 0x78], 4
// 00876968  7507                 jne 0x876971
// 0087696a  b808000000           mov eax, 8
// 0087696f  eb18                 jmp 0x876989
// 00876971  83f804               cmp eax, 4
// 00876974  7507                 jne 0x87697d
// 00876976  b807000000           mov eax, 7
// 0087697b  eb0c                 jmp 0x876989
// 0087697d  33d2                 xor edx, edx
// 0087697f  3bc5                 cmp eax, ebp
// 00876981  0f95c2               setne dl
// 00876984  83c205               add edx, 5
// 00876987  8bc2                 mov eax, edx
// 00876989  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0087698d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00876991  6a0a                 push 0xa
// 00876993  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00876997  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0087699b  89542450             mov dword ptr [esp + 0x50], edx
// 0087699f  8b542438             mov edx, dword ptr [esp + 0x38]
// 008769a3  50                   push eax
// 008769a4  8d442460             lea eax, [esp + 0x60]
// 008769a8  894c2458             mov dword ptr [esp + 0x58], ecx
// 008769ac  4a                   dec edx
// 008769ad  50                   push eax
// 008769ae  8bcb                 mov ecx, ebx
// 008769b0  89542460             mov dword ptr [esp + 0x60], edx
// 008769b4  896c2444             mov dword ptr [esp + 0x44], ebp
// 008769b8  896c2448             mov dword ptr [esp + 0x48], ebp
// 008769bc  896c244c             mov dword ptr [esp + 0x4c], ebp
// 008769c0  896c2450             mov dword ptr [esp + 0x50], ebp
// 008769c4  e8f79e0600           call 0x8e08c0
// 008769c9  8b10                 mov edx, dword ptr [eax]
// 008769cb  68ff00ff00           push 0xff00ff
// 008769d0  8d4c243c             lea ecx, [esp + 0x3c]
// 008769d4  51                   push ecx
// 008769d5  83ec10               sub esp, 0x10
// 008769d8  8bcc                 mov ecx, esp
// 008769da  8911                 mov dword ptr [ecx], edx
// 008769dc  8b5004               mov edx, dword ptr [eax + 4]
// 008769df  895104               mov dword ptr [ecx + 4], edx
// 008769e2  8b5008               mov edx, dword ptr [eax + 8]
// 008769e5  8b400c               mov eax, dword ptr [eax + 0xc]
// 008769e8  895108               mov dword ptr [ecx + 8], edx
// 008769eb  89410c               mov dword ptr [ecx + 0xc], eax
// 008769ee  8d4c2460             lea ecx, [esp + 0x60]
// 008769f2  51                   push ecx
// 008769f3  57                   push edi
// 008769f4  8bcb                 mov ecx, ebx
// 008769f6  e805a40600           call 0x8e0e00
// 008769fb  8bce                 mov ecx, esi
// 008769fd  e8beb3ffff           call 0x871dc0
// 00876a02  85c0                 test eax, eax
// 00876a04  7431                 je 0x876a37
// 00876a06  8b96c0000000         mov edx, dword ptr [esi + 0xc0]
// 00876a0c  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00876a12  83ec10               sub esp, 0x10
// 00876a15  8bc4                 mov eax, esp
// 00876a17  8910                 mov dword ptr [eax], edx
// 00876a19  8b96c8000000         mov edx, dword ptr [esi + 0xc8]
// 00876a1f  894804               mov dword ptr [eax + 4], ecx
// 00876a22  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00876a28  895008               mov dword ptr [eax + 8], edx
// 00876a2b  57                   push edi
// 00876a2c  89480c               mov dword ptr [eax + 0xc], ecx
// 00876a2f  e84cd1f8ff           call 0x803b80
// 00876a34  83c414               add esp, 0x14
// 00876a37  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00876a3b  5f                   pop edi
// 00876a3c  5e                   pop esi
// 00876a3d  896804               mov dword ptr [eax + 4], ebp
// 00876a40  8928                 mov dword ptr [eax], ebp
// 00876a42  5d                   pop ebp
// 00876a43  5b                   pop ebx
// 00876a44  83c458               add esp, 0x58
// 00876a47  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlEdit@CXTPRibbonTheme@@MAE?AVCSize@@PAVCDC@@PAVCXTPControlEdit@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp