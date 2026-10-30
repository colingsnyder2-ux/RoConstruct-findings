// roc 2009-12 008edb40  unit: CXTPRibbonGroup  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008edb40
//
// 008edb40  53                   push ebx
// 008edb41  55                   push ebp
// 008edb42  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008edb46  57                   push edi
// 008edb47  8bd9                 mov ebx, ecx
// 008edb49  85ed                 test ebp, ebp
// 008edb4b  0f8c93000000         jl 0x8edbe4
// 008edb51  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008edb55  85ff                 test edi, edi
// 008edb57  0f8e87000000         jle 0x8edbe4
// 008edb5d  3b6b08               cmp ebp, dword ptr [ebx + 8]
// 008edb60  7c0d                 jl 0x8edb6f
// 008edb62  6aff                 push -1
// 008edb64  8d042f               lea eax, [edi + ebp]
// 008edb67  50                   push eax
// 008edb68  e83378f6ff           call 0x8553a0
// 008edb6d  eb53                 jmp 0x8edbc2
// 008edb6f  56                   push esi
// 008edb70  8b7308               mov esi, dword ptr [ebx + 8]
// 008edb73  6aff                 push -1
// 008edb75  8d0c3e               lea ecx, [esi + edi]
// 008edb78  51                   push ecx
// 008edb79  8bcb                 mov ecx, ebx
// 008edb7b  e82078f6ff           call 0x8553a0
// 008edb80  8b4304               mov eax, dword ptr [ebx + 4]
// 008edb83  2bf5                 sub esi, ebp
// 008edb85  03f6                 add esi, esi
// 008edb87  03f6                 add esi, esi
// 008edb89  8d0ca8               lea ecx, [eax + ebp*4]
// 008edb8c  56                   push esi
// 008edb8d  51                   push ecx
// 008edb8e  8d142f               lea edx, [edi + ebp]
// 008edb91  8d0490               lea eax, [eax + edx*4]
// 008edb94  56                   push esi
// 008edb95  50                   push eax
// 008edb96  ff15c0b79800         call dword ptr [0x98b7c0]
// 008edb9c  50                   push eax
// 008edb9d  e84e4eb1ff           call 0x4029f0
// 008edba2  8b4b04               mov ecx, dword ptr [ebx + 4]
// 008edba5  8d04bd00000000       lea eax, [edi*4]
// 008edbac  50                   push eax
// 008edbad  8d04ad00000000       lea eax, [ebp*4]
// 008edbb4  03c8                 add ecx, eax
// 008edbb6  6a00                 push 0
// 008edbb8  51                   push ecx
// 008edbb9  e8e66ef0ff           call 0x7f4aa4
// 008edbbe  83c420               add esp, 0x20
// 008edbc1  5e                   pop esi
// 008edbc2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008edbc6  03ed                 add ebp, ebp
// 008edbc8  03ed                 add ebp, ebp
// 008edbca  8d9b00000000         lea ebx, [ebx]
// 008edbd0  8b5304               mov edx, dword ptr [ebx + 4]
// 008edbd3  4f                   dec edi
// 008edbd4  89042a               mov dword ptr [edx + ebp], eax
// 008edbd7  83c504               add ebp, 4
// 008edbda  85ff                 test edi, edi
// 008edbdc  75f2                 jne 0x8edbd0
// 008edbde  5f                   pop edi
// 008edbdf  5d                   pop ebp
// 008edbe0  5b                   pop ebx
// 008edbe1  c20c00               ret 0xc
// 008edbe4  e8235ff0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?InsertAt@?$CArray@PAVCXTPControlGalleryItem@@PAV1@@@QAEXHPAVCXTPControlGalleryItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlGallery.cpp