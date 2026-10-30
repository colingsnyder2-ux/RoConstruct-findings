// roc 2010-06 00850df0  unit: CXTPReportPaintManager  size: 658 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00850df0
//
// 00850df0  6aff                 push -1
// 00850df2  68817c9b00           push 0x9b7c81
// 00850df7  64a100000000         mov eax, dword ptr fs:[0]
// 00850dfd  50                   push eax
// 00850dfe  83ec30               sub esp, 0x30
// 00850e01  53                   push ebx
// 00850e02  55                   push ebp
// 00850e03  56                   push esi
// 00850e04  57                   push edi
// 00850e05  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00850e0a  33c4                 xor eax, esp
// 00850e0c  50                   push eax
// 00850e0d  8d442444             lea eax, [esp + 0x44]
// 00850e11  64a300000000         mov dword ptr fs:[0], eax
// 00850e17  8bf9                 mov edi, ecx
// 00850e19  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00850e1d  8b453c               mov eax, dword ptr [ebp + 0x3c]
// 00850e20  8b742454             mov esi, dword ptr [esp + 0x54]
// 00850e24  85c0                 test eax, eax
// 00850e26  7479                 je 0x850ea1
// 00850e28  8b87e4000000         mov eax, dword ptr [edi + 0xe4]
// 00850e2e  83f8ff               cmp eax, -1
// 00850e31  7506                 jne 0x850e39
// 00850e33  8b87e0000000         mov eax, dword ptr [edi + 0xe0]
// 00850e39  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00850e3d  8b542468             mov edx, dword ptr [esp + 0x68]
// 00850e41  50                   push eax
// 00850e42  8b442468             mov eax, dword ptr [esp + 0x68]
// 00850e46  2bc8                 sub ecx, eax
// 00850e48  83e909               sub ecx, 9
// 00850e4b  51                   push ecx
// 00850e4c  83c006               add eax, 6
// 00850e4f  50                   push eax
// 00850e50  52                   push edx
// 00850e51  56                   push esi
// 00850e52  8bcf                 mov ecx, edi
// 00850e54  e877daffff           call 0x84e8d0
// 00850e59  8b87bc020000         mov eax, dword ptr [edi + 0x2bc]
// 00850e5f  83f803               cmp eax, 3
// 00850e62  740b                 je 0x850e6f
// 00850e64  8d8fd0000000         lea ecx, [edi + 0xd0]
// 00850e6a  83f804               cmp eax, 4
// 00850e6d  7506                 jne 0x850e75
// 00850e6f  8d8fc0010000         lea ecx, [edi + 0x1c0]
// 00850e75  8b4108               mov eax, dword ptr [ecx + 8]
// 00850e78  83f8ff               cmp eax, -1
// 00850e7b  7503                 jne 0x850e80
// 00850e7d  8b4104               mov eax, dword ptr [ecx + 4]
// 00850e80  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00850e84  8b542468             mov edx, dword ptr [esp + 0x68]
// 00850e88  50                   push eax
// 00850e89  8b442468             mov eax, dword ptr [esp + 0x68]
// 00850e8d  2bc8                 sub ecx, eax
// 00850e8f  83e909               sub ecx, 9
// 00850e92  51                   push ecx
// 00850e93  83c005               add eax, 5
// 00850e96  50                   push eax
// 00850e97  4a                   dec edx
// 00850e98  52                   push edx
// 00850e99  56                   push esi
// 00850e9a  8bcf                 mov ecx, edi
// 00850e9c  e82fdaffff           call 0x84e8d0
// 00850ea1  6a01                 push 1
// 00850ea3  8bce                 mov ecx, esi
// 00850ea5  e80abf1200           call 0x97cdb4
// 00850eaa  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 00850eb0  83f8ff               cmp eax, -1
// 00850eb3  7506                 jne 0x850ebb
// 00850eb5  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 00850ebb  50                   push eax
// 00850ebc  8bcd                 mov ecx, ebp
// 00850ebe  e89dabf8ff           call 0x7dba60
// 00850ec3  50                   push eax
// 00850ec4  56                   push esi
// 00850ec5  8d4c2440             lea ecx, [esp + 0x40]
// 00850ec9  e812e8faff           call 0x7ff6e0
// 00850ece  8d442458             lea eax, [esp + 0x58]
// 00850ed2  50                   push eax
// 00850ed3  8bcd                 mov ecx, ebp
// 00850ed5  c744245000000000     mov dword ptr [esp + 0x50], 0
// 00850edd  e8ce35fdff           call 0x8244b0
// 00850ee2  8d4c2414             lea ecx, [esp + 0x14]
// 00850ee6  51                   push ecx
// 00850ee7  8d4c245c             lea ecx, [esp + 0x5c]
// 00850eeb  c644245001           mov byte ptr [esp + 0x50], 1
// 00850ef0  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00850ef6  50                   push eax
// 00850ef7  8d4c2460             lea ecx, [esp + 0x60]
// 00850efb  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00850f01  8b5608               mov edx, dword ptr [esi + 8]
// 00850f04  50                   push eax
// 00850f05  52                   push edx
// 00850f06  ff1594a19e00         call dword ptr [0x9ea194]
// 00850f0c  8b442460             mov eax, dword ptr [esp + 0x60]
// 00850f10  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00850f14  8b542468             mov edx, dword ptr [esp + 0x68]
// 00850f18  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 00850f1c  83c102               add ecx, 2
// 00850f1f  89442424             mov dword ptr [esp + 0x24], eax
// 00850f23  83c003               add eax, 3
// 00850f26  894c2428             mov dword ptr [esp + 0x28], ecx
// 00850f2a  83ea03               sub edx, 3
// 00850f2d  83eb02               sub ebx, 2
// 00850f30  8bcd                 mov ecx, ebp
// 00850f32  89442424             mov dword ptr [esp + 0x24], eax
// 00850f36  8954242c             mov dword ptr [esp + 0x2c], edx
// 00850f3a  895c2430             mov dword ptr [esp + 0x30], ebx
// 00850f3e  e8bdabf8ff           call 0x7dbb00
// 00850f43  85c0                 test eax, eax
// 00850f45  7446                 je 0x850f8d
// 00850f47  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00850f4b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00850f4f  2b442424             sub eax, dword ptr [esp + 0x24]
// 00850f53  83c306               add ebx, 6
// 00850f56  3bc3                 cmp eax, ebx
// 00850f58  7e33                 jle 0x850f8d
// 00850f5a  8bcd                 mov ecx, ebp
// 00850f5c  e89fabf8ff           call 0x7dbb00
// 00850f61  a802                 test al, 2
// 00850f63  740a                 je 0x850f6f
// 00850f65  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00850f69  2bcb                 sub ecx, ebx
// 00850f6b  894c2424             mov dword ptr [esp + 0x24], ecx
// 00850f6f  8bcd                 mov ecx, ebp
// 00850f71  e88aabf8ff           call 0x7dbb00
// 00850f76  a801                 test al, 1
// 00850f78  7413                 je 0x850f8d
// 00850f7a  8b442424             mov eax, dword ptr [esp + 0x24]
// 00850f7e  2bc3                 sub eax, ebx
// 00850f80  0344242c             add eax, dword ptr [esp + 0x2c]
// 00850f84  99                   cdq 
// 00850f85  2bc2                 sub eax, edx
// 00850f87  d1f8                 sar eax, 1
// 00850f89  89442424             mov dword ptr [esp + 0x24], eax
// 00850f8d  83bfa802000000       cmp dword ptr [edi + 0x2a8], 0
// 00850f94  7579                 jne 0x85100f
// 00850f96  8bcd                 mov ecx, ebp
// 00850f98  e863abf8ff           call 0x7dbb00
// 00850f9d  a810                 test al, 0x10
// 00850f9f  746e                 je 0x85100f
// 00850fa1  8b442428             mov eax, dword ptr [esp + 0x28]
// 00850fa5  8b542424             mov edx, dword ptr [esp + 0x24]
// 00850fa9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00850fad  8b3e                 mov edi, dword ptr [esi]
// 00850faf  89442418             mov dword ptr [esp + 0x18], eax
// 00850fb3  89542414             mov dword ptr [esp + 0x14], edx
// 00850fb7  8b542430             mov edx, dword ptr [esp + 0x30]
// 00850fbb  68108c0000           push 0x8c10
// 00850fc0  8d442418             lea eax, [esp + 0x18]
// 00850fc4  894c2420             mov dword ptr [esp + 0x20], ecx
// 00850fc8  50                   push eax
// 00850fc9  8d4c2460             lea ecx, [esp + 0x60]
// 00850fcd  bb10880000           mov ebx, 0x8810
// 00850fd2  89542428             mov dword ptr [esp + 0x28], edx
// 00850fd6  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00850fdc  50                   push eax
// 00850fdd  8d4c2464             lea ecx, [esp + 0x64]
// 00850fe1  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00850fe7  8b5770               mov edx, dword ptr [edi + 0x70]
// 00850fea  50                   push eax
// 00850feb  8bce                 mov ecx, esi
// 00850fed  ffd2                 call edx
// 00850fef  8b442418             mov eax, dword ptr [esp + 0x18]
// 00850ff3  2b442420             sub eax, dword ptr [esp + 0x20]
// 00850ff7  2b442428             sub eax, dword ptr [esp + 0x28]
// 00850ffb  03442430             add eax, dword ptr [esp + 0x30]
// 00850fff  83f801               cmp eax, 1
// 00851002  7e10                 jle 0x851014
// 00851004  99                   cdq 
// 00851005  2bc2                 sub eax, edx
// 00851007  d1f8                 sar eax, 1
// 00851009  01442428             add dword ptr [esp + 0x28], eax
// 0085100d  eb05                 jmp 0x851014
// 0085100f  bb24880000           mov ebx, 0x8824
// 00851014  8d4c2458             lea ecx, [esp + 0x58]
// 00851018  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0085101e  85c0                 test eax, eax
// 00851020  7e2f                 jle 0x851051
// 00851022  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00851026  3b442424             cmp eax, dword ptr [esp + 0x24]
// 0085102a  7e25                 jle 0x851051
// 0085102c  8b3e                 mov edi, dword ptr [esi]
// 0085102e  53                   push ebx
// 0085102f  8d4c2428             lea ecx, [esp + 0x28]
// 00851033  51                   push ecx
// 00851034  8d4c2460             lea ecx, [esp + 0x60]
// 00851038  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0085103e  50                   push eax
// 0085103f  8d4c2464             lea ecx, [esp + 0x64]
// 00851043  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00851049  8b5770               mov edx, dword ptr [edi + 0x70]
// 0085104c  50                   push eax
// 0085104d  8bce                 mov ecx, esi
// 0085104f  ffd2                 call edx
// 00851051  8d4c2458             lea ecx, [esp + 0x58]
// 00851055  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0085105b  8d4c2434             lea ecx, [esp + 0x34]
// 0085105f  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00851067  e8b4e6faff           call 0x7ff720
// 0085106c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00851070  64890d00000000       mov dword ptr fs:[0], ecx
// 00851077  59                   pop ecx
// 00851078  5f                   pop edi
// 00851079  5e                   pop esi
// 0085107a  5d                   pop ebp
// 0085107b  5b                   pop ebx
// 0085107c  83c43c               add esp, 0x3c
// 0085107f  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawColumnFooter@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportColumn@@PAVCXTPReportHeader@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp