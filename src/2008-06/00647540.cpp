// roc 2008-06 00647540  unit: RBX::GlueJoint  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00647540
//
// 00647540  53                   push ebx
// 00647541  55                   push ebp
// 00647542  56                   push esi
// 00647543  57                   push edi
// 00647544  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00647548  8bcf                 mov ecx, edi
// 0064754a  e84106faff           call 0x5e7b90
// 0064754f  8bf0                 mov esi, eax
// 00647551  85f6                 test esi, esi
// 00647553  7433                 je 0x647588
// 00647555  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00647559  8da42400000000       lea esp, [esp]
// 00647560  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00647563  3bfb                 cmp edi, ebx
// 00647565  7503                 jne 0x64756a
// 00647567  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0064756a  55                   push ebp
// 0064756b  56                   push esi
// 0064756c  53                   push ebx
// 0064756d  57                   push edi
// 0064756e  e8bdfeffff           call 0x647430
// 00647573  83c410               add esp, 0x10
// 00647576  84c0                 test al, al
// 00647578  7515                 jne 0x64758f
// 0064757a  56                   push esi
// 0064757b  8bcf                 mov ecx, edi
// 0064757d  e81e06faff           call 0x5e7ba0
// 00647582  8bf0                 mov esi, eax
// 00647584  85f6                 test esi, esi
// 00647586  75d8                 jne 0x647560
// 00647588  5f                   pop edi
// 00647589  5e                   pop esi
// 0064758a  5d                   pop ebp
// 0064758b  33c0                 xor eax, eax
// 0064758d  5b                   pop ebx
// 0064758e  c3                   ret 
// 0064758f  5f                   pop edi
// 00647590  5e                   pop esi
// 00647591  5d                   pop ebp
// 00647592  8bc3                 mov eax, ebx
// 00647594  5b                   pop ebx
// 00647595  c3                   ret 
// library openrbx-client/App\v8world\Clump2.cpp (function ?findFirstChild@PrimIterator@RBX@@CAPAVPrimitive@2@PAV32@W4SearchType@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Clump2.cpp
