// roc 2011-06 00810970  unit: CXTPPaintManager  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00810970
//
// 00810970  53                   push ebx
// 00810971  55                   push ebp
// 00810972  56                   push esi
// 00810973  57                   push edi
// 00810974  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00810978  57                   push edi
// 00810979  8bf1                 mov esi, ecx
// 0081097b  e850d20400           call 0x85dbd0
// 00810980  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00810984  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00810988  8b542420             mov edx, dword ptr [esp + 0x20]
// 0081098c  83c404               add esp, 4
// 0081098f  8bd8                 mov ebx, eax
// 00810991  53                   push ebx
// 00810992  55                   push ebp
// 00810993  83ec10               sub esp, 0x10
// 00810996  8bc4                 mov eax, esp
// 00810998  8908                 mov dword ptr [eax], ecx
// 0081099a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0081099e  895004               mov dword ptr [eax + 4], edx
// 008109a1  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008109a5  894808               mov dword ptr [eax + 8], ecx
// 008109a8  57                   push edi
// 008109a9  8bce                 mov ecx, esi
// 008109ab  89500c               mov dword ptr [eax + 0xc], edx
// 008109ae  e82dfdffff           call 0x8106e0
// 008109b3  837e6000             cmp dword ptr [esi + 0x60], 0
// 008109b7  7439                 je 0x8109f2
// 008109b9  6a01                 push 1
// 008109bb  6a00                 push 0
// 008109bd  8d442420             lea eax, [esp + 0x20]
// 008109c1  50                   push eax
// 008109c2  ff15601ca400         call dword ptr [0xa41c60]
// 008109c8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008109cc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008109d0  53                   push ebx
// 008109d1  55                   push ebp
// 008109d2  83ec10               sub esp, 0x10
// 008109d5  8bc4                 mov eax, esp
// 008109d7  8908                 mov dword ptr [eax], ecx
// 008109d9  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008109dd  895004               mov dword ptr [eax + 4], edx
// 008109e0  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008109e4  894808               mov dword ptr [eax + 8], ecx
// 008109e7  57                   push edi
// 008109e8  8bce                 mov ecx, esi
// 008109ea  89500c               mov dword ptr [eax + 0xc], edx
// 008109ed  e8eefcffff           call 0x8106e0
// 008109f2  5f                   pop edi
// 008109f3  5e                   pop esi
// 008109f4  5d                   pop ebp
// 008109f5  5b                   pop ebx
// 008109f6  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawCheckMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
