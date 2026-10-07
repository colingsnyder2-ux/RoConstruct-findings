// roc 2012-06 00a10c30  unit: XTPPaintThemes::CXTPOfficeTheme  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a10c30
//
// 00a10c30  837c242000           cmp dword ptr [esp + 0x20], 0
// 00a10c35  56                   push esi
// 00a10c36  7553                 jne 0xa10c8b
// 00a10c38  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a10c3c  83f802               cmp eax, 2
// 00a10c3f  7405                 je 0xa10c46
// 00a10c41  83f803               cmp eax, 3
// 00a10c44  7526                 jne 0xa10c6c
// 00a10c46  837c243405           cmp dword ptr [esp + 0x34], 5
// 00a10c4b  7415                 je 0xa10c62
// 00a10c4d  33c0                 xor eax, eax
// 00a10c4f  39442428             cmp dword ptr [esp + 0x28], eax
// 00a10c53  0f95c0               setne al
// 00a10c56  8d44001f             lea eax, [eax + eax + 0x1f]
// 00a10c5a  50                   push eax
// 00a10c5b  6a20                 push 0x20
// 00a10c5d  e981000000           jmp 0xa10ce3
// 00a10c62  b829000000           mov eax, 0x29
// 00a10c67  50                   push eax
// 00a10c68  6a20                 push 0x20
// 00a10c6a  eb77                 jmp 0xa10ce3
// 00a10c6c  837c242800           cmp dword ptr [esp + 0x28], 0
// 00a10c71  0f8496000000         je 0xa10d0d
// 00a10c77  8b542434             mov edx, dword ptr [esp + 0x34]
// 00a10c7b  83ea05               sub edx, 5
// 00a10c7e  f7da                 neg edx
// 00a10c80  1bd2                 sbb edx, edx
// 00a10c82  83e225               and edx, 0x25
// 00a10c85  4a                   dec edx
// 00a10c86  52                   push edx
// 00a10c87  6a3a                 push 0x3a
// 00a10c89  eb58                 jmp 0xa10ce3
// 00a10c8b  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 00a10c90  7406                 je 0xa10c98
// 00a10c92  6a1e                 push 0x1e
// 00a10c94  6a2b                 push 0x2b
// 00a10c96  eb4b                 jmp 0xa10ce3
// 00a10c98  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a10c9c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a10ca0  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00a10ca4  83fa02               cmp edx, 2
// 00a10ca7  750e                 jne 0xa10cb7
// 00a10ca9  85f6                 test esi, esi
// 00a10cab  751c                 jne 0xa10cc9
// 00a10cad  85c0                 test eax, eax
// 00a10caf  751c                 jne 0xa10ccd
// 00a10cb1  6a33                 push 0x33
// 00a10cb3  6a25                 push 0x25
// 00a10cb5  eb2c                 jmp 0xa10ce3
// 00a10cb7  85d2                 test edx, edx
// 00a10cb9  7412                 je 0xa10ccd
// 00a10cbb  85f6                 test esi, esi
// 00a10cbd  750a                 jne 0xa10cc9
// 00a10cbf  85c0                 test eax, eax
// 00a10cc1  750a                 jne 0xa10ccd
// 00a10cc3  6a24                 push 0x24
// 00a10cc5  6a25                 push 0x25
// 00a10cc7  eb1a                 jmp 0xa10ce3
// 00a10cc9  85c0                 test eax, eax
// 00a10ccb  7412                 je 0xa10cdf
// 00a10ccd  83f802               cmp eax, 2
// 00a10cd0  740d                 je 0xa10cdf
// 00a10cd2  83f803               cmp eax, 3
// 00a10cd5  7408                 je 0xa10cdf
// 00a10cd7  85f6                 test esi, esi
// 00a10cd9  7436                 je 0xa10d11
// 00a10cdb  85c0                 test eax, eax
// 00a10cdd  7436                 je 0xa10d15
// 00a10cdf  6a21                 push 0x21
// 00a10ce1  6a32                 push 0x32
// 00a10ce3  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a10ce7  83ec10               sub esp, 0x10
// 00a10cea  8bc4                 mov eax, esp
// 00a10cec  8910                 mov dword ptr [eax], edx
// 00a10cee  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a10cf2  895004               mov dword ptr [eax + 4], edx
// 00a10cf5  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a10cf9  895008               mov dword ptr [eax + 8], edx
// 00a10cfc  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a10d00  89500c               mov dword ptr [eax + 0xc], edx
// 00a10d03  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a10d07  50                   push eax
// 00a10d08  e8637cf7ff           call 0x988970
// 00a10d0d  5e                   pop esi
// 00a10d0e  c23000               ret 0x30
// 00a10d11  85c0                 test eax, eax
// 00a10d13  74f8                 je 0xa10d0d
// 00a10d15  6a1f                 push 0x1f
// 00a10d17  6a20                 push 0x20
// 00a10d19  ebc8                 jmp 0xa10ce3
// library xtp-13.2.1/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawRectangle@CXTPOfficeTheme@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/CommandBars/XTPOfficeTheme.cpp
