// roc 2010-06 0053fc90  unit: RBX::SceneManager  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0053fc90
//
// 0053fc90  6aff                 push -1
// 0053fc92  6868f99800           push 0x98f968
// 0053fc97  64a100000000         mov eax, dword ptr fs:[0]
// 0053fc9d  50                   push eax
// 0053fc9e  64892500000000       mov dword ptr fs:[0], esp
// 0053fca5  51                   push ecx
// 0053fca6  56                   push esi
// 0053fca7  8bf1                 mov esi, ecx
// 0053fca9  57                   push edi
// 0053fcaa  89742408             mov dword ptr [esp + 8], esi
// 0053fcae  8b460c               mov eax, dword ptr [esi + 0xc]
// 0053fcb1  8b3d7ca39e00         mov edi, dword ptr [0x9ea37c]
// 0053fcb7  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053fcbf  85c0                 test eax, eax
// 0053fcc1  7428                 je 0x53fceb
// 0053fcc3  83c004               add eax, 4
// 0053fcc6  50                   push eax
// 0053fcc7  ffd7                 call edi
// 0053fcc9  85c0                 test eax, eax
// 0053fccb  7517                 jne 0x53fce4
// 0053fccd  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0053fcd0  e84b3ef4ff           call 0x483b20
// 0053fcd5  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0053fcd8  85c9                 test ecx, ecx
// 0053fcda  7408                 je 0x53fce4
// 0053fcdc  8b01                 mov eax, dword ptr [ecx]
// 0053fcde  8b10                 mov edx, dword ptr [eax]
// 0053fce0  6a01                 push 1
// 0053fce2  ffd2                 call edx
// 0053fce4  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0053fceb  8b4608               mov eax, dword ptr [esi + 8]
// 0053fcee  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0053fcf6  85c0                 test eax, eax
// 0053fcf8  7428                 je 0x53fd22
// 0053fcfa  83c004               add eax, 4
// 0053fcfd  50                   push eax
// 0053fcfe  ffd7                 call edi
// 0053fd00  85c0                 test eax, eax
// 0053fd02  7517                 jne 0x53fd1b
// 0053fd04  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053fd07  e8143ef4ff           call 0x483b20
// 0053fd0c  8b4e08               mov ecx, dword ptr [esi + 8]
// 0053fd0f  85c9                 test ecx, ecx
// 0053fd11  7408                 je 0x53fd1b
// 0053fd13  8b01                 mov eax, dword ptr [ecx]
// 0053fd15  8b10                 mov edx, dword ptr [eax]
// 0053fd17  6a01                 push 1
// 0053fd19  ffd2                 call edx
// 0053fd1b  c7460800000000       mov dword ptr [esi + 8], 0
// 0053fd22  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053fd26  5f                   pop edi
// 0053fd27  5e                   pop esi
// 0053fd28  64890d00000000       mov dword ptr fs:[0], ecx
// 0053fd2f  83c410               add esp, 0x10
// 0053fd32  c3                   ret 
// library rbxgs-render/AggregatingSceneManager.cpp (function ??1?$pair@$$CBUBucketKey@AggregatingSceneManager@Render@RBX@@V?$ReferenceCountedPointer@VBucket@AggregatingSceneManager@Render@RBX@@@G3D@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render AggregatingSceneManager.cpp
