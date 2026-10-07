// roc 2011-06 00820820  unit: CXTPImageManagerResource::CBitmapDC  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00820820
//
// 00820820  83ec08               sub esp, 8
// 00820823  33c0                 xor eax, eax
// 00820825  890424               mov dword ptr [esp], eax
// 00820828  89442404             mov dword ptr [esp + 4], eax
// 0082082c  8d442404             lea eax, [esp + 4]
// 00820830  50                   push eax
// 00820831  8b01                 mov eax, dword ptr [ecx]
// 00820833  8d542404             lea edx, [esp + 4]
// 00820837  52                   push edx
// 00820838  50                   push eax
// 00820839  ff157000a400         call dword ptr [0xa40070]
// 0082083f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00820843  8b0c24               mov ecx, dword ptr [esp]
// 00820846  8b542404             mov edx, dword ptr [esp + 4]
// 0082084a  8908                 mov dword ptr [eax], ecx
// 0082084c  895004               mov dword ptr [eax + 4], edx
// 0082084f  83c408               add esp, 8
// 00820852  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?GetIconSize@CXTPImageManagerImageList@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
