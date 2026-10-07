// roc 2007-08 0063dfc0  unit: CXTPPaintManager  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063dfc0
//
// 0063dfc0  53                   push ebx
// 0063dfc1  55                   push ebp
// 0063dfc2  56                   push esi
// 0063dfc3  57                   push edi
// 0063dfc4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0063dfc8  57                   push edi
// 0063dfc9  8bf1                 mov esi, ecx
// 0063dfcb  e800300400           call 0x680fd0
// 0063dfd0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0063dfd4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0063dfd8  8b542420             mov edx, dword ptr [esp + 0x20]
// 0063dfdc  83c404               add esp, 4
// 0063dfdf  8bd8                 mov ebx, eax
// 0063dfe1  53                   push ebx
// 0063dfe2  55                   push ebp
// 0063dfe3  83ec10               sub esp, 0x10
// 0063dfe6  8bc4                 mov eax, esp
// 0063dfe8  8908                 mov dword ptr [eax], ecx
// 0063dfea  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0063dfee  895004               mov dword ptr [eax + 4], edx
// 0063dff1  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0063dff5  894808               mov dword ptr [eax + 8], ecx
// 0063dff8  57                   push edi
// 0063dff9  8bce                 mov ecx, esi
// 0063dffb  89500c               mov dword ptr [eax + 0xc], edx
// 0063dffe  e83dfdffff           call 0x63dd40
// 0063e003  837e6000             cmp dword ptr [esi + 0x60], 0
// 0063e007  7439                 je 0x63e042
// 0063e009  6a01                 push 1
// 0063e00b  6a00                 push 0
// 0063e00d  8d442420             lea eax, [esp + 0x20]
// 0063e011  50                   push eax
// 0063e012  ff15d8ed7700         call dword ptr [0x77edd8]
// 0063e018  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0063e01c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0063e020  53                   push ebx
// 0063e021  55                   push ebp
// 0063e022  83ec10               sub esp, 0x10
// 0063e025  8bc4                 mov eax, esp
// 0063e027  8908                 mov dword ptr [eax], ecx
// 0063e029  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0063e02d  895004               mov dword ptr [eax + 4], edx
// 0063e030  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0063e034  894808               mov dword ptr [eax + 8], ecx
// 0063e037  57                   push edi
// 0063e038  8bce                 mov ecx, esi
// 0063e03a  89500c               mov dword ptr [eax + 0xc], edx
// 0063e03d  e8fefcffff           call 0x63dd40
// 0063e042  5f                   pop edi
// 0063e043  5e                   pop esi
// 0063e044  5d                   pop ebp
// 0063e045  5b                   pop ebx
// 0063e046  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ?DrawCheckMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
