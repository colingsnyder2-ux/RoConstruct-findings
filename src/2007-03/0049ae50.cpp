// roc 2007-03 0049ae50  unit: seg_00490000  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0049ae50
//
// 0049ae50  56                   push esi
// 0049ae51  8b742408             mov esi, dword ptr [esp + 8]
// 0049ae55  85f6                 test esi, esi
// 0049ae57  0f84dc000000         je 0x49af39
// 0049ae5d  803e00               cmp byte ptr [esi], 0
// 0049ae60  0f84d3000000         je 0x49af39
// 0049ae66  8bc6                 mov eax, esi
// 0049ae68  8d5001               lea edx, [eax + 1]
// 0049ae6b  eb03                 jmp 0x49ae70
// 0049ae6d  8d4900               lea ecx, [ecx]
// 0049ae70  8a08                 mov cl, byte ptr [eax]
// 0049ae72  83c001               add eax, 1
// 0049ae75  84c9                 test cl, cl
// 0049ae77  75f7                 jne 0x49ae70
// 0049ae79  2bc2                 sub eax, edx
// 0049ae7b  83c001               add eax, 1
// 0049ae7e  57                   push edi
// 0049ae7f  50                   push eax
// 0049ae80  e883321800           call 0x61e108
// 0049ae85  8bf8                 mov edi, eax
// 0049ae87  8bd7                 mov edx, edi
// 0049ae89  83c404               add esp, 4
// 0049ae8c  8bc6                 mov eax, esi
// 0049ae8e  2bd6                 sub edx, esi
// 0049ae90  8a08                 mov cl, byte ptr [eax]
// 0049ae92  880c02               mov byte ptr [edx + eax], cl
// 0049ae95  83c001               add eax, 1
// 0049ae98  84c9                 test cl, cl
// 0049ae9a  75f4                 jne 0x49ae90
// 0049ae9c  380f                 cmp byte ptr [edi], cl
// 0049ae9e  7423                 je 0x49aec3
// 0049aea0  8bf7                 mov esi, edi
// 0049aea2  8a06                 mov al, byte ptr [esi]
// 0049aea4  3c2f                 cmp al, 0x2f
// 0049aea6  7404                 je 0x49aeac
// 0049aea8  3c5c                 cmp al, 0x5c
// 0049aeaa  750f                 jne 0x49aebb
// 0049aeac  57                   push edi
// 0049aead  c60600               mov byte ptr [esi], 0
// 0049aeb0  e8a7471800           call 0x61f65c
// 0049aeb5  83c404               add esp, 4
// 0049aeb8  c6062f               mov byte ptr [esi], 0x2f
// 0049aebb  83c601               add esi, 1
// 0049aebe  803e00               cmp byte ptr [esi], 0
// 0049aec1  75df                 jne 0x49aea2
// 0049aec3  53                   push ebx
// 0049aec4  55                   push ebp
// 0049aec5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0049aec9  85ed                 test ebp, ebp
// 0049aecb  7453                 je 0x49af20
// 0049aecd  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0049aed1  85db                 test ebx, ebx
// 0049aed3  744b                 je 0x49af20
// 0049aed5  8b442414             mov eax, dword ptr [esp + 0x14]
// 0049aed9  6878bb7900           push 0x79bb78
// 0049aede  50                   push eax
// 0049aedf  e872471800           call 0x61f656
// 0049aee4  8bf0                 mov esi, eax
// 0049aee6  83c408               add esp, 8
// 0049aee9  85f6                 test esi, esi
// 0049aeeb  7510                 jne 0x49aefd
// 0049aeed  57                   push edi
// 0049aeee  e8fd311800           call 0x61e0f0
// 0049aef3  83c404               add esp, 4
// 0049aef6  5d                   pop ebp
// 0049aef7  5b                   pop ebx
// 0049aef8  5f                   pop edi
// 0049aef9  32c0                 xor al, al
// 0049aefb  5e                   pop esi
// 0049aefc  c3                   ret 
// 0049aefd  56                   push esi
// 0049aefe  53                   push ebx
// 0049aeff  6a01                 push 1
// 0049af01  55                   push ebp
// 0049af02  e849471800           call 0x61f650
// 0049af07  56                   push esi
// 0049af08  e83d471800           call 0x61f64a
// 0049af0d  83c414               add esp, 0x14
// 0049af10  57                   push edi
// 0049af11  e8da311800           call 0x61e0f0
// 0049af16  83c404               add esp, 4
// 0049af19  5d                   pop ebp
// 0049af1a  5b                   pop ebx
// 0049af1b  5f                   pop edi
// 0049af1c  b001                 mov al, 1
// 0049af1e  5e                   pop esi
// 0049af1f  c3                   ret 
// 0049af20  57                   push edi
// 0049af21  e836471800           call 0x61f65c
// 0049af26  83c404               add esp, 4
// 0049af29  57                   push edi
// 0049af2a  e8c1311800           call 0x61e0f0
// 0049af2f  83c404               add esp, 4
// 0049af32  5d                   pop ebp
// 0049af33  5b                   pop ebx
// 0049af34  5f                   pop edi
// 0049af35  b001                 mov al, 1
// 0049af37  5e                   pop esi
// 0049af38  c3                   ret 
// 0049af39  32c0                 xor al, al
// 0049af3b  5e                   pop esi
// 0049af3c  c3                   ret 
// library rbxgs-raknet/FileOperations.cpp (function ?WriteFileWithDirectories@@YA_NPBDPADI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet FileOperations.cpp
