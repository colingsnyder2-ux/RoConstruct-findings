// from server: 100% by auto
// roc 2007-08 00599700  unit: RBX::VCamera::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00599700
//
// 00599700  56                   push esi
// 00599701  8bf1                 mov esi, ecx
// 00599703  8b4608               mov eax, dword ptr [esi + 8]
// 00599706  57                   push edi
// 00599707  8b3e                 mov edi, dword ptr [esi]
// 00599709  03c0                 add eax, eax
// 0059970b  03c0                 add eax, eax
// 0059970d  6a10                 push 0x10
// 0059970f  50                   push eax
// 00599710  e84b69f6ff           call 0x500060
// 00599715  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00599719  8906                 mov dword ptr [esi], eax
// 0059971b  8b7608               mov esi, dword ptr [esi + 8]
// 0059971e  83c408               add esp, 8
// 00599721  3bce                 cmp ecx, esi
// 00599723  7d02                 jge 0x599727
// 00599725  8bf1                 mov esi, ecx
// 00599727  8d14b0               lea edx, [eax + esi*4]
// 0059972a  3bc2                 cmp eax, edx
// 0059972c  8bcf                 mov ecx, edi
// 0059972e  7312                 jae 0x599742
// 00599730  85c0                 test eax, eax
// 00599732  7404                 je 0x599738
// 00599734  8b31                 mov esi, dword ptr [ecx]
// 00599736  8930                 mov dword ptr [eax], esi
// 00599738  83c004               add eax, 4
// 0059973b  83c104               add ecx, 4
// 0059973e  3bc2                 cmp eax, edx
// 00599740  72ee                 jb 0x599730
// 00599742  57                   push edi
// 00599743  e8c860f6ff           call 0x4ff810
// 00599748  83c404               add esp, 4
// 0059974b  5f                   pop edi
// 0059974c  5e                   pop esi
// 0059974d  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?realloc@?$Array@PBX@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
