// roc 2007-08 004eecb0  unit: PBBBuilder  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004eecb0
//
// 004eecb0  56                   push esi
// 004eecb1  57                   push edi
// 004eecb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004eecb6  8bf1                 mov esi, ecx
// 004eecb8  8b06                 mov eax, dword ptr [esi]
// 004eecba  8b5004               mov edx, dword ptr [eax + 4]
// 004eecbd  57                   push edi
// 004eecbe  ffd2                 call edx
// 004eecc0  8b06                 mov eax, dword ptr [esi]
// 004eecc2  8b5008               mov edx, dword ptr [eax + 8]
// 004eecc5  57                   push edi
// 004eecc6  8bce                 mov ecx, esi
// 004eecc8  ffd2                 call edx
// 004eecca  8b06                 mov eax, dword ptr [esi]
// 004eeccc  8b500c               mov edx, dword ptr [eax + 0xc]
// 004eeccf  57                   push edi
// 004eecd0  8bce                 mov ecx, esi
// 004eecd2  ffd2                 call edx
// 004eecd4  8b06                 mov eax, dword ptr [esi]
// 004eecd6  8b5010               mov edx, dword ptr [eax + 0x10]
// 004eecd9  57                   push edi
// 004eecda  8bce                 mov ecx, esi
// 004eecdc  ffd2                 call edx
// 004eecde  8b06                 mov eax, dword ptr [esi]
// 004eece0  8b5014               mov edx, dword ptr [eax + 0x14]
// 004eece3  57                   push edi
// 004eece4  8bce                 mov ecx, esi
// 004eece6  ffd2                 call edx
// 004eece8  8b06                 mov eax, dword ptr [esi]
// 004eecea  8b5018               mov edx, dword ptr [eax + 0x18]
// 004eeced  57                   push edi
// 004eecee  8bce                 mov ecx, esi
// 004eecf0  ffd2                 call edx
// 004eecf2  5f                   pop edi
// 004eecf3  5e                   pop esi
// 004eecf4  c20400               ret 4
// library rbxgs-view/QuadVolume.cpp (function ?build@LevelBuilder@View@RBX@@UAEXW4Purpose@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-view QuadVolume.cpp
