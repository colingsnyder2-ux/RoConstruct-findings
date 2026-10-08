// roc 2008-06 004a6700  unit: RBX::VHint::?$FactoryProduct::Creator  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a6700
//
// 004a6700  83ec10               sub esp, 0x10
// 004a6703  56                   push esi
// 004a6704  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004a6708  8d44240c             lea eax, [esp + 0xc]
// 004a670c  50                   push eax
// 004a670d  8d4c240c             lea ecx, [esp + 0xc]
// 004a6711  51                   push ecx
// 004a6712  8d54240c             lea edx, [esp + 0xc]
// 004a6716  52                   push edx
// 004a6717  e8e4f4ffff           call 0x4a5c00
// 004a671c  83c40c               add esp, 0xc
// 004a671f  84c0                 test al, al
// 004a6721  7440                 je 0x4a6763
// 004a6723  8b742418             mov esi, dword ptr [esp + 0x18]
// 004a6727  8bce                 mov ecx, esi
// 004a6729  e832eeffff           call 0x4a5560
// 004a672e  6a01                 push 1
// 004a6730  6a0b                 push 0xb
// 004a6732  8d44240c             lea eax, [esp + 0xc]
// 004a6736  50                   push eax
// 004a6737  8bce                 mov ecx, esi
// 004a6739  e8c2eeffff           call 0x4a5600
// 004a673e  6a01                 push 1
// 004a6740  6a0b                 push 0xb
// 004a6742  8d4c2410             lea ecx, [esp + 0x10]
// 004a6746  51                   push ecx
// 004a6747  8bce                 mov ecx, esi
// 004a6749  e8b2eeffff           call 0x4a5600
// 004a674e  6a01                 push 1
// 004a6750  6a0b                 push 0xb
// 004a6752  8d542414             lea edx, [esp + 0x14]
// 004a6756  52                   push edx
// 004a6757  8bce                 mov ecx, esi
// 004a6759  e8a2eeffff           call 0x4a5600
// 004a675e  5e                   pop esi
// 004a675f  83c410               add esp, 0x10
// 004a6762  c3                   ret 
// 004a6763  57                   push edi
// 004a6764  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004a6768  8bcf                 mov ecx, edi
// 004a676a  e8d1edffff           call 0x4a5540
// 004a676f  d906                 fld dword ptr [esi]
// 004a6771  6a01                 push 1
// 004a6773  d95c2418             fstp dword ptr [esp + 0x18]
// 004a6777  6a20                 push 0x20
// 004a6779  8d44241c             lea eax, [esp + 0x1c]
// 004a677d  50                   push eax
// 004a677e  8bcf                 mov ecx, edi
// 004a6780  e87beeffff           call 0x4a5600
// 004a6785  d94604               fld dword ptr [esi + 4]
// 004a6788  6a01                 push 1
// 004a678a  d95c2418             fstp dword ptr [esp + 0x18]
// 004a678e  6a20                 push 0x20
// 004a6790  8d4c241c             lea ecx, [esp + 0x1c]
// 004a6794  51                   push ecx
// 004a6795  8bcf                 mov ecx, edi
// 004a6797  e864eeffff           call 0x4a5600
// 004a679c  d94608               fld dword ptr [esi + 8]
// 004a679f  6a01                 push 1
// 004a67a1  d95c2418             fstp dword ptr [esp + 0x18]
// 004a67a5  6a20                 push 0x20
// 004a67a7  8d54241c             lea edx, [esp + 0x1c]
// 004a67ab  52                   push edx
// 004a67ac  8bcf                 mov ecx, edi
// 004a67ae  e84deeffff           call 0x4a5600
// 004a67b3  5f                   pop edi
// 004a67b4  5e                   pop esi
// 004a67b5  83c410               add esp, 0x10
// 004a67b8  c3                   ret 
// library rbxgs-net/Streaming.cpp (function ?writeBrickVector@Network@RBX@@YAXAAVBitStream@RakNet@@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Streaming.cpp
