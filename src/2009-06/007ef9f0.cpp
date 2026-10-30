// roc 2009-06 007ef9f0  unit: CXTPPropertyGridPaintManager  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ef9f0
//
// 007ef9f0  83ec10               sub esp, 0x10
// 007ef9f3  53                   push ebx
// 007ef9f4  56                   push esi
// 007ef9f5  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 007ef9f9  57                   push edi
// 007ef9fa  8bf9                 mov edi, ecx
// 007ef9fc  6a01                 push 1
// 007ef9fe  8bce                 mov ecx, esi
// 007efa00  e801c50500           call 0x84bf06
// 007efa05  837c243800           cmp dword ptr [esp + 0x38], 0
// 007efa0a  7428                 je 0x7efa34
// 007efa0c  8b475c               mov eax, dword ptr [edi + 0x5c]
// 007efa0f  83f8ff               cmp eax, -1
// 007efa12  7503                 jne 0x7efa17
// 007efa14  8b4758               mov eax, dword ptr [edi + 0x58]
// 007efa17  8b16                 mov edx, dword ptr [esi]
// 007efa19  50                   push eax
// 007efa1a  8b4238               mov eax, dword ptr [edx + 0x38]
// 007efa1d  8bce                 mov ecx, esi
// 007efa1f  ffd0                 call eax
// 007efa21  8b4750               mov eax, dword ptr [edi + 0x50]
// 007efa24  83f8ff               cmp eax, -1
// 007efa27  7503                 jne 0x7efa2c
// 007efa29  8b474c               mov eax, dword ptr [edi + 0x4c]
// 007efa2c  50                   push eax
// 007efa2d  8d4c242c             lea ecx, [esp + 0x2c]
// 007efa31  51                   push ecx
// 007efa32  eb26                 jmp 0x7efa5a
// 007efa34  8b3e                 mov edi, dword ptr [esi]
// 007efa36  6a08                 push 8
// 007efa38  ff15e4ee8900         call dword ptr [0x89eee4]
// 007efa3e  8b5738               mov edx, dword ptr [edi + 0x38]
// 007efa41  50                   push eax
// 007efa42  8bce                 mov ecx, esi
// 007efa44  ffd2                 call edx
// 007efa46  e8d550f6ff           call 0x754b20
// 007efa4b  6a05                 push 5
// 007efa4d  8bc8                 mov ecx, eax
// 007efa4f  e84c48f6ff           call 0x7542a0
// 007efa54  50                   push eax
// 007efa55  8d44242c             lea eax, [esp + 0x2c]
// 007efa59  50                   push eax
// 007efa5a  8bce                 mov ecx, esi
// 007efa5c  e86f9df2ff           call 0x7197d0
// 007efa61  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007efa65  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007efa69  8b442430             mov eax, dword ptr [esp + 0x30]
// 007efa6d  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 007efa71  83c102               add ecx, 2
// 007efa74  894c240c             mov dword ptr [esp + 0xc], ecx
// 007efa78  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007efa7c  83c0fe               add eax, -2
// 007efa7f  89542410             mov dword ptr [esp + 0x10], edx
// 007efa83  8b13                 mov edx, dword ptr [ebx]
// 007efa85  89442414             mov dword ptr [esp + 0x14], eax
// 007efa89  8b425c               mov eax, dword ptr [edx + 0x5c]
// 007efa8c  894c2418             mov dword ptr [esp + 0x18], ecx
// 007efa90  8bcb                 mov ecx, ebx
// 007efa92  ffd0                 call eax
// 007efa94  8bf8                 mov edi, eax
// 007efa96  85ff                 test edi, edi
// 007efa98  746c                 je 0x7efb06
// 007efa9a  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 007efa9e  2b5c242c             sub ebx, dword ptr [esp + 0x2c]
// 007efaa2  55                   push ebp
// 007efaa3  8bcf                 mov ecx, edi
// 007efaa5  e806d4f5ff           call 0x74ceb0
// 007efaaa  3bc3                 cmp eax, ebx
// 007efaac  7d0b                 jge 0x7efab9
// 007efaae  8bcf                 mov ecx, edi
// 007efab0  e8fbd3f5ff           call 0x74ceb0
// 007efab5  8be8                 mov ebp, eax
// 007efab7  eb08                 jmp 0x7efac1
// 007efab9  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 007efabd  2b6c2430             sub ebp, dword ptr [esp + 0x30]
// 007efac1  8bcf                 mov ecx, edi
// 007efac3  e85887fdff           call 0x7c8220
// 007efac8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007efacc  8b542414             mov edx, dword ptr [esp + 0x14]
// 007efad0  8bd8                 mov ebx, eax
// 007efad2  8d040a               lea eax, [edx + ecx]
// 007efad5  99                   cdq 
// 007efad6  2bc2                 sub eax, edx
// 007efad8  8bc8                 mov ecx, eax
// 007efada  8bc5                 mov eax, ebp
// 007efadc  99                   cdq 
// 007efadd  2bc2                 sub eax, edx
// 007efadf  55                   push ebp
// 007efae0  d1f9                 sar ecx, 1
// 007efae2  d1f8                 sar eax, 1
// 007efae4  2bc8                 sub ecx, eax
// 007efae6  8b442414             mov eax, dword ptr [esp + 0x14]
// 007efaea  53                   push ebx
// 007efaeb  51                   push ecx
// 007efaec  50                   push eax
// 007efaed  56                   push esi
// 007efaee  8bcf                 mov ecx, edi
// 007efaf0  e8aba4f4ff           call 0x739fa0
// 007efaf5  8b442410             mov eax, dword ptr [esp + 0x10]
// 007efaf9  8d4c1805             lea ecx, [eax + ebx + 5]
// 007efafd  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007efb01  894c2410             mov dword ptr [esp + 0x10], ecx
// 007efb05  5d                   pop ebp
// 007efb06  8d7b20               lea edi, [ebx + 0x20]
// 007efb09  8b1e                 mov ebx, dword ptr [esi]
// 007efb0b  6824080000           push 0x824
// 007efb10  8d542410             lea edx, [esp + 0x10]
// 007efb14  52                   push edx
// 007efb15  8bcf                 mov ecx, edi
// 007efb17  ff1554fb8900         call dword ptr [0x89fb54]
// 007efb1d  50                   push eax
// 007efb1e  8bcf                 mov ecx, edi
// 007efb20  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007efb26  50                   push eax
// 007efb27  8b4370               mov eax, dword ptr [ebx + 0x70]
// 007efb2a  8bce                 mov ecx, esi
// 007efb2c  ffd0                 call eax
// 007efb2e  5f                   pop edi
// 007efb2f  5e                   pop esi
// 007efb30  5b                   pop ebx
// 007efb31  83c410               add esp, 0x10
// 007efb34  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawInplaceListItem@CXTPPropertyGridPaintManager@@UAEXPAVCDC@@PAVCXTPPropertyGridItemConstraint@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridPaintManager.cpp