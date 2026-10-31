// from server: 100% by colin
// roc 2008-06 004502b0  unit: CRobloxDoc  size: 187 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004502b0
//
// 004502b0  55                   push ebp
// 004502b1  8bec                 mov ebp, esp
// 004502b3  6aff                 push -1
// 004502b5  688b187c00           push 0x7c188b
// 004502ba  64a100000000         mov eax, dword ptr fs:[0]
// 004502c0  50                   push eax
// 004502c1  64892500000000       mov dword ptr fs:[0], esp
// 004502c8  83ec14               sub esp, 0x14
// 004502cb  53                   push ebx
// 004502cc  56                   push esi
// 004502cd  57                   push edi
// 004502ce  8d45e4               lea eax, [ebp - 0x1c]
// 004502d1  8965f0               mov dword ptr [ebp - 0x10], esp
// 004502d4  50                   push eax
// 004502d5  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004502dc  e8ef5dfbff           call 0x4060d0
// 004502e1  83c404               add esp, 4
// 004502e4  50                   push eax
// 004502e5  8d4de8               lea ecx, [ebp - 0x18]
// 004502e8  68f8798100           push 0x8179f8
// 004502ed  51                   push ecx
// 004502ee  c645fc01             mov byte ptr [ebp - 4], 1
// 004502f2  e829efffff           call 0x44f220
// 004502f7  83c40c               add esp, 0xc
// 004502fa  683c7a8100           push 0x817a3c
// 004502ff  50                   push eax
// 00450300  8d55ec               lea edx, [ebp - 0x14]
// 00450303  52                   push edx
// 00450304  c645fc02             mov byte ptr [ebp - 4], 2
// 00450308  e853defbff           call 0x40e160
// 0045030d  83c40c               add esp, 0xc
// 00450310  8bc8                 mov ecx, eax
// 00450312  c645fc03             mov byte ptr [ebp - 4], 3
// 00450316  ff15e03e8000         call dword ptr [0x803ee0]
// 0045031c  8bf8                 mov edi, eax
// 0045031e  33c9                 xor ecx, ecx
// 00450320  e81bfcffff           call 0x44ff40
// 00450325  8d4dec               lea ecx, [ebp - 0x14]
// 00450328  ff15143f8000         call dword ptr [0x803f14]
// 0045032e  8d4de8               lea ecx, [ebp - 0x18]
// 00450331  ff15143f8000         call dword ptr [0x803f14]
// 00450337  8d4de4               lea ecx, [ebp - 0x1c]
// 0045033a  ff15143f8000         call dword ptr [0x803f14]
// 00450340  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00450343  5f                   pop edi
// 00450344  5e                   pop esi
// 00450345  64890d00000000       mov dword ptr fs:[0], ecx
// 0045034c  5b                   pop ebx
// 0045034d  8be5                 mov esp, ebp
// 0045034f  5d                   pop ebp
// 00450350  c3                   ret 
// 00450351  8b4de0               mov ecx, dword ptr [ebp - 0x20]
// 00450354  8b01                 mov eax, dword ptr [ecx]
// 00450356  8b5004               mov edx, dword ptr [eax + 4]
// 00450359  6a00                 push 0
// 0045035b  6a00                 push 0
// 0045035d  ffd2                 call edx
// 0045035f  50                   push eax
// 00450360  e8eb082500           call 0x6a0c50
// 00450365  b840034500           mov eax, 0x450340
// 0045036a  c3                   ret 

// from server: 89% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob0 /GS- /EHsc /MD
// roc-lib: mfc-9.0-shared-rtm roc_espeon_nativedocumentfamilyad94f610efff160c.cpp
