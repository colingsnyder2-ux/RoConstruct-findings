// roc 2007-08 0062e660  unit: RBX::AdornG3D  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062e660
//
// 0062e660  83ec1c               sub esp, 0x1c
// 0062e663  837c242800           cmp dword ptr [esp + 0x28], 0
// 0062e668  753a                 jne 0x62e6a4
// 0062e66a  d9e8                 fld1 
// 0062e66c  b801000000           mov eax, 1
// 0062e671  840530838c00         test byte ptr [0x8c8330], al
// 0062e677  7524                 jne 0x62e69d
// 0062e679  d905b07e7900         fld dword ptr [0x797eb0]
// 0062e67f  090530838c00         or dword ptr [0x8c8330], eax
// 0062e685  d91d24838c00         fstp dword ptr [0x8c8324]
// 0062e68b  d90540837a00         fld dword ptr [0x7a8340]
// 0062e691  d91d28838c00         fstp dword ptr [0x8c8328]
// 0062e697  d9152c838c00         fst dword ptr [0x8c832c]
// 0062e69d  b824838c00           mov eax, 0x8c8324
// 0062e6a2  eb1c                 jmp 0x62e6c0
// 0062e6a4  d90580b97a00         fld dword ptr [0x7ab980]
// 0062e6aa  8d0424               lea eax, [esp]
// 0062e6ad  d91c24               fstp dword ptr [esp]
// 0062e6b0  d905e00b7a00         fld dword ptr [0x7a0be0]
// 0062e6b6  d95c2404             fstp dword ptr [esp + 4]
// 0062e6ba  d9e8                 fld1 
// 0062e6bc  d9542408             fst dword ptr [esp + 8]
// 0062e6c0  d900                 fld dword ptr [eax]
// 0062e6c2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0062e6c6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0062e6ca  d95c240c             fstp dword ptr [esp + 0xc]
// 0062e6ce  d94004               fld dword ptr [eax + 4]
// 0062e6d1  d95c2410             fstp dword ptr [esp + 0x10]
// 0062e6d5  d94008               fld dword ptr [eax + 8]
// 0062e6d8  8d44240c             lea eax, [esp + 0xc]
// 0062e6dc  50                   push eax
// 0062e6dd  d95c2418             fstp dword ptr [esp + 0x18]
// 0062e6e1  51                   push ecx
// 0062e6e2  52                   push edx
// 0062e6e3  d95c2424             fstp dword ptr [esp + 0x24]
// 0062e6e7  e864fdffff           call 0x62e450
// 0062e6ec  83c428               add esp, 0x28
// 0062e6ef  c3                   ret 
// library rbxgs-appdraw/Draw.cpp (function ?selectionBox@Draw@RBX@@SAXABVPart@2@PAVAdorn@2@W4SelectState@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-appdraw Draw.cpp
