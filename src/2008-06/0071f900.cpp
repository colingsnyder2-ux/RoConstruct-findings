// from server: 100% by auto
// roc 2008-06 0071f900  unit: CXTPResourceManager  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0071f900
//
// 0071f900  56                   push esi
// 0071f901  8b742414             mov esi, dword ptr [esp + 0x14]
// 0071f905  85f6                 test esi, esi
// 0071f907  7506                 jne 0x71f90f
// 0071f909  33c0                 xor eax, eax
// 0071f90b  5e                   pop esi
// 0071f90c  c21000               ret 0x10
// 0071f90f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0071f913  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0071f917  8b542408             mov edx, dword ptr [esp + 8]
// 0071f91b  56                   push esi
// 0071f91c  6870f27100           push 0x71f270
// 0071f921  50                   push eax
// 0071f922  51                   push ecx
// 0071f923  52                   push edx
// 0071f924  ff1514238000         call dword ptr [0x802314]
// 0071f92a  0fb706               movzx eax, word ptr [esi]
// 0071f92d  6685c0               test ax, ax
// 0071f930  7509                 jne 0x71f93b
// 0071f932  b801000000           mov eax, 1
// 0071f937  5e                   pop esi
// 0071f938  c21000               ret 0x10
// 0071f93b  33d2                 xor edx, edx
// 0071f93d  b909040000           mov ecx, 0x409
// 0071f942  663bc1               cmp ax, cx
// 0071f945  0f94c2               sete dl
// 0071f948  5e                   pop esi
// 0071f949  8bc2                 mov eax, edx
// 0071f94b  c21000               ret 0x10
// library xtp-11.2.2/Source\Common\XTPResourceManager.cpp (function ?EnumResNameProc@CXTPResourceManager@@KGHPAUHINSTANCE__@@PBDPADJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPResourceManager.cpp
