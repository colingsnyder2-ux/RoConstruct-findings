// roc 2010-06 007cfe50  unit: CInstanceRecord::CNameItem  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007cfe50
//
// 007cfe50  6aff                 push -1
// 007cfe52  68aa099b00           push 0x9b09aa
// 007cfe57  64a100000000         mov eax, dword ptr fs:[0]
// 007cfe5d  50                   push eax
// 007cfe5e  83ec30               sub esp, 0x30
// 007cfe61  53                   push ebx
// 007cfe62  55                   push ebp
// 007cfe63  56                   push esi
// 007cfe64  57                   push edi
// 007cfe65  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007cfe6a  33c4                 xor eax, esp
// 007cfe6c  50                   push eax
// 007cfe6d  8d442444             lea eax, [esp + 0x44]
// 007cfe71  64a300000000         mov dword ptr fs:[0], eax
// 007cfe77  8bf1                 mov esi, ecx
// 007cfe79  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 007cfe7d  85ed                 test ebp, ebp
// 007cfe7f  0f84bd010000         je 0x7d0042
// 007cfe85  8b5d04               mov ebx, dword ptr [ebp + 4]
// 007cfe88  8bbb24020000         mov edi, dword ptr [ebx + 0x224]
// 007cfe8e  8b4508               mov eax, dword ptr [ebp + 8]
// 007cfe91  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 007cfe94  8b5510               mov edx, dword ptr [ebp + 0x10]
// 007cfe97  89442428             mov dword ptr [esp + 0x28], eax
// 007cfe9b  8b4514               mov eax, dword ptr [ebp + 0x14]
// 007cfe9e  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007cfea2  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 007cfea5  89542430             mov dword ptr [esp + 0x30], edx
// 007cfea9  8b551c               mov edx, dword ptr [ebp + 0x1c]
// 007cfeac  89442434             mov dword ptr [esp + 0x34], eax
// 007cfeb0  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007cfeb3  895c2414             mov dword ptr [esp + 0x14], ebx
// 007cfeb7  c7442420dc8aa500     mov dword ptr [esp + 0x20], 0xa58adc
// 007cfebf  895c2424             mov dword ptr [esp + 0x24], ebx
// 007cfec3  894c2438             mov dword ptr [esp + 0x38], ecx
// 007cfec7  8954243c             mov dword ptr [esp + 0x3c], edx
// 007cfecb  89442440             mov dword ptr [esp + 0x40], eax
// 007cfecf  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 007cfed7  85ff                 test edi, edi
// 007cfed9  0f8463010000         je 0x7d0042
// 007cfedf  837f2000             cmp dword ptr [edi + 0x20], 0
// 007cfee3  0f8459010000         je 0x7d0042
// 007cfee9  397764               cmp dword ptr [edi + 0x64], esi
// 007cfeec  0f8550010000         jne 0x7d0042
// 007cfef2  8d4c2420             lea ecx, [esp + 0x20]
// 007cfef6  e8d5e8ffff           call 0x7ce7d0
// 007cfefb  8b4f64               mov ecx, dword ptr [edi + 0x64]
// 007cfefe  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 007cff06  85c9                 test ecx, ecx
// 007cff08  740c                 je 0x7cff16
// 007cff0a  e80d80fdff           call 0x7a7f1c
// 007cff0f  c7476400000000       mov dword ptr [edi + 0x64], 0
// 007cff16  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007cff1a  51                   push ecx
// 007cff1b  8bce                 mov ecx, esi
// 007cff1d  e83ef6ffff           call 0x7cf560
// 007cff22  83782400             cmp dword ptr [eax + 0x24], 0
// 007cff26  7425                 je 0x7cff4d
// 007cff28  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 007cff2e  85c0                 test eax, eax
// 007cff30  0f84cf000000         je 0x7d0005
// 007cff36  8b16                 mov edx, dword ptr [esi]
// 007cff38  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 007cff3e  50                   push eax
// 007cff3f  8d442424             lea eax, [esp + 0x24]
// 007cff43  50                   push eax
// 007cff44  8bce                 mov ecx, esi
// 007cff46  ffd2                 call edx
// 007cff48  e99e000000           jmp 0x7cffeb
// 007cff4d  8d4c2454             lea ecx, [esp + 0x54]
// 007cff51  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 007cff57  8d442454             lea eax, [esp + 0x54]
// 007cff5b  50                   push eax
// 007cff5c  8bcf                 mov ecx, edi
// 007cff5e  c644245001           mov byte ptr [esp + 0x50], 1
// 007cff63  e82080fdff           call 0x7a7f88
// 007cff68  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007cff6c  8b16                 mov edx, dword ptr [esi]
// 007cff6e  8b526c               mov edx, dword ptr [edx + 0x6c]
// 007cff71  50                   push eax
// 007cff72  8d4c241c             lea ecx, [esp + 0x1c]
// 007cff76  51                   push ecx
// 007cff77  8bce                 mov ecx, esi
// 007cff79  ffd2                 call edx
// 007cff7b  8bd8                 mov ebx, eax
// 007cff7d  8d4c2454             lea ecx, [esp + 0x54]
// 007cff81  c644244c02           mov byte ptr [esp + 0x4c], 2
// 007cff86  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007cff8c  50                   push eax
// 007cff8d  8bcb                 mov ecx, ebx
// 007cff8f  ff15b4ce9e00         call dword ptr [0x9eceb4]
// 007cff95  85c0                 test eax, eax
// 007cff97  8d4c2418             lea ecx, [esp + 0x18]
// 007cff9b  0f95c3               setne bl
// 007cff9e  c644244c01           mov byte ptr [esp + 0x4c], 1
// 007cffa3  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007cffa9  84db                 test bl, bl
// 007cffab  7423                 je 0x7cffd0
// 007cffad  8b1e                 mov ebx, dword ptr [esi]
// 007cffaf  8d4c2454             lea ecx, [esp + 0x54]
// 007cffb3  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007cffb9  8b9328010000         mov edx, dword ptr [ebx + 0x128]
// 007cffbf  50                   push eax
// 007cffc0  8d442424             lea eax, [esp + 0x24]
// 007cffc4  50                   push eax
// 007cffc5  8bce                 mov ecx, esi
// 007cffc7  ffd2                 call edx
// 007cffc9  bb01000000           mov ebx, 1
// 007cffce  eb04                 jmp 0x7cffd4
// 007cffd0  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007cffd4  8d4c2454             lea ecx, [esp + 0x54]
// 007cffd8  c644244c00           mov byte ptr [esp + 0x4c], 0
// 007cffdd  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007cffe3  85db                 test ebx, ebx
// 007cffe5  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007cffe9  741a                 je 0x7d0005
// 007cffeb  8bcb                 mov ecx, ebx
// 007cffed  e8ee340000           call 0x7d34e0
// 007cfff2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007cfff6  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007cfffa  6aff                 push -1
// 007cfffc  6a00                 push 0
// 007cfffe  6ac7                 push -0x39
// 007d0000  50                   push eax
// 007d0001  56                   push esi
// 007d0002  51                   push ecx
// 007d0003  eb1e                 jmp 0x7d0023
// 007d0005  8b16                 mov edx, dword ptr [esi]
// 007d0007  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 007d000d  55                   push ebp
// 007d000e  8bce                 mov ecx, esi
// 007d0010  ffd0                 call eax
// 007d0012  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007d0016  8b542428             mov edx, dword ptr [esp + 0x28]
// 007d001a  6aff                 push -1
// 007d001c  6a00                 push 0
// 007d001e  6ab8                 push -0x48
// 007d0020  51                   push ecx
// 007d0021  56                   push esi
// 007d0022  52                   push edx
// 007d0023  8bcb                 mov ecx, ebx
// 007d0025  e836730000           call 0x7d7360
// 007d002a  8b4754               mov eax, dword ptr [edi + 0x54]
// 007d002d  8b5004               mov edx, dword ptr [eax + 4]
// 007d0030  83c754               add edi, 0x54
// 007d0033  6a00                 push 0
// 007d0035  8bcf                 mov ecx, edi
// 007d0037  ffd2                 call edx
// 007d0039  8d4c2420             lea ecx, [esp + 0x20]
// 007d003d  e82ee1ffff           call 0x7ce170
// 007d0042  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007d0046  64890d00000000       mov dword ptr fs:[0], ecx
// 007d004d  59                   pop ecx
// 007d004e  5f                   pop edi
// 007d004f  5e                   pop esi
// 007d0050  5d                   pop ebp
// 007d0051  5b                   pop ebx
// 007d0052  83c43c               add esp, 0x3c
// 007d0055  c20400               ret 4
// copied from an identical function in another client (function ?OnValidateEdit@CXTPReportRecordItem@@UAEXPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRecordItem.cpp