// roc 2007-03 00590910  unit: seg_00590000  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00590910
//
// 00590910  51                   push ecx
// 00590911  53                   push ebx
// 00590912  55                   push ebp
// 00590913  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00590917  8d9964010000         lea ebx, [ecx + 0x164]
// 0059091d  894c2408             mov dword ptr [esp + 8], ecx
// 00590921  53                   push ebx
// 00590922  8bcd                 mov ecx, ebp
// 00590924  e8a728eeff           call 0x4731d0
// 00590929  84c0                 test al, al
// 0059092b  7445                 je 0x590972
// 0059092d  56                   push esi
// 0059092e  57                   push edi
// 0059092f  b909000000           mov ecx, 9
// 00590934  8bf5                 mov esi, ebp
// 00590936  8bfb                 mov edi, ebx
// 00590938  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0059093a  d94524               fld dword ptr [ebp + 0x24]
// 0059093d  d95b24               fstp dword ptr [ebx + 0x24]
// 00590940  d94528               fld dword ptr [ebp + 0x28]
// 00590943  d95b28               fstp dword ptr [ebx + 0x28]
// 00590946  d9452c               fld dword ptr [ebp + 0x2c]
// 00590949  d95b2c               fstp dword ptr [ebx + 0x2c]
// 0059094c  8b742410             mov esi, dword ptr [esp + 0x10]
// 00590950  68f8e68b00           push 0x8be6f8
// 00590955  8bce                 mov ecx, esi
// 00590957  e8e434ebff           call 0x443e40
// 0059095c  8bce                 mov ecx, esi
// 0059095e  e8bdd8ffff           call 0x58e220
// 00590963  85c0                 test eax, eax
// 00590965  5f                   pop edi
// 00590966  5e                   pop esi
// 00590967  7409                 je 0x590972
// 00590969  8b10                 mov edx, dword ptr [eax]
// 0059096b  8bc8                 mov ecx, eax
// 0059096d  8b420c               mov eax, dword ptr [edx + 0xc]
// 00590970  ffd0                 call eax
// 00590972  5d                   pop ebp
// 00590973  5b                   pop ebx
// 00590974  59                   pop ecx
// 00590975  c20400               ret 4
// library rbxgs/v8datamodel\Camera.cpp (function ?setCameraFocus@Camera@RBX@@QAEXABVCoordinateFrame@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
