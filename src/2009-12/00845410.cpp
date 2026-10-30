// roc 2009-12 00845410  unit: CXTPControls  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00845410
//
// 00845410  56                   push esi
// 00845411  8b742408             mov esi, dword ptr [esp + 8]
// 00845415  57                   push edi
// 00845416  8bf9                 mov edi, ecx
// 00845418  85f6                 test esi, esi
// 0084541a  7473                 je 0x84548f
// 0084541c  39bef8000000         cmp dword ptr [esi + 0xf8], edi
// 00845422  756b                 jne 0x84548f
// 00845424  8b06                 mov eax, dword ptr [esi]
// 00845426  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00845429  8bce                 mov ecx, esi
// 0084542b  ffd2                 call edx
// 0084542d  85c0                 test eax, eax
// 0084542f  7411                 je 0x845442
// 00845431  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00845434  8b01                 mov eax, dword ptr [ecx]
// 00845436  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0084543c  6a00                 push 0
// 0084543e  6aff                 push -1
// 00845440  ffd2                 call edx
// 00845442  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00845448  85c0                 test eax, eax
// 0084544a  7c43                 jl 0x84548f
// 0084544c  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 0084544f  7d3e                 jge 0x84548f
// 00845451  8b07                 mov eax, dword ptr [edi]
// 00845453  8b5070               mov edx, dword ptr [eax + 0x70]
// 00845456  56                   push esi
// 00845457  8bcf                 mov ecx, edi
// 00845459  ffd2                 call edx
// 0084545b  85c0                 test eax, eax
// 0084545d  7530                 jne 0x84548f
// 0084545f  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00845465  6a01                 push 1
// 00845467  50                   push eax
// 00845468  8d4f24               lea ecx, [edi + 0x24]
// 0084546b  e8107efeff           call 0x82d280
// 00845470  8b17                 mov edx, dword ptr [edi]
// 00845472  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00845475  56                   push esi
// 00845476  8bcf                 mov ecx, edi
// 00845478  ffd0                 call eax
// 0084547a  8b16                 mov edx, dword ptr [esi]
// 0084547c  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 00845482  6a00                 push 0
// 00845484  8bce                 mov ecx, esi
// 00845486  ffd0                 call eax
// 00845488  8bce                 mov ecx, esi
// 0084548a  e84de9faff           call 0x7f3ddc
// 0084548f  5f                   pop edi
// 00845490  5e                   pop esi
// 00845491  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CXTPControls@@UAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp