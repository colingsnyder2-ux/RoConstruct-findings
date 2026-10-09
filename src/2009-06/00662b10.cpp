// roc 2009-06 00662b10  unit: DxUserInput  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00662b10
//
// 00662b10  56                   push esi
// 00662b11  8bf1                 mov esi, ecx
// 00662b13  8d4e08               lea ecx, [esi + 8]
// 00662b16  e835fa0100           call 0x682550
// 00662b1b  83f804               cmp eax, 4
// 00662b1e  7534                 jne 0x662b54
// 00662b20  8d4e20               lea ecx, [esi + 0x20]
// 00662b23  e828fa0100           call 0x682550
// 00662b28  85c0                 test eax, eax
// 00662b2a  7528                 jne 0x662b54
// 00662b2c  8d4e28               lea ecx, [esi + 0x28]
// 00662b2f  e81cfa0100           call 0x682550
// 00662b34  85c0                 test eax, eax
// 00662b36  751c                 jne 0x662b54
// 00662b38  8d4e10               lea ecx, [esi + 0x10]
// 00662b3b  e810fa0100           call 0x682550
// 00662b40  85c0                 test eax, eax
// 00662b42  7510                 jne 0x662b54
// 00662b44  8d4e18               lea ecx, [esi + 0x18]
// 00662b47  e804fa0100           call 0x682550
// 00662b4c  85c0                 test eax, eax
// 00662b4e  7504                 jne 0x662b54
// 00662b50  b001                 mov al, 1
// 00662b52  5e                   pop esi
// 00662b53  c3                   ret 
// 00662b54  32c0                 xor al, al
// 00662b56  5e                   pop esi
// 00662b57  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?isStandardPart@Surfaces@RBX@@QBE?B_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
