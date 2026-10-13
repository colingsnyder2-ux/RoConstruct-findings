// from server: 100% by colin
// roc 2008-06 00530880  unit: seg_00530000  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530880
//
// 00530880  56                   push esi
// 00530881  e8aa53ffff           call 0x525c30
// 00530886  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053088a  89460c               mov dword ptr [esi + 0xc], eax
// 0053088d  85c0                 test eax, eax
// 0053088f  752c                 jne 0x5308bd
// 00530891  57                   push edi
// 00530892  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00530896  8b07                 mov eax, dword ptr [edi]
// 00530898  c740143f000000       mov dword ptr [eax + 0x14], 0x3f
// 0053089f  8b0f                 mov ecx, dword ptr [edi]
// 005308a1  6a50                 push 0x50
// 005308a3  83c118               add ecx, 0x18
// 005308a6  6816b78000           push 0x80b716
// 005308ab  51                   push ecx
// 005308ac  ff1548288000         call dword ptr [0x802848]
// 005308b2  8b17                 mov edx, dword ptr [edi]
// 005308b4  8b02                 mov eax, dword ptr [edx]
// 005308b6  57                   push edi
// 005308b7  ffd0                 call eax
// 005308b9  83c410               add esp, 0x10
// 005308bc  5f                   pop edi
// 005308bd  c70690075300         mov dword ptr [esi], 0x530790
// 005308c3  c7460400085300       mov dword ptr [esi + 4], 0x530800
// 005308ca  c7460870085300       mov dword ptr [esi + 8], 0x530870
// 005308d1  5e                   pop esi
// 005308d2  c3                   ret 
// library g3d-6.09-ijg-dll/jmemansi.c (function _jpeg_open_backing_store)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-ijg-dll jmemansi.c
