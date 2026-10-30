// roc 2009-12 00861b80  unit: CXTPToolTipContext::CHTMLToolTip  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00861b80
//
// 00861b80  6aff                 push -1
// 00861b82  68d4e99500           push 0x95e9d4
// 00861b87  64a100000000         mov eax, dword ptr fs:[0]
// 00861b8d  50                   push eax
// 00861b8e  51                   push ecx
// 00861b8f  56                   push esi
// 00861b90  a10052b600           mov eax, dword ptr [0xb65200]
// 00861b95  33c4                 xor eax, esp
// 00861b97  50                   push eax
// 00861b98  8d44240c             lea eax, [esp + 0xc]
// 00861b9c  64a300000000         mov dword ptr fs:[0], eax
// 00861ba2  8bf1                 mov esi, ecx
// 00861ba4  89742408             mov dword ptr [esp + 8], esi
// 00861ba8  c706acdf9f00         mov dword ptr [esi], 0x9fdfac
// 00861bae  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00861bb1  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00861bb9  85c9                 test ecx, ecx
// 00861bbb  741e                 je 0x861bdb
// 00861bbd  8b01                 mov eax, dword ptr [ecx]
// 00861bbf  8b5068               mov edx, dword ptr [eax + 0x68]
// 00861bc2  ffd2                 call edx
// 00861bc4  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 00861bc7  85c9                 test ecx, ecx
// 00861bc9  7409                 je 0x861bd4
// 00861bcb  8b01                 mov eax, dword ptr [ecx]
// 00861bcd  8b5004               mov edx, dword ptr [eax + 4]
// 00861bd0  6a01                 push 1
// 00861bd2  ffd2                 call edx
// 00861bd4  c7466000000000       mov dword ptr [esi + 0x60], 0
// 00861bdb  393574b6b900         cmp dword ptr [0xb9b674], esi
// 00861be1  750a                 jne 0x861bed
// 00861be3  c70574b6b90000000000 mov dword ptr [0xb9b674], 0
// 00861bed  8d8ea0000000         lea ecx, [esi + 0xa0]
// 00861bf3  c644241401           mov byte ptr [esp + 0x14], 1
// 00861bf8  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00861bfe  e82dd6baff           call 0x40f230
// 00861c03  8d8e98000000         lea ecx, [esi + 0x98]
// 00861c09  c644241400           mov byte ptr [esp + 0x14], 0
// 00861c0e  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00861c14  e817d6baff           call 0x40f230
// 00861c19  8bce                 mov ecx, esi
// 00861c1b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00861c23  e8ba27f9ff           call 0x7f43e2
// 00861c28  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00861c2c  64890d00000000       mov dword ptr fs:[0], ecx
// 00861c33  59                   pop ecx
// 00861c34  5e                   pop esi
// 00861c35  83c410               add esp, 0x10
// 00861c38  c3                   ret 
// copied from an identical function in another client (function ??1CXTPToolTipContext@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp