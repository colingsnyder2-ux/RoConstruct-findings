// roc 2009-12 007fea50  unit: CXTPPaintManager  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fea50
//
// 007fea50  53                   push ebx
// 007fea51  55                   push ebp
// 007fea52  56                   push esi
// 007fea53  57                   push edi
// 007fea54  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007fea58  57                   push edi
// 007fea59  8bf1                 mov esi, ecx
// 007fea5b  e8b0d60400           call 0x84c110
// 007fea60  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007fea64  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007fea68  8b542420             mov edx, dword ptr [esp + 0x20]
// 007fea6c  83c404               add esp, 4
// 007fea6f  8bd8                 mov ebx, eax
// 007fea71  53                   push ebx
// 007fea72  55                   push ebp
// 007fea73  83ec10               sub esp, 0x10
// 007fea76  8bc4                 mov eax, esp
// 007fea78  8908                 mov dword ptr [eax], ecx
// 007fea7a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007fea7e  895004               mov dword ptr [eax + 4], edx
// 007fea81  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007fea85  894808               mov dword ptr [eax + 8], ecx
// 007fea88  57                   push edi
// 007fea89  8bce                 mov ecx, esi
// 007fea8b  89500c               mov dword ptr [eax + 0xc], edx
// 007fea8e  e82dfdffff           call 0x7fe7c0
// 007fea93  837e6000             cmp dword ptr [esi + 0x60], 0
// 007fea97  7439                 je 0x7fead2
// 007fea99  6a01                 push 1
// 007fea9b  6a00                 push 0
// 007fea9d  8d442420             lea eax, [esp + 0x20]
// 007feaa1  50                   push eax
// 007feaa2  ff156ccc9800         call dword ptr [0x98cc6c]
// 007feaa8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007feaac  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007feab0  53                   push ebx
// 007feab1  55                   push ebp
// 007feab2  83ec10               sub esp, 0x10
// 007feab5  8bc4                 mov eax, esp
// 007feab7  8908                 mov dword ptr [eax], ecx
// 007feab9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007feabd  895004               mov dword ptr [eax + 4], edx
// 007feac0  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007feac4  894808               mov dword ptr [eax + 8], ecx
// 007feac7  57                   push edi
// 007feac8  8bce                 mov ecx, esi
// 007feaca  89500c               mov dword ptr [eax + 0xc], edx
// 007feacd  e8eefcffff           call 0x7fe7c0
// 007fead2  5f                   pop edi
// 007fead3  5e                   pop esi
// 007fead4  5d                   pop ebp
// 007fead5  5b                   pop ebx
// 007fead6  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawCheckMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
