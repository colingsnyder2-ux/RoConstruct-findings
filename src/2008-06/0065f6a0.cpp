// from server: 100% by auto
// roc 2008-06 0065f6a0  unit: seg_00650000  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0065f6a0
//
// 0065f6a0  53                   push ebx
// 0065f6a1  56                   push esi
// 0065f6a2  57                   push edi
// 0065f6a3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0065f6a7  6a4c                 push 0x4c
// 0065f6a9  33db                 xor ebx, ebx
// 0065f6ab  53                   push ebx
// 0065f6ac  53                   push ebx
// 0065f6ad  57                   push edi
// 0065f6ae  e83d100000           call 0x6606f0
// 0065f6b3  8bf0                 mov esi, eax
// 0065f6b5  6a09                 push 9
// 0065f6b7  56                   push esi
// 0065f6b8  57                   push edi
// 0065f6b9  e822ceffff           call 0x65c4e0
// 0065f6be  83c41c               add esp, 0x1c
// 0065f6c1  5f                   pop edi
// 0065f6c2  895e08               mov dword ptr [esi + 8], ebx
// 0065f6c5  895e28               mov dword ptr [esi + 0x28], ebx
// 0065f6c8  895e10               mov dword ptr [esi + 0x10], ebx
// 0065f6cb  895e34               mov dword ptr [esi + 0x34], ebx
// 0065f6ce  895e0c               mov dword ptr [esi + 0xc], ebx
// 0065f6d1  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0065f6d4  895e30               mov dword ptr [esi + 0x30], ebx
// 0065f6d7  895e24               mov dword ptr [esi + 0x24], ebx
// 0065f6da  885e48               mov byte ptr [esi + 0x48], bl
// 0065f6dd  895e1c               mov dword ptr [esi + 0x1c], ebx
// 0065f6e0  885e49               mov byte ptr [esi + 0x49], bl
// 0065f6e3  885e4a               mov byte ptr [esi + 0x4a], bl
// 0065f6e6  885e4b               mov byte ptr [esi + 0x4b], bl
// 0065f6e9  895e14               mov dword ptr [esi + 0x14], ebx
// 0065f6ec  895e38               mov dword ptr [esi + 0x38], ebx
// 0065f6ef  895e18               mov dword ptr [esi + 0x18], ebx
// 0065f6f2  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0065f6f5  895e40               mov dword ptr [esi + 0x40], ebx
// 0065f6f8  895e20               mov dword ptr [esi + 0x20], ebx
// 0065f6fb  8bc6                 mov eax, esi
// 0065f6fd  5e                   pop esi
// 0065f6fe  5b                   pop ebx
// 0065f6ff  c3                   ret 
// library lua-5.1.4/lfunc.c (function _luaF_newproto)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lfunc.c
