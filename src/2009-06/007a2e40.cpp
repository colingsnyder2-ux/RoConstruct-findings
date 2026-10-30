// roc 2009-06 007a2e40  unit: XTPPaintThemes::CXTPDefaultTheme  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a2e40
//
// 007a2e40  83ec10               sub esp, 0x10
// 007a2e43  53                   push ebx
// 007a2e44  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007a2e48  56                   push esi
// 007a2e49  57                   push edi
// 007a2e4a  8d44240c             lea eax, [esp + 0xc]
// 007a2e4e  8bf1                 mov esi, ecx
// 007a2e50  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007a2e53  50                   push eax
// 007a2e54  51                   push ecx
// 007a2e55  ff1514ee8900         call dword ptr [0x89ee14]
// 007a2e5b  6a0f                 push 0xf
// 007a2e5d  8bce                 mov ecx, esi
// 007a2e5f  e81cf9f7ff           call 0x722780
// 007a2e64  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007a2e68  50                   push eax
// 007a2e69  8d542410             lea edx, [esp + 0x10]
// 007a2e6d  52                   push edx
// 007a2e6e  8bcf                 mov ecx, edi
// 007a2e70  e85b69f7ff           call 0x7197d0
// 007a2e75  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 007a2e7b  83f804               cmp eax, 4
// 007a2e7e  7413                 je 0x7a2e93
// 007a2e80  83f805               cmp eax, 5
// 007a2e83  740e                 je 0x7a2e93
// 007a2e85  53                   push ebx
// 007a2e86  8bce                 mov ecx, esi
// 007a2e88  e8e302f8ff           call 0x723170
// 007a2e8d  85c0                 test eax, eax
// 007a2e8f  7569                 jne 0x7a2efa
// 007a2e91  eb3b                 jmp 0x7a2ece
// 007a2e93  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007a2e97  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a2e9b  6a15                 push 0x15
// 007a2e9d  6a0f                 push 0xf
// 007a2e9f  83ec10               sub esp, 0x10
// 007a2ea2  8bc4                 mov eax, esp
// 007a2ea4  8908                 mov dword ptr [eax], ecx
// 007a2ea6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007a2eaa  895004               mov dword ptr [eax + 4], edx
// 007a2ead  8b542430             mov edx, dword ptr [esp + 0x30]
// 007a2eb1  894808               mov dword ptr [eax + 8], ecx
// 007a2eb4  57                   push edi
// 007a2eb5  8bce                 mov ecx, esi
// 007a2eb7  89500c               mov dword ptr [eax + 0xc], edx
// 007a2eba  e8c1faf7ff           call 0x722980
// 007a2ebf  6aff                 push -1
// 007a2ec1  6aff                 push -1
// 007a2ec3  8d442414             lea eax, [esp + 0x14]
// 007a2ec7  50                   push eax
// 007a2ec8  ff15bced8900         call dword ptr [0x89edbc]
// 007a2ece  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007a2ed2  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a2ed6  6a10                 push 0x10
// 007a2ed8  6a14                 push 0x14
// 007a2eda  83ec10               sub esp, 0x10
// 007a2edd  8bc4                 mov eax, esp
// 007a2edf  8908                 mov dword ptr [eax], ecx
// 007a2ee1  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007a2ee5  895004               mov dword ptr [eax + 4], edx
// 007a2ee8  8b542430             mov edx, dword ptr [esp + 0x30]
// 007a2eec  894808               mov dword ptr [eax + 8], ecx
// 007a2eef  57                   push edi
// 007a2ef0  8bce                 mov ecx, esi
// 007a2ef2  89500c               mov dword ptr [eax + 0xc], edx
// 007a2ef5  e886faf7ff           call 0x722980
// 007a2efa  5f                   pop edi
// 007a2efb  5e                   pop esi
// 007a2efc  5b                   pop ebx
// 007a2efd  83c410               add esp, 0x10
// 007a2f00  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?FillCommandBarEntry@CXTPDefaultTheme@XTPPaintThemes@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
