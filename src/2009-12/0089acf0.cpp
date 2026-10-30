// roc 2009-12 0089acf0  unit: CXTPFormulaMulDivC  size: 365 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089acf0
//
// 0089acf0  6aff                 push -1
// 0089acf2  68721b9600           push 0x961b72
// 0089acf7  64a100000000         mov eax, dword ptr fs:[0]
// 0089acfd  50                   push eax
// 0089acfe  51                   push ecx
// 0089acff  56                   push esi
// 0089ad00  a10052b600           mov eax, dword ptr [0xb65200]
// 0089ad05  33c4                 xor eax, esp
// 0089ad07  50                   push eax
// 0089ad08  8d44240c             lea eax, [esp + 0xc]
// 0089ad0c  64a300000000         mov dword ptr fs:[0], eax
// 0089ad12  8bf1                 mov esi, ecx
// 0089ad14  89742408             mov dword ptr [esp + 8], esi
// 0089ad18  c7069c52a000         mov dword ptr [esi], 0xa0529c
// 0089ad1e  8b8ee4020000         mov ecx, dword ptr [esi + 0x2e4]
// 0089ad24  c74424140f000000     mov dword ptr [esp + 0x14], 0xf
// 0089ad2c  85c9                 test ecx, ecx
// 0089ad2e  740f                 je 0x89ad3f
// 0089ad30  e8a790f5ff           call 0x7f3ddc
// 0089ad35  c786e402000000000000 mov dword ptr [esi + 0x2e4], 0
// 0089ad3f  8d8ed8020000         lea ecx, [esi + 0x2d8]
// 0089ad45  c64424140e           mov byte ptr [esp + 0x14], 0xe
// 0089ad4a  e8c113fdff           call 0x86c110
// 0089ad4f  8d8ecc020000         lea ecx, [esi + 0x2cc]
// 0089ad55  c64424140d           mov byte ptr [esp + 0x14], 0xd
// 0089ad5a  e8b113fdff           call 0x86c110
// 0089ad5f  8d8ec0020000         lea ecx, [esi + 0x2c0]
// 0089ad65  c64424140c           mov byte ptr [esp + 0x14], 0xc
// 0089ad6a  e8a113fdff           call 0x86c110
// 0089ad6f  8d8e9c020000         lea ecx, [esi + 0x29c]
// 0089ad75  c64424140b           mov byte ptr [esp + 0x14], 0xb
// 0089ad7a  c70148189a00         mov dword ptr [ecx], 0x9a1848
// 0089ad80  e8ab44b7ff           call 0x40f230
// 0089ad85  8d8e94020000         lea ecx, [esi + 0x294]
// 0089ad8b  c64424140a           mov byte ptr [esp + 0x14], 0xa
// 0089ad90  c70148189a00         mov dword ptr [ecx], 0x9a1848
// 0089ad96  e89544b7ff           call 0x40f230
// 0089ad9b  8d8e8c020000         lea ecx, [esi + 0x28c]
// 0089ada1  c644241409           mov byte ptr [esp + 0x14], 9
// 0089ada6  c70148189a00         mov dword ptr [ecx], 0x9a1848
// 0089adac  e87f44b7ff           call 0x40f230
// 0089adb1  8d8e70020000         lea ecx, [esi + 0x270]
// 0089adb7  c644241408           mov byte ptr [esp + 0x14], 8
// 0089adbc  e83192f5ff           call 0x7f3ff2
// 0089adc1  8d8e20020000         lea ecx, [esi + 0x220]
// 0089adc7  ff15c0de9800         call dword ptr [0x98dec0]
// 0089adcd  8d8e1c020000         lea ecx, [esi + 0x21c]
// 0089add3  ff15c0de9800         call dword ptr [0x98dec0]
// 0089add9  8d8e18020000         lea ecx, [esi + 0x218]
// 0089addf  ff15c0de9800         call dword ptr [0x98dec0]
// 0089ade5  8d8e14020000         lea ecx, [esi + 0x214]
// 0089adeb  ff15c0de9800         call dword ptr [0x98dec0]
// 0089adf1  8d4e38               lea ecx, [esi + 0x38]
// 0089adf4  c644241403           mov byte ptr [esp + 0x14], 3
// 0089adf9  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 0089adff  e82c44b7ff           call 0x40f230
// 0089ae04  8d4e30               lea ecx, [esi + 0x30]
// 0089ae07  c644241402           mov byte ptr [esp + 0x14], 2
// 0089ae0c  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 0089ae12  e81944b7ff           call 0x40f230
// 0089ae17  8d4e28               lea ecx, [esi + 0x28]
// 0089ae1a  c644241401           mov byte ptr [esp + 0x14], 1
// 0089ae1f  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 0089ae25  e80644b7ff           call 0x40f230
// 0089ae2a  8d4e20               lea ecx, [esi + 0x20]
// 0089ae2d  c644241400           mov byte ptr [esp + 0x14], 0
// 0089ae32  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 0089ae38  e8f343b7ff           call 0x40f230
// 0089ae3d  8bce                 mov ecx, esi
// 0089ae3f  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0089ae47  e89695f5ff           call 0x7f43e2
// 0089ae4c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089ae50  64890d00000000       mov dword ptr fs:[0], ecx
// 0089ae57  59                   pop ecx
// 0089ae58  5e                   pop esi
// 0089ae59  83c410               add esp, 0x10
// 0089ae5c  c3                   ret 
// copied from an identical function in another client (function ??1CXTPReportPaintManager@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp