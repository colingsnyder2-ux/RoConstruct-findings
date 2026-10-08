// roc 2007-03 00502080  unit: seg_00500000  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00502080
//
// 00502080  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00502083  3b4118               cmp eax, dword ptr [ecx + 0x18]
// 00502086  7204                 jb 0x50208c
// 00502088  83c8ff               or eax, 0xffffffff
// 0050208b  c3                   ret 
// 0050208c  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0050208f  8a1410               mov dl, byte ptr [eax + edx]
// 00502092  83c001               add eax, 1
// 00502095  80fa0a               cmp dl, 0xa
// 00502098  894120               mov dword ptr [ecx + 0x20], eax
// 0050209b  750f                 jne 0x5020ac
// 0050209d  b801000000           mov eax, 1
// 005020a2  014124               add dword ptr [ecx + 0x24], eax
// 005020a5  894128               mov dword ptr [ecx + 0x28], eax
// 005020a8  0fb6c2               movzx eax, dl
// 005020ab  c3                   ret 
// 005020ac  83412801             add dword ptr [ecx + 0x28], 1
// 005020b0  0fb6c2               movzx eax, dl
// 005020b3  c3                   ret 
// library rbxgs-g3d/G3Dcpp\TextInput.cpp (function ?eatInputChar@TextInput@G3D@@AAEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/TextInput.cpp
