// roc 2009-12 008ebea0  unit: CXTPDialogBar::CControlCaptionPopup  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ebea0
//
// 008ebea0  6aff                 push -1
// 008ebea2  6891669600           push 0x966691
// 008ebea7  64a100000000         mov eax, dword ptr fs:[0]
// 008ebead  50                   push eax
// 008ebeae  83ec38               sub esp, 0x38
// 008ebeb1  53                   push ebx
// 008ebeb2  55                   push ebp
// 008ebeb3  56                   push esi
// 008ebeb4  57                   push edi
// 008ebeb5  a10052b600           mov eax, dword ptr [0xb65200]
// 008ebeba  33c4                 xor eax, esp
// 008ebebc  50                   push eax
// 008ebebd  8d44244c             lea eax, [esp + 0x4c]
// 008ebec1  64a300000000         mov dword ptr fs:[0], eax
// 008ebec7  8bf1                 mov esi, ecx
// 008ebec9  e872a0f0ff           call 0x7f5f40
// 008ebece  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 008ebed2  89442414             mov dword ptr [esp + 0x14], eax
// 008ebed6  0598000000           add eax, 0x98
// 008ebedb  50                   push eax
// 008ebedc  57                   push edi
// 008ebedd  8d4c2444             lea ecx, [esp + 0x44]
// 008ebee1  e87af7f5ff           call 0x84b660
// 008ebee6  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 008ebeed  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 008ebef3  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 008ebef9  8baec0000000         mov ebp, dword ptr [esi + 0xc0]
// 008ebeff  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 008ebf05  c744245400000000     mov dword ptr [esp + 0x54], 0
// 008ebf0d  89442434             mov dword ptr [esp + 0x34], eax
// 008ebf11  894c2438             mov dword ptr [esp + 0x38], ecx
// 008ebf15  7424                 je 0x8ebf3b
// 008ebf17  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ebf1b  8b11                 mov edx, dword ptr [ecx]
// 008ebf1d  8b4278               mov eax, dword ptr [edx + 0x78]
// 008ebf20  56                   push esi
// 008ebf21  57                   push edi
// 008ebf22  ffd0                 call eax
// 008ebf24  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 008ebf2b  740e                 je 0x8ebf3b
// 008ebf2d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ebf31  8b11                 mov edx, dword ptr [ecx]
// 008ebf33  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008ebf36  56                   push esi
// 008ebf37  ffd0                 call eax
// 008ebf39  eb0e                 jmp 0x8ebf49
// 008ebf3b  e8903af4ff           call 0x82f9d0
// 008ebf40  6a12                 push 0x12
// 008ebf42  8bc8                 mov ecx, eax
// 008ebf44  e8b731f4ff           call 0x82f100
// 008ebf49  8b17                 mov edx, dword ptr [edi]
// 008ebf4b  50                   push eax
// 008ebf4c  8b4238               mov eax, dword ptr [edx + 0x38]
// 008ebf4f  8bcf                 mov ecx, edi
// 008ebf51  ffd0                 call eax
// 008ebf53  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 008ebf59  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ebf5d  8b542438             mov edx, dword ptr [esp + 0x38]
// 008ebf61  f7d8                 neg eax
// 008ebf63  1bc0                 sbb eax, eax
// 008ebf65  83e00d               and eax, 0xd
// 008ebf68  83c002               add eax, 2
// 008ebf6b  2bc8                 sub ecx, eax
// 008ebf6d  8b06                 mov eax, dword ptr [esi]
// 008ebf6f  894c2424             mov dword ptr [esp + 0x24], ecx
// 008ebf73  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008ebf77  8d4c2418             lea ecx, [esp + 0x18]
// 008ebf7b  89542428             mov dword ptr [esp + 0x28], edx
// 008ebf7f  8b5058               mov edx, dword ptr [eax + 0x58]
// 008ebf82  51                   push ecx
// 008ebf83  83c502               add ebp, 2
// 008ebf86  8bce                 mov ecx, esi
// 008ebf88  895c2424             mov dword ptr [esp + 0x24], ebx
// 008ebf8c  896c2420             mov dword ptr [esp + 0x20], ebp
// 008ebf90  ffd2                 call edx
// 008ebf92  8be8                 mov ebp, eax
// 008ebf94  8b07                 mov eax, dword ptr [edi]
// 008ebf96  6a24                 push 0x24
// 008ebf98  8d4c2420             lea ecx, [esp + 0x20]
// 008ebf9c  51                   push ecx
// 008ebf9d  8bcd                 mov ecx, ebp
// 008ebf9f  c644245c01           mov byte ptr [esp + 0x5c], 1
// 008ebfa4  89442464             mov dword ptr [esp + 0x64], eax
// 008ebfa8  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008ebfae  50                   push eax
// 008ebfaf  8bcd                 mov ecx, ebp
// 008ebfb1  ff1580de9800         call dword ptr [0x98de80]
// 008ebfb7  8b542468             mov edx, dword ptr [esp + 0x68]
// 008ebfbb  50                   push eax
// 008ebfbc  8b4270               mov eax, dword ptr [edx + 0x70]
// 008ebfbf  8bcf                 mov ecx, edi
// 008ebfc1  ffd0                 call eax
// 008ebfc3  8d4c2418             lea ecx, [esp + 0x18]
// 008ebfc7  c644245400           mov byte ptr [esp + 0x54], 0
// 008ebfcc  ff15c0de9800         call dword ptr [0x98dec0]
// 008ebfd2  8b4f08               mov ecx, dword ptr [edi + 8]
// 008ebfd5  51                   push ecx
// 008ebfd6  ff1524b19800         call dword ptr [0x98b124]
// 008ebfdc  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 008ebfe3  8be8                 mov ebp, eax
// 008ebfe5  7430                 je 0x8ec017
// 008ebfe7  8b442438             mov eax, dword ptr [esp + 0x38]
// 008ebfeb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ebfef  2bc3                 sub eax, ebx
// 008ebff1  99                   cdq 
// 008ebff2  2bc2                 sub eax, edx
// 008ebff4  d1f8                 sar eax, 1
// 008ebff6  55                   push ebp
// 008ebff7  03c3                 add eax, ebx
// 008ebff9  8d5002               lea edx, [eax + 2]
// 008ebffc  52                   push edx
// 008ebffd  83c1f7               add ecx, -9
// 008ec000  51                   push ecx
// 008ec001  83c0fe               add eax, -2
// 008ec004  50                   push eax
// 008ec005  8d7104               lea esi, [ecx + 4]
// 008ec008  56                   push esi
// 008ec009  50                   push eax
// 008ec00a  8d59fc               lea ebx, [ecx - 4]
// 008ec00d  53                   push ebx
// 008ec00e  57                   push edi
// 008ec00f  e87c26f1ff           call 0x7fe690
// 008ec014  83c420               add esp, 0x20
// 008ec017  8d4c243c             lea ecx, [esp + 0x3c]
// 008ec01b  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 008ec023  e8b8f6f5ff           call 0x84b6e0
// 008ec028  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008ec02c  64890d00000000       mov dword ptr fs:[0], ecx
// 008ec033  59                   pop ecx
// 008ec034  5f                   pop edi
// 008ec035  5e                   pop esi
// 008ec036  5d                   pop ebp
// 008ec037  5b                   pop ebx
// 008ec038  83c444               add esp, 0x44
// 008ec03b  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlCaptionPopup@CXTPDialogBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPDialogBar.cpp