// roc 2011-06 008dbbe0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008dbbe0
//
// 008dbbe0  83ec14               sub esp, 0x14
// 008dbbe3  53                   push ebx
// 008dbbe4  55                   push ebp
// 008dbbe5  56                   push esi
// 008dbbe6  57                   push edi
// 008dbbe7  894c2410             mov dword ptr [esp + 0x10], ecx
// 008dbbeb  e8602a0100           call 0x8ee650
// 008dbbf0  8bc8                 mov ecx, eax
// 008dbbf2  e839110100           call 0x8ecd30
// 008dbbf7  85c0                 test eax, eax
// 008dbbf9  0f84bd000000         je 0x8dbcbc
// 008dbbff  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008dbc03  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008dbc06  8b4650               mov eax, dword ptr [esi + 0x50]
// 008dbc09  8b7e44               mov edi, dword ptr [esi + 0x44]
// 008dbc0c  8b5e48               mov ebx, dword ptr [esi + 0x48]
// 008dbc0f  8b6e4c               mov ebp, dword ptr [esi + 0x4c]
// 008dbc12  89442420             mov dword ptr [esp + 0x20], eax
// 008dbc16  397104               cmp dword ptr [ecx + 4], esi
// 008dbc19  7405                 je 0x8dbc20
// 008dbc1b  397108               cmp dword ptr [ecx + 8], esi
// 008dbc1e  7572                 jne 0x8dbc92
// 008dbc20  8b11                 mov edx, dword ptr [ecx]
// 008dbc22  8b4248               mov eax, dword ptr [edx + 0x48]
// 008dbc25  ffd0                 call eax
// 008dbc27  83f803               cmp eax, 3
// 008dbc2a  7766                 ja 0x8dbc92
// 008dbc2c  ff2485c8bc8d00       jmp dword ptr [eax*4 + 0x8dbcc8]
// 008dbc33  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008dbc37  8b542428             mov edx, dword ptr [esp + 0x28]
// 008dbc3b  83ec10               sub esp, 0x10
// 008dbc3e  8bc4                 mov eax, esp
// 008dbc40  8938                 mov dword ptr [eax], edi
// 008dbc42  895804               mov dword ptr [eax + 4], ebx
// 008dbc45  896808               mov dword ptr [eax + 8], ebp
// 008dbc48  56                   push esi
// 008dbc49  89480c               mov dword ptr [eax + 0xc], ecx
// 008dbc4c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008dbc50  52                   push edx
// 008dbc51  e86afcffff           call 0x8db8c0
// 008dbc56  eb3a                 jmp 0x8dbc92
// 008dbc58  6850478f00           push 0x8f4750
// 008dbc5d  6a00                 push 0
// 008dbc5f  eb0e                 jmp 0x8dbc6f
// 008dbc61  6810488f00           push 0x8f4810
// 008dbc66  eb05                 jmp 0x8dbc6d
// 008dbc68  68b0478f00           push 0x8f47b0
// 008dbc6d  6a01                 push 1
// 008dbc6f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008dbc73  8b542430             mov edx, dword ptr [esp + 0x30]
// 008dbc77  56                   push esi
// 008dbc78  83ec10               sub esp, 0x10
// 008dbc7b  8bc4                 mov eax, esp
// 008dbc7d  8938                 mov dword ptr [eax], edi
// 008dbc7f  895804               mov dword ptr [eax + 4], ebx
// 008dbc82  896808               mov dword ptr [eax + 8], ebp
// 008dbc85  89480c               mov dword ptr [eax + 0xc], ecx
// 008dbc88  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008dbc8c  52                   push edx
// 008dbc8d  e80efdffff           call 0x8db9a0
// 008dbc92  8b442410             mov eax, dword ptr [esp + 0x10]
// 008dbc96  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 008dbc99  8b11                 mov edx, dword ptr [ecx]
// 008dbc9b  8b5268               mov edx, dword ptr [edx + 0x68]
// 008dbc9e  6a01                 push 1
// 008dbca0  83ec10               sub esp, 0x10
// 008dbca3  8bc4                 mov eax, esp
// 008dbca5  8938                 mov dword ptr [eax], edi
// 008dbca7  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008dbcab  895804               mov dword ptr [eax + 4], ebx
// 008dbcae  896808               mov dword ptr [eax + 8], ebp
// 008dbcb1  89780c               mov dword ptr [eax + 0xc], edi
// 008dbcb4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008dbcb8  56                   push esi
// 008dbcb9  50                   push eax
// 008dbcba  ffd2                 call edx
// 008dbcbc  5f                   pop edi
// 008dbcbd  5e                   pop esi
// 008dbcbe  5d                   pop ebp
// 008dbcbf  5b                   pop ebx
// 008dbcc0  83c414               add esp, 0x14
// 008dbcc3  c20800               ret 8
// 008dbcc6  8bff                 mov edi, edi
// 008dbcc8  33bc8d0061bc8d       xor edi, dword ptr [ebp + ecx*4 - 0x72439f00]
// 008dbccf  0058bc               add byte ptr [eax - 0x44], bl
// 008dbcd2  8d00                 lea eax, [eax]
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp