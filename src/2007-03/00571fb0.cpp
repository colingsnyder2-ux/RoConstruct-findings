// roc 2007-03 00571fb0  unit: seg_00570000  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00571fb0
//
// 00571fb0  8b442404             mov eax, dword ptr [esp + 4]
// 00571fb4  53                   push ebx
// 00571fb5  56                   push esi
// 00571fb6  8bf1                 mov esi, ecx
// 00571fb8  8906                 mov dword ptr [esi], eax
// 00571fba  8b442410             mov eax, dword ptr [esp + 0x10]
// 00571fbe  d900                 fld dword ptr [eax]
// 00571fc0  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00571fc4  d95e04               fstp dword ptr [esi + 4]
// 00571fc7  57                   push edi
// 00571fc8  d94004               fld dword ptr [eax + 4]
// 00571fcb  8d7e38               lea edi, [esi + 0x38]
// 00571fce  d95e08               fstp dword ptr [esi + 8]
// 00571fd1  53                   push ebx
// 00571fd2  d94008               fld dword ptr [eax + 8]
// 00571fd5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00571fd9  d95e0c               fstp dword ptr [esi + 0xc]
// 00571fdc  d944241c             fld dword ptr [esp + 0x1c]
// 00571fe0  d95e10               fstp dword ptr [esi + 0x10]
// 00571fe3  d9442420             fld dword ptr [esp + 0x20]
// 00571fe7  d95e14               fstp dword ptr [esi + 0x14]
// 00571fea  d9442424             fld dword ptr [esp + 0x24]
// 00571fee  d95e18               fstp dword ptr [esi + 0x18]
// 00571ff1  d9442428             fld dword ptr [esp + 0x28]
// 00571ff5  d95e1c               fstp dword ptr [esi + 0x1c]
// 00571ff8  8b08                 mov ecx, dword ptr [eax]
// 00571ffa  894e20               mov dword ptr [esi + 0x20], ecx
// 00571ffd  8b5004               mov edx, dword ptr [eax + 4]
// 00572000  895624               mov dword ptr [esi + 0x24], edx
// 00572003  8b4808               mov ecx, dword ptr [eax + 8]
// 00572006  894e28               mov dword ptr [esi + 0x28], ecx
// 00572009  8b500c               mov edx, dword ptr [eax + 0xc]
// 0057200c  89562c               mov dword ptr [esi + 0x2c], edx
// 0057200f  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00572012  894e30               mov dword ptr [esi + 0x30], ecx
// 00572015  8b5014               mov edx, dword ptr [eax + 0x14]
// 00572018  8bcf                 mov ecx, edi
// 0057201a  895634               mov dword ptr [esi + 0x34], edx
// 0057201d  e85ec9f8ff           call 0x4fe980
// 00572022  d94324               fld dword ptr [ebx + 0x24]
// 00572025  d95f24               fstp dword ptr [edi + 0x24]
// 00572028  8bc6                 mov eax, esi
// 0057202a  d94328               fld dword ptr [ebx + 0x28]
// 0057202d  d95f28               fstp dword ptr [edi + 0x28]
// 00572030  d9432c               fld dword ptr [ebx + 0x2c]
// 00572033  d95f2c               fstp dword ptr [edi + 0x2c]
// 00572036  5f                   pop edi
// 00572037  5e                   pop esi
// 00572038  5b                   pop ebx
// 00572039  c22000               ret 0x20
// library rbxgs/v8datamodel\PartInstance.cpp (function ??0Part@RBX@@QAE@W4PartType@01@ABVVector3@G3D@@VColor4@4@ABV?$Vector6@W4SurfaceType@RBX@@@@ABVCoordinateFrame@4@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
