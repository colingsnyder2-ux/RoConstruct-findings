// roc 2008-06 0047bac0  unit: CInstanceRecord::CNameItem  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047bac0
//
// 0047bac0  6aff                 push -1
// 0047bac2  68f64b7c00           push 0x7c4bf6
// 0047bac7  64a100000000         mov eax, dword ptr fs:[0]
// 0047bacd  50                   push eax
// 0047bace  64892500000000       mov dword ptr fs:[0], esp
// 0047bad5  81ecbc070000         sub esp, 0x7bc
// 0047badb  53                   push ebx
// 0047badc  55                   push ebp
// 0047badd  56                   push esi
// 0047bade  8bf1                 mov esi, ecx
// 0047bae0  57                   push edi
// 0047bae1  8dbe20010000         lea edi, [esi + 0x120]
// 0047bae7  57                   push edi
// 0047bae8  8d4c2470             lea ecx, [esp + 0x70]
// 0047baec  e8dff5ffff           call 0x47b0d0
// 0047baf1  d9ee                 fldz 
// 0047baf3  d9542468             fst dword ptr [esp + 0x68]
// 0047baf7  33c0                 xor eax, eax
// 0047baf9  d9542410             fst dword ptr [esp + 0x10]
// 0047bafd  6a40                 push 0x40
// 0047baff  d9542418             fst dword ptr [esp + 0x18]
// 0047bb03  50                   push eax
// 0047bb04  d95c2420             fstp dword ptr [esp + 0x20]
// 0047bb08  898424dc070000       mov dword ptr [esp + 0x7dc], eax
// 0047bb0f  d9e8                 fld1 
// 0047bb11  89442428             mov dword ptr [esp + 0x28], eax
// 0047bb15  8d44242c             lea eax, [esp + 0x2c]
// 0047bb19  d95c2424             fstp dword ptr [esp + 0x24]
// 0047bb1d  50                   push eax
// 0047bb1e  c744247004000000     mov dword ptr [esp + 0x70], 4
// 0047bb26  e8d95b2200           call 0x6a1704
// 0047bb2b  d9e8                 fld1 
// 0047bb2d  d9542430             fst dword ptr [esp + 0x30]
// 0047bb31  83c40c               add esp, 0xc
// 0047bb34  d9542438             fst dword ptr [esp + 0x38]
// 0047bb38  d954244c             fst dword ptr [esp + 0x4c]
// 0047bb3c  d95c2460             fstp dword ptr [esp + 0x60]
// 0047bb40  8b9c24dc070000       mov ebx, dword ptr [esp + 0x7dc]
// 0047bb47  8bd3                 mov edx, ebx
// 0047bb49  6bd25c               imul edx, edx, 0x5c
// 0047bb4c  8d4c2410             lea ecx, [esp + 0x10]
// 0047bb50  51                   push ecx
// 0047bb51  8d8c32c8040000       lea ecx, [edx + esi + 0x4c8]
// 0047bb58  c68424d807000001     mov byte ptr [esp + 0x7d8], 1
// 0047bb60  e8dbd1ffff           call 0x478d40
// 0047bb65  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0047bb69  c68424d407000000     mov byte ptr [esp + 0x7d4], 0
// 0047bb71  85ed                 test ebp, ebp
// 0047bb73  7420                 je 0x47bb95
// 0047bb75  8d4504               lea eax, [ebp + 4]
// 0047bb78  50                   push eax
// 0047bb79  ff15ac218000         call dword ptr [0x8021ac]
// 0047bb7f  85c0                 test eax, eax
// 0047bb81  7512                 jne 0x47bb95
// 0047bb83  8bcd                 mov ecx, ebp
// 0047bb85  e806f2fdff           call 0x45ad90
// 0047bb8a  8b4500               mov eax, dword ptr [ebp]
// 0047bb8d  8b10                 mov edx, dword ptr [eax]
// 0047bb8f  6a01                 push 1
// 0047bb91  8bcd                 mov ecx, ebp
// 0047bb93  ffd2                 call edx
// 0047bb95  8b87a4030000         mov eax, dword ptr [edi + 0x3a4]
// 0047bb9b  3bc3                 cmp eax, ebx
// 0047bb9d  7d02                 jge 0x47bba1
// 0047bb9f  8bc3                 mov eax, ebx
// 0047bba1  8987a4030000         mov dword ptr [edi + 0x3a4], eax
// 0047bba7  8d44246c             lea eax, [esp + 0x6c]
// 0047bbab  50                   push eax
// 0047bbac  8bce                 mov ecx, esi
// 0047bbae  e83de9ffff           call 0x47a4f0
// 0047bbb3  8d4c246c             lea ecx, [esp + 0x6c]
// 0047bbb7  c78424d4070000ffffffff mov dword ptr [esp + 0x7d4], 0xffffffff
// 0047bbc2  e8a9deffff           call 0x479a70
// 0047bbc7  8b8c24cc070000       mov ecx, dword ptr [esp + 0x7cc]
// 0047bbce  5f                   pop edi
// 0047bbcf  5e                   pop esi
// 0047bbd0  5d                   pop ebp
// 0047bbd1  5b                   pop ebx
// 0047bbd2  64890d00000000       mov dword ptr fs:[0], ecx
// 0047bbd9  81c4c8070000         add esp, 0x7c8
// 0047bbdf  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?resetTextureUnit@RenderDevice@G3D@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
