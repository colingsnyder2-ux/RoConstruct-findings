// roc 2009-06 00616cb0  unit: boost::iostreams::Uoutput::?$filtering_stream  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00616cb0
//
// 00616cb0  6aff                 push -1
// 00616cb2  6800928500           push 0x859200
// 00616cb7  64a100000000         mov eax, dword ptr fs:[0]
// 00616cbd  50                   push eax
// 00616cbe  64892500000000       mov dword ptr fs:[0], esp
// 00616cc5  51                   push ecx
// 00616cc6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00616cca  8b542424             mov edx, dword ptr [esp + 0x24]
// 00616cce  56                   push esi
// 00616ccf  50                   push eax
// 00616cd0  8b442428             mov eax, dword ptr [esp + 0x28]
// 00616cd4  8bf1                 mov esi, ecx
// 00616cd6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00616cda  51                   push ecx
// 00616cdb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00616cdf  52                   push edx
// 00616ce0  50                   push eax
// 00616ce1  51                   push ecx
// 00616ce2  8d542444             lea edx, [esp + 0x44]
// 00616ce6  52                   push edx
// 00616ce7  e804ccffff           call 0x6138f0
// 00616cec  8b08                 mov ecx, dword ptr [eax]
// 00616cee  83c410               add esp, 0x10
// 00616cf1  c70000000000         mov dword ptr [eax], 0
// 00616cf7  8bc4                 mov eax, esp
// 00616cf9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00616d01  8964240c             mov dword ptr [esp + 0xc], esp
// 00616d05  8908                 mov dword ptr [eax], ecx
// 00616d07  8b442424             mov eax, dword ptr [esp + 0x24]
// 00616d0b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00616d0f  50                   push eax
// 00616d10  51                   push ecx
// 00616d11  c644242001           mov byte ptr [esp + 0x20], 1
// 00616d16  e89539fdff           call 0x5ea6b0
// 00616d1b  50                   push eax
// 00616d1c  8bce                 mov ecx, esi
// 00616d1e  c644242400           mov byte ptr [esp + 0x24], 0
// 00616d23  e8e8caffff           call 0x613810
// 00616d28  8b542430             mov edx, dword ptr [esp + 0x30]
// 00616d2c  52                   push edx
// 00616d2d  e8001d1000           call 0x718a32
// 00616d32  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00616d36  83c404               add esp, 4
// 00616d39  c706e08e8d00         mov dword ptr [esi], 0x8d8ee0
// 00616d3f  8bc6                 mov eax, esi
// 00616d41  64890d00000000       mov dword ptr fs:[0], ecx
// 00616d48  5e                   pop esi
// 00616d49  83c410               add esp, 0x10
// 00616d4c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
