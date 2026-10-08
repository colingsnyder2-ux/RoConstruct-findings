// roc 2007-03 00728af0  unit: seg_00720000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00728af0
//
// 00728af0  83ec10               sub esp, 0x10
// 00728af3  56                   push esi
// 00728af4  8bf1                 mov esi, ecx
// 00728af6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00728afa  8b4104               mov eax, dword ptr [ecx + 4]
// 00728afd  89442408             mov dword ptr [esp + 8], eax
// 00728b01  8b4108               mov eax, dword ptr [ecx + 8]
// 00728b04  85c0                 test eax, eax
// 00728b06  57                   push edi
// 00728b07  89442410             mov dword ptr [esp + 0x10], eax
// 00728b0b  7410                 je 0x728b1d
// 00728b0d  83c004               add eax, 4
// 00728b10  ba01000000           mov edx, 1
// 00728b15  f00fc110             lock xadd dword ptr [eax], edx
// 00728b19  8b442410             mov eax, dword ptr [esp + 0x10]
// 00728b1d  8a490c               mov cl, byte ptr [ecx + 0xc]
// 00728b20  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00728b24  8b7e04               mov edi, dword ptr [esi + 4]
// 00728b27  895604               mov dword ptr [esi + 4], edx
// 00728b2a  8b5608               mov edx, dword ptr [esi + 8]
// 00728b2d  894608               mov dword ptr [esi + 8], eax
// 00728b30  8a460c               mov al, byte ptr [esi + 0xc]
// 00728b33  884e0c               mov byte ptr [esi + 0xc], cl
// 00728b36  8d4c2408             lea ecx, [esp + 8]
// 00728b3a  897c240c             mov dword ptr [esp + 0xc], edi
// 00728b3e  89542410             mov dword ptr [esp + 0x10], edx
// 00728b42  88442414             mov byte ptr [esp + 0x14], al
// 00728b46  e815ffffff           call 0x728a60
// 00728b4b  5f                   pop edi
// 00728b4c  8bc6                 mov eax, esi
// 00728b4e  5e                   pop esi
// 00728b4f  83c410               add esp, 0x10
// 00728b52  c20400               ret 4
// library boost-1.34.1/libs\signals\src\connection.cpp (function ??4connection@signals@boost@@QAEAAV012@ABV012@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/connection.cpp
