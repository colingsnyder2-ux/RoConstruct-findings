// roc 2009-12 0044bb70  unit: CRobloxApp  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044bb70
//
// 0044bb70  56                   push esi
// 0044bb71  8bf1                 mov esi, ecx
// 0044bb73  8b06                 mov eax, dword ptr [esi]
// 0044bb75  57                   push edi
// 0044bb76  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0044bb7a  3bf8                 cmp edi, eax
// 0044bb7c  743d                 je 0x44bbbb
// 0044bb7e  85c0                 test eax, eax
// 0044bb80  7429                 je 0x44bbab
// 0044bb82  83c004               add eax, 4
// 0044bb85  50                   push eax
// 0044bb86  ff1508b29800         call dword ptr [0x98b208]
// 0044bb8c  85c0                 test eax, eax
// 0044bb8e  7515                 jne 0x44bba5
// 0044bb90  8b0e                 mov ecx, dword ptr [esi]
// 0044bb92  e889f4ffff           call 0x44b020
// 0044bb97  8b0e                 mov ecx, dword ptr [esi]
// 0044bb99  85c9                 test ecx, ecx
// 0044bb9b  7408                 je 0x44bba5
// 0044bb9d  8b01                 mov eax, dword ptr [ecx]
// 0044bb9f  8b10                 mov edx, dword ptr [eax]
// 0044bba1  6a01                 push 1
// 0044bba3  ffd2                 call edx
// 0044bba5  c70600000000         mov dword ptr [esi], 0
// 0044bbab  85ff                 test edi, edi
// 0044bbad  740c                 je 0x44bbbb
// 0044bbaf  893e                 mov dword ptr [esi], edi
// 0044bbb1  83c704               add edi, 4
// 0044bbb4  57                   push edi
// 0044bbb5  ff150cb29800         call dword ptr [0x98b20c]
// 0044bbbb  5f                   pop edi
// 0044bbbc  5e                   pop esi
// 0044bbbd  c20400               ret 4
// library rbxgs-appdraw/AdornG3D.cpp (function ?setPointer@?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@AAEXPAVTexture@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw AdornG3D.cpp
