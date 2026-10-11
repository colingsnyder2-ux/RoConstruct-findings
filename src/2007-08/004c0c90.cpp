// roc 2007-08 004c0c90  unit: RakPeer  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c0c90
//
// 004c0c90  83ec40               sub esp, 0x40
// 004c0c93  56                   push esi
// 004c0c94  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 004c0c98  57                   push edi
// 004c0c99  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 004c0c9d  56                   push esi
// 004c0c9e  57                   push edi
// 004c0c9f  e85cd8ffff           call 0x4be500
// 004c0ca4  8b06                 mov eax, dword ptr [esi]
// 004c0ca6  8b4e04               mov ecx, dword ptr [esi + 4]
// 004c0ca9  8b5608               mov edx, dword ptr [esi + 8]
// 004c0cac  89442440             mov dword ptr [esp + 0x40], eax
// 004c0cb0  8b460c               mov eax, dword ptr [esi + 0xc]
// 004c0cb3  83c408               add esp, 8
// 004c0cb6  89442444             mov dword ptr [esp + 0x44], eax
// 004c0cba  33c0                 xor eax, eax
// 004c0cbc  894c243c             mov dword ptr [esp + 0x3c], ecx
// 004c0cc0  89542440             mov dword ptr [esp + 0x40], edx
// 004c0cc4  89442428             mov dword ptr [esp + 0x28], eax
// 004c0cc8  8944242c             mov dword ptr [esp + 0x2c], eax
// 004c0ccc  89442430             mov dword ptr [esp + 0x30], eax
// 004c0cd0  89442434             mov dword ptr [esp + 0x34], eax
// 004c0cd4  8b4c8428             mov ecx, dword ptr [esp + eax*4 + 0x28]
// 004c0cd8  85c9                 test ecx, ecx
// 004c0cda  8d51ff               lea edx, [ecx - 1]
// 004c0cdd  89548428             mov dword ptr [esp + eax*4 + 0x28], edx
// 004c0ce1  7508                 jne 0x4c0ceb
// 004c0ce3  83c001               add eax, 1
// 004c0ce6  83f808               cmp eax, 8
// 004c0ce9  72e9                 jb 0x4c0cd4
// 004c0ceb  8b07                 mov eax, dword ptr [edi]
// 004c0ced  8b4f04               mov ecx, dword ptr [edi + 4]
// 004c0cf0  8b5708               mov edx, dword ptr [edi + 8]
// 004c0cf3  89442408             mov dword ptr [esp + 8], eax
// 004c0cf7  8b470c               mov eax, dword ptr [edi + 0xc]
// 004c0cfa  894c240c             mov dword ptr [esp + 0xc], ecx
// 004c0cfe  89442414             mov dword ptr [esp + 0x14], eax
// 004c0d02  33c0                 xor eax, eax
// 004c0d04  8d4c2428             lea ecx, [esp + 0x28]
// 004c0d08  51                   push ecx
// 004c0d09  89542414             mov dword ptr [esp + 0x14], edx
// 004c0d0d  8d54240c             lea edx, [esp + 0xc]
// 004c0d11  8944241c             mov dword ptr [esp + 0x1c], eax
// 004c0d15  89442420             mov dword ptr [esp + 0x20], eax
// 004c0d19  89442424             mov dword ptr [esp + 0x24], eax
// 004c0d1d  89442428             mov dword ptr [esp + 0x28], eax
// 004c0d21  52                   push edx
// 004c0d22  8bc2                 mov eax, edx
// 004c0d24  50                   push eax
// 004c0d25  51                   push ecx
// 004c0d26  e835b1ffff           call 0x4bbe60
// 004c0d2b  8b542418             mov edx, dword ptr [esp + 0x18]
// 004c0d2f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004c0d33  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004c0d37  8916                 mov dword ptr [esi], edx
// 004c0d39  8b542424             mov edx, dword ptr [esp + 0x24]
// 004c0d3d  83c410               add esp, 0x10
// 004c0d40  894604               mov dword ptr [esi + 4], eax
// 004c0d43  894e08               mov dword ptr [esi + 8], ecx
// 004c0d46  5f                   pop edi
// 004c0d47  89560c               mov dword ptr [esi + 0xc], edx
// 004c0d4a  5e                   pop esi
// 004c0d4b  83c440               add esp, 0x40
// 004c0d4e  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$computeNRinverse@$$BY03I@big@@YAXAAY03I0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
