// roc 2007-03 004e94d0  unit: seg_004e0000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e94d0
//
// 004e94d0  56                   push esi
// 004e94d1  e8bafbffff           call 0x4e9090
// 004e94d6  8b742408             mov esi, dword ptr [esp + 8]
// 004e94da  8bce                 mov ecx, esi
// 004e94dc  e8ffb8f8ff           call 0x474de0
// 004e94e1  b9b09f8b00           mov ecx, 0x8b9fb0
// 004e94e6  e845b2f9ff           call 0x484730
// 004e94eb  84c0                 test al, al
// 004e94ed  740c                 je 0x4e94fb
// 004e94ef  68b09f8b00           push 0x8b9fb0
// 004e94f4  8bce                 mov ecx, esi
// 004e94f6  e875d2f8ff           call 0x476770
// 004e94fb  b9d09f8b00           mov ecx, 0x8b9fd0
// 004e9500  e82bb2f9ff           call 0x484730
// 004e9505  84c0                 test al, al
// 004e9507  740c                 je 0x4e9515
// 004e9509  68d09f8b00           push 0x8b9fd0
// 004e950e  8bce                 mov ecx, esi
// 004e9510  e87bd2f8ff           call 0x476790
// 004e9515  807c240c00           cmp byte ptr [esp + 0xc], 0
// 004e951a  741c                 je 0x4e9538
// 004e951c  b920a08b00           mov ecx, 0x8ba020
// 004e9521  e80ab2f9ff           call 0x484730
// 004e9526  84c0                 test al, al
// 004e9528  740e                 je 0x4e9538
// 004e952a  6820a08b00           push 0x8ba020
// 004e952f  6a00                 push 0
// 004e9531  8bce                 mov ecx, esi
// 004e9533  e878d2f8ff           call 0x4767b0
// 004e9538  807c241000           cmp byte ptr [esp + 0x10], 0
// 004e953d  741c                 je 0x4e955b
// 004e953f  b940a08b00           mov ecx, 0x8ba040
// 004e9544  e8e7b1f9ff           call 0x484730
// 004e9549  84c0                 test al, al
// 004e954b  740e                 je 0x4e955b
// 004e954d  6840a08b00           push 0x8ba040
// 004e9552  6a02                 push 2
// 004e9554  8bce                 mov ecx, esi
// 004e9556  e855d2f8ff           call 0x4767b0
// 004e955b  5e                   pop esi
// 004e955c  c3                   ret 
// library rbxgs-render/Mesh.cpp (function ?beginRender@Mesh@Render@RBX@@SAXPAVRenderDevice@G3D@@_N1@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
