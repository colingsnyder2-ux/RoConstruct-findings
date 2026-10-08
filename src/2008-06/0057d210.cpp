// from server: 100% by auto
// roc 2008-06 0057d210  unit: RBX::VInstance::?$SignalDesc  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d210
//
// 0057d210  56                   push esi
// 0057d211  8bf1                 mov esi, ecx
// 0057d213  e8086cf9ff           call 0x513e20
// 0057d218  50                   push eax
// 0057d219  8bce                 mov ecx, esi
// 0057d21b  e80060f9ff           call 0x513220
// 0057d220  8b442408             mov eax, dword ptr [esp + 8]
// 0057d224  d900                 fld dword ptr [eax]
// 0057d226  d95e24               fstp dword ptr [esi + 0x24]
// 0057d229  d94004               fld dword ptr [eax + 4]
// 0057d22c  d95e28               fstp dword ptr [esi + 0x28]
// 0057d22f  d94008               fld dword ptr [eax + 8]
// 0057d232  8bc6                 mov eax, esi
// 0057d234  d95e2c               fstp dword ptr [esi + 0x2c]
// 0057d237  5e                   pop esi
// 0057d238  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Draw.cpp (function ??0CoordinateFrame@G3D@@QAE@ABVVector3@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Draw.cpp
