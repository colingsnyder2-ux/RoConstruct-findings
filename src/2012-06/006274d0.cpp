// from server: 100% by auto
// roc 2012-06 006274d0  unit: seg_00620000  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006274d0
//
// 006274d0  6aff                 push -1
// 006274d2  682573aa00           push 0xaa7325
// 006274d7  64a100000000         mov eax, dword ptr fs:[0]
// 006274dd  50                   push eax
// 006274de  64892500000000       mov dword ptr fs:[0], esp
// 006274e5  83ec24               sub esp, 0x24
// 006274e8  53                   push ebx
// 006274e9  33db                 xor ebx, ebx
// 006274eb  895c2404             mov dword ptr [esp + 4], ebx
// 006274ef  a13884e200           mov eax, dword ptr [0xe28438]
// 006274f4  85c0                 test eax, eax
// 006274f6  756a                 jne 0x627562
// 006274f8  56                   push esi
// 006274f9  6a28                 push 0x28
// 006274fb  e81aac3500           call 0x98211a
// 00627500  8bf0                 mov esi, eax
// 00627502  83c404               add esp, 4
// 00627505  8974240c             mov dword ptr [esp + 0xc], esi
// 00627509  895c2434             mov dword ptr [esp + 0x34], ebx
// 0062750d  85f6                 test esi, esi
// 0062750f  742d                 je 0x62753e
// 00627511  685833b800           push 0xb83358
// 00627516  8d4c2414             lea ecx, [esp + 0x14]
// 0062751a  ff154826b200         call dword ptr [0xb22648]
// 00627520  6a00                 push 0
// 00627522  8d442414             lea eax, [esp + 0x14]
// 00627526  bb01000000           mov ebx, 1
// 0062752b  50                   push eax
// 0062752c  8bce                 mov ecx, esi
// 0062752e  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00627533  895c2410             mov dword ptr [esp + 0x10], ebx
// 00627537  e8a4feffff           call 0x6273e0
// 0062753c  eb02                 jmp 0x627540
// 0062753e  33c0                 xor eax, eax
// 00627540  a33884e200           mov dword ptr [0xe28438], eax
// 00627545  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0062754d  5e                   pop esi
// 0062754e  f6c301               test bl, 1
// 00627551  740f                 je 0x627562
// 00627553  8d4c240c             lea ecx, [esp + 0xc]
// 00627557  ff153c26b200         call dword ptr [0xb2263c]
// 0062755d  a13884e200           mov eax, dword ptr [0xe28438]
// 00627562  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00627566  5b                   pop ebx
// 00627567  64890d00000000       mov dword ptr fs:[0], ecx
// 0062756e  83c430               add esp, 0x30
// 00627571  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?common@Log@G3D@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
