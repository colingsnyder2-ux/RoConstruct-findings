// roc 2009-12 0087dd80  unit: XTPPaintThemes::CXTPDefaultTheme  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087dd80
//
// 0087dd80  83ec10               sub esp, 0x10
// 0087dd83  53                   push ebx
// 0087dd84  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0087dd88  56                   push esi
// 0087dd89  57                   push edi
// 0087dd8a  8d44240c             lea eax, [esp + 0xc]
// 0087dd8e  8bf1                 mov esi, ecx
// 0087dd90  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0087dd93  50                   push eax
// 0087dd94  51                   push ecx
// 0087dd95  ff1550cc9800         call dword ptr [0x98cc50]
// 0087dd9b  6a0f                 push 0xf
// 0087dd9d  8bce                 mov ecx, esi
// 0087dd9f  e89cf8f7ff           call 0x7fd640
// 0087dda4  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0087dda8  50                   push eax
// 0087dda9  8d542410             lea edx, [esp + 0x10]
// 0087ddad  52                   push edx
// 0087ddae  8bcf                 mov ecx, edi
// 0087ddb0  e84968f7ff           call 0x7f45fe
// 0087ddb5  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 0087ddbb  83f804               cmp eax, 4
// 0087ddbe  7413                 je 0x87ddd3
// 0087ddc0  83f805               cmp eax, 5
// 0087ddc3  740e                 je 0x87ddd3
// 0087ddc5  53                   push ebx
// 0087ddc6  8bce                 mov ecx, esi
// 0087ddc8  e86302f8ff           call 0x7fe030
// 0087ddcd  85c0                 test eax, eax
// 0087ddcf  7569                 jne 0x87de3a
// 0087ddd1  eb3b                 jmp 0x87de0e
// 0087ddd3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087ddd7  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087dddb  6a15                 push 0x15
// 0087dddd  6a0f                 push 0xf
// 0087dddf  83ec10               sub esp, 0x10
// 0087dde2  8bc4                 mov eax, esp
// 0087dde4  8908                 mov dword ptr [eax], ecx
// 0087dde6  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087ddea  895004               mov dword ptr [eax + 4], edx
// 0087dded  8b542430             mov edx, dword ptr [esp + 0x30]
// 0087ddf1  894808               mov dword ptr [eax + 8], ecx
// 0087ddf4  57                   push edi
// 0087ddf5  8bce                 mov ecx, esi
// 0087ddf7  89500c               mov dword ptr [eax + 0xc], edx
// 0087ddfa  e841faf7ff           call 0x7fd840
// 0087ddff  6aff                 push -1
// 0087de01  6aff                 push -1
// 0087de03  8d442414             lea eax, [esp + 0x14]
// 0087de07  50                   push eax
// 0087de08  ff1558ca9800         call dword ptr [0x98ca58]
// 0087de0e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087de12  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087de16  6a10                 push 0x10
// 0087de18  6a14                 push 0x14
// 0087de1a  83ec10               sub esp, 0x10
// 0087de1d  8bc4                 mov eax, esp
// 0087de1f  8908                 mov dword ptr [eax], ecx
// 0087de21  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0087de25  895004               mov dword ptr [eax + 4], edx
// 0087de28  8b542430             mov edx, dword ptr [esp + 0x30]
// 0087de2c  894808               mov dword ptr [eax + 8], ecx
// 0087de2f  57                   push edi
// 0087de30  8bce                 mov ecx, esi
// 0087de32  89500c               mov dword ptr [eax + 0xc], edx
// 0087de35  e806faf7ff           call 0x7fd840
// 0087de3a  5f                   pop edi
// 0087de3b  5e                   pop esi
// 0087de3c  5b                   pop ebx
// 0087de3d  83c410               add esp, 0x10
// 0087de40  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPDefaultTheme.cpp (function ?FillCommandBarEntry@CXTPDefaultTheme@XTPPaintThemes@@UAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDefaultTheme.cpp
