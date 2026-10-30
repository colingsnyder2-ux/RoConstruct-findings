// roc 2009-06 00723ae0  unit: CXTPPaintManager  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00723ae0
//
// 00723ae0  53                   push ebx
// 00723ae1  55                   push ebp
// 00723ae2  56                   push esi
// 00723ae3  57                   push edi
// 00723ae4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00723ae8  57                   push edi
// 00723ae9  8bf1                 mov esi, ecx
// 00723aeb  e820d80400           call 0x771310
// 00723af0  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00723af4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00723af8  8b542420             mov edx, dword ptr [esp + 0x20]
// 00723afc  83c404               add esp, 4
// 00723aff  8bd8                 mov ebx, eax
// 00723b01  53                   push ebx
// 00723b02  55                   push ebp
// 00723b03  83ec10               sub esp, 0x10
// 00723b06  8bc4                 mov eax, esp
// 00723b08  8908                 mov dword ptr [eax], ecx
// 00723b0a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00723b0e  895004               mov dword ptr [eax + 4], edx
// 00723b11  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00723b15  894808               mov dword ptr [eax + 8], ecx
// 00723b18  57                   push edi
// 00723b19  8bce                 mov ecx, esi
// 00723b1b  89500c               mov dword ptr [eax + 0xc], edx
// 00723b1e  e82dfdffff           call 0x723850
// 00723b23  837e6000             cmp dword ptr [esi + 0x60], 0
// 00723b27  7439                 je 0x723b62
// 00723b29  6a01                 push 1
// 00723b2b  6a00                 push 0
// 00723b2d  8d442420             lea eax, [esp + 0x20]
// 00723b31  50                   push eax
// 00723b32  ff15f8ed8900         call dword ptr [0x89edf8]
// 00723b38  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00723b3c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00723b40  53                   push ebx
// 00723b41  55                   push ebp
// 00723b42  83ec10               sub esp, 0x10
// 00723b45  8bc4                 mov eax, esp
// 00723b47  8908                 mov dword ptr [eax], ecx
// 00723b49  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00723b4d  895004               mov dword ptr [eax + 4], edx
// 00723b50  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00723b54  894808               mov dword ptr [eax + 8], ecx
// 00723b57  57                   push edi
// 00723b58  8bce                 mov ecx, esi
// 00723b5a  89500c               mov dword ptr [eax + 0xc], edx
// 00723b5d  e8eefcffff           call 0x723850
// 00723b62  5f                   pop edi
// 00723b63  5e                   pop esi
// 00723b64  5d                   pop ebp
// 00723b65  5b                   pop ebx
// 00723b66  c21800               ret 0x18
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawCheckMark@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
