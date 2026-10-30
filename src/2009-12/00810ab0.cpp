// roc 2009-12 00810ab0  unit: CXTPImageManager  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00810ab0
//
// 00810ab0  6aff                 push -1
// 00810ab2  68c8a09500           push 0x95a0c8
// 00810ab7  64a100000000         mov eax, dword ptr fs:[0]
// 00810abd  50                   push eax
// 00810abe  83ec34               sub esp, 0x34
// 00810ac1  a10052b600           mov eax, dword ptr [0xb65200]
// 00810ac6  33c4                 xor eax, esp
// 00810ac8  50                   push eax
// 00810ac9  8d442438             lea eax, [esp + 0x38]
// 00810acd  64a300000000         mov dword ptr fs:[0], eax
// 00810ad3  837c246800           cmp dword ptr [esp + 0x68], 0
// 00810ad8  7517                 jne 0x810af1
// 00810ada  837c246c00           cmp dword ptr [esp + 0x6c], 0
// 00810adf  7510                 jne 0x810af1
// 00810ae1  8b442458             mov eax, dword ptr [esp + 0x58]
// 00810ae5  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00810ae9  89442468             mov dword ptr [esp + 0x68], eax
// 00810aed  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00810af1  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00810af5  52                   push edx
// 00810af6  e86938feff           call 0x7f4364
// 00810afb  50                   push eax
// 00810afc  6a00                 push 0
// 00810afe  8d4c242c             lea ecx, [esp + 0x2c]
// 00810b02  e879ad0300           call 0x84b880
// 00810b07  8b442460             mov eax, dword ptr [esp + 0x60]
// 00810b0b  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00810b0f  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00810b13  89442404             mov dword ptr [esp + 4], eax
// 00810b17  03c1                 add eax, ecx
// 00810b19  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00810b1d  8944240c             mov dword ptr [esp + 0xc], eax
// 00810b21  8b442464             mov eax, dword ptr [esp + 0x64]
// 00810b25  89442408             mov dword ptr [esp + 8], eax
// 00810b29  03c2                 add eax, edx
// 00810b2b  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00810b2f  89442410             mov dword ptr [esp + 0x10], eax
// 00810b33  8b442450             mov eax, dword ptr [esp + 0x50]
// 00810b37  03c8                 add ecx, eax
// 00810b39  89442414             mov dword ptr [esp + 0x14], eax
// 00810b3d  8b442454             mov eax, dword ptr [esp + 0x54]
// 00810b41  03d0                 add edx, eax
// 00810b43  89442418             mov dword ptr [esp + 0x18], eax
// 00810b47  8b442448             mov eax, dword ptr [esp + 0x48]
// 00810b4b  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00810b53  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00810b57  89542420             mov dword ptr [esp + 0x20], edx
// 00810b5b  85c0                 test eax, eax
// 00810b5d  7403                 je 0x810b62
// 00810b5f  8b4004               mov eax, dword ptr [eax + 4]
// 00810b62  8b542428             mov edx, dword ptr [esp + 0x28]
// 00810b66  8d4c2404             lea ecx, [esp + 4]
// 00810b6a  51                   push ecx
// 00810b6b  52                   push edx
// 00810b6c  8d4c241c             lea ecx, [esp + 0x1c]
// 00810b70  51                   push ecx
// 00810b71  50                   push eax
// 00810b72  e839f9ffff           call 0x8104b0
// 00810b77  8bc8                 mov ecx, eax
// 00810b79  e88294ffff           call 0x80a000
// 00810b7e  8d4c2424             lea ecx, [esp + 0x24]
// 00810b82  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 00810b8a  e801ae0300           call 0x84b990
// 00810b8f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00810b93  64890d00000000       mov dword ptr fs:[0], ecx
// 00810b9a  59                   pop ecx
// 00810b9b  83c440               add esp, 0x40
// 00810b9e  c3                   ret 
// copied from an identical function in another client (function ?DrawAlphaBitmap@CXTPImageManagerIcon@@SAXPAVCDC@@PAUHBITMAP__@@VCPoint@@VCSize@@23@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp