// roc 2012-06 009fad50  unit: CXTPControlGallery  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fad50
//
// 009fad50  83ec10               sub esp, 0x10
// 009fad53  56                   push esi
// 009fad54  8d442404             lea eax, [esp + 4]
// 009fad58  50                   push eax
// 009fad59  8bf1                 mov esi, ecx
// 009fad5b  e890ffffff           call 0x9facf0
// 009fad60  8b8e24020000         mov ecx, dword ptr [esi + 0x224]
// 009fad66  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 009fad6a  8b542408             mov edx, dword ptr [esp + 8]
// 009fad6e  8b442418             mov eax, dword ptr [esp + 0x18]
// 009fad72  03ca                 add ecx, edx
// 009fad74  3bc1                 cmp eax, ecx
// 009fad76  7e02                 jle 0x9fad7a
// 009fad78  8bc1                 mov eax, ecx
// 009fad7a  85c0                 test eax, eax
// 009fad7c  7d02                 jge 0x9fad80
// 009fad7e  33c0                 xor eax, eax
// 009fad80  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 009fad86  85c9                 test ecx, ecx
// 009fad88  7410                 je 0x9fad9a
// 009fad8a  398610020000         cmp dword ptr [esi + 0x210], eax
// 009fad90  0f84cc000000         je 0x9fae62
// 009fad96  85c9                 test ecx, ecx
// 009fad98  750c                 jne 0x9fada6
// 009fad9a  39860c020000         cmp dword ptr [esi + 0x20c], eax
// 009fada0  0f84bc000000         je 0x9fae62
// 009fada6  81bef0010000c8000000 cmp dword ptr [esi + 0x1f0], 0xc8
// 009fadb0  c786ec01000001000000 mov dword ptr [esi + 0x1ec], 1
// 009fadba  898610020000         mov dword ptr [esi + 0x210], eax
// 009fadc0  7e08                 jle 0x9fadca
// 009fadc2  dd05f85eb800         fld qword ptr [0xb85ef8]
// 009fadc8  eb06                 jmp 0x9fadd0
// 009fadca  dd0508e6b600         fld qword ptr [0xb6e608]
// 009fadd0  2b860c020000         sub eax, dword ptr [esi + 0x20c]
// 009fadd6  89442418             mov dword ptr [esp + 0x18], eax
// 009fadda  db442418             fild dword ptr [esp + 0x18]
// 009fadde  def1                 fdivrp st(1)
// 009fade0  dd9618020000         fst qword ptr [esi + 0x218]
// 009fade6  d9ee                 fldz 
// 009fade8  d8d1                 fcom st(1)
// 009fadea  dfe0                 fnstsw ax
// 009fadec  f6c405               test ah, 5
// 009fadef  7a17                 jp 0x9fae08
// 009fadf1  d9e8                 fld1 
// 009fadf3  d8d2                 fcom st(2)
// 009fadf5  dfe0                 fnstsw ax
// 009fadf7  ddda                 fstp st(2)
// 009fadf9  f6c441               test ah, 0x41
// 009fadfc  750a                 jne 0x9fae08
// 009fadfe  d9c9                 fxch st(1)
// 009fae00  dd9e18020000         fstp qword ptr [esi + 0x218]
// 009fae06  eb02                 jmp 0x9fae0a
// 009fae08  ddd9                 fstp st(1)
// 009fae0a  dc9e18020000         fcomp qword ptr [esi + 0x218]
// 009fae10  dfe0                 fnstsw ax
// 009fae12  f6c441               test ah, 0x41
// 009fae15  751d                 jne 0x9fae34
// 009fae17  dd054016b600         fld qword ptr [0xb61640]
// 009fae1d  dc9618020000         fcom qword ptr [esi + 0x218]
// 009fae23  dfe0                 fnstsw ax
// 009fae25  f6c405               test ah, 5
// 009fae28  7a08                 jp 0x9fae32
// 009fae2a  dd9e18020000         fstp qword ptr [esi + 0x218]
// 009fae30  eb02                 jmp 0x9fae34
// 009fae32  ddd8                 fstp st(0)
// 009fae34  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 009fae3a  85c0                 test eax, eax
// 009fae3c  7403                 je 0x9fae41
// 009fae3e  8b4020               mov eax, dword ptr [eax + 0x20]
// 009fae41  6a00                 push 0
// 009fae43  6a28                 push 0x28
// 009fae45  68325b0000           push 0x5b32
// 009fae4a  50                   push eax
// 009fae4b  ff15e03ab200         call dword ptr [0xb23ae0]
// 009fae51  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 009fae57  8b500c               mov edx, dword ptr [eax + 0xc]
// 009fae5a  8d8e84010000         lea ecx, [esi + 0x184]
// 009fae60  ffd2                 call edx
// 009fae62  5e                   pop esi
// 009fae63  83c410               add esp, 0x10
// 009fae66  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?StartAnimation@CXTPControlGallery@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
