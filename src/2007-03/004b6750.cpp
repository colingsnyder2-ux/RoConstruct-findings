// from server: 100% by auto
// roc 2007-03 004b6750  unit: seg_004b0000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b6750
//
// 004b6750  53                   push ebx
// 004b6751  55                   push ebp
// 004b6752  56                   push esi
// 004b6753  57                   push edi
// 004b6754  8bd9                 mov ebx, ecx
// 004b6756  e82594ffff           call 0x4afb80
// 004b675b  8b442414             mov eax, dword ptr [esp + 0x14]
// 004b675f  8b742418             mov esi, dword ptr [esp + 0x18]
// 004b6763  8903                 mov dword ptr [ebx], eax
// 004b6765  33c0                 xor eax, eax
// 004b6767  894304               mov dword ptr [ebx + 4], eax
// 004b676a  894308               mov dword ptr [ebx + 8], eax
// 004b676d  89430c               mov dword ptr [ebx + 0xc], eax
// 004b6770  894310               mov dword ptr [ebx + 0x10], eax
// 004b6773  894314               mov dword ptr [ebx + 0x14], eax
// 004b6776  8d6b20               lea ebp, [ebx + 0x20]
// 004b6779  894318               mov dword ptr [ebx + 0x18], eax
// 004b677c  89431c               mov dword ptr [ebx + 0x1c], eax
// 004b677f  b908000000           mov ecx, 8
// 004b6784  8bfd                 mov edi, ebp
// 004b6786  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b6788  8d4b40               lea ecx, [ebx + 0x40]
// 004b678b  51                   push ecx
// 004b678c  55                   push ebp
// 004b678d  e81eeeffff           call 0x4b55b0
// 004b6792  83c360               add ebx, 0x60
// 004b6795  53                   push ebx
// 004b6796  55                   push ebp
// 004b6797  e864beffff           call 0x4b2600
// 004b679c  83c410               add esp, 0x10
// 004b679f  5f                   pop edi
// 004b67a0  5e                   pop esi
// 004b67a1  5d                   pop ebp
// 004b67a2  5b                   pop ebx
// 004b67a3  c20800               ret 8

// from server: 49% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/ctltrack.cpp