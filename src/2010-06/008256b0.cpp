// roc 2010-06 008256b0  unit: CXTPControlGallery  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008256b0
//
// 008256b0  83ec10               sub esp, 0x10
// 008256b3  56                   push esi
// 008256b4  8d442404             lea eax, [esp + 4]
// 008256b8  50                   push eax
// 008256b9  8bf1                 mov esi, ecx
// 008256bb  e890ffffff           call 0x825650
// 008256c0  8b8e24020000         mov ecx, dword ptr [esi + 0x224]
// 008256c6  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 008256ca  8b542408             mov edx, dword ptr [esp + 8]
// 008256ce  8b442418             mov eax, dword ptr [esp + 0x18]
// 008256d2  03ca                 add ecx, edx
// 008256d4  3bc1                 cmp eax, ecx
// 008256d6  7e02                 jle 0x8256da
// 008256d8  8bc1                 mov eax, ecx
// 008256da  85c0                 test eax, eax
// 008256dc  7d02                 jge 0x8256e0
// 008256de  33c0                 xor eax, eax
// 008256e0  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 008256e6  85c9                 test ecx, ecx
// 008256e8  7410                 je 0x8256fa
// 008256ea  398610020000         cmp dword ptr [esi + 0x210], eax
// 008256f0  0f84cc000000         je 0x8257c2
// 008256f6  85c9                 test ecx, ecx
// 008256f8  750c                 jne 0x825706
// 008256fa  39860c020000         cmp dword ptr [esi + 0x20c], eax
// 00825700  0f84bc000000         je 0x8257c2
// 00825706  81bef0010000c8000000 cmp dword ptr [esi + 0x1f0], 0xc8
// 00825710  c786ec01000001000000 mov dword ptr [esi + 0x1ec], 1
// 0082571a  898610020000         mov dword ptr [esi + 0x210], eax
// 00825720  7e08                 jle 0x82572a
// 00825722  dd05200fa200         fld qword ptr [0xa20f20]
// 00825728  eb06                 jmp 0x825730
// 0082572a  dd05700ca200         fld qword ptr [0xa20c70]
// 00825730  2b860c020000         sub eax, dword ptr [esi + 0x20c]
// 00825736  89442418             mov dword ptr [esp + 0x18], eax
// 0082573a  db442418             fild dword ptr [esp + 0x18]
// 0082573e  def1                 fdivrp st(1)
// 00825740  dd9618020000         fst qword ptr [esi + 0x218]
// 00825746  d9ee                 fldz 
// 00825748  d8d1                 fcom st(1)
// 0082574a  dfe0                 fnstsw ax
// 0082574c  f6c405               test ah, 5
// 0082574f  7a17                 jp 0x825768
// 00825751  d9e8                 fld1 
// 00825753  d8d2                 fcom st(2)
// 00825755  dfe0                 fnstsw ax
// 00825757  ddda                 fstp st(2)
// 00825759  f6c441               test ah, 0x41
// 0082575c  750a                 jne 0x825768
// 0082575e  d9c9                 fxch st(1)
// 00825760  dd9e18020000         fstp qword ptr [esi + 0x218]
// 00825766  eb02                 jmp 0x82576a
// 00825768  ddd9                 fstp st(1)
// 0082576a  dc9e18020000         fcomp qword ptr [esi + 0x218]
// 00825770  dfe0                 fnstsw ax
// 00825772  f6c441               test ah, 0x41
// 00825775  751d                 jne 0x825794
// 00825777  dd051818a100         fld qword ptr [0xa11818]
// 0082577d  dc9618020000         fcom qword ptr [esi + 0x218]
// 00825783  dfe0                 fnstsw ax
// 00825785  f6c405               test ah, 5
// 00825788  7a08                 jp 0x825792
// 0082578a  dd9e18020000         fstp qword ptr [esi + 0x218]
// 00825790  eb02                 jmp 0x825794
// 00825792  ddd8                 fstp st(0)
// 00825794  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0082579a  85c0                 test eax, eax
// 0082579c  7403                 je 0x8257a1
// 0082579e  8b4020               mov eax, dword ptr [eax + 0x20]
// 008257a1  6a00                 push 0
// 008257a3  6a28                 push 0x28
// 008257a5  68325b0000           push 0x5b32
// 008257aa  50                   push eax
// 008257ab  ff1554bc9e00         call dword ptr [0x9ebc54]
// 008257b1  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 008257b7  8b500c               mov edx, dword ptr [eax + 0xc]
// 008257ba  8d8e84010000         lea ecx, [esi + 0x184]
// 008257c0  ffd2                 call edx
// 008257c2  5e                   pop esi
// 008257c3  83c410               add esp, 0x10
// 008257c6  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?StartAnimation@CXTPControlGallery@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
