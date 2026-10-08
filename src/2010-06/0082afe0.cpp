// roc 2010-06 0082afe0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0082afe0
//
// 0082afe0  83ec10               sub esp, 0x10
// 0082afe3  53                   push ebx
// 0082afe4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0082afe8  56                   push esi
// 0082afe9  57                   push edi
// 0082afea  8d44240c             lea eax, [esp + 0xc]
// 0082afee  8bf1                 mov esi, ecx
// 0082aff0  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0082aff3  50                   push eax
// 0082aff4  51                   push ecx
// 0082aff5  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 0082affb  6a0f                 push 0xf
// 0082affd  8bce                 mov ecx, esi
// 0082afff  e80c21f8ff           call 0x7ad110
// 0082b004  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0082b008  50                   push eax
// 0082b009  8d542410             lea edx, [esp + 0x10]
// 0082b00d  52                   push edx
// 0082b00e  8bcf                 mov ecx, edi
// 0082b010  e829d7f7ff           call 0x7a873e
// 0082b015  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 0082b01b  83f804               cmp eax, 4
// 0082b01e  7413                 je 0x82b033
// 0082b020  83f805               cmp eax, 5
// 0082b023  740e                 je 0x82b033
// 0082b025  53                   push ebx
// 0082b026  8bce                 mov ecx, esi
// 0082b028  e8d32af8ff           call 0x7adb00
// 0082b02d  85c0                 test eax, eax
// 0082b02f  7569                 jne 0x82b09a
// 0082b031  eb3b                 jmp 0x82b06e
// 0082b033  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082b037  8b542410             mov edx, dword ptr [esp + 0x10]
// 0082b03b  6a15                 push 0x15
// 0082b03d  6a0f                 push 0xf
// 0082b03f  83ec10               sub esp, 0x10
// 0082b042  8bc4                 mov eax, esp
// 0082b044  8908                 mov dword ptr [eax], ecx
// 0082b046  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0082b04a  895004               mov dword ptr [eax + 4], edx
// 0082b04d  8b542430             mov edx, dword ptr [esp + 0x30]
// 0082b051  894808               mov dword ptr [eax + 8], ecx
// 0082b054  57                   push edi
// 0082b055  8bce                 mov ecx, esi
// 0082b057  89500c               mov dword ptr [eax + 0xc], edx
// 0082b05a  e8b122f8ff           call 0x7ad310
// 0082b05f  6aff                 push -1
// 0082b061  6aff                 push -1
// 0082b063  8d442414             lea eax, [esp + 0x14]
// 0082b067  50                   push eax
// 0082b068  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 0082b06e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082b072  8b542410             mov edx, dword ptr [esp + 0x10]
// 0082b076  6a10                 push 0x10
// 0082b078  6a14                 push 0x14
// 0082b07a  83ec10               sub esp, 0x10
// 0082b07d  8bc4                 mov eax, esp
// 0082b07f  8908                 mov dword ptr [eax], ecx
// 0082b081  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0082b085  895004               mov dword ptr [eax + 4], edx
// 0082b088  8b542430             mov edx, dword ptr [esp + 0x30]
// 0082b08c  894808               mov dword ptr [eax + 8], ecx
// 0082b08f  57                   push edi
// 0082b090  8bce                 mov ecx, esi
// 0082b092  89500c               mov dword ptr [eax + 0xc], edx
// 0082b095  e87622f8ff           call 0x7ad310
// 0082b09a  5f                   pop edi
// 0082b09b  5e                   pop esi
// 0082b09c  5b                   pop ebx
// 0082b09d  83c410               add esp, 0x10
// 0082b0a0  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?FillCommandBarEntry@CXTPDefaultTheme@XTPPaintThemes@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
