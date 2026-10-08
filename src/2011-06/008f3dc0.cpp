// from server: 100% by auto
// roc 2011-06 008f3dc0  unit: CXTPScrollBase  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3dc0
//
// 008f3dc0  56                   push esi
// 008f3dc1  57                   push edi
// 008f3dc2  8bf9                 mov edi, ecx
// 008f3dc4  8b7760               mov esi, dword ptr [edi + 0x60]
// 008f3dc7  85f6                 test esi, esi
// 008f3dc9  7473                 je 0x8f3e3e
// 008f3dcb  c7461400000000       mov dword ptr [esi + 0x14], 0
// 008f3dd2  ff15401ba400         call dword ptr [0xa41b40]
// 008f3dd8  837e3000             cmp dword ptr [esi + 0x30], 0
// 008f3ddc  743a                 je 0x8f3e18
// 008f3dde  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008f3de3  7409                 je 0x8f3dee
// 008f3de5  8b4634               mov eax, dword ptr [esi + 0x34]
// 008f3de8  8b480c               mov ecx, dword ptr [eax + 0xc]
// 008f3deb  894e24               mov dword ptr [esi + 0x24], ecx
// 008f3dee  8b4624               mov eax, dword ptr [esi + 0x24]
// 008f3df1  8b17                 mov edx, dword ptr [edi]
// 008f3df3  8b5218               mov edx, dword ptr [edx + 0x18]
// 008f3df6  50                   push eax
// 008f3df7  6a04                 push 4
// 008f3df9  8bcf                 mov ecx, edi
// 008f3dfb  ffd2                 call edx
// 008f3dfd  8b07                 mov eax, dword ptr [edi]
// 008f3dff  8b501c               mov edx, dword ptr [eax + 0x1c]
// 008f3e02  8bcf                 mov ecx, edi
// 008f3e04  ffd2                 call edx
// 008f3e06  8b17                 mov edx, dword ptr [edi]
// 008f3e08  8b4218               mov eax, dword ptr [edx + 0x18]
// 008f3e0b  6a00                 push 0
// 008f3e0d  6a08                 push 8
// 008f3e0f  8bcf                 mov ecx, edi
// 008f3e11  ffd0                 call eax
// 008f3e13  5f                   pop edi
// 008f3e14  5e                   pop esi
// 008f3e15  c20400               ret 4
// 008f3e18  8b4618               mov eax, dword ptr [esi + 0x18]
// 008f3e1b  85c0                 test eax, eax
// 008f3e1d  7412                 je 0x8f3e31
// 008f3e1f  50                   push eax
// 008f3e20  8b462c               mov eax, dword ptr [esi + 0x2c]
// 008f3e23  50                   push eax
// 008f3e24  ff15d019a400         call dword ptr [0xa419d0]
// 008f3e2a  c7461800000000       mov dword ptr [esi + 0x18], 0
// 008f3e31  8b17                 mov edx, dword ptr [edi]
// 008f3e33  8b4218               mov eax, dword ptr [edx + 0x18]
// 008f3e36  6a00                 push 0
// 008f3e38  6a08                 push 8
// 008f3e3a  8bcf                 mov ecx, edi
// 008f3e3c  ffd0                 call eax
// 008f3e3e  5f                   pop edi
// 008f3e3f  5e                   pop esi
// 008f3e40  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ?EndScroll@CXTPScrollBase@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
