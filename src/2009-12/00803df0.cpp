// roc 2009-12 00803df0  unit: CFont  size: 335 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00803df0
//
// 00803df0  6aff                 push -1
// 00803df2  6873959500           push 0x959573
// 00803df7  64a100000000         mov eax, dword ptr fs:[0]
// 00803dfd  50                   push eax
// 00803dfe  51                   push ecx
// 00803dff  56                   push esi
// 00803e00  57                   push edi
// 00803e01  a10052b600           mov eax, dword ptr [0xb65200]
// 00803e06  33c4                 xor eax, esp
// 00803e08  50                   push eax
// 00803e09  8d442410             lea eax, [esp + 0x10]
// 00803e0d  64a300000000         mov dword ptr fs:[0], eax
// 00803e13  8bf1                 mov esi, ecx
// 00803e15  8974240c             mov dword ptr [esp + 0xc], esi
// 00803e19  c70684299f00         mov dword ptr [esi], 0x9f2984
// 00803e1f  8bbed8000000         mov edi, dword ptr [esi + 0xd8]
// 00803e25  c74424180b000000     mov dword ptr [esp + 0x18], 0xb
// 00803e2d  85ff                 test edi, edi
// 00803e2f  7411                 je 0x803e42
// 00803e31  8d4f20               lea ecx, [edi + 0x20]
// 00803e34  e8d7820600           call 0x86c110
// 00803e39  57                   push edi
// 00803e3a  e81bfafeff           call 0x7f385a
// 00803e3f  83c404               add esp, 4
// 00803e42  8d8e38010000         lea ecx, [esi + 0x138]
// 00803e48  c64424180a           mov byte ptr [esp + 0x18], 0xa
// 00803e4d  e8be820600           call 0x86c110
// 00803e52  8d8e2c010000         lea ecx, [esi + 0x12c]
// 00803e58  c644241809           mov byte ptr [esp + 0x18], 9
// 00803e5d  e8ae820600           call 0x86c110
// 00803e62  8d8e1c010000         lea ecx, [esi + 0x11c]
// 00803e68  ff15c0de9800         call dword ptr [0x98dec0]
// 00803e6e  8d8e08010000         lea ecx, [esi + 0x108]
// 00803e74  c644241807           mov byte ptr [esp + 0x18], 7
// 00803e79  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00803e7f  e8acb3c0ff           call 0x40f230
// 00803e84  8d8e00010000         lea ecx, [esi + 0x100]
// 00803e8a  c644241806           mov byte ptr [esp + 0x18], 6
// 00803e8f  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00803e95  e896b3c0ff           call 0x40f230
// 00803e9a  8d8ef8000000         lea ecx, [esi + 0xf8]
// 00803ea0  c644241805           mov byte ptr [esp + 0x18], 5
// 00803ea5  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00803eab  e880b3c0ff           call 0x40f230
// 00803eb0  8d8ef0000000         lea ecx, [esi + 0xf0]
// 00803eb6  c644241804           mov byte ptr [esp + 0x18], 4
// 00803ebb  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00803ec1  e86ab3c0ff           call 0x40f230
// 00803ec6  8d8ebc000000         lea ecx, [esi + 0xbc]
// 00803ecc  c644241803           mov byte ptr [esp + 0x18], 3
// 00803ed1  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00803ed7  e854b3c0ff           call 0x40f230
// 00803edc  8d8eb0000000         lea ecx, [esi + 0xb0]
// 00803ee2  c644241802           mov byte ptr [esp + 0x18], 2
// 00803ee7  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00803eed  e83eb3c0ff           call 0x40f230
// 00803ef2  8d8ea4000000         lea ecx, [esi + 0xa4]
// 00803ef8  c644241801           mov byte ptr [esp + 0x18], 1
// 00803efd  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00803f03  e828b3c0ff           call 0x40f230
// 00803f08  8d8e98000000         lea ecx, [esi + 0x98]
// 00803f0e  c644241800           mov byte ptr [esp + 0x18], 0
// 00803f13  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00803f19  e812b3c0ff           call 0x40f230
// 00803f1e  8bce                 mov ecx, esi
// 00803f20  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00803f28  e8b504ffff           call 0x7f43e2
// 00803f2d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00803f31  64890d00000000       mov dword ptr fs:[0], ecx
// 00803f38  59                   pop ecx
// 00803f39  5f                   pop edi
// 00803f3a  5e                   pop esi
// 00803f3b  83c410               add esp, 0x10
// 00803f3e  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPaintManager@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp