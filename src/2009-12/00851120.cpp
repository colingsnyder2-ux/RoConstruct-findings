// roc 2009-12 00851120  unit: CXTPPropExchangeEnumerator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00851120
//
// 00851120  8b442404             mov eax, dword ptr [esp + 4]
// 00851124  56                   push esi
// 00851125  8d710c               lea esi, [ecx + 0xc]
// 00851128  8b4904               mov ecx, dword ptr [ecx + 4]
// 0085112b  8906                 mov dword ptr [esi], eax
// 0085112d  85c9                 test ecx, ecx
// 0085112f  7506                 jne 0x851137
// 00851131  33c0                 xor eax, eax
// 00851133  5e                   pop esi
// 00851134  c20800               ret 8
// 00851137  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0085113c  751c                 jne 0x85115a
// 0085113e  6a00                 push 0
// 00851140  56                   push esi
// 00851141  688c7d9f00           push 0x9f7d8c
// 00851146  51                   push ecx
// 00851147  e8b4f8ffff           call 0x850a00
// 0085114c  33c0                 xor eax, eax
// 0085114e  83c410               add esp, 0x10
// 00851151  3906                 cmp dword ptr [esi], eax
// 00851153  5e                   pop esi
// 00851154  0f95c0               setne al
// 00851157  c20800               ret 8
// 0085115a  83792800             cmp dword ptr [ecx + 0x28], 0
// 0085115e  8b11                 mov edx, dword ptr [ecx]
// 00851160  7511                 jne 0x851173
// 00851162  50                   push eax
// 00851163  8b4278               mov eax, dword ptr [edx + 0x78]
// 00851166  ffd0                 call eax
// 00851168  33c0                 xor eax, eax
// 0085116a  3906                 cmp dword ptr [esi], eax
// 0085116c  5e                   pop esi
// 0085116d  0f95c0               setne al
// 00851170  c20800               ret 8
// 00851173  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00851176  ffd0                 call eax
// 00851178  8906                 mov dword ptr [esi], eax
// 0085117a  33c0                 xor eax, eax
// 0085117c  3906                 cmp dword ptr [esi], eax
// 0085117e  5e                   pop esi
// 0085117f  0f95c0               setne al
// 00851182  c20800               ret 8
// copied from an identical function in another client (function ?GetPosition@CXTPPropExchangeEnumerator@@UAEPAU__POSITION@@KH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp