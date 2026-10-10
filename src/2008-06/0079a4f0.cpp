// roc 2008-06 0079a4f0  unit: CXTPRibbonControlTab  size: 277 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079a4f0
//
// 0079a4f0  8b442408             mov eax, dword ptr [esp + 8]
// 0079a4f4  83ec10               sub esp, 0x10
// 0079a4f7  53                   push ebx
// 0079a4f8  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0079a4fc  55                   push ebp
// 0079a4fd  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0079a501  56                   push esi
// 0079a502  c70300000000         mov dword ptr [ebx], 0
// 0079a508  8bf1                 mov esi, ecx
// 0079a50a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0079a50e  c7450000000000       mov dword ptr [ebp], 0
// 0079a515  57                   push edi
// 0079a516  c70000000000         mov dword ptr [eax], 0
// 0079a51c  8d542434             lea edx, [esp + 0x34]
// 0079a520  c70100000000         mov dword ptr [ecx], 0
// 0079a526  52                   push edx
// 0079a527  8bce                 mov ecx, esi
// 0079a529  e872ddf4ff           call 0x6e82a0
// 0079a52e  8bf8                 mov edi, eax
// 0079a530  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0079a536  85c0                 test eax, eax
// 0079a538  0f84bb000000         je 0x79a5f9
// 0079a53e  83782000             cmp dword ptr [eax + 0x20], 0
// 0079a542  0f84b1000000         je 0x79a5f9
// 0079a548  8b46e0               mov eax, dword ptr [esi - 0x20]
// 0079a54b  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 0079a551  8d4ee0               lea ecx, [esi - 0x20]
// 0079a554  6a00                 push 0
// 0079a556  ffd2                 call edx
// 0079a558  85c0                 test eax, eax
// 0079a55a  0f8499000000         je 0x79a5f9
// 0079a560  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0079a566  8b8ea4000000         mov ecx, dword ptr [esi + 0xa4]
// 0079a56c  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 0079a572  89442410             mov dword ptr [esp + 0x10], eax
// 0079a576  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0079a57c  894c2414             mov dword ptr [esp + 0x14], ecx
// 0079a580  89542418             mov dword ptr [esp + 0x18], edx
// 0079a584  8944241c             mov dword ptr [esp + 0x1c], eax
// 0079a588  85ff                 test edi, edi
// 0079a58a  7438                 je 0x79a5c4
// 0079a58c  8d47ff               lea eax, [edi - 1]
// 0079a58f  85c0                 test eax, eax
// 0079a591  7c13                 jl 0x79a5a6
// 0079a593  3b86c0010000         cmp eax, dword ptr [esi + 0x1c0]
// 0079a599  7d0b                 jge 0x79a5a6
// 0079a59b  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 0079a5a1  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0079a5a4  eb02                 jmp 0x79a5a8
// 0079a5a6  33c0                 xor eax, eax
// 0079a5a8  8b5044               mov edx, dword ptr [eax + 0x44]
// 0079a5ab  89542410             mov dword ptr [esp + 0x10], edx
// 0079a5af  8b4848               mov ecx, dword ptr [eax + 0x48]
// 0079a5b2  894c2414             mov dword ptr [esp + 0x14], ecx
// 0079a5b6  8b504c               mov edx, dword ptr [eax + 0x4c]
// 0079a5b9  89542418             mov dword ptr [esp + 0x18], edx
// 0079a5bd  8b4050               mov eax, dword ptr [eax + 0x50]
// 0079a5c0  8944241c             mov dword ptr [esp + 0x1c], eax
// 0079a5c4  8d4c2410             lea ecx, [esp + 0x10]
// 0079a5c8  51                   push ecx
// 0079a5c9  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0079a5cf  e85e66f0ff           call 0x6a0c32
// 0079a5d4  8b442410             mov eax, dword ptr [esp + 0x10]
// 0079a5d8  8b542424             mov edx, dword ptr [esp + 0x24]
// 0079a5dc  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0079a5e0  8902                 mov dword ptr [edx], eax
// 0079a5e2  8b542428             mov edx, dword ptr [esp + 0x28]
// 0079a5e6  890a                 mov dword ptr [edx], ecx
// 0079a5e8  8b542418             mov edx, dword ptr [esp + 0x18]
// 0079a5ec  2bd0                 sub edx, eax
// 0079a5ee  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0079a5f2  2bc1                 sub eax, ecx
// 0079a5f4  895500               mov dword ptr [ebp], edx
// 0079a5f7  8903                 mov dword ptr [ebx], eax
// 0079a5f9  5f                   pop edi
// 0079a5fa  5e                   pop esi
// 0079a5fb  5d                   pop ebp
// 0079a5fc  33c0                 xor eax, eax
// 0079a5fe  5b                   pop ebx
// 0079a5ff  83c410               add esp, 0x10
// 0079a602  c22000               ret 0x20
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonControlTab.cpp (function ?AccessibleLocation@CXTPRibbonControlTab@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonControlTab.cpp
