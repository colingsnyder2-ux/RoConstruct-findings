// from server: 100% by auto
// roc 2009-06 0059aea0  unit: seg_00590000  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059aea0
//
// 0059aea0  51                   push ecx
// 0059aea1  53                   push ebx
// 0059aea2  55                   push ebp
// 0059aea3  56                   push esi
// 0059aea4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0059aea8  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 0059aeae  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 0059aeb4  33ed                 xor ebp, ebp
// 0059aeb6  396e24               cmp dword ptr [esi + 0x24], ebp
// 0059aeb9  8944240c             mov dword ptr [esp + 0xc], eax
// 0059aebd  7e73                 jle 0x59af32
// 0059aebf  57                   push edi
// 0059aec0  83c30c               add ebx, 0xc
// 0059aec3  eb02                 jmp 0x59aec7
// 0059aec5  8bf1                 mov esi, ecx
// 0059aec7  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 0059aeca  0faf0b               imul ecx, dword ptr [ebx]
// 0059aecd  8bc1                 mov eax, ecx
// 0059aecf  99                   cdq 
// 0059aed0  f7be18010000         idiv dword ptr [esi + 0x118]
// 0059aed6  33d2                 xor edx, edx
// 0059aed8  8bf8                 mov edi, eax
// 0059aeda  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0059aedd  f7f1                 div ecx
// 0059aedf  8bf2                 mov esi, edx
// 0059aee1  85f6                 test esi, esi
// 0059aee3  7502                 jne 0x59aee7
// 0059aee5  8bf1                 mov esi, ecx
// 0059aee7  85ed                 test ebp, ebp
// 0059aee9  7512                 jne 0x59aefd
// 0059aeeb  8d46ff               lea eax, [esi - 1]
// 0059aeee  99                   cdq 
// 0059aeef  f7ff                 idiv edi
// 0059aef1  8bc8                 mov ecx, eax
// 0059aef3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059aef7  41                   inc ecx
// 0059aef8  894848               mov dword ptr [eax + 0x48], ecx
// 0059aefb  eb04                 jmp 0x59af01
// 0059aefd  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059af01  8b5040               mov edx, dword ptr [eax + 0x40]
// 0059af04  8b449038             mov eax, dword ptr [eax + edx*4 + 0x38]
// 0059af08  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 0059af0b  8d143f               lea edx, [edi + edi]
// 0059af0e  85d2                 test edx, edx
// 0059af10  7e12                 jle 0x59af24
// 0059af12  8d0cb0               lea ecx, [eax + esi*4]
// 0059af15  8bc1                 mov eax, ecx
// 0059af17  8b71fc               mov esi, dword ptr [ecx - 4]
// 0059af1a  8930                 mov dword ptr [eax], esi
// 0059af1c  83c004               add eax, 4
// 0059af1f  83ea01               sub edx, 1
// 0059af22  75f3                 jne 0x59af17
// 0059af24  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059af28  45                   inc ebp
// 0059af29  83c354               add ebx, 0x54
// 0059af2c  3b6924               cmp ebp, dword ptr [ecx + 0x24]
// 0059af2f  7c94                 jl 0x59aec5
// 0059af31  5f                   pop edi
// 0059af32  5e                   pop esi
// 0059af33  5d                   pop ebp
// 0059af34  5b                   pop ebx
// 0059af35  59                   pop ecx
// 0059af36  c3                   ret 
// library jpeg-6b/jdmainct.c (function _set_bottom_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
