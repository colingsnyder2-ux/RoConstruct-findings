// roc 2012-06 00a19220  unit: CXTPShortcutManager  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a19220
//
// 00a19220  8b442404             mov eax, dword ptr [esp + 4]
// 00a19224  8b4854               mov ecx, dword ptr [eax + 0x54]
// 00a19227  8b11                 mov edx, dword ptr [ecx]
// 00a19229  8b442408             mov eax, dword ptr [esp + 8]
// 00a1922d  8b523c               mov edx, dword ptr [edx + 0x3c]
// 00a19230  56                   push esi
// 00a19231  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a19235  56                   push esi
// 00a19236  50                   push eax
// 00a19237  ffd2                 call edx
// 00a19239  3bc6                 cmp eax, esi
// 00a1923b  5e                   pop esi
// 00a1923c  740b                 je 0xa19249
// 00a1923e  6a00                 push 0
// 00a19240  6aff                 push -1
// 00a19242  6a0e                 push 0xe
// 00a19244  e88b0a0800           call 0xa99cd4
// 00a19249  c3                   ret 
// library xtp-15.2.1-shared-mfc/Source\GraphicLibrary\XTPGraphicBitmapPng.cpp (function ?png_read_data@CCallback@CXTPGraphicBitmapPng@@SAXPAUpng_struct_def@@PAEI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/GraphicLibrary/XTPGraphicBitmapPng.cpp
