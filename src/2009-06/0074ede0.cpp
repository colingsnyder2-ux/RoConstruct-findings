// roc 2009-06 0074ede0  unit: CXTPReportHeader  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074ede0
//
// 0074ede0  6aff                 push -1
// 0074ede2  68bb758700           push 0x8775bb
// 0074ede7  64a100000000         mov eax, dword ptr fs:[0]
// 0074eded  50                   push eax
// 0074edee  83ec18               sub esp, 0x18
// 0074edf1  55                   push ebp
// 0074edf2  56                   push esi
// 0074edf3  57                   push edi
// 0074edf4  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0074edf9  33c4                 xor eax, esp
// 0074edfb  50                   push eax
// 0074edfc  8d442428             lea eax, [esp + 0x28]
// 0074ee00  64a300000000         mov dword ptr fs:[0], eax
// 0074ee06  8bf9                 mov edi, ecx
// 0074ee08  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0074ee0c  8b07                 mov eax, dword ptr [edi]
// 0074ee0e  8b542438             mov edx, dword ptr [esp + 0x38]
// 0074ee12  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 0074ee18  51                   push ecx
// 0074ee19  52                   push edx
// 0074ee1a  8bcf                 mov ecx, edi
// 0074ee1c  ffd0                 call eax
// 0074ee1e  8bf0                 mov esi, eax
// 0074ee20  85f6                 test esi, esi
// 0074ee22  0f84b5000000         je 0x74eedd
// 0074ee28  8d4c2410             lea ecx, [esp + 0x10]
// 0074ee2c  51                   push ecx
// 0074ee2d  8bce                 mov ecx, esi
// 0074ee2f  e82c580400           call 0x794660
// 0074ee34  8d4c2410             lea ecx, [esp + 0x10]
// 0074ee38  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0074ee40  ff155cfb8900         call dword ptr [0x89fb5c]
// 0074ee46  84c0                 test al, al
// 0074ee48  747b                 je 0x74eec5
// 0074ee4a  8bcf                 mov ecx, edi
// 0074ee4c  e80fe7ffff           call 0x74d560
// 0074ee51  8d542414             lea edx, [esp + 0x14]
// 0074ee55  52                   push edx
// 0074ee56  8bce                 mov ecx, esi
// 0074ee58  8be8                 mov ebp, eax
// 0074ee5a  e8f102ffff           call 0x73f150
// 0074ee5f  50                   push eax
// 0074ee60  8d4c2414             lea ecx, [esp + 0x14]
// 0074ee64  c644243401           mov byte ptr [esp + 0x34], 1
// 0074ee69  ff1508fa8900         call dword ptr [0x89fa08]
// 0074ee6f  8d4c2414             lea ecx, [esp + 0x14]
// 0074ee73  c644243000           mov byte ptr [esp + 0x30], 0
// 0074ee78  ff1510fd8900         call dword ptr [0x89fd10]
// 0074ee7e  837e4400             cmp dword ptr [esi + 0x44], 0
// 0074ee82  7441                 je 0x74eec5
// 0074ee84  83bf8800000000       cmp dword ptr [edi + 0x88], 0
// 0074ee8b  7438                 je 0x74eec5
// 0074ee8d  8d442410             lea eax, [esp + 0x10]
// 0074ee91  50                   push eax
// 0074ee92  81c518020000         add ebp, 0x218
// 0074ee98  8d4c2418             lea ecx, [esp + 0x18]
// 0074ee9c  55                   push ebp
// 0074ee9d  51                   push ecx
// 0074ee9e  e8ad54d0ff           call 0x454350
// 0074eea3  83c40c               add esp, 0xc
// 0074eea6  50                   push eax
// 0074eea7  8d4c2414             lea ecx, [esp + 0x14]
// 0074eeab  c644243402           mov byte ptr [esp + 0x34], 2
// 0074eeb0  ff1508fa8900         call dword ptr [0x89fa08]
// 0074eeb6  8d4c2414             lea ecx, [esp + 0x14]
// 0074eeba  c644243000           mov byte ptr [esp + 0x30], 0
// 0074eebf  ff1510fd8900         call dword ptr [0x89fd10]
// 0074eec5  8d4c2410             lea ecx, [esp + 0x10]
// 0074eec9  ff1554fb8900         call dword ptr [0x89fb54]
// 0074eecf  85c0                 test eax, eax
// 0074eed1  7522                 jne 0x74eef5
// 0074eed3  8d4c2410             lea ecx, [esp + 0x10]
// 0074eed7  ff1510fd8900         call dword ptr [0x89fd10]
// 0074eedd  83c8ff               or eax, 0xffffffff
// 0074eee0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0074eee4  64890d00000000       mov dword ptr fs:[0], ecx
// 0074eeeb  59                   pop ecx
// 0074eeec  5f                   pop edi
// 0074eeed  5e                   pop esi
// 0074eeee  5d                   pop ebp
// 0074eeef  83c424               add esp, 0x24
// 0074eef2  c20c00               ret 0xc
// 0074eef5  8d542418             lea edx, [esp + 0x18]
// 0074eef9  52                   push edx
// 0074eefa  8bce                 mov ecx, esi
// 0074eefc  e8dfddffff           call 0x74cce0
// 0074ef01  8b10                 mov edx, dword ptr [eax]
// 0074ef03  8d4c2410             lea ecx, [esp + 0x10]
// 0074ef07  51                   push ecx
// 0074ef08  56                   push esi
// 0074ef09  83ec10               sub esp, 0x10
// 0074ef0c  8bcc                 mov ecx, esp
// 0074ef0e  8911                 mov dword ptr [ecx], edx
// 0074ef10  8b5004               mov edx, dword ptr [eax + 4]
// 0074ef13  895104               mov dword ptr [ecx + 4], edx
// 0074ef16  8b5008               mov edx, dword ptr [eax + 8]
// 0074ef19  8b400c               mov eax, dword ptr [eax + 0xc]
// 0074ef1c  895108               mov dword ptr [ecx + 8], edx
// 0074ef1f  89410c               mov dword ptr [ecx + 0xc], eax
// 0074ef22  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0074ef25  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0074ef28  8b442458             mov eax, dword ptr [esp + 0x58]
// 0074ef2c  52                   push edx
// 0074ef2d  50                   push eax
// 0074ef2e  e8dd600300           call 0x785010
// 0074ef33  83c420               add esp, 0x20
// 0074ef36  8d4c2410             lea ecx, [esp + 0x10]
// 0074ef3a  ff1510fd8900         call dword ptr [0x89fd10]
// 0074ef40  8bc6                 mov eax, esi
// 0074ef42  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0074ef46  64890d00000000       mov dword ptr fs:[0], ecx
// 0074ef4d  59                   pop ecx
// 0074ef4e  5f                   pop edi
// 0074ef4f  5e                   pop esi
// 0074ef50  5d                   pop ebp
// 0074ef51  83c424               add esp, 0x24
// 0074ef54  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPReportHeader@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportHeader.cpp