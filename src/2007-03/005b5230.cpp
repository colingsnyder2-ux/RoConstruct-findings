// roc 2007-03 005b5230  unit: seg_005b0000  size: 114 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005b5230
//
// 005b5230  51                   push ecx
// 005b5231  53                   push ebx
// 005b5232  56                   push esi
// 005b5233  8b742410             mov esi, dword ptr [esp + 0x10]
// 005b5237  57                   push edi
// 005b5238  8bce                 mov ecx, esi
// 005b523a  33ff                 xor edi, edi
// 005b523c  e8dfcffbff           call 0x572220
// 005b5241  85c0                 test eax, eax
// 005b5243  764f                 jbe 0x5b5294
// 005b5245  8b1d44e97700         mov ebx, dword ptr [0x77e944]
// 005b524b  eb03                 jmp 0x5b5250
// 005b524d  8d4900               lea ecx, [ecx]
// 005b5250  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b5253  85c9                 test ecx, ecx
// 005b5255  740c                 je 0x5b5263
// 005b5257  8b4608               mov eax, dword ptr [esi + 8]
// 005b525a  2bc1                 sub eax, ecx
// 005b525c  c1f803               sar eax, 3
// 005b525f  3bf8                 cmp edi, eax
// 005b5261  7202                 jb 0x5b5265
// 005b5263  ffd3                 call ebx
// 005b5265  8b4604               mov eax, dword ptr [esi + 4]
// 005b5268  83ec08               sub esp, 8
// 005b526b  8bd4                 mov edx, esp
// 005b526d  89642414             mov dword ptr [esp + 0x14], esp
// 005b5271  8d0cf8               lea ecx, [eax + edi*8]
// 005b5274  52                   push edx
// 005b5275  e836610100           call 0x5cb3b0
// 005b527a  e881d4fbff           call 0x572700
// 005b527f  83c408               add esp, 8
// 005b5282  84c0                 test al, al
// 005b5284  7515                 jne 0x5b529b
// 005b5286  8bce                 mov ecx, esi
// 005b5288  83c701               add edi, 1
// 005b528b  e890cffbff           call 0x572220
// 005b5290  3bf8                 cmp edi, eax
// 005b5292  72bc                 jb 0x5b5250
// 005b5294  32c0                 xor al, al
// 005b5296  5f                   pop edi
// 005b5297  5e                   pop esi
// 005b5298  5b                   pop ebx
// 005b5299  59                   pop ecx
// 005b529a  c3                   ret 
// 005b529b  5f                   pop edi
// 005b529c  5e                   pop esi
// 005b529d  b001                 mov al, 1
// 005b529f  5b                   pop ebx
// 005b52a0  59                   pop ecx
// 005b52a1  c3                   ret 
// library rbxgs/tool\DragUtilities.cpp (function ?anyPartAlive@DragUtilities@RBX@@SA_NABV?$vector@V?$weak_ptr@VPartInstance@RBX@@@boost@@V?$allocator@V?$weak_ptr@VPartInstance@RBX@@@boost@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/DragUtilities.cpp
