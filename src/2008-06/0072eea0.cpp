// from server: 100% by auto
// roc 2008-06 0072eea0  unit: CXTPControlGallery  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072eea0
//
// 0072eea0  83ec10               sub esp, 0x10
// 0072eea3  56                   push esi
// 0072eea4  8d442404             lea eax, [esp + 4]
// 0072eea8  50                   push eax
// 0072eea9  8bf1                 mov esi, ecx
// 0072eeab  e890ffffff           call 0x72ee40
// 0072eeb0  8b8e24020000         mov ecx, dword ptr [esi + 0x224]
// 0072eeb6  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0072eeba  8b542408             mov edx, dword ptr [esp + 8]
// 0072eebe  8b442418             mov eax, dword ptr [esp + 0x18]
// 0072eec2  03ca                 add ecx, edx
// 0072eec4  3bc1                 cmp eax, ecx
// 0072eec6  7e02                 jle 0x72eeca
// 0072eec8  8bc1                 mov eax, ecx
// 0072eeca  85c0                 test eax, eax
// 0072eecc  7d02                 jge 0x72eed0
// 0072eece  33c0                 xor eax, eax
// 0072eed0  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 0072eed6  85c9                 test ecx, ecx
// 0072eed8  7410                 je 0x72eeea
// 0072eeda  398610020000         cmp dword ptr [esi + 0x210], eax
// 0072eee0  0f84cc000000         je 0x72efb2
// 0072eee6  85c9                 test ecx, ecx
// 0072eee8  750c                 jne 0x72eef6
// 0072eeea  39860c020000         cmp dword ptr [esi + 0x20c], eax
// 0072eef0  0f84bc000000         je 0x72efb2
// 0072eef6  81bef0010000c8000000 cmp dword ptr [esi + 0x1f0], 0xc8
// 0072ef00  c786ec01000001000000 mov dword ptr [esi + 0x1ec], 1
// 0072ef0a  898610020000         mov dword ptr [esi + 0x210], eax
// 0072ef10  7e08                 jle 0x72ef1a
// 0072ef12  dd05208e8200         fld qword ptr [0x828e20]
// 0072ef18  eb06                 jmp 0x72ef20
// 0072ef1a  dd05908b8200         fld qword ptr [0x828b90]
// 0072ef20  2b860c020000         sub eax, dword ptr [esi + 0x20c]
// 0072ef26  89442418             mov dword ptr [esp + 0x18], eax
// 0072ef2a  db442418             fild dword ptr [esp + 0x18]
// 0072ef2e  def1                 fdivrp st(1)
// 0072ef30  dd9618020000         fst qword ptr [esi + 0x218]
// 0072ef36  d9ee                 fldz 
// 0072ef38  d8d1                 fcom st(1)
// 0072ef3a  dfe0                 fnstsw ax
// 0072ef3c  f6c405               test ah, 5
// 0072ef3f  7a17                 jp 0x72ef58
// 0072ef41  d9e8                 fld1 
// 0072ef43  d8d2                 fcom st(2)
// 0072ef45  dfe0                 fnstsw ax
// 0072ef47  ddda                 fstp st(2)
// 0072ef49  f6c441               test ah, 0x41
// 0072ef4c  750a                 jne 0x72ef58
// 0072ef4e  d9c9                 fxch st(1)
// 0072ef50  dd9e18020000         fstp qword ptr [esi + 0x218]
// 0072ef56  eb02                 jmp 0x72ef5a
// 0072ef58  ddd9                 fstp st(1)
// 0072ef5a  dc9e18020000         fcomp qword ptr [esi + 0x218]
// 0072ef60  dfe0                 fnstsw ax
// 0072ef62  f6c441               test ah, 0x41
// 0072ef65  751d                 jne 0x72ef84
// 0072ef67  dd05e0cd8100         fld qword ptr [0x81cde0]
// 0072ef6d  dc9618020000         fcom qword ptr [esi + 0x218]
// 0072ef73  dfe0                 fnstsw ax
// 0072ef75  f6c405               test ah, 5
// 0072ef78  7a08                 jp 0x72ef82
// 0072ef7a  dd9e18020000         fstp qword ptr [esi + 0x218]
// 0072ef80  eb02                 jmp 0x72ef84
// 0072ef82  ddd8                 fstp st(0)
// 0072ef84  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0072ef8a  85c0                 test eax, eax
// 0072ef8c  7403                 je 0x72ef91
// 0072ef8e  8b4020               mov eax, dword ptr [eax + 0x20]
// 0072ef91  6a00                 push 0
// 0072ef93  6a28                 push 0x28
// 0072ef95  68325b0000           push 0x5b32
// 0072ef9a  50                   push eax
// 0072ef9b  ff157c2d8000         call dword ptr [0x802d7c]
// 0072efa1  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0072efa7  8b500c               mov edx, dword ptr [eax + 0xc]
// 0072efaa  8d8e84010000         lea ecx, [esi + 0x184]
// 0072efb0  ffd2                 call edx
// 0072efb2  5e                   pop esi
// 0072efb3  83c410               add esp, 0x10
// 0072efb6  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?StartAnimation@CXTPControlGallery@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
