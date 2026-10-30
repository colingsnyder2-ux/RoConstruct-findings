// roc 2009-12 00805170  unit: CXTPCommandBar  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805170
//
// 00805170  56                   push esi
// 00805171  57                   push edi
// 00805172  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00805176  8bf1                 mov esi, ecx
// 00805178  85ff                 test edi, edi
// 0080517a  744c                 je 0x8051c8
// 0080517c  8b4704               mov eax, dword ptr [edi + 4]
// 0080517f  50                   push eax
// 00805180  ff1570ca9800         call dword ptr [0x98ca70]
// 00805186  85c0                 test eax, eax
// 00805188  743e                 je 0x8051c8
// 0080518a  837c241000           cmp dword ptr [esp + 0x10], 0
// 0080518f  740b                 je 0x80519c
// 00805191  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00805197  e844010400           call 0x8452e0
// 0080519c  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008051a2  57                   push edi
// 008051a3  e878feffff           call 0x805020
// 008051a8  85c0                 test eax, eax
// 008051aa  741c                 je 0x8051c8
// 008051ac  8bce                 mov ecx, esi
// 008051ae  e89be9feff           call 0x7f3b4e
// 008051b3  85c0                 test eax, eax
// 008051b5  7407                 je 0x8051be
// 008051b7  8388e40000000c       or dword ptr [eax + 0xe4], 0xc
// 008051be  5f                   pop edi
// 008051bf  b801000000           mov eax, 1
// 008051c4  5e                   pop esi
// 008051c5  c20800               ret 8
// 008051c8  5f                   pop edi
// 008051c9  33c0                 xor eax, eax
// 008051cb  5e                   pop esi
// 008051cc  c20800               ret 8
// copied from an identical function in another client (function ?LoadMenuA@CXTPCommandBar@@UAEHPAVCMenu@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp