// roc 2007-08 004d1390  unit: RBX::View::Part  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d1390
//
// 004d1390  56                   push esi
// 004d1391  57                   push edi
// 004d1392  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004d1396  81ff58298c00         cmp edi, 0x8c2958
// 004d139c  8bf1                 mov esi, ecx
// 004d139e  750e                 jne 0x4d13ae
// 004d13a0  e8bbfdffff           call 0x4d1160
// 004d13a5  8bce                 mov ecx, esi
// 004d13a7  e8a4feffff           call 0x4d1250
// 004d13ac  eb1c                 jmp 0x4d13ca
// 004d13ae  81ffc0288c00         cmp edi, 0x8c28c0
// 004d13b4  740f                 je 0x4d13c5
// 004d13b6  57                   push edi
// 004d13b7  e8e4560e00           call 0x5b6aa0
// 004d13bc  83c404               add esp, 4
// 004d13bf  84c0                 test al, al
// 004d13c1  7407                 je 0x4d13ca
// 004d13c3  8bce                 mov ecx, esi
// 004d13c5  e896fdffff           call 0x4d1160
// 004d13ca  81ff1c298c00         cmp edi, 0x8c291c
// 004d13d0  751e                 jne 0x4d13f0
// 004d13d2  8bce                 mov ecx, esi
// 004d13d4  e8f7efffff           call 0x4d03d0
// 004d13d9  84c0                 test al, al
// 004d13db  7423                 je 0x4d1400
// 004d13dd  8bce                 mov ecx, esi
// 004d13df  e87cfdffff           call 0x4d1160
// 004d13e4  8bce                 mov ecx, esi
// 004d13e6  e865feffff           call 0x4d1250
// 004d13eb  5f                   pop edi
// 004d13ec  5e                   pop esi
// 004d13ed  c20400               ret 4
// 004d13f0  81ff38298c00         cmp edi, 0x8c2938
// 004d13f6  7408                 je 0x4d1400
// 004d13f8  81ff48288c00         cmp edi, 0x8c2848
// 004d13fe  7507                 jne 0x4d1407
// 004d1400  8bce                 mov ecx, esi
// 004d1402  e849feffff           call 0x4d1250
// 004d1407  5f                   pop edi
// 004d1408  5e                   pop esi
// 004d1409  c20400               ret 4
// library openrbx-client/RbxView\Part.cpp (function ?onPropertyChanged@Part@View@RBX@@MAEXPBVPropertyDescriptor@Reflection@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client RbxView/Part.cpp
