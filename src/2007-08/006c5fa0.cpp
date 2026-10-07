// roc 2007-08 006c5fa0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c5fa0
//
// 006c5fa0  83ec10               sub esp, 0x10
// 006c5fa3  837c243000           cmp dword ptr [esp + 0x30], 0
// 006c5fa8  53                   push ebx
// 006c5fa9  55                   push ebp
// 006c5faa  56                   push esi
// 006c5fab  57                   push edi
// 006c5fac  8bd9                 mov ebx, ecx
// 006c5fae  0f8422010000         je 0x6c60d6
// 006c5fb4  8b542438             mov edx, dword ptr [esp + 0x38]
// 006c5fb8  8b742434             mov esi, dword ptr [esp + 0x34]
// 006c5fbc  2b542430             sub edx, dword ptr [esp + 0x30]
// 006c5fc0  b801000000           mov eax, 1
// 006c5fc5  8d4e01               lea ecx, [esi + 1]
// 006c5fc8  894c2418             mov dword ptr [esp + 0x18], ecx
// 006c5fcc  03d0                 add edx, eax
// 006c5fce  6a29                 push 0x29
// 006c5fd0  8bcb                 mov ecx, ebx
// 006c5fd2  89442414             mov dword ptr [esp + 0x14], eax
// 006c5fd6  89442418             mov dword ptr [esp + 0x18], eax
// 006c5fda  89542420             mov dword ptr [esp + 0x20], edx
// 006c5fde  e88d6df7ff           call 0x63cd70
// 006c5fe3  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 006c5fe7  50                   push eax
// 006c5fe8  8d442414             lea eax, [esp + 0x14]
// 006c5fec  50                   push eax
// 006c5fed  8bcd                 mov ecx, ebp
// 006c5fef  e8bca8f6ff           call 0x6308b0
// 006c5ff4  6aff                 push -1
// 006c5ff6  6aff                 push -1
// 006c5ff8  8d4c2418             lea ecx, [esp + 0x18]
// 006c5ffc  51                   push ecx
// 006c5ffd  ff1590ed7700         call dword ptr [0x77ed90]
// 006c6003  8bc6                 mov eax, esi
// 006c6005  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 006c6009  b910000000           mov ecx, 0x10
// 006c600e  99                   cdq 
// 006c600f  2bc2                 sub eax, edx
// 006c6011  d1f8                 sar eax, 1
// 006c6013  8d78f6               lea edi, [eax - 0xa]
// 006c6016  83ff10               cmp edi, 0x10
// 006c6019  7f02                 jg 0x6c601d
// 006c601b  8bcf                 mov ecx, edi
// 006c601d  8b542418             mov edx, dword ptr [esp + 0x18]
// 006c6021  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c6025  03c2                 add eax, edx
// 006c6027  99                   cdq 
// 006c6028  2bc2                 sub eax, edx
// 006c602a  d1f8                 sar eax, 1
// 006c602c  8bf0                 mov esi, eax
// 006c602e  2bf1                 sub esi, ecx
// 006c6030  83ff10               cmp edi, 0x10
// 006c6033  7e05                 jle 0x6c603a
// 006c6035  bf10000000           mov edi, 0x10
// 006c603a  03f8                 add edi, eax
// 006c603c  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 006c6041  7449                 je 0x6c608c
// 006c6043  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c6047  8b542414             mov edx, dword ptr [esp + 0x14]
// 006c604b  6a1f                 push 0x1f
// 006c604d  6a20                 push 0x20
// 006c604f  83ec10               sub esp, 0x10
// 006c6052  8bc4                 mov eax, esp
// 006c6054  8908                 mov dword ptr [eax], ecx
// 006c6056  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006c605a  895004               mov dword ptr [eax + 4], edx
// 006c605d  8b542434             mov edx, dword ptr [esp + 0x34]
// 006c6061  894808               mov dword ptr [eax + 8], ecx
// 006c6064  55                   push ebp
// 006c6065  8bcb                 mov ecx, ebx
// 006c6067  89500c               mov dword ptr [eax + 0xc], edx
// 006c606a  e8717cf7ff           call 0x63dce0
// 006c606f  3bf7                 cmp esi, edi
// 006c6071  7d63                 jge 0x6c60d6
// 006c6073  6a2d                 push 0x2d
// 006c6075  6a04                 push 4
// 006c6077  57                   push edi
// 006c6078  6a04                 push 4
// 006c607a  56                   push esi
// 006c607b  55                   push ebp
// 006c607c  8bcb                 mov ecx, ebx
// 006c607e  e87d80f7ff           call 0x63e100
// 006c6083  6a2d                 push 0x2d
// 006c6085  6a06                 push 6
// 006c6087  57                   push edi
// 006c6088  6a06                 push 6
// 006c608a  eb41                 jmp 0x6c60cd
// 006c608c  6a1e                 push 0x1e
// 006c608e  8bcb                 mov ecx, ebx
// 006c6090  e8db6cf7ff           call 0x63cd70
// 006c6095  50                   push eax
// 006c6096  8d442414             lea eax, [esp + 0x14]
// 006c609a  50                   push eax
// 006c609b  8bcd                 mov ecx, ebp
// 006c609d  e80ea8f6ff           call 0x6308b0
// 006c60a2  3bf7                 cmp esi, edi
// 006c60a4  7d30                 jge 0x6c60d6
// 006c60a6  6a26                 push 0x26
// 006c60a8  6a03                 push 3
// 006c60aa  57                   push edi
// 006c60ab  6a03                 push 3
// 006c60ad  56                   push esi
// 006c60ae  55                   push ebp
// 006c60af  8bcb                 mov ecx, ebx
// 006c60b1  e84a80f7ff           call 0x63e100
// 006c60b6  6a26                 push 0x26
// 006c60b8  6a05                 push 5
// 006c60ba  57                   push edi
// 006c60bb  6a05                 push 5
// 006c60bd  56                   push esi
// 006c60be  55                   push ebp
// 006c60bf  8bcb                 mov ecx, ebx
// 006c60c1  e83a80f7ff           call 0x63e100
// 006c60c6  6a26                 push 0x26
// 006c60c8  6a07                 push 7
// 006c60ca  57                   push edi
// 006c60cb  6a07                 push 7
// 006c60cd  56                   push esi
// 006c60ce  55                   push ebp
// 006c60cf  8bcb                 mov ecx, ebx
// 006c60d1  e82a80f7ff           call 0x63e100
// 006c60d6  8b442424             mov eax, dword ptr [esp + 0x24]
// 006c60da  5f                   pop edi
// 006c60db  5e                   pop esi
// 006c60dc  5d                   pop ebp
// 006c60dd  c70000000000         mov dword ptr [eax], 0
// 006c60e3  c7400409000000       mov dword ptr [eax + 4], 9
// 006c60ea  5b                   pop ebx
// 006c60eb  83c410               add esp, 0x10
// 006c60ee  c22000               ret 0x20
// library xtp-11.2.2-vc8/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawTearOffGripper@CXTPOfficeTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPOfficeTheme.cpp
