// roc 2007-03 00500c70  unit: seg_00500000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00500c70
//
// 00500c70  83ec30               sub esp, 0x30
// 00500c73  56                   push esi
// 00500c74  8b742438             mov esi, dword ptr [esp + 0x38]
// 00500c78  68ac497800           push 0x7849ac
// 00500c7d  56                   push esi
// 00500c7e  ff15d8e67700         call dword ptr [0x77e6d8]
// 00500c84  83c408               add esp, 8
// 00500c87  84c0                 test al, al
// 00500c89  7407                 je 0x500c92
// 00500c8b  b001                 mov al, 1
// 00500c8d  5e                   pop esi
// 00500c8e  83c430               add esp, 0x30
// 00500c91  c3                   ret 
// 00500c92  837e1810             cmp dword ptr [esi + 0x18], 0x10
// 00500c96  7205                 jb 0x500c9d
// 00500c98  8b7604               mov esi, dword ptr [esi + 4]
// 00500c9b  eb03                 jmp 0x500ca0
// 00500c9d  83c604               add esi, 4
// 00500ca0  8d442404             lea eax, [esp + 4]
// 00500ca4  50                   push eax
// 00500ca5  56                   push esi
// 00500ca6  ff15cce87700         call dword ptr [0x77e8cc]
// 00500cac  83c408               add esp, 8
// 00500caf  33c9                 xor ecx, ecx
// 00500cb1  83f8ff               cmp eax, -1
// 00500cb4  0f95c1               setne cl
// 00500cb7  8ac1                 mov al, cl
// 00500cb9  5e                   pop esi
// 00500cba  83c430               add esp, 0x30
// 00500cbd  c3                   ret 
// library rbxgs-g3d/G3Dcpp\fileutils.cpp (function ?fileExists@G3D@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/fileutils.cpp
