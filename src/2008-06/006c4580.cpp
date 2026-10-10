// roc 2008-06 006c4580  unit: CXTPToolBar  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c4580
//
// 006c4580  53                   push ebx
// 006c4581  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006c4585  56                   push esi
// 006c4586  8bf1                 mov esi, ecx
// 006c4588  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 006c458f  57                   push edi
// 006c4590  757a                 jne 0x6c460c
// 006c4592  83fb09               cmp ebx, 9
// 006c4595  7575                 jne 0x6c460c
// 006c4597  8b4620               mov eax, dword ptr [esi + 0x20]
// 006c459a  8b3df82d8000         mov edi, dword ptr [0x802df8]
// 006c45a0  50                   push eax
// 006c45a1  ffd7                 call edi
// 006c45a3  50                   push eax
// 006c45a4  e835c6fdff           call 0x6a0bde
// 006c45a9  85c0                 test eax, eax
// 006c45ab  745f                 je 0x6c460c
// 006c45ad  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006c45b0  51                   push ecx
// 006c45b1  ffd7                 call edi
// 006c45b3  50                   push eax
// 006c45b4  e825c6fdff           call 0x6a0bde
// 006c45b9  6a10                 push 0x10
// 006c45bb  8bf8                 mov edi, eax
// 006c45bd  ff15a42d8000         call dword ptr [0x802da4]
// 006c45c3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006c45c6  33d2                 xor edx, edx
// 006c45c8  6685c0               test ax, ax
// 006c45cb  0f9cc2               setl dl
// 006c45ce  8bc2                 mov eax, edx
// 006c45d0  50                   push eax
// 006c45d1  8b4720               mov eax, dword ptr [edi + 0x20]
// 006c45d4  51                   push ecx
// 006c45d5  50                   push eax
// 006c45d6  ff15642b8000         call dword ptr [0x802b64]
// 006c45dc  50                   push eax
// 006c45dd  e8fcc5fdff           call 0x6a0bde
// 006c45e2  85c0                 test eax, eax
// 006c45e4  7426                 je 0x6c460c
// 006c45e6  3bc6                 cmp eax, esi
// 006c45e8  7422                 je 0x6c460c
// 006c45ea  8bc8                 mov ecx, eax
// 006c45ec  e837c4fdff           call 0x6a0a28
// 006c45f1  8b16                 mov edx, dword ptr [esi]
// 006c45f3  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 006c45f9  6a00                 push 0
// 006c45fb  6a01                 push 1
// 006c45fd  6a00                 push 0
// 006c45ff  8bce                 mov ecx, esi
// 006c4601  ffd0                 call eax
// 006c4603  5f                   pop edi
// 006c4604  5e                   pop esi
// 006c4605  8d43f8               lea eax, [ebx - 8]
// 006c4608  5b                   pop ebx
// 006c4609  c20800               ret 8
// 006c460c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006c4610  51                   push ecx
// 006c4611  53                   push ebx
// 006c4612  8bce                 mov ecx, esi
// 006c4614  e8a743ffff           call 0x6b89c0
// 006c4619  5f                   pop edi
// 006c461a  5e                   pop esi
// 006c461b  5b                   pop ebx
// 006c461c  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?OnHookKeyDown@CXTPToolBar@@UAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
