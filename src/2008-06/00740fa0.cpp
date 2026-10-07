// roc 2008-06 00740fa0  unit: XTPPaintThemes::CXTPOfficeTheme  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00740fa0
//
// 00740fa0  83ec10               sub esp, 0x10
// 00740fa3  837c243000           cmp dword ptr [esp + 0x30], 0
// 00740fa8  53                   push ebx
// 00740fa9  55                   push ebp
// 00740faa  56                   push esi
// 00740fab  57                   push edi
// 00740fac  8bd9                 mov ebx, ecx
// 00740fae  0f8422010000         je 0x7410d6
// 00740fb4  8b542438             mov edx, dword ptr [esp + 0x38]
// 00740fb8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00740fbc  2b542430             sub edx, dword ptr [esp + 0x30]
// 00740fc0  b801000000           mov eax, 1
// 00740fc5  41                   inc ecx
// 00740fc6  894c2418             mov dword ptr [esp + 0x18], ecx
// 00740fca  03d0                 add edx, eax
// 00740fcc  6a29                 push 0x29
// 00740fce  8bcb                 mov ecx, ebx
// 00740fd0  89442414             mov dword ptr [esp + 0x14], eax
// 00740fd4  89442418             mov dword ptr [esp + 0x18], eax
// 00740fd8  89542420             mov dword ptr [esp + 0x20], edx
// 00740fdc  e88fd0f6ff           call 0x6ae070
// 00740fe1  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00740fe5  50                   push eax
// 00740fe6  8d442414             lea eax, [esp + 0x14]
// 00740fea  50                   push eax
// 00740feb  8bcd                 mov ecx, ebp
// 00740fed  e86c03f6ff           call 0x6a135e
// 00740ff2  6aff                 push -1
// 00740ff4  6aff                 push -1
// 00740ff6  8d4c2418             lea ecx, [esp + 0x18]
// 00740ffa  51                   push ecx
// 00740ffb  ff15282d8000         call dword ptr [0x802d28]
// 00741001  8b442434             mov eax, dword ptr [esp + 0x34]
// 00741005  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 00741009  b910000000           mov ecx, 0x10
// 0074100e  99                   cdq 
// 0074100f  2bc2                 sub eax, edx
// 00741011  d1f8                 sar eax, 1
// 00741013  8d78f6               lea edi, [eax - 0xa]
// 00741016  83ff10               cmp edi, 0x10
// 00741019  7f02                 jg 0x74101d
// 0074101b  8bcf                 mov ecx, edi
// 0074101d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00741021  8b442410             mov eax, dword ptr [esp + 0x10]
// 00741025  03c2                 add eax, edx
// 00741027  99                   cdq 
// 00741028  2bc2                 sub eax, edx
// 0074102a  d1f8                 sar eax, 1
// 0074102c  8bf0                 mov esi, eax
// 0074102e  2bf1                 sub esi, ecx
// 00741030  83ff10               cmp edi, 0x10
// 00741033  7e05                 jle 0x74103a
// 00741035  bf10000000           mov edi, 0x10
// 0074103a  03f8                 add edi, eax
// 0074103c  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00741041  7449                 je 0x74108c
// 00741043  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00741047  8b542414             mov edx, dword ptr [esp + 0x14]
// 0074104b  6a1f                 push 0x1f
// 0074104d  6a20                 push 0x20
// 0074104f  83ec10               sub esp, 0x10
// 00741052  8bc4                 mov eax, esp
// 00741054  8908                 mov dword ptr [eax], ecx
// 00741056  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0074105a  895004               mov dword ptr [eax + 4], edx
// 0074105d  8b542434             mov edx, dword ptr [esp + 0x34]
// 00741061  894808               mov dword ptr [eax + 8], ecx
// 00741064  55                   push ebp
// 00741065  8bcb                 mov ecx, ebx
// 00741067  89500c               mov dword ptr [eax + 0xc], edx
// 0074106a  e861e0f6ff           call 0x6af0d0
// 0074106f  3bf7                 cmp esi, edi
// 00741071  7d63                 jge 0x7410d6
// 00741073  6a2d                 push 0x2d
// 00741075  6a04                 push 4
// 00741077  57                   push edi
// 00741078  6a04                 push 4
// 0074107a  56                   push esi
// 0074107b  55                   push ebp
// 0074107c  8bcb                 mov ecx, ebx
// 0074107e  e88de4f6ff           call 0x6af510
// 00741083  6a2d                 push 0x2d
// 00741085  6a06                 push 6
// 00741087  57                   push edi
// 00741088  6a06                 push 6
// 0074108a  eb41                 jmp 0x7410cd
// 0074108c  6a1e                 push 0x1e
// 0074108e  8bcb                 mov ecx, ebx
// 00741090  e8dbcff6ff           call 0x6ae070
// 00741095  50                   push eax
// 00741096  8d442414             lea eax, [esp + 0x14]
// 0074109a  50                   push eax
// 0074109b  8bcd                 mov ecx, ebp
// 0074109d  e8bc02f6ff           call 0x6a135e
// 007410a2  3bf7                 cmp esi, edi
// 007410a4  7d30                 jge 0x7410d6
// 007410a6  6a26                 push 0x26
// 007410a8  6a03                 push 3
// 007410aa  57                   push edi
// 007410ab  6a03                 push 3
// 007410ad  56                   push esi
// 007410ae  55                   push ebp
// 007410af  8bcb                 mov ecx, ebx
// 007410b1  e85ae4f6ff           call 0x6af510
// 007410b6  6a26                 push 0x26
// 007410b8  6a05                 push 5
// 007410ba  57                   push edi
// 007410bb  6a05                 push 5
// 007410bd  56                   push esi
// 007410be  55                   push ebp
// 007410bf  8bcb                 mov ecx, ebx
// 007410c1  e84ae4f6ff           call 0x6af510
// 007410c6  6a26                 push 0x26
// 007410c8  6a07                 push 7
// 007410ca  57                   push edi
// 007410cb  6a07                 push 7
// 007410cd  56                   push esi
// 007410ce  55                   push ebp
// 007410cf  8bcb                 mov ecx, ebx
// 007410d1  e83ae4f6ff           call 0x6af510
// 007410d6  8b442424             mov eax, dword ptr [esp + 0x24]
// 007410da  5f                   pop edi
// 007410db  5e                   pop esi
// 007410dc  5d                   pop ebp
// 007410dd  c70000000000         mov dword ptr [eax], 0
// 007410e3  c7400409000000       mov dword ptr [eax + 4], 9
// 007410ea  5b                   pop ebx
// 007410eb  83c410               add esp, 0x10
// 007410ee  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPOfficeTheme.cpp (function ?DrawTearOffGripper@CXTPOfficeTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOfficeTheme.cpp
