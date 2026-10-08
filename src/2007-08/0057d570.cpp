// roc 2007-08 0057d570  unit: RBX::VFlag::?$FactoryProduct::Creator  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057d570
//
// 0057d570  56                   push esi
// 0057d571  57                   push edi
// 0057d572  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057d576  57                   push edi
// 0057d577  e8540bf1ff           call 0x48e0d0
// 0057d57c  8bf0                 mov esi, eax
// 0057d57e  83c404               add esp, 4
// 0057d581  85f6                 test esi, esi
// 0057d583  7410                 je 0x57d595
// 0057d585  3bfe                 cmp edi, esi
// 0057d587  740e                 je 0x57d597
// 0057d589  56                   push esi
// 0057d58a  8bcf                 mov ecx, edi
// 0057d58c  e82f2beaff           call 0x4200c0
// 0057d591  84c0                 test al, al
// 0057d593  7502                 jne 0x57d597
// 0057d595  33f6                 xor esi, esi
// 0057d597  33c0                 xor eax, eax
// 0057d599  85f6                 test esi, esi
// 0057d59b  5f                   pop edi
// 0057d59c  0f95c0               setne al
// 0057d59f  5e                   pop esi
// 0057d5a0  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ?contextInWorkspace@Workspace@RBX@@SA_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
