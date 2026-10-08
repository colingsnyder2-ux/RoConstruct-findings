// roc 2011-06 00882740  unit: CXTPControlGallery  size: 281 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00882740
//
// 00882740  83ec10               sub esp, 0x10
// 00882743  56                   push esi
// 00882744  8d442404             lea eax, [esp + 4]
// 00882748  50                   push eax
// 00882749  8bf1                 mov esi, ecx
// 0088274b  e890ffffff           call 0x8826e0
// 00882750  8b8e24020000         mov ecx, dword ptr [esi + 0x224]
// 00882756  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0088275a  8b542408             mov edx, dword ptr [esp + 8]
// 0088275e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00882762  03ca                 add ecx, edx
// 00882764  3bc1                 cmp eax, ecx
// 00882766  7e02                 jle 0x88276a
// 00882768  8bc1                 mov eax, ecx
// 0088276a  85c0                 test eax, eax
// 0088276c  7d02                 jge 0x882770
// 0088276e  33c0                 xor eax, eax
// 00882770  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 00882776  85c9                 test ecx, ecx
// 00882778  7410                 je 0x88278a
// 0088277a  398610020000         cmp dword ptr [esi + 0x210], eax
// 00882780  0f84cc000000         je 0x882852
// 00882786  85c9                 test ecx, ecx
// 00882788  750c                 jne 0x882796
// 0088278a  39860c020000         cmp dword ptr [esi + 0x20c], eax
// 00882790  0f84bc000000         je 0x882852
// 00882796  81bef0010000c8000000 cmp dword ptr [esi + 0x1f0], 0xc8
// 008827a0  c786ec01000001000000 mov dword ptr [esi + 0x1ec], 1
// 008827aa  898610020000         mov dword ptr [esi + 0x210], eax
// 008827b0  7e08                 jle 0x8827ba
// 008827b2  dd0560f4a700         fld qword ptr [0xa7f460]
// 008827b8  eb06                 jmp 0x8827c0
// 008827ba  dd055806a800         fld qword ptr [0xa80658]
// 008827c0  2b860c020000         sub eax, dword ptr [esi + 0x20c]
// 008827c6  89442418             mov dword ptr [esp + 0x18], eax
// 008827ca  db442418             fild dword ptr [esp + 0x18]
// 008827ce  def1                 fdivrp st(1)
// 008827d0  dd9618020000         fst qword ptr [esi + 0x218]
// 008827d6  d9ee                 fldz 
// 008827d8  d8d1                 fcom st(1)
// 008827da  dfe0                 fnstsw ax
// 008827dc  f6c405               test ah, 5
// 008827df  7a17                 jp 0x8827f8
// 008827e1  d9e8                 fld1 
// 008827e3  d8d2                 fcom st(2)
// 008827e5  dfe0                 fnstsw ax
// 008827e7  ddda                 fstp st(2)
// 008827e9  f6c441               test ah, 0x41
// 008827ec  750a                 jne 0x8827f8
// 008827ee  d9c9                 fxch st(1)
// 008827f0  dd9e18020000         fstp qword ptr [esi + 0x218]
// 008827f6  eb02                 jmp 0x8827fa
// 008827f8  ddd9                 fstp st(1)
// 008827fa  dc9e18020000         fcomp qword ptr [esi + 0x218]
// 00882800  dfe0                 fnstsw ax
// 00882802  f6c441               test ah, 0x41
// 00882805  751d                 jne 0x882824
// 00882807  dd05704ca700         fld qword ptr [0xa74c70]
// 0088280d  dc9618020000         fcom qword ptr [esi + 0x218]
// 00882813  dfe0                 fnstsw ax
// 00882815  f6c405               test ah, 5
// 00882818  7a08                 jp 0x882822
// 0088281a  dd9e18020000         fstp qword ptr [esi + 0x218]
// 00882820  eb02                 jmp 0x882824
// 00882822  ddd8                 fstp st(0)
// 00882824  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0088282a  85c0                 test eax, eax
// 0088282c  7403                 je 0x882831
// 0088282e  8b4020               mov eax, dword ptr [eax + 0x20]
// 00882831  6a00                 push 0
// 00882833  6a28                 push 0x28
// 00882835  68325b0000           push 0x5b32
// 0088283a  50                   push eax
// 0088283b  ff15741ca400         call dword ptr [0xa41c74]
// 00882841  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 00882847  8b500c               mov edx, dword ptr [eax + 0xc]
// 0088284a  8d8e84010000         lea ecx, [esi + 0x184]
// 00882850  ffd2                 call edx
// 00882852  5e                   pop esi
// 00882853  83c410               add esp, 0x10
// 00882856  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?StartAnimation@CXTPControlGallery@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
