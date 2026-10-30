// roc 2010-06 0087ccf0  unit: CXTPPropertyGridInplaceEdit  size: 528 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087ccf0
//
// 0087ccf0  6aff                 push -1
// 0087ccf2  68fba79b00           push 0x9ba7fb
// 0087ccf7  64a100000000         mov eax, dword ptr fs:[0]
// 0087ccfd  50                   push eax
// 0087ccfe  83ec08               sub esp, 8
// 0087cd01  53                   push ebx
// 0087cd02  55                   push ebp
// 0087cd03  56                   push esi
// 0087cd04  57                   push edi
// 0087cd05  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0087cd0a  33c4                 xor eax, esp
// 0087cd0c  50                   push eax
// 0087cd0d  8d44241c             lea eax, [esp + 0x1c]
// 0087cd11  64a300000000         mov dword ptr fs:[0], eax
// 0087cd17  8be9                 mov ebp, ecx
// 0087cd19  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 0087cd1d  83fb09               cmp ebx, 9
// 0087cd20  0f84c4010000         je 0x87ceea
// 0087cd26  83fb0d               cmp ebx, 0xd
// 0087cd29  7527                 jne 0x87cd52
// 0087cd2b  e8ae001000           call 0x97cdde
// 0087cd30  a900100000           test eax, 0x1000
// 0087cd35  0f84a4010000         je 0x87cedf
// 0087cd3b  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087cd3f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0087cd43  50                   push eax
// 0087cd44  51                   push ecx
// 0087cd45  53                   push ebx
// 0087cd46  8bcd                 mov ecx, ebp
// 0087cd48  e8e3fcffff           call 0x87ca30
// 0087cd4d  e998010000           jmp 0x87ceea
// 0087cd52  83fb1b               cmp ebx, 0x1b
// 0087cd55  0f8484010000         je 0x87cedf
// 0087cd5b  8b8da0000000         mov ecx, dword ptr [ebp + 0xa0]
// 0087cd61  85c9                 test ecx, ecx
// 0087cd63  0f8449010000         je 0x87ceb2
// 0087cd69  8b11                 mov edx, dword ptr [ecx]
// 0087cd6b  8b4258               mov eax, dword ptr [edx + 0x58]
// 0087cd6e  ffd0                 call eax
// 0087cd70  85c0                 test eax, eax
// 0087cd72  0f853a010000         jne 0x87ceb2
// 0087cd78  8b85a0000000         mov eax, dword ptr [ebp + 0xa0]
// 0087cd7e  83787c00             cmp dword ptr [eax + 0x7c], 0
// 0087cd82  0f842a010000         je 0x87ceb2
// 0087cd88  8bb8c4000000         mov edi, dword ptr [eax + 0xc4]
// 0087cd8e  837f2800             cmp dword ptr [edi + 0x28], 0
// 0087cd92  0f841a010000         je 0x87ceb2
// 0087cd98  8d4c2430             lea ecx, [esp + 0x30]
// 0087cd9c  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 0087cda2  8d4c2430             lea ecx, [esp + 0x30]
// 0087cda6  51                   push ecx
// 0087cda7  8bcd                 mov ecx, ebp
// 0087cda9  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0087cdb1  e8d2b1f2ff           call 0x7a7f88
// 0087cdb6  8d4c2430             lea ecx, [esp + 0x30]
// 0087cdba  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087cdc0  50                   push eax
// 0087cdc1  8bcf                 mov ecx, edi
// 0087cdc3  e8d8cff9ff           call 0x819da0
// 0087cdc8  8bf0                 mov esi, eax
// 0087cdca  83feff               cmp esi, -1
// 0087cdcd  750a                 jne 0x87cdd9
// 0087cdcf  8b4728               mov eax, dword ptr [edi + 0x28]
// 0087cdd2  48                   dec eax
// 0087cdd3  89442414             mov dword ptr [esp + 0x14], eax
// 0087cdd7  eb04                 jmp 0x87cddd
// 0087cdd9  89742414             mov dword ptr [esp + 0x14], esi
// 0087cddd  6a01                 push 1
// 0087cddf  53                   push ebx
// 0087cde0  8d4c2434             lea ecx, [esp + 0x34]
// 0087cde4  ff15f0ca9e00         call dword ptr [0x9ecaf0]
// 0087cdea  c644242401           mov byte ptr [esp + 0x24], 1
// 0087cdef  90                   nop 
// 0087cdf0  8b4728               mov eax, dword ptr [edi + 0x28]
// 0087cdf3  48                   dec eax
// 0087cdf4  3bf0                 cmp esi, eax
// 0087cdf6  7d03                 jge 0x87cdfb
// 0087cdf8  46                   inc esi
// 0087cdf9  eb02                 jmp 0x87cdfd
// 0087cdfb  33f6                 xor esi, esi
// 0087cdfd  56                   push esi
// 0087cdfe  8d542438             lea edx, [esp + 0x38]
// 0087ce02  52                   push edx
// 0087ce03  8bcf                 mov ecx, edi
// 0087ce05  e8f6cef9ff           call 0x819d00
// 0087ce0a  6a01                 push 1
// 0087ce0c  8d44241c             lea eax, [esp + 0x1c]
// 0087ce10  50                   push eax
// 0087ce11  8d4c243c             lea ecx, [esp + 0x3c]
// 0087ce15  c644242c02           mov byte ptr [esp + 0x2c], 2
// 0087ce1a  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 0087ce20  8bc8                 mov ecx, eax
// 0087ce22  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087ce28  50                   push eax
// 0087ce29  8d4c2430             lea ecx, [esp + 0x30]
// 0087ce2d  ff1528c09e00         call dword ptr [0x9ec028]
// 0087ce33  85c0                 test eax, eax
// 0087ce35  8d4c2418             lea ecx, [esp + 0x18]
// 0087ce39  0f94c3               sete bl
// 0087ce3c  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087ce42  8d4c2434             lea ecx, [esp + 0x34]
// 0087ce46  84db                 test bl, bl
// 0087ce48  7513                 jne 0x87ce5d
// 0087ce4a  c644242401           mov byte ptr [esp + 0x24], 1
// 0087ce4f  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087ce55  3b742414             cmp esi, dword ptr [esp + 0x14]
// 0087ce59  7595                 jne 0x87cdf0
// 0087ce5b  eb3f                 jmp 0x87ce9c
// 0087ce5d  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0087ce63  50                   push eax
// 0087ce64  8bcd                 mov ecx, ebp
// 0087ce66  e8e9aef2ff           call 0x7a7d54
// 0087ce6b  6aff                 push -1
// 0087ce6d  6a00                 push 0
// 0087ce6f  897734               mov dword ptr [edi + 0x34], esi
// 0087ce72  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0087ce75  8b3554ba9e00         mov esi, dword ptr [0x9eba54]
// 0087ce7b  68b1000000           push 0xb1
// 0087ce80  51                   push ecx
// 0087ce81  ffd6                 call esi
// 0087ce83  8b5520               mov edx, dword ptr [ebp + 0x20]
// 0087ce86  6a00                 push 0
// 0087ce88  6a00                 push 0
// 0087ce8a  68b7000000           push 0xb7
// 0087ce8f  52                   push edx
// 0087ce90  ffd6                 call esi
// 0087ce92  8d4c2434             lea ecx, [esp + 0x34]
// 0087ce96  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087ce9c  8d4c242c             lea ecx, [esp + 0x2c]
// 0087cea0  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087cea6  8d4c2430             lea ecx, [esp + 0x30]
// 0087ceaa  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0087ceb0  eb38                 jmp 0x87ceea
// 0087ceb2  83fb2e               cmp ebx, 0x2e
// 0087ceb5  740c                 je 0x87cec3
// 0087ceb7  83fb08               cmp ebx, 8
// 0087ceba  7407                 je 0x87cec3
// 0087cebc  b801000000           mov eax, 1
// 0087cec1  eb02                 jmp 0x87cec5
// 0087cec3  33c0                 xor eax, eax
// 0087cec5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0087cec9  8985b4000000         mov dword ptr [ebp + 0xb4], eax
// 0087cecf  8b442434             mov eax, dword ptr [esp + 0x34]
// 0087ced3  50                   push eax
// 0087ced4  51                   push ecx
// 0087ced5  53                   push ebx
// 0087ced6  8bcd                 mov ecx, ebp
// 0087ced8  e853fbffff           call 0x87ca30
// 0087cedd  eb0b                 jmp 0x87ceea
// 0087cedf  8b8d9c000000         mov ecx, dword ptr [ebp + 0x9c]
// 0087cee5  e858aef2ff           call 0x7a7d42
// 0087ceea  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0087ceee  64890d00000000       mov dword ptr fs:[0], ecx
// 0087cef5  59                   pop ecx
// 0087cef6  5f                   pop edi
// 0087cef7  5e                   pop esi
// 0087cef8  5d                   pop ebp
// 0087cef9  5b                   pop ebx
// 0087cefa  83c414               add esp, 0x14
// 0087cefd  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnChar@CXTPPropertyGridInplaceEdit@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridInplaceEdit.cpp