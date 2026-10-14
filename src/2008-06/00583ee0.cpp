// roc 2008-06 00583ee0  unit: RBX::ModelInstance  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00583ee0
//
// 00583ee0  56                   push esi
// 00583ee1  8bf1                 mov esi, ecx
// 00583ee3  e878caf8ff           call 0x510960
// 00583ee8  d900                 fld dword ptr [eax]
// 00583eea  d91e                 fstp dword ptr [esi]
// 00583eec  d94004               fld dword ptr [eax + 4]
// 00583eef  d95e04               fstp dword ptr [esi + 4]
// 00583ef2  d94008               fld dword ptr [eax + 8]
// 00583ef5  d95e08               fstp dword ptr [esi + 8]
// 00583ef8  e863caf8ff           call 0x510960
// 00583efd  d94004               fld dword ptr [eax + 4]
// 00583f00  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00583f04  8b542410             mov edx, dword ptr [esp + 0x10]
// 00583f08  d9e0                 fchs 
// 00583f0a  d94008               fld dword ptr [eax + 8]
// 00583f0d  d9e0                 fchs 
// 00583f0f  d900                 fld dword ptr [eax]
// 00583f11  8b442408             mov eax, dword ptr [esp + 8]
// 00583f15  d9e0                 fchs 
// 00583f17  d95e0c               fstp dword ptr [esi + 0xc]
// 00583f1a  d9c9                 fxch st(1)
// 00583f1c  d95e10               fstp dword ptr [esi + 0x10]
// 00583f1f  d95e14               fstp dword ptr [esi + 0x14]
// 00583f22  89461c               mov dword ptr [esi + 0x1c], eax
// 00583f25  8b442414             mov eax, dword ptr [esp + 0x14]
// 00583f29  894e20               mov dword ptr [esi + 0x20], ecx
// 00583f2c  895624               mov dword ptr [esi + 0x24], edx
// 00583f2f  894628               mov dword ptr [esi + 0x28], eax
// 00583f32  c6461801             mov byte ptr [esi + 0x18], 1
// 00583f36  8bc6                 mov eax, esi
// 00583f38  5e                   pop esi
// 00583f39  c21000               ret 0x10
// library rbxgs-dll/v8datamodel\ModelInstance.cpp (function ??0?$ComputeProp@VExtents@RBX@@VModelInstance@2@@RBX@@QAE@PAVModelInstance@1@P821@BE?AVExtents@1@XZ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll v8datamodel/ModelInstance.cpp
