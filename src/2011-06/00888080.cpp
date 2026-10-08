// roc 2011-06 00888080  unit: XTPPaintThemes::CXTPDefaultTheme  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00888080
//
// 00888080  83ec10               sub esp, 0x10
// 00888083  53                   push ebx
// 00888084  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00888088  56                   push esi
// 00888089  57                   push edi
// 0088808a  8d44240c             lea eax, [esp + 0xc]
// 0088808e  8bf1                 mov esi, ecx
// 00888090  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00888093  50                   push eax
// 00888094  51                   push ecx
// 00888095  ff157c1ca400         call dword ptr [0xa41c7c]
// 0088809b  6a0f                 push 0xf
// 0088809d  8bce                 mov ecx, esi
// 0088809f  e80c75f8ff           call 0x80f5b0
// 008880a4  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008880a8  50                   push eax
// 008880a9  8d542410             lea edx, [esp + 0x10]
// 008880ad  52                   push edx
// 008880ae  8bcf                 mov ecx, edi
// 008880b0  e86b2df8ff           call 0x80ae20
// 008880b5  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 008880bb  83f804               cmp eax, 4
// 008880be  7413                 je 0x8880d3
// 008880c0  83f805               cmp eax, 5
// 008880c3  740e                 je 0x8880d3
// 008880c5  53                   push ebx
// 008880c6  8bce                 mov ecx, esi
// 008880c8  e8d37ef8ff           call 0x80ffa0
// 008880cd  85c0                 test eax, eax
// 008880cf  7569                 jne 0x88813a
// 008880d1  eb3b                 jmp 0x88810e
// 008880d3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008880d7  8b542410             mov edx, dword ptr [esp + 0x10]
// 008880db  6a15                 push 0x15
// 008880dd  6a0f                 push 0xf
// 008880df  83ec10               sub esp, 0x10
// 008880e2  8bc4                 mov eax, esp
// 008880e4  8908                 mov dword ptr [eax], ecx
// 008880e6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008880ea  895004               mov dword ptr [eax + 4], edx
// 008880ed  8b542430             mov edx, dword ptr [esp + 0x30]
// 008880f1  894808               mov dword ptr [eax + 8], ecx
// 008880f4  57                   push edi
// 008880f5  8bce                 mov ecx, esi
// 008880f7  89500c               mov dword ptr [eax + 0xc], edx
// 008880fa  e8b176f8ff           call 0x80f7b0
// 008880ff  6aff                 push -1
// 00888101  6aff                 push -1
// 00888103  8d442414             lea eax, [esp + 0x14]
// 00888107  50                   push eax
// 00888108  ff15e41ba400         call dword ptr [0xa41be4]
// 0088810e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00888112  8b542410             mov edx, dword ptr [esp + 0x10]
// 00888116  6a10                 push 0x10
// 00888118  6a14                 push 0x14
// 0088811a  83ec10               sub esp, 0x10
// 0088811d  8bc4                 mov eax, esp
// 0088811f  8908                 mov dword ptr [eax], ecx
// 00888121  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00888125  895004               mov dword ptr [eax + 4], edx
// 00888128  8b542430             mov edx, dword ptr [esp + 0x30]
// 0088812c  894808               mov dword ptr [eax + 8], ecx
// 0088812f  57                   push edi
// 00888130  8bce                 mov ecx, esi
// 00888132  89500c               mov dword ptr [eax + 0xc], edx
// 00888135  e87676f8ff           call 0x80f7b0
// 0088813a  5f                   pop edi
// 0088813b  5e                   pop esi
// 0088813c  5b                   pop ebx
// 0088813d  83c410               add esp, 0x10
// 00888140  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?FillCommandBarEntry@CXTPDefaultTheme@XTPPaintThemes@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
