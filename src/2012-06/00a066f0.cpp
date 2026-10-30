// roc 2012-06 00a066f0  unit: CXTPRibbonTheme  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a066f0
//
// 00a066f0  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a066f4  83ec30               sub esp, 0x30
// 00a066f7  53                   push ebx
// 00a066f8  55                   push ebp
// 00a066f9  33db                 xor ebx, ebx
// 00a066fb  56                   push esi
// 00a066fc  57                   push edi
// 00a066fd  3bc3                 cmp eax, ebx
// 00a066ff  7433                 je 0xa06734
// 00a06701  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a06705  50                   push eax
// 00a06706  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a0670a  50                   push eax
// 00a0670b  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a0670f  52                   push edx
// 00a06710  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00a06714  50                   push eax
// 00a06715  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a06719  52                   push edx
// 00a0671a  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00a0671e  50                   push eax
// 00a0671f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a06723  52                   push edx
// 00a06724  50                   push eax
// 00a06725  e8c62bf8ff           call 0x9892f0
// 00a0672a  5f                   pop edi
// 00a0672b  5e                   pop esi
// 00a0672c  5d                   pop ebp
// 00a0672d  5b                   pop ebx
// 00a0672e  83c430               add esp, 0x30
// 00a06731  c22000               ret 0x20
// 00a06734  680cc2c100           push 0xc1c20c
// 00a06739  e832110000           call 0xa07870
// 00a0673e  8bf8                 mov edi, eax
// 00a06740  3bfb                 cmp edi, ebx
// 00a06742  0f84b2000000         je 0xa067fa
// 00a06748  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a0674c  8d48fe               lea ecx, [eax - 2]
// 00a0674f  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a06753  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a06757  8d51fe               lea edx, [ecx - 2]
// 00a0675a  83c003               add eax, 3
// 00a0675d  83c102               add ecx, 2
// 00a06760  89542414             mov dword ptr [esp + 0x14], edx
// 00a06764  89442418             mov dword ptr [esp + 0x18], eax
// 00a06768  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00a0676c  395c245c             cmp dword ptr [esp + 0x5c], ebx
// 00a06770  7507                 jne 0xa06779
// 00a06772  bd03000000           mov ebp, 3
// 00a06777  eb0b                 jmp 0xa06784
// 00a06779  33c0                 xor eax, eax
// 00a0677b  395c2454             cmp dword ptr [esp + 0x54], ebx
// 00a0677f  0f95c0               setne al
// 00a06782  8be8                 mov ebp, eax
// 00a06784  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a06788  8b8100010000         mov eax, dword ptr [ecx + 0x100]
// 00a0678e  8d542410             lea edx, [esp + 0x10]
// 00a06792  52                   push edx
// 00a06793  50                   push eax
// 00a06794  e857bbffff           call 0xa022f0
// 00a06799  83c408               add esp, 8
// 00a0679c  8bf0                 mov esi, eax
// 00a0679e  6a04                 push 4
// 00a067a0  f7de                 neg esi
// 00a067a2  55                   push ebp
// 00a067a3  8d442438             lea eax, [esp + 0x38]
// 00a067a7  1bf6                 sbb esi, esi
// 00a067a9  50                   push eax
// 00a067aa  8bcf                 mov ecx, edi
// 00a067ac  f7de                 neg esi
// 00a067ae  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00a067b2  895c2430             mov dword ptr [esp + 0x30], ebx
// 00a067b6  895c2434             mov dword ptr [esp + 0x34], ebx
// 00a067ba  895c2438             mov dword ptr [esp + 0x38], ebx
// 00a067be  e82df30500           call 0xa65af0
// 00a067c3  8b10                 mov edx, dword ptr [eax]
// 00a067c5  56                   push esi
// 00a067c6  68ff00ff00           push 0xff00ff
// 00a067cb  8d4c2428             lea ecx, [esp + 0x28]
// 00a067cf  51                   push ecx
// 00a067d0  83ec10               sub esp, 0x10
// 00a067d3  8bcc                 mov ecx, esp
// 00a067d5  8911                 mov dword ptr [ecx], edx
// 00a067d7  8b5004               mov edx, dword ptr [eax + 4]
// 00a067da  895104               mov dword ptr [ecx + 4], edx
// 00a067dd  8b5008               mov edx, dword ptr [eax + 8]
// 00a067e0  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a067e3  895108               mov dword ptr [ecx + 8], edx
// 00a067e6  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a067ea  89410c               mov dword ptr [ecx + 0xc], eax
// 00a067ed  8d4c242c             lea ecx, [esp + 0x2c]
// 00a067f1  51                   push ecx
// 00a067f2  52                   push edx
// 00a067f3  8bcf                 mov ecx, edi
// 00a067f5  e806fd0500           call 0xa66500
// 00a067fa  5f                   pop edi
// 00a067fb  5e                   pop esi
// 00a067fc  5d                   pop ebp
// 00a067fd  5b                   pop ebx
// 00a067fe  83c430               add esp, 0x30
// 00a06801  c22000               ret 0x20
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawDropDownGlyph@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPControl@@VCPoint@@HHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
