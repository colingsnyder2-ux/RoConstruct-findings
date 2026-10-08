// roc 2009-06 007eeb00  unit: CXTPPropertyGridPaintManager  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eeb00
//
// 007eeb00  56                   push esi
// 007eeb01  8bf1                 mov esi, ecx
// 007eeb03  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007eeb07  85c9                 test ecx, ecx
// 007eeb09  750e                 jne 0x7eeb19
// 007eeb0b  8b4674               mov eax, dword ptr [esi + 0x74]
// 007eeb0e  8b4878               mov ecx, dword ptr [eax + 0x78]
// 007eeb11  83c070               add eax, 0x70
// 007eeb14  83f9ff               cmp ecx, -1
// 007eeb17  eb36                 jmp 0x7eeb4f
// 007eeb19  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007eeb1d  6a00                 push 0
// 007eeb1f  50                   push eax
// 007eeb20  e80bb4f9ff           call 0x789f30
// 007eeb25  83caff               or edx, 0xffffffff
// 007eeb28  85c0                 test eax, eax
// 007eeb2a  7418                 je 0x7eeb44
// 007eeb2c  395078               cmp dword ptr [eax + 0x78], edx
// 007eeb2f  7505                 jne 0x7eeb36
// 007eeb31  395074               cmp dword ptr [eax + 0x74], edx
// 007eeb34  740e                 je 0x7eeb44
// 007eeb36  8b4878               mov ecx, dword ptr [eax + 0x78]
// 007eeb39  3bca                 cmp ecx, edx
// 007eeb3b  751b                 jne 0x7eeb58
// 007eeb3d  8b4074               mov eax, dword ptr [eax + 0x74]
// 007eeb40  5e                   pop esi
// 007eeb41  c20800               ret 8
// 007eeb44  8b4674               mov eax, dword ptr [esi + 0x74]
// 007eeb47  8b4878               mov ecx, dword ptr [eax + 0x78]
// 007eeb4a  83c070               add eax, 0x70
// 007eeb4d  3bca                 cmp ecx, edx
// 007eeb4f  7507                 jne 0x7eeb58
// 007eeb51  8b4004               mov eax, dword ptr [eax + 4]
// 007eeb54  5e                   pop esi
// 007eeb55  c20800               ret 8
// 007eeb58  8bc1                 mov eax, ecx
// 007eeb5a  5e                   pop esi
// 007eeb5b  c20800               ret 8
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?GetItemBackColor@CXTPPropertyGridPaintManager@@UAEKPAVCXTPPropertyGridItem@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
