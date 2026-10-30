// from server: 100% by auto
// roc 2007-08 0070f770  unit: CXTPOffice2007Image  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070f770
//
// 0070f770  83ec10               sub esp, 0x10
// 0070f773  53                   push ebx
// 0070f774  55                   push ebp
// 0070f775  56                   push esi
// 0070f776  8b742424             mov esi, dword ptr [esp + 0x24]
// 0070f77a  8b06                 mov eax, dword ptr [esi]
// 0070f77c  57                   push edi
// 0070f77d  8b7e08               mov edi, dword ptr [esi + 8]
// 0070f780  2bf8                 sub edi, eax
// 0070f782  85ff                 test edi, edi
// 0070f784  894c2414             mov dword ptr [esp + 0x14], ecx
// 0070f788  89442410             mov dword ptr [esp + 0x10], eax
// 0070f78c  0f8ef1000000         jle 0x70f883
// 0070f792  8b460c               mov eax, dword ptr [esi + 0xc]
// 0070f795  8bc8                 mov ecx, eax
// 0070f797  2b4e04               sub ecx, dword ptr [esi + 4]
// 0070f79a  85c9                 test ecx, ecx
// 0070f79c  894c2418             mov dword ptr [esp + 0x18], ecx
// 0070f7a0  0f8edd000000         jle 0x70f883
// 0070f7a6  8b5c2430             mov ebx, dword ptr [esp + 0x30]
// 0070f7aa  8b13                 mov edx, dword ptr [ebx]
// 0070f7ac  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0070f7af  2bca                 sub ecx, edx
// 0070f7b1  85c9                 test ecx, ecx
// 0070f7b3  894c2428             mov dword ptr [esp + 0x28], ecx
// 0070f7b7  0f8ec6000000         jle 0x70f883
// 0070f7bd  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0070f7c0  8b6b04               mov ebp, dword ptr [ebx + 4]
// 0070f7c3  8bca                 mov ecx, edx
// 0070f7c5  2bcd                 sub ecx, ebp
// 0070f7c7  85c9                 test ecx, ecx
// 0070f7c9  0f8eb4000000         jle 0x70f883
// 0070f7cf  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0070f7d3  837d2400             cmp dword ptr [ebp + 0x24], 0
// 0070f7d7  7434                 je 0x70f80d
// 0070f7d9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0070f7dd  85c0                 test eax, eax
// 0070f7df  7504                 jne 0x70f7e5
// 0070f7e1  33c9                 xor ecx, ecx
// 0070f7e3  eb03                 jmp 0x70f7e8
// 0070f7e5  8b4804               mov ecx, dword ptr [eax + 4]
// 0070f7e8  8b442424             mov eax, dword ptr [esp + 0x24]
// 0070f7ec  85c0                 test eax, eax
// 0070f7ee  7403                 je 0x70f7f3
// 0070f7f0  8b4004               mov eax, dword ptr [eax + 4]
// 0070f7f3  53                   push ebx
// 0070f7f4  51                   push ecx
// 0070f7f5  56                   push esi
// 0070f7f6  50                   push eax
// 0070f7f7  e8d4e7f3ff           call 0x64dfd0
// 0070f7fc  8bc8                 mov ecx, eax
// 0070f7fe  e87debf3ff           call 0x64e380
// 0070f803  5f                   pop edi
// 0070f804  5e                   pop esi
// 0070f805  5d                   pop ebp
// 0070f806  5b                   pop ebx
// 0070f807  83c410               add esp, 0x10
// 0070f80a  c21000               ret 0x10
// 0070f80d  397c2428             cmp dword ptr [esp + 0x28], edi
// 0070f811  7537                 jne 0x70f84a
// 0070f813  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 0070f817  7531                 jne 0x70f84a
// 0070f819  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0070f81c  8b13                 mov edx, dword ptr [ebx]
// 0070f81e  8b7604               mov esi, dword ptr [esi + 4]
// 0070f821  682000cc00           push 0xcc0020
// 0070f826  51                   push ecx
// 0070f827  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0070f82b  52                   push edx
// 0070f82c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0070f830  51                   push ecx
// 0070f831  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0070f835  2bc6                 sub eax, esi
// 0070f837  50                   push eax
// 0070f838  57                   push edi
// 0070f839  56                   push esi
// 0070f83a  52                   push edx
// 0070f83b  e880dff2ff           call 0x63d7c0
// 0070f840  5f                   pop edi
// 0070f841  5e                   pop esi
// 0070f842  5d                   pop ebp
// 0070f843  5b                   pop ebx
// 0070f844  83c410               add esp, 0x10
// 0070f847  c21000               ret 0x10
// 0070f84a  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0070f84d  8b7604               mov esi, dword ptr [esi + 4]
// 0070f850  682000cc00           push 0xcc0020
// 0070f855  2bd1                 sub edx, ecx
// 0070f857  52                   push edx
// 0070f858  8b542430             mov edx, dword ptr [esp + 0x30]
// 0070f85c  52                   push edx
// 0070f85d  8b542438             mov edx, dword ptr [esp + 0x38]
// 0070f861  51                   push ecx
// 0070f862  8b0b                 mov ecx, dword ptr [ebx]
// 0070f864  51                   push ecx
// 0070f865  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0070f869  52                   push edx
// 0070f86a  2bc6                 sub eax, esi
// 0070f86c  50                   push eax
// 0070f86d  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0070f871  57                   push edi
// 0070f872  56                   push esi
// 0070f873  50                   push eax
// 0070f874  e887dff2ff           call 0x63d800
// 0070f879  5f                   pop edi
// 0070f87a  5e                   pop esi
// 0070f87b  5d                   pop ebp
// 0070f87c  5b                   pop ebx
// 0070f87d  83c410               add esp, 0x10
// 0070f880  c21000               ret 0x10
// 0070f883  5f                   pop edi
// 0070f884  5e                   pop esi
// 0070f885  5d                   pop ebp
// 0070f886  b801000000           mov eax, 1
// 0070f88b  5b                   pop ebx
// 0070f88c  83c410               add esp, 0x10
// 0070f88f  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Common\XTPOffice2007Image.cpp (function ?DrawImagePart@CXTPOffice2007Image@@IBEHPAVCDC@@ABVCRect@@01@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPOffice2007Image.cpp
