// roc 2007-08 0047af50  unit: G3D::TextureManager::TextureArgs  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047af50
//
// 0047af50  6aff                 push -1
// 0047af52  6830577400           push 0x745730
// 0047af57  64a100000000         mov eax, dword ptr fs:[0]
// 0047af5d  50                   push eax
// 0047af5e  83ec3c               sub esp, 0x3c
// 0047af61  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047af66  33c4                 xor eax, esp
// 0047af68  89442438             mov dword ptr [esp + 0x38], eax
// 0047af6c  56                   push esi
// 0047af6d  57                   push edi
// 0047af6e  a188518b00           mov eax, dword ptr [0x8b5188]
// 0047af73  33c4                 xor eax, esp
// 0047af75  50                   push eax
// 0047af76  8d442448             lea eax, [esp + 0x48]
// 0047af7a  64a300000000         mov dword ptr fs:[0], eax
// 0047af80  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 0047af84  8bf1                 mov esi, ecx
// 0047af86  8b442460             mov eax, dword ptr [esp + 0x60]
// 0047af8a  50                   push eax
// 0047af8b  8d4c2410             lea ecx, [esp + 0x10]
// 0047af8f  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0047af97  e824f0ffff           call 0x479fc0
// 0047af9c  57                   push edi
// 0047af9d  8d4c2414             lea ecx, [esp + 0x14]
// 0047afa1  c644245401           mov byte ptr [esp + 0x54], 1
// 0047afa6  ff1590e67700         call dword ptr [0x77e690]
// 0047afac  dd442470             fld qword ptr [esp + 0x70]
// 0047afb0  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0047afb4  dd5c243c             fstp qword ptr [esp + 0x3c]
// 0047afb8  8b542468             mov edx, dword ptr [esp + 0x68]
// 0047afbc  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0047afc0  894c2430             mov dword ptr [esp + 0x30], ecx
// 0047afc4  8d4c240c             lea ecx, [esp + 0xc]
// 0047afc8  51                   push ecx
// 0047afc9  8bce                 mov ecx, esi
// 0047afcb  89542438             mov dword ptr [esp + 0x38], edx
// 0047afcf  8944243c             mov dword ptr [esp + 0x3c], eax
// 0047afd3  e8e8edffff           call 0x479dc0
// 0047afd8  84c0                 test al, al
// 0047afda  8d4c240c             lea ecx, [esp + 0xc]
// 0047afde  743d                 je 0x47b01d
// 0047afe0  c644245000           mov byte ptr [esp + 0x50], 0
// 0047afe5  e816cefdff           call 0x457e00
// 0047afea  8b742458             mov esi, dword ptr [esp + 0x58]
// 0047afee  85f6                 test esi, esi
// 0047aff0  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0047aff8  741f                 je 0x47b019
// 0047affa  8d5604               lea edx, [esi + 4]
// 0047affd  52                   push edx
// 0047affe  ff15e8d27700         call dword ptr [0x77d2e8]
// 0047b004  85c0                 test eax, eax
// 0047b006  7511                 jne 0x47b019
// 0047b008  8bce                 mov ecx, esi
// 0047b00a  e8c1cdfdff           call 0x457dd0
// 0047b00f  8b06                 mov eax, dword ptr [esi]
// 0047b011  8b10                 mov edx, dword ptr [eax]
// 0047b013  6a01                 push 1
// 0047b015  8bce                 mov ecx, esi
// 0047b017  ffd2                 call edx
// 0047b019  32c0                 xor al, al
// 0047b01b  eb5d                 jmp 0x47b07a
// 0047b01d  8d442458             lea eax, [esp + 0x58]
// 0047b021  50                   push eax
// 0047b022  51                   push ecx
// 0047b023  8bce                 mov ecx, esi
// 0047b025  e826f7ffff           call 0x47a750
// 0047b02a  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 0047b02e  8bcf                 mov ecx, edi
// 0047b030  e85b53ffff           call 0x470390
// 0047b035  014610               add dword ptr [esi + 0x10], eax
// 0047b038  8bce                 mov ecx, esi
// 0047b03a  e891fdffff           call 0x47add0
// 0047b03f  8d4c240c             lea ecx, [esp + 0xc]
// 0047b043  c644245000           mov byte ptr [esp + 0x50], 0
// 0047b048  e8b3cdfdff           call 0x457e00
// 0047b04d  85ff                 test edi, edi
// 0047b04f  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 0047b057  741f                 je 0x47b078
// 0047b059  8d5704               lea edx, [edi + 4]
// 0047b05c  52                   push edx
// 0047b05d  ff15e8d27700         call dword ptr [0x77d2e8]
// 0047b063  85c0                 test eax, eax
// 0047b065  7511                 jne 0x47b078
// 0047b067  8bcf                 mov ecx, edi
// 0047b069  e862cdfdff           call 0x457dd0
// 0047b06e  8b07                 mov eax, dword ptr [edi]
// 0047b070  8b10                 mov edx, dword ptr [eax]
// 0047b072  6a01                 push 1
// 0047b074  8bcf                 mov ecx, edi
// 0047b076  ffd2                 call edx
// 0047b078  b001                 mov al, 1
// 0047b07a  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0047b07e  64890d00000000       mov dword ptr fs:[0], ecx
// 0047b085  59                   pop ecx
// 0047b086  5f                   pop edi
// 0047b087  5e                   pop esi
// 0047b088  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0047b08c  33cc                 xor ecx, esp
// 0047b08e  e88b591b00           call 0x630a1e
// 0047b093  83c448               add esp, 0x48
// 0047b096  c22000               ret 0x20
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?cacheTexture@TextureManager@G3D@@QAE_NV?$ReferenceCountedPointer@VTexture@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PBVTextureFormat@2@W4WrapMode@Texture@2@W4InterpolateMode@82@W4Dimension@82@N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
