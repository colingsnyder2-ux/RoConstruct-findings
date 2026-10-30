// roc 2007-03 0045ae90  unit: seg_00450000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0045ae90
//
// 0045ae90  51                   push ecx
// 0045ae91  53                   push ebx
// 0045ae92  55                   push ebp
// 0045ae93  56                   push esi
// 0045ae94  57                   push edi
// 0045ae95  8d7158               lea esi, [ecx + 0x58]
// 0045ae98  6a01                 push 1
// 0045ae9a  8bce                 mov ecx, esi
// 0045ae9c  e8bff0ffff           call 0x459f60
// 0045aea1  6a01                 push 1
// 0045aea3  8bce                 mov ecx, esi
// 0045aea5  8bd8                 mov ebx, eax
// 0045aea7  e8e4f0ffff           call 0x459f90
// 0045aeac  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0045aeb0  55                   push ebp
// 0045aeb1  89442414             mov dword ptr [esp + 0x14], eax
// 0045aeb5  ff15b4d27700         call dword ptr [0x77d2b4]
// 0045aebb  8bf8                 mov edi, eax
// 0045aebd  8b442424             mov eax, dword ptr [esp + 0x24]
// 0045aec1  85c0                 test eax, eax
// 0045aec3  750a                 jne 0x45aecf
// 0045aec5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0045aec9  2bcb                 sub ecx, ebx
// 0045aecb  3bf9                 cmp edi, ecx
// 0045aecd  756e                 jne 0x45af3d
// 0045aecf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0045aed3  f7da                 neg edx
// 0045aed5  1bd2                 sbb edx, edx
// 0045aed7  83e204               and edx, 4
// 0045aeda  f7d8                 neg eax
// 0045aedc  1bc0                 sbb eax, eax
// 0045aede  2500002000           and eax, 0x200000
// 0045aee3  0bd0                 or edx, eax
// 0045aee5  8b442420             mov eax, dword ptr [esp + 0x20]
// 0045aee9  f7d8                 neg eax
// 0045aeeb  1bc0                 sbb eax, eax
// 0045aeed  83e002               and eax, 2
// 0045aef0  6a01                 push 1
// 0045aef2  0bd0                 or edx, eax
// 0045aef4  52                   push edx
// 0045aef5  8bce                 mov ecx, esi
// 0045aef7  e8c4f6ffff           call 0x45a5c0
// 0045aefc  6a01                 push 1
// 0045aefe  8bce                 mov ecx, esi
// 0045af00  e86bf8ffff           call 0x45a770
// 0045af05  6a01                 push 1
// 0045af07  55                   push ebp
// 0045af08  57                   push edi
// 0045af09  8bce                 mov ecx, esi
// 0045af0b  e860f6ffff           call 0x45a570
// 0045af10  85c0                 test eax, eax
// 0045af12  7c29                 jl 0x45af3d
// 0045af14  6a01                 push 1
// 0045af16  8bce                 mov ecx, esi
// 0045af18  e8f3f5ffff           call 0x45a510
// 0045af1d  3bc3                 cmp eax, ebx
// 0045af1f  751c                 jne 0x45af3d
// 0045af21  6a01                 push 1
// 0045af23  8bce                 mov ecx, esi
// 0045af25  e816f6ffff           call 0x45a540
// 0045af2a  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0045af2e  750d                 jne 0x45af3d
// 0045af30  5f                   pop edi
// 0045af31  5e                   pop esi
// 0045af32  5d                   pop ebp
// 0045af33  b801000000           mov eax, 1
// 0045af38  5b                   pop ebx
// 0045af39  59                   pop ecx
// 0045af3a  c21000               ret 0x10
// 0045af3d  5f                   pop edi
// 0045af3e  5e                   pop esi
// 0045af3f  5d                   pop ebp
// 0045af40  33c0                 xor eax, eax
// 0045af42  5b                   pop ebx
// 0045af43  59                   pop ecx
// 0045af44  c21000               ret 0x10
// library scintilla-mfc-1.20/ScintillaDocView.cpp (function ?SameAsSelected@CScintillaView@@MAEHPBDHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: scintilla-mfc-1.20 ScintillaDocView.cpp
