// roc 2008-06 005b7400  unit: RBX::P8Decal::?$GetSetImpl  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b7400
//
// 005b7400  8b442404             mov eax, dword ptr [esp + 4]
// 005b7404  53                   push ebx
// 005b7405  55                   push ebp
// 005b7406  56                   push esi
// 005b7407  57                   push edi
// 005b7408  8bf9                 mov edi, ecx
// 005b740a  85c0                 test eax, eax
// 005b740c  7405                 je 0x5b7413
// 005b740e  8d68ec               lea ebp, [eax - 0x14]
// 005b7411  eb02                 jmp 0x5b7415
// 005b7413  33ed                 xor ebp, ebp
// 005b7415  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 005b7419  83ec20               sub esp, 0x20
// 005b741c  8bf4                 mov esi, esp
// 005b741e  89642434             mov dword ptr [esp + 0x34], esp
// 005b7422  53                   push ebx
// 005b7423  8bce                 mov ecx, esi
// 005b7425  ff155c248000         call dword ptr [0x80245c]
// 005b742b  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 005b742e  89461c               mov dword ptr [esi + 0x1c], eax
// 005b7431  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 005b7434  8b5710               mov edx, dword ptr [edi + 0x10]
// 005b7437  03cd                 add ecx, ebp
// 005b7439  ffd2                 call edx
// 005b743b  5f                   pop edi
// 005b743c  5e                   pop esi
// 005b743d  5d                   pop ebp
// 005b743e  5b                   pop ebx
// 005b743f  c20800               ret 8
// library openrbx-client/App\v8datamodel\Decal.cpp (function ?setValue@?$GetSetImpl@P8Decal@RBX@@BE?AVTextureId@2@XZP812@AEXV32@@Z@?$PropDescriptor@VDecal@RBX@@VTextureId@2@@Reflection@RBX@@UBEXPAVDescribedBase@34@ABVTextureId@4@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Decal.cpp
