// roc 2012-06 0071adc0  unit: RBX::VProtectedString::?$TypedPropertyDescriptor  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0071adc0
//
// 0071adc0  6aff                 push -1
// 0071adc2  68e0f1ab00           push 0xabf1e0
// 0071adc7  64a100000000         mov eax, dword ptr fs:[0]
// 0071adcd  50                   push eax
// 0071adce  64892500000000       mov dword ptr fs:[0], esp
// 0071add5  83ec38               sub esp, 0x38
// 0071add8  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0071addc  53                   push ebx
// 0071addd  56                   push esi
// 0071adde  57                   push edi
// 0071addf  8bf1                 mov esi, ecx
// 0071ade1  50                   push eax
// 0071ade2  8d4c242c             lea ecx, [esp + 0x2c]
// 0071ade6  51                   push ecx
// 0071ade7  8bce                 mov ecx, esi
// 0071ade9  e8a2660700           call 0x791490
// 0071adee  8bf8                 mov edi, eax
// 0071adf0  8b542454             mov edx, dword ptr [esp + 0x54]
// 0071adf4  52                   push edx
// 0071adf5  8d442410             lea eax, [esp + 0x10]
// 0071adf9  50                   push eax
// 0071adfa  8bce                 mov ecx, esi
// 0071adfc  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0071ae04  e887660700           call 0x791490
// 0071ae09  57                   push edi
// 0071ae0a  50                   push eax
// 0071ae0b  c644245401           mov byte ptr [esp + 0x54], 1
// 0071ae10  ff156026b200         call dword ptr [0xb22660]
// 0071ae16  83c408               add esp, 8
// 0071ae19  8d4c240c             lea ecx, [esp + 0xc]
// 0071ae1d  8ad8                 mov bl, al
// 0071ae1f  c644244c00           mov byte ptr [esp + 0x4c], 0
// 0071ae24  ff153c26b200         call dword ptr [0xb2263c]
// 0071ae2a  8d4c2428             lea ecx, [esp + 0x28]
// 0071ae2e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0071ae36  ff153c26b200         call dword ptr [0xb2263c]
// 0071ae3c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0071ae40  5f                   pop edi
// 0071ae41  5e                   pop esi
// 0071ae42  8ac3                 mov al, bl
// 0071ae44  5b                   pop ebx
// 0071ae45  64890d00000000       mov dword ptr fs:[0], ecx
// 0071ae4c  83c444               add esp, 0x44
// 0071ae4f  c20800               ret 8
// library openrbx-client/App\v8datamodel\Message.cpp (function ?equalValues@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Message.cpp
