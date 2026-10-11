// roc 2008-06 005cf5d0  unit: RBX::P8Decal::?$GetSetImpl  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf5d0
//
// 005cf5d0  6aff                 push -1
// 005cf5d2  68c1557d00           push 0x7d55c1
// 005cf5d7  64a100000000         mov eax, dword ptr fs:[0]
// 005cf5dd  50                   push eax
// 005cf5de  64892500000000       mov dword ptr fs:[0], esp
// 005cf5e5  83ec24               sub esp, 0x24
// 005cf5e8  8bc1                 mov eax, ecx
// 005cf5ea  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005cf5ee  c7042400000000       mov dword ptr [esp], 0
// 005cf5f5  85c9                 test ecx, ecx
// 005cf5f7  7405                 je 0x5cf5fe
// 005cf5f9  8d51ec               lea edx, [ecx - 0x14]
// 005cf5fc  eb02                 jmp 0x5cf600
// 005cf5fe  33d2                 xor edx, edx
// 005cf600  56                   push esi
// 005cf601  57                   push edi
// 005cf602  8d4c240c             lea ecx, [esp + 0xc]
// 005cf606  51                   push ecx
// 005cf607  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005cf60a  03ca                 add ecx, edx
// 005cf60c  8b5008               mov edx, dword ptr [eax + 8]
// 005cf60f  ffd2                 call edx
// 005cf611  8bf0                 mov esi, eax
// 005cf613  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 005cf617  56                   push esi
// 005cf618  8bcf                 mov ecx, edi
// 005cf61a  c744243801000000     mov dword ptr [esp + 0x38], 1
// 005cf622  ff155c248000         call dword ptr [0x80245c]
// 005cf628  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005cf62b  89471c               mov dword ptr [edi + 0x1c], eax
// 005cf62e  8d4c240c             lea ecx, [esp + 0xc]
// 005cf632  c744240801000000     mov dword ptr [esp + 8], 1
// 005cf63a  c644243400           mov byte ptr [esp + 0x34], 0
// 005cf63f  ff1568248000         call dword ptr [0x802468]
// 005cf645  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005cf649  8bc7                 mov eax, edi
// 005cf64b  5f                   pop edi
// 005cf64c  5e                   pop esi
// 005cf64d  64890d00000000       mov dword ptr fs:[0], ecx
// 005cf654  83c430               add esp, 0x30
// 005cf657  c20800               ret 8
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?getValue@?$GetSetImpl@P8Decal@RBX@@BE?AVTextureId@2@XZP812@AEXV32@@Z@?$PropDescriptor@VDecal@RBX@@VTextureId@2@@Reflection@RBX@@UBE?AVTextureId@4@PBVDescribedBase@34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
