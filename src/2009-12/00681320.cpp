// roc 2009-12 00681320  unit: RBX::VProtectedString::?$TypedPropertyDescriptor  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00681320
//
// 00681320  6aff                 push -1
// 00681322  68905a9400           push 0x945a90
// 00681327  64a100000000         mov eax, dword ptr fs:[0]
// 0068132d  50                   push eax
// 0068132e  64892500000000       mov dword ptr fs:[0], esp
// 00681335  83ec38               sub esp, 0x38
// 00681338  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0068133c  53                   push ebx
// 0068133d  56                   push esi
// 0068133e  57                   push edi
// 0068133f  8bf1                 mov esi, ecx
// 00681341  50                   push eax
// 00681342  8d4c242c             lea ecx, [esp + 0x2c]
// 00681346  51                   push ecx
// 00681347  8bce                 mov ecx, esi
// 00681349  e8920fdcff           call 0x4422e0
// 0068134e  8bf8                 mov edi, eax
// 00681350  8b542454             mov edx, dword ptr [esp + 0x54]
// 00681354  52                   push edx
// 00681355  8d442410             lea eax, [esp + 0x10]
// 00681359  50                   push eax
// 0068135a  8bce                 mov ecx, esi
// 0068135c  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00681364  e8770fdcff           call 0x4422e0
// 00681369  57                   push edi
// 0068136a  50                   push eax
// 0068136b  c644245401           mov byte ptr [esp + 0x54], 1
// 00681370  ff157cb69800         call dword ptr [0x98b67c]
// 00681376  83c408               add esp, 8
// 00681379  8d4c240c             lea ecx, [esp + 0xc]
// 0068137d  8ad8                 mov bl, al
// 0068137f  c644244c00           mov byte ptr [esp + 0x4c], 0
// 00681384  ff15e4b69800         call dword ptr [0x98b6e4]
// 0068138a  8d4c2428             lea ecx, [esp + 0x28]
// 0068138e  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00681396  ff15e4b69800         call dword ptr [0x98b6e4]
// 0068139c  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006813a0  5f                   pop edi
// 006813a1  5e                   pop esi
// 006813a2  8ac3                 mov al, bl
// 006813a4  5b                   pop ebx
// 006813a5  64890d00000000       mov dword ptr fs:[0], ecx
// 006813ac  83c444               add esp, 0x44
// 006813af  c20800               ret 8
// library openrbx-client/App\v8datamodel\Message.cpp (function ?equalValues@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@UBE_NPBVDescribedBase@23@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Message.cpp
