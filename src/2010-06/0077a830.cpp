// from server: 100% by auto
// roc 2010-06 0077a830  unit: RBX::PartDropTool  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077a830
//
// 0077a830  0fb65004             movzx edx, byte ptr [eax + 4]
// 0077a834  83c2fc               add edx, -4
// 0077a837  83fa06               cmp edx, 6
// 0077a83a  776b                 ja 0x77a8a7
// 0077a83c  ff2495a8a87700       jmp dword ptr [edx*4 + 0x77a8a8]
// 0077a843  50                   push eax
// 0077a844  51                   push ecx
// 0077a845  e8a6390000           call 0x77e1f0
// 0077a84a  83c408               add esp, 8
// 0077a84d  c3                   ret 
// 0077a84e  50                   push eax
// 0077a84f  51                   push ecx
// 0077a850  e83b3a0000           call 0x77e290
// 0077a855  83c408               add esp, 8
// 0077a858  c3                   ret 
// 0077a859  50                   push eax
// 0077a85a  51                   push ecx
// 0077a85b  e840380000           call 0x77e0a0
// 0077a860  83c408               add esp, 8
// 0077a863  c3                   ret 
// 0077a864  50                   push eax
// 0077a865  51                   push ecx
// 0077a866  e8d52b0000           call 0x77d440
// 0077a86b  83c408               add esp, 8
// 0077a86e  c3                   ret 
// 0077a86f  50                   push eax
// 0077a870  51                   push ecx
// 0077a871  e8aa99fbff           call 0x734220
// 0077a876  83c408               add esp, 8
// 0077a879  c3                   ret 
// 0077a87a  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0077a87d  ff4a04               dec dword ptr [edx + 4]
// 0077a880  8b500c               mov edx, dword ptr [eax + 0xc]
// 0077a883  6a00                 push 0
// 0077a885  83c211               add edx, 0x11
// 0077a888  52                   push edx
// 0077a889  50                   push eax
// 0077a88a  51                   push ecx
// 0077a88b  e870410000           call 0x77ea00
// 0077a890  83c410               add esp, 0x10
// 0077a893  c3                   ret 
// 0077a894  8b5010               mov edx, dword ptr [eax + 0x10]
// 0077a897  6a00                 push 0
// 0077a899  83c218               add edx, 0x18
// 0077a89c  52                   push edx
// 0077a89d  50                   push eax
// 0077a89e  51                   push ecx
// 0077a89f  e85c410000           call 0x77ea00
// 0077a8a4  83c410               add esp, 0x10
// 0077a8a7  c3                   ret 
// 0077a8a8  7aa8                 jp 0x77a852
// 0077a8aa  7700                 ja 0x77a8ac
// 0077a8ac  64a877               test al, 0x77
// 0077a8af  004ea8               add byte ptr [esi - 0x58], cl
// 0077a8b2  7700                 ja 0x77a8b4
// 0077a8b4  94                   xchg esp, eax
// 0077a8b5  a877                 test al, 0x77
// 0077a8b7  006fa8               add byte ptr [edi - 0x58], ch
// 0077a8ba  7700                 ja 0x77a8bc
// 0077a8bc  43                   inc ebx
// 0077a8bd  a877                 test al, 0x77
// 0077a8bf  0059a8               add byte ptr [ecx - 0x58], bl
// 0077a8c2  7700                 ja 0x77a8c4
// library lua-5.1.4/lgc.c (function _freeobj)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
