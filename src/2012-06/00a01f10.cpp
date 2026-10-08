// from server: 100% by auto
// roc 2012-06 00a01f10  unit: CXTPRibbonTheme  size: 535 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a01f10
//
// 00a01f10  83ec30               sub esp, 0x30
// 00a01f13  53                   push ebx
// 00a01f14  55                   push ebp
// 00a01f15  56                   push esi
// 00a01f16  57                   push edi
// 00a01f17  68bcb9c100           push 0xc1b9bc
// 00a01f1c  8bf9                 mov edi, ecx
// 00a01f1e  e84d590000           call 0xa07870
// 00a01f23  8be8                 mov ebp, eax
// 00a01f25  33db                 xor ebx, ebx
// 00a01f27  3beb                 cmp ebp, ebx
// 00a01f29  753b                 jne 0xa01f66
// 00a01f2b  8b442458             mov eax, dword ptr [esp + 0x58]
// 00a01f2f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a01f33  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a01f37  50                   push eax
// 00a01f38  83ec10               sub esp, 0x10
// 00a01f3b  8bc4                 mov eax, esp
// 00a01f3d  8908                 mov dword ptr [eax], ecx
// 00a01f3f  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a01f43  895004               mov dword ptr [eax + 4], edx
// 00a01f46  8b542468             mov edx, dword ptr [esp + 0x68]
// 00a01f4a  894808               mov dword ptr [eax + 8], ecx
// 00a01f4d  89500c               mov dword ptr [eax + 0xc], edx
// 00a01f50  8b442458             mov eax, dword ptr [esp + 0x58]
// 00a01f54  50                   push eax
// 00a01f55  8bcf                 mov ecx, edi
// 00a01f57  e8c4120100           call 0xa13220
// 00a01f5c  5f                   pop edi
// 00a01f5d  5e                   pop esi
// 00a01f5e  5d                   pop ebp
// 00a01f5f  5b                   pop ebx
// 00a01f60  83c430               add esp, 0x30
// 00a01f63  c21800               ret 0x18
// 00a01f66  be01000000           mov esi, 1
// 00a01f6b  56                   push esi
// 00a01f6c  53                   push ebx
// 00a01f6d  8d4c2438             lea ecx, [esp + 0x38]
// 00a01f71  51                   push ecx
// 00a01f72  8bcd                 mov ecx, ebp
// 00a01f74  8974241c             mov dword ptr [esp + 0x1c], esi
// 00a01f78  89742420             mov dword ptr [esp + 0x20], esi
// 00a01f7c  89742424             mov dword ptr [esp + 0x24], esi
// 00a01f80  89742428             mov dword ptr [esp + 0x28], esi
// 00a01f84  e8673b0600           call 0xa65af0
// 00a01f89  68ff00ff00           push 0xff00ff
// 00a01f8e  8d542414             lea edx, [esp + 0x14]
// 00a01f92  52                   push edx
// 00a01f93  8b10                 mov edx, dword ptr [eax]
// 00a01f95  83ec10               sub esp, 0x10
// 00a01f98  8bcc                 mov ecx, esp
// 00a01f9a  8911                 mov dword ptr [ecx], edx
// 00a01f9c  8b5004               mov edx, dword ptr [eax + 4]
// 00a01f9f  895104               mov dword ptr [ecx + 4], edx
// 00a01fa2  8b5008               mov edx, dword ptr [eax + 8]
// 00a01fa5  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a01fa8  895108               mov dword ptr [ecx + 8], edx
// 00a01fab  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00a01faf  89410c               mov dword ptr [ecx + 0xc], eax
// 00a01fb2  8d4c2460             lea ecx, [esp + 0x60]
// 00a01fb6  51                   push ecx
// 00a01fb7  52                   push edx
// 00a01fb8  8bcd                 mov ecx, ebp
// 00a01fba  e871400600           call 0xa66030
// 00a01fbf  837c245802           cmp dword ptr [esp + 0x58], 2
// 00a01fc4  8bcf                 mov ecx, edi
// 00a01fc6  0f85b8000000         jne 0xa02084
// 00a01fcc  68a0b9c100           push 0xc1b9a0
// 00a01fd1  e89a580000           call 0xa07870
// 00a01fd6  56                   push esi
// 00a01fd7  8be8                 mov ebp, eax
// 00a01fd9  53                   push ebx
// 00a01fda  8d442418             lea eax, [esp + 0x18]
// 00a01fde  50                   push eax
// 00a01fdf  8bcd                 mov ecx, ebp
// 00a01fe1  e80a3b0600           call 0xa65af0
// 00a01fe6  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a01fea  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a01fee  8b742418             mov esi, dword ptr [esp + 0x18]
// 00a01ff2  2b742410             sub esi, dword ptr [esp + 0x10]
// 00a01ff6  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a01ffa  8d040a               lea eax, [edx + ecx]
// 00a01ffd  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 00a02001  99                   cdq 
// 00a02002  2bc2                 sub eax, edx
// 00a02004  8bc8                 mov ecx, eax
// 00a02006  8bc6                 mov eax, esi
// 00a02008  99                   cdq 
// 00a02009  2bc2                 sub eax, edx
// 00a0200b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a0200f  d1f8                 sar eax, 1
// 00a02011  d1f9                 sar ecx, 1
// 00a02013  2bc8                 sub ecx, eax
// 00a02015  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a02019  2bc2                 sub eax, edx
// 00a0201b  03442454             add eax, dword ptr [esp + 0x54]
// 00a0201f  68ff00ff00           push 0xff00ff
// 00a02024  89442438             mov dword ptr [esp + 0x38], eax
// 00a02028  03c7                 add eax, edi
// 00a0202a  89442440             mov dword ptr [esp + 0x40], eax
// 00a0202e  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a02032  03ce                 add ecx, esi
// 00a02034  8d442424             lea eax, [esp + 0x24]
// 00a02038  50                   push eax
// 00a02039  894c2440             mov dword ptr [esp + 0x40], ecx
// 00a0203d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a02041  83ec10               sub esp, 0x10
// 00a02044  8bc4                 mov eax, esp
// 00a02046  8908                 mov dword ptr [eax], ecx
// 00a02048  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a0204c  894804               mov dword ptr [eax + 4], ecx
// 00a0204f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a02053  894808               mov dword ptr [eax + 8], ecx
// 00a02056  89500c               mov dword ptr [eax + 0xc], edx
// 00a02059  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a0205d  8d542448             lea edx, [esp + 0x48]
// 00a02061  52                   push edx
// 00a02062  8bcd                 mov ecx, ebp
// 00a02064  50                   push eax
// 00a02065  895c2440             mov dword ptr [esp + 0x40], ebx
// 00a02069  895c2444             mov dword ptr [esp + 0x44], ebx
// 00a0206d  895c2448             mov dword ptr [esp + 0x48], ebx
// 00a02071  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00a02075  e8b63f0600           call 0xa66030
// 00a0207a  5f                   pop edi
// 00a0207b  5e                   pop esi
// 00a0207c  5d                   pop ebp
// 00a0207d  5b                   pop ebx
// 00a0207e  83c430               add esp, 0x30
// 00a02081  c21800               ret 0x18
// 00a02084  6884b9c100           push 0xc1b984
// 00a02089  e8e2570000           call 0xa07870
// 00a0208e  56                   push esi
// 00a0208f  53                   push ebx
// 00a02090  8d4c2418             lea ecx, [esp + 0x18]
// 00a02094  8bf8                 mov edi, eax
// 00a02096  51                   push ecx
// 00a02097  8bcf                 mov ecx, edi
// 00a02099  e8523a0600           call 0xa65af0
// 00a0209e  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00a020a2  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a020a6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a020aa  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00a020ae  2bf1                 sub esi, ecx
// 00a020b0  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 00a020b4  8bd5                 mov edx, ebp
// 00a020b6  034c2454             add ecx, dword ptr [esp + 0x54]
// 00a020ba  2bd0                 sub edx, eax
// 00a020bc  2bc5                 sub eax, ebp
// 00a020be  03442450             add eax, dword ptr [esp + 0x50]
// 00a020c2  68ff00ff00           push 0xff00ff
// 00a020c7  89442424             mov dword ptr [esp + 0x24], eax
// 00a020cb  03c2                 add eax, edx
// 00a020cd  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a020d1  03ce                 add ecx, esi
// 00a020d3  8d542434             lea edx, [esp + 0x34]
// 00a020d7  52                   push edx
// 00a020d8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a020dc  83ec10               sub esp, 0x10
// 00a020df  894c2444             mov dword ptr [esp + 0x44], ecx
// 00a020e3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a020e7  89442440             mov dword ptr [esp + 0x40], eax
// 00a020eb  8bc4                 mov eax, esp
// 00a020ed  8908                 mov dword ptr [eax], ecx
// 00a020ef  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a020f3  895004               mov dword ptr [eax + 4], edx
// 00a020f6  896808               mov dword ptr [eax + 8], ebp
// 00a020f9  89480c               mov dword ptr [eax + 0xc], ecx
// 00a020fc  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a02100  8d542438             lea edx, [esp + 0x38]
// 00a02104  52                   push edx
// 00a02105  8bcf                 mov ecx, edi
// 00a02107  50                   push eax
// 00a02108  895c2450             mov dword ptr [esp + 0x50], ebx
// 00a0210c  895c2454             mov dword ptr [esp + 0x54], ebx
// 00a02110  895c2458             mov dword ptr [esp + 0x58], ebx
// 00a02114  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00a02118  e8133f0600           call 0xa66030
// 00a0211d  5f                   pop edi
// 00a0211e  5e                   pop esi
// 00a0211f  5d                   pop ebp
// 00a02120  5b                   pop ebx
// 00a02121  83c430               add esp, 0x30
// 00a02124  c21800               ret 0x18
// library xtp-15.2.1/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawPopupResizeGripper@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonTheme.cpp
