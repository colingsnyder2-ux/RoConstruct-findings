// from server: 100% by auto
// roc 2007-08 006f0f30  unit: CXTPImageEditorPicker  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f0f30
//
// 006f0f30  8b442414             mov eax, dword ptr [esp + 0x14]
// 006f0f34  85c0                 test eax, eax
// 006f0f36  56                   push esi
// 006f0f37  7504                 jne 0x6f0f3d
// 006f0f39  33f6                 xor esi, esi
// 006f0f3b  eb03                 jmp 0x6f0f40
// 006f0f3d  8b7004               mov esi, dword ptr [eax + 4]
// 006f0f40  8b442420             mov eax, dword ptr [esp + 0x20]
// 006f0f44  85c0                 test eax, eax
// 006f0f46  7504                 jne 0x6f0f4c
// 006f0f48  33d2                 xor edx, edx
// 006f0f4a  eb03                 jmp 0x6f0f4f
// 006f0f4c  8b5004               mov edx, dword ptr [eax + 4]
// 006f0f4f  8b4104               mov eax, dword ptr [ecx + 4]
// 006f0f52  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006f0f56  83c904               or ecx, 4
// 006f0f59  51                   push ecx
// 006f0f5a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006f0f5e  51                   push ecx
// 006f0f5f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006f0f63  51                   push ecx
// 006f0f64  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006f0f68  51                   push ecx
// 006f0f69  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006f0f6d  51                   push ecx
// 006f0f6e  6a00                 push 0
// 006f0f70  56                   push esi
// 006f0f71  6a00                 push 0
// 006f0f73  52                   push edx
// 006f0f74  50                   push eax
// 006f0f75  ff1578ee7700         call dword ptr [0x77ee78]
// 006f0f7b  5e                   pop esi
// 006f0f7c  c21c00               ret 0x1c
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?DrawState@CDC@@QAEHVCPoint@@VCSize@@PAVCBitmap@@IPAVCBrush@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
