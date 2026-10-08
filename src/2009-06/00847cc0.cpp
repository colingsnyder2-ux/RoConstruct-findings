// from server: 100% by auto
// roc 2009-06 00847cc0  unit: G3D::Sky  size: 206 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00847cc0
//
// 00847cc0  6aff                 push -1
// 00847cc2  68cc3c8800           push 0x883ccc
// 00847cc7  64a100000000         mov eax, dword ptr fs:[0]
// 00847ccd  50                   push eax
// 00847cce  64892500000000       mov dword ptr fs:[0], esp
// 00847cd5  83ec54               sub esp, 0x54
// 00847cd8  56                   push esi
// 00847cd9  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00847cdd  56                   push esi
// 00847cde  c744240800000000     mov dword ptr [esp + 8], 0
// 00847ce6  e855dcd2ff           call 0x575940
// 00847ceb  83c404               add esp, 4
// 00847cee  84c0                 test al, al
// 00847cf0  751a                 jne 0x847d0c
// 00847cf2  8b442468             mov eax, dword ptr [esp + 0x68]
// 00847cf6  c70000000000         mov dword ptr [eax], 0
// 00847cfc  5e                   pop esi
// 00847cfd  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00847d01  64890d00000000       mov dword ptr fs:[0], ecx
// 00847d08  83c460               add esp, 0x60
// 00847d0b  c3                   ret 
// 00847d0c  6a01                 push 1
// 00847d0e  6a01                 push 1
// 00847d10  56                   push esi
// 00847d11  8d4c2418             lea ecx, [esp + 0x18]
// 00847d15  e866ccd2ff           call 0x574980
// 00847d1a  6820020000           push 0x220
// 00847d1f  c744246401000000     mov dword ptr [esp + 0x64], 1
// 00847d27  e80c0dedff           call 0x718a38
// 00847d2c  83c404               add esp, 4
// 00847d2f  89442408             mov dword ptr [esp + 8], eax
// 00847d33  c644246002           mov byte ptr [esp + 0x60], 2
// 00847d38  85c0                 test eax, eax
// 00847d3a  7411                 je 0x847d4d
// 00847d3c  8d4c240c             lea ecx, [esp + 0xc]
// 00847d40  51                   push ecx
// 00847d41  56                   push esi
// 00847d42  6a00                 push 0
// 00847d44  8bc8                 mov ecx, eax
// 00847d46  e8b5f7ffff           call 0x847500
// 00847d4b  eb02                 jmp 0x847d4f
// 00847d4d  33c0                 xor eax, eax
// 00847d4f  8b742468             mov esi, dword ptr [esp + 0x68]
// 00847d53  50                   push eax
// 00847d54  8bce                 mov ecx, esi
// 00847d56  c644246401           mov byte ptr [esp + 0x64], 1
// 00847d5b  c70600000000         mov dword ptr [esi], 0
// 00847d61  e8fa7ac5ff           call 0x49f860
// 00847d66  8d4c240c             lea ecx, [esp + 0xc]
// 00847d6a  c744240401000000     mov dword ptr [esp + 4], 1
// 00847d72  c644246000           mov byte ptr [esp + 0x60], 0
// 00847d77  e824ced2ff           call 0x574ba0
// 00847d7c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00847d80  8bc6                 mov eax, esi
// 00847d82  5e                   pop esi
// 00847d83  64890d00000000       mov dword ptr fs:[0], ecx
// 00847d8a  83c460               add esp, 0x60
// 00847d8d  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ?fromFile@GFont@G3D@@SA?AV?$ReferenceCountedPointer@VGFont@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
