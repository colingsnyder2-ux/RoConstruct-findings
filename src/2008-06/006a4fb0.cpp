// roc 2008-06 006a4fb0  unit: CXTPCommandBar  size: 339 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a4fb0
//
// 006a4fb0  56                   push esi
// 006a4fb1  8b742408             mov esi, dword ptr [esp + 8]
// 006a4fb5  57                   push edi
// 006a4fb6  33ff                 xor edi, edi
// 006a4fb8  3bf7                 cmp esi, edi
// 006a4fba  7505                 jne 0x6a4fc1
// 006a4fbc  5f                   pop edi
// 006a4fbd  33c0                 xor eax, eax
// 006a4fbf  5e                   pop esi
// 006a4fc0  c3                   ret 
// 006a4fc1  e81a701100           call 0x7bbfe0
// 006a4fc6  83c058               add eax, 0x58
// 006a4fc9  8378047b             cmp dword ptr [eax + 4], 0x7b
// 006a4fcd  7521                 jne 0x6a4ff0
// 006a4fcf  83780cff             cmp dword ptr [eax + 0xc], -1
// 006a4fd3  751b                 jne 0x6a4ff0
// 006a4fd5  8bce                 mov ecx, esi
// 006a4fd7  e834fe0000           call 0x6b4e10
// 006a4fdc  85c0                 test eax, eax
// 006a4fde  7410                 je 0x6a4ff0
// 006a4fe0  6a01                 push 1
// 006a4fe2  8bce                 mov ecx, esi
// 006a4fe4  e827fe0000           call 0x6b4e10
// 006a4fe9  8bc8                 mov ecx, eax
// 006a4feb  e8c0f5ffff           call 0x6a45b0
// 006a4ff0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a4ff4  3bc7                 cmp eax, edi
// 006a4ff6  7507                 jne 0x6a4fff
// 006a4ff8  8bce                 mov ecx, esi
// 006a4ffa  e8c1290100           call 0x6b79c0
// 006a4fff  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006a5003  8986e4000000         mov dword ptr [esi + 0xe4], eax
// 006a5009  898e08010000         mov dword ptr [esi + 0x108], ecx
// 006a500f  3bc7                 cmp eax, edi
// 006a5011  7417                 je 0x6a502a
// 006a5013  8bc8                 mov ecx, eax
// 006a5015  e87e6f1100           call 0x7bbf98
// 006a501a  a900104000           test eax, 0x401000
// 006a501f  7409                 je 0x6a502a
// 006a5021  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a5025  83c808               or eax, 8
// 006a5028  eb04                 jmp 0x6a502e
// 006a502a  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a502e  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 006a5036  89be54010000         mov dword ptr [esi + 0x154], edi
// 006a503c  a900010000           test eax, 0x100
// 006a5041  740e                 je 0x6a5051
// 006a5043  8d54240c             lea edx, [esp + 0xc]
// 006a5047  899654010000         mov dword ptr [esi + 0x154], edx
// 006a504d  897c240c             mov dword ptr [esp + 0xc], edi
// 006a5051  8bc8                 mov ecx, eax
// 006a5053  83e102               and ecx, 2
// 006a5056  898e20010000         mov dword ptr [esi + 0x120], ecx
// 006a505c  8bc8                 mov ecx, eax
// 006a505e  83e108               and ecx, 8
// 006a5061  83c910               or ecx, 0x10
// 006a5064  8bd0                 mov edx, eax
// 006a5066  c1e903               shr ecx, 3
// 006a5069  53                   push ebx
// 006a506a  83e001               and eax, 1
// 006a506d  81e280000000         and edx, 0x80
// 006a5073  898e9c010000         mov dword ptr [esi + 0x19c], ecx
// 006a5079  8bd8                 mov ebx, eax
// 006a507b  6810306a00           push 0x6a3010
// 006a5080  b99ced9700           mov ecx, 0x97ed9c
// 006a5085  899624010000         mov dword ptr [esi + 0x124], edx
// 006a508b  899e28010000         mov dword ptr [esi + 0x128], ebx
// 006a5091  e8446f1100           call 0x7bbfda
// 006a5096  8bf8                 mov edi, eax
// 006a5098  85ff                 test edi, edi
// 006a509a  7505                 jne 0x6a50a1
// 006a509c  e8a3b8ffff           call 0x6a0944
// 006a50a1  8bcf                 mov ecx, edi
// 006a50a3  85db                 test ebx, ebx
// 006a50a5  750d                 jne 0x6a50b4
// 006a50a7  e824810700           call 0x71d1d0
// 006a50ac  ff15b42d8000         call dword ptr [0x802db4]
// 006a50b2  eb0e                 jmp 0x6a50c2
// 006a50b4  e897810700           call 0x71d250
// 006a50b9  6a01                 push 1
// 006a50bb  8bcf                 mov ecx, edi
// 006a50bd  e83e810700           call 0x71d200
// 006a50c2  8b542424             mov edx, dword ptr [esp + 0x24]
// 006a50c6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006a50ca  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006a50ce  52                   push edx
// 006a50cf  50                   push eax
// 006a50d0  51                   push ecx
// 006a50d1  8bce                 mov ecx, esi
// 006a50d3  c7474001000000       mov dword ptr [edi + 0x40], 1
// 006a50da  e841ad0400           call 0x6efe20
// 006a50df  85c0                 test eax, eax
// 006a50e1  7504                 jne 0x6a50e7
// 006a50e3  5b                   pop ebx
// 006a50e4  5f                   pop edi
// 006a50e5  5e                   pop esi
// 006a50e6  c3                   ret 
// 006a50e7  8bce                 mov ecx, esi
// 006a50e9  e852dbffff           call 0x6a2c40
// 006a50ee  85db                 test ebx, ebx
// 006a50f0  7409                 je 0x6a50fb
// 006a50f2  6a00                 push 0
// 006a50f4  8bcf                 mov ecx, edi
// 006a50f6  e805810700           call 0x71d200
// 006a50fb  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a50ff  5b                   pop ebx
// 006a5100  5f                   pop edi
// 006a5101  5e                   pop esi
// 006a5102  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?TrackPopupMenu@CXTPCommandBars@@SAHPAVCXTPPopupBar@@IHHPAVCWnd@@PBUtagRECT@@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
