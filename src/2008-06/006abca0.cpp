// roc 2008-06 006abca0  unit: CRobloxControlColorSelector  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006abca0
//
// 006abca0  83ec10               sub esp, 0x10
// 006abca3  8b442418             mov eax, dword ptr [esp + 0x18]
// 006abca7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006abcab  890424               mov dword ptr [esp], eax
// 006abcae  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006abcb2  56                   push esi
// 006abcb3  8b742418             mov esi, dword ptr [esp + 0x18]
// 006abcb7  89442408             mov dword ptr [esp + 8], eax
// 006abcbb  57                   push edi
// 006abcbc  8b3d402b8000         mov edi, dword ptr [0x802b40]
// 006abcc2  83c002               add eax, 2
// 006abcc5  8d542408             lea edx, [esp + 8]
// 006abcc9  89442414             mov dword ptr [esp + 0x14], eax
// 006abccd  8b4604               mov eax, dword ptr [esi + 4]
// 006abcd0  52                   push edx
// 006abcd1  50                   push eax
// 006abcd2  894c2418             mov dword ptr [esp + 0x18], ecx
// 006abcd6  ffd7                 call edi
// 006abcd8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006abcdc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006abce0  8d50fe               lea edx, [eax - 2]
// 006abce3  8954240c             mov dword ptr [esp + 0xc], edx
// 006abce7  8d542408             lea edx, [esp + 8]
// 006abceb  89442414             mov dword ptr [esp + 0x14], eax
// 006abcef  8b4604               mov eax, dword ptr [esi + 4]
// 006abcf2  894c2408             mov dword ptr [esp + 8], ecx
// 006abcf6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006abcfa  52                   push edx
// 006abcfb  50                   push eax
// 006abcfc  894c2418             mov dword ptr [esp + 0x18], ecx
// 006abd00  ffd7                 call edi
// 006abd02  8b442420             mov eax, dword ptr [esp + 0x20]
// 006abd06  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006abd0a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006abd0e  89442408             mov dword ptr [esp + 8], eax
// 006abd12  83c002               add eax, 2
// 006abd15  83c102               add ecx, 2
// 006abd18  89442410             mov dword ptr [esp + 0x10], eax
// 006abd1c  8d442408             lea eax, [esp + 8]
// 006abd20  894c240c             mov dword ptr [esp + 0xc], ecx
// 006abd24  8b4e04               mov ecx, dword ptr [esi + 4]
// 006abd27  50                   push eax
// 006abd28  83c2fe               add edx, -2
// 006abd2b  51                   push ecx
// 006abd2c  8954241c             mov dword ptr [esp + 0x1c], edx
// 006abd30  ffd7                 call edi
// 006abd32  8b442428             mov eax, dword ptr [esp + 0x28]
// 006abd36  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006abd3a  8d50fe               lea edx, [eax - 2]
// 006abd3d  83c102               add ecx, 2
// 006abd40  89542408             mov dword ptr [esp + 8], edx
// 006abd44  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006abd48  89442410             mov dword ptr [esp + 0x10], eax
// 006abd4c  8d442408             lea eax, [esp + 8]
// 006abd50  894c240c             mov dword ptr [esp + 0xc], ecx
// 006abd54  8b4e04               mov ecx, dword ptr [esi + 4]
// 006abd57  50                   push eax
// 006abd58  83c2fe               add edx, -2
// 006abd5b  51                   push ecx
// 006abd5c  8954241c             mov dword ptr [esp + 0x1c], edx
// 006abd60  ffd7                 call edi
// 006abd62  5f                   pop edi
// 006abd63  5e                   pop esi
// 006abd64  83c410               add esp, 0x10
// 006abd67  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControl.cpp (function ?OnInvertTracker@CXTPControl@@AAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControl.cpp
