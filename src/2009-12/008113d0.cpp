// roc 2009-12 008113d0  unit: CXTPToolBar::CControlButtonExpand  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008113d0
//
// 008113d0  6aff                 push -1
// 008113d2  6863a19500           push 0x95a163
// 008113d7  64a100000000         mov eax, dword ptr fs:[0]
// 008113dd  50                   push eax
// 008113de  83ec08               sub esp, 8
// 008113e1  53                   push ebx
// 008113e2  56                   push esi
// 008113e3  a10052b600           mov eax, dword ptr [0xb65200]
// 008113e8  33c4                 xor eax, esp
// 008113ea  50                   push eax
// 008113eb  8d442414             lea eax, [esp + 0x14]
// 008113ef  64a300000000         mov dword ptr fs:[0], eax
// 008113f5  8bf1                 mov esi, ecx
// 008113f7  8974240c             mov dword ptr [esp + 0xc], esi
// 008113fb  e87036ffff           call 0x804a70
// 00811400  33db                 xor ebx, ebx
// 00811402  b801000000           mov eax, 1
// 00811407  6a50                 push 0x50
// 00811409  895c2420             mov dword ptr [esp + 0x20], ebx
// 0081140d  c7067c389f00         mov dword ptr [esi], 0x9f387c
// 00811413  c746546c389f00       mov dword ptr [esi + 0x54], 0x9f386c
// 0081141a  c7465c0c389f00       mov dword ptr [esi + 0x5c], 0x9f380c
// 00811421  899e80010000         mov dword ptr [esi + 0x180], ebx
// 00811427  899e84010000         mov dword ptr [esi + 0x184], ebx
// 0081142d  898688010000         mov dword ptr [esi + 0x188], eax
// 00811433  899e8c010000         mov dword ptr [esi + 0x18c], ebx
// 00811439  898634010000         mov dword ptr [esi + 0x134], eax
// 0081143f  899e98010000         mov dword ptr [esi + 0x198], ebx
// 00811445  89869c010000         mov dword ptr [esi + 0x19c], eax
// 0081144b  899e90010000         mov dword ptr [esi + 0x190], ebx
// 00811451  899e94010000         mov dword ptr [esi + 0x194], ebx
// 00811457  8986a0010000         mov dword ptr [esi + 0x1a0], eax
// 0081145d  899ea4010000         mov dword ptr [esi + 0x1a4], ebx
// 00811463  e8f823feff           call 0x7f3860
// 00811468  83c404               add esp, 4
// 0081146b  89442410             mov dword ptr [esp + 0x10], eax
// 0081146f  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00811474  3bc3                 cmp eax, ebx
// 00811476  740a                 je 0x811482
// 00811478  56                   push esi
// 00811479  8bc8                 mov ecx, eax
// 0081147b  e840ef0700           call 0x8903c0
// 00811480  eb02                 jmp 0x811484
// 00811482  33c0                 xor eax, eax
// 00811484  53                   push ebx
// 00811485  6a08                 push 8
// 00811487  68fc379f00           push 0x9f37fc
// 0081148c  53                   push ebx
// 0081148d  885c242c             mov byte ptr [esp + 0x2c], bl
// 00811491  898684010000         mov dword ptr [esi + 0x184], eax
// 00811497  c786ec0000003f000000 mov dword ptr [esi + 0xec], 0x3f
// 008114a1  e86aad0300           call 0x84c210
// 008114a6  83c410               add esp, 0x10
// 008114a9  8bc6                 mov eax, esi
// 008114ab  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008114af  64890d00000000       mov dword ptr fs:[0], ecx
// 008114b6  59                   pop ecx
// 008114b7  5e                   pop esi
// 008114b8  5b                   pop ebx
// 008114b9  83c414               add esp, 0x14
// 008114bc  c3                   ret 
// copied from an identical function in another client (function ??0CXTPToolBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp