// roc 2009-12 008784b0  unit: CXTPControlGallery  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008784b0
//
// 008784b0  83ec10               sub esp, 0x10
// 008784b3  56                   push esi
// 008784b4  8d442404             lea eax, [esp + 4]
// 008784b8  50                   push eax
// 008784b9  8bf1                 mov esi, ecx
// 008784bb  e890ffffff           call 0x878450
// 008784c0  8b8e24020000         mov ecx, dword ptr [esi + 0x224]
// 008784c6  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 008784ca  8b542408             mov edx, dword ptr [esp + 8]
// 008784ce  8b442418             mov eax, dword ptr [esp + 0x18]
// 008784d2  03ca                 add ecx, edx
// 008784d4  3bc1                 cmp eax, ecx
// 008784d6  7e02                 jle 0x8784da
// 008784d8  8bc1                 mov eax, ecx
// 008784da  85c0                 test eax, eax
// 008784dc  7d02                 jge 0x8784e0
// 008784de  33c0                 xor eax, eax
// 008784e0  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 008784e6  85c9                 test ecx, ecx
// 008784e8  7410                 je 0x8784fa
// 008784ea  398610020000         cmp dword ptr [esi + 0x210], eax
// 008784f0  0f84cc000000         je 0x8785c2
// 008784f6  85c9                 test ecx, ecx
// 008784f8  750c                 jne 0x878506
// 008784fa  39860c020000         cmp dword ptr [esi + 0x20c], eax
// 00878500  0f84bc000000         je 0x8785c2
// 00878506  81bef0010000c8000000 cmp dword ptr [esi + 0x1f0], 0xc8
// 00878510  c786ec01000001000000 mov dword ptr [esi + 0x1ec], 1
// 0087851a  898610020000         mov dword ptr [esi + 0x210], eax
// 00878520  7e08                 jle 0x87852a
// 00878522  dd05c8319c00         fld qword ptr [0x9c31c8]
// 00878528  eb06                 jmp 0x878530
// 0087852a  dd05182f9c00         fld qword ptr [0x9c2f18]
// 00878530  2b860c020000         sub eax, dword ptr [esi + 0x20c]
// 00878536  89442418             mov dword ptr [esp + 0x18], eax
// 0087853a  db442418             fild dword ptr [esp + 0x18]
// 0087853e  def1                 fdivrp st(1)
// 00878540  dd9618020000         fst qword ptr [esi + 0x218]
// 00878546  d9ee                 fldz 
// 00878548  d8d1                 fcom st(1)
// 0087854a  dfe0                 fnstsw ax
// 0087854c  f6c405               test ah, 5
// 0087854f  7a17                 jp 0x878568
// 00878551  d9e8                 fld1 
// 00878553  d8d2                 fcom st(2)
// 00878555  dfe0                 fnstsw ax
// 00878557  ddda                 fstp st(2)
// 00878559  f6c441               test ah, 0x41
// 0087855c  750a                 jne 0x878568
// 0087855e  d9c9                 fxch st(1)
// 00878560  dd9e18020000         fstp qword ptr [esi + 0x218]
// 00878566  eb02                 jmp 0x87856a
// 00878568  ddd9                 fstp st(1)
// 0087856a  dc9e18020000         fcomp qword ptr [esi + 0x218]
// 00878570  dfe0                 fnstsw ax
// 00878572  f6c441               test ah, 0x41
// 00878575  751d                 jne 0x878594
// 00878577  dd0538159b00         fld qword ptr [0x9b1538]
// 0087857d  dc9618020000         fcom qword ptr [esi + 0x218]
// 00878583  dfe0                 fnstsw ax
// 00878585  f6c405               test ah, 5
// 00878588  7a08                 jp 0x878592
// 0087858a  dd9e18020000         fstp qword ptr [esi + 0x218]
// 00878590  eb02                 jmp 0x878594
// 00878592  ddd8                 fstp st(0)
// 00878594  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0087859a  85c0                 test eax, eax
// 0087859c  7403                 je 0x8785a1
// 0087859e  8b4020               mov eax, dword ptr [eax + 0x20]
// 008785a1  6a00                 push 0
// 008785a3  6a28                 push 0x28
// 008785a5  68325b0000           push 0x5b32
// 008785aa  50                   push eax
// 008785ab  ff1558cc9800         call dword ptr [0x98cc58]
// 008785b1  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 008785b7  8b500c               mov edx, dword ptr [eax + 0xc]
// 008785ba  8d8e84010000         lea ecx, [esi + 0x184]
// 008785c0  ffd2                 call edx
// 008785c2  5e                   pop esi
// 008785c3  83c410               add esp, 0x10
// 008785c6  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?StartAnimation@CXTPControlGallery@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
