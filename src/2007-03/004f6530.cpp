// roc 2007-03 004f6530  unit: seg_004f0000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f6530
//
// 004f6530  56                   push esi
// 004f6531  8bf1                 mov esi, ecx
// 004f6533  8b4644               mov eax, dword ptr [esi + 0x44]
// 004f6536  8d4801               lea ecx, [eax + 1]
// 004f6539  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 004f653c  7e0f                 jle 0x4f654d
// 004f653e  8b5634               mov edx, dword ptr [esi + 0x34]
// 004f6541  6a01                 push 1
// 004f6543  03d0                 add edx, eax
// 004f6545  52                   push edx
// 004f6546  8bce                 mov ecx, esi
// 004f6548  e823ae0000           call 0x501370
// 004f654d  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 004f6550  8b4640               mov eax, dword ptr [esi + 0x40]
// 004f6553  8a0401               mov al, byte ptr [ecx + eax]
// 004f6556  83c101               add ecx, 1
// 004f6559  894e44               mov dword ptr [esi + 0x44], ecx
// 004f655c  5e                   pop esi
// 004f655d  c3                   ret 
// library rbxgs-g3d/G3Dcpp\BinaryInput.cpp (function ?readInt8@BinaryInput@G3D@@QAECXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/BinaryInput.cpp
