// roc 2009-06 0079d520  unit: CXTPControlGallery  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079d520
//
// 0079d520  83ec10               sub esp, 0x10
// 0079d523  56                   push esi
// 0079d524  8d442404             lea eax, [esp + 4]
// 0079d528  50                   push eax
// 0079d529  8bf1                 mov esi, ecx
// 0079d52b  e890ffffff           call 0x79d4c0
// 0079d530  8b8e24020000         mov ecx, dword ptr [esi + 0x224]
// 0079d536  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0079d53a  8b542408             mov edx, dword ptr [esp + 8]
// 0079d53e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079d542  03ca                 add ecx, edx
// 0079d544  3bc1                 cmp eax, ecx
// 0079d546  7e02                 jle 0x79d54a
// 0079d548  8bc1                 mov eax, ecx
// 0079d54a  85c0                 test eax, eax
// 0079d54c  7d02                 jge 0x79d550
// 0079d54e  33c0                 xor eax, eax
// 0079d550  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 0079d556  85c9                 test ecx, ecx
// 0079d558  7410                 je 0x79d56a
// 0079d55a  398610020000         cmp dword ptr [esi + 0x210], eax
// 0079d560  0f84cc000000         je 0x79d632
// 0079d566  85c9                 test ecx, ecx
// 0079d568  750c                 jne 0x79d576
// 0079d56a  39860c020000         cmp dword ptr [esi + 0x20c], eax
// 0079d570  0f84bc000000         je 0x79d632
// 0079d576  81bef0010000c8000000 cmp dword ptr [esi + 0x1f0], 0xc8
// 0079d580  c786ec01000001000000 mov dword ptr [esi + 0x1ec], 1
// 0079d58a  898610020000         mov dword ptr [esi + 0x210], eax
// 0079d590  7e08                 jle 0x79d59a
// 0079d592  dd0520c38c00         fld qword ptr [0x8cc320]
// 0079d598  eb06                 jmp 0x79d5a0
// 0079d59a  dd0570c08c00         fld qword ptr [0x8cc070]
// 0079d5a0  2b860c020000         sub eax, dword ptr [esi + 0x20c]
// 0079d5a6  89442418             mov dword ptr [esp + 0x18], eax
// 0079d5aa  db442418             fild dword ptr [esp + 0x18]
// 0079d5ae  def1                 fdivrp st(1)
// 0079d5b0  dd9618020000         fst qword ptr [esi + 0x218]
// 0079d5b6  d9ee                 fldz 
// 0079d5b8  d8d1                 fcom st(1)
// 0079d5ba  dfe0                 fnstsw ax
// 0079d5bc  f6c405               test ah, 5
// 0079d5bf  7a17                 jp 0x79d5d8
// 0079d5c1  d9e8                 fld1 
// 0079d5c3  d8d2                 fcom st(2)
// 0079d5c5  dfe0                 fnstsw ax
// 0079d5c7  ddda                 fstp st(2)
// 0079d5c9  f6c441               test ah, 0x41
// 0079d5cc  750a                 jne 0x79d5d8
// 0079d5ce  d9c9                 fxch st(1)
// 0079d5d0  dd9e18020000         fstp qword ptr [esi + 0x218]
// 0079d5d6  eb02                 jmp 0x79d5da
// 0079d5d8  ddd9                 fstp st(1)
// 0079d5da  dc9e18020000         fcomp qword ptr [esi + 0x218]
// 0079d5e0  dfe0                 fnstsw ax
// 0079d5e2  f6c441               test ah, 0x41
// 0079d5e5  751d                 jne 0x79d604
// 0079d5e7  dd0588cf8b00         fld qword ptr [0x8bcf88]
// 0079d5ed  dc9618020000         fcom qword ptr [esi + 0x218]
// 0079d5f3  dfe0                 fnstsw ax
// 0079d5f5  f6c405               test ah, 5
// 0079d5f8  7a08                 jp 0x79d602
// 0079d5fa  dd9e18020000         fstp qword ptr [esi + 0x218]
// 0079d600  eb02                 jmp 0x79d604
// 0079d602  ddd8                 fstp st(0)
// 0079d604  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0079d60a  85c0                 test eax, eax
// 0079d60c  7403                 je 0x79d611
// 0079d60e  8b4020               mov eax, dword ptr [eax + 0x20]
// 0079d611  6a00                 push 0
// 0079d613  6a28                 push 0x28
// 0079d615  68325b0000           push 0x5b32
// 0079d61a  50                   push eax
// 0079d61b  ff150cee8900         call dword ptr [0x89ee0c]
// 0079d621  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0079d627  8b500c               mov edx, dword ptr [eax + 0xc]
// 0079d62a  8d8e84010000         lea ecx, [esi + 0x184]
// 0079d630  ffd2                 call edx
// 0079d632  5e                   pop esi
// 0079d633  83c410               add esp, 0x10
// 0079d636  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?StartAnimation@CXTPControlGallery@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
