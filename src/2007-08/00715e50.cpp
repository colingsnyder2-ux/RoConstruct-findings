// roc 2007-08 00715e50  unit: CXTCaptionPopupWnd  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00715e50
//
// 00715e50  83ec30               sub esp, 0x30
// 00715e53  53                   push ebx
// 00715e54  55                   push ebp
// 00715e55  56                   push esi
// 00715e56  8bf1                 mov esi, ecx
// 00715e58  57                   push edi
// 00715e59  56                   push esi
// 00715e5a  8d4c2424             lea ecx, [esp + 0x24]
// 00715e5e  e89da1f6ff           call 0x680000
// 00715e63  6afe                 push -2
// 00715e65  6afe                 push -2
// 00715e67  8d442428             lea eax, [esp + 0x28]
// 00715e6b  50                   push eax
// 00715e6c  ff1590ed7700         call dword ptr [0x77ed90]
// 00715e72  8b442424             mov eax, dword ptr [esp + 0x24]
// 00715e76  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00715e7a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00715e7e  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00715e82  8bf8                 mov edi, eax
// 00715e84  83c013               add eax, 0x13
// 00715e87  6a01                 push 1
// 00715e89  89542440             mov dword ptr [esp + 0x40], edx
// 00715e8d  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00715e91  2bd0                 sub edx, eax
// 00715e93  52                   push edx
// 00715e94  2bcb                 sub ecx, ebx
// 00715e96  51                   push ecx
// 00715e97  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00715e9a  50                   push eax
// 00715e9b  53                   push ebx
// 00715e9c  89442438             mov dword ptr [esp + 0x38], eax
// 00715ea0  e88fa1f1ff           call 0x630034
// 00715ea5  8b542438             mov edx, dword ptr [esp + 0x38]
// 00715ea9  8d6f13               lea ebp, [edi + 0x13]
// 00715eac  6a01                 push 1
// 00715eae  8bcd                 mov ecx, ebp
// 00715eb0  2bcf                 sub ecx, edi
// 00715eb2  51                   push ecx
// 00715eb3  2bd3                 sub edx, ebx
// 00715eb5  52                   push edx
// 00715eb6  57                   push edi
// 00715eb7  53                   push ebx
// 00715eb8  8d4e60               lea ecx, [esi + 0x60]
// 00715ebb  e874a1f1ff           call 0x630034
// 00715ec0  8b442438             mov eax, dword ptr [esp + 0x38]
// 00715ec4  6afe                 push -2
// 00715ec6  6afe                 push -2
// 00715ec8  8d4c2418             lea ecx, [esp + 0x18]
// 00715ecc  51                   push ecx
// 00715ecd  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00715ed1  897c2420             mov dword ptr [esp + 0x20], edi
// 00715ed5  89442424             mov dword ptr [esp + 0x24], eax
// 00715ed9  896c2428             mov dword ptr [esp + 0x28], ebp
// 00715edd  ff1590ed7700         call dword ptr [0x77ed90]
// 00715ee3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00715ee7  8b542414             mov edx, dword ptr [esp + 0x14]
// 00715eeb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00715eef  8d48f0               lea ecx, [eax - 0x10]
// 00715ef2  6a01                 push 1
// 00715ef4  2bfa                 sub edi, edx
// 00715ef6  57                   push edi
// 00715ef7  2bc1                 sub eax, ecx
// 00715ef9  50                   push eax
// 00715efa  52                   push edx
// 00715efb  894c2420             mov dword ptr [esp + 0x20], ecx
// 00715eff  51                   push ecx
// 00715f00  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 00715f06  e829a1f1ff           call 0x630034
// 00715f0b  5f                   pop edi
// 00715f0c  5e                   pop esi
// 00715f0d  5d                   pop ebp
// 00715f0e  5b                   pop ebx
// 00715f0f  83c430               add esp, 0x30
// 00715f12  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionPopupWnd.cpp (function ?RecalcLayout@CXTCaptionPopupWnd@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionPopupWnd.cpp
