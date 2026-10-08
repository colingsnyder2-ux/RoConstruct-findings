// from server: 100% by auto
// roc 2011-06 0087fe00  unit: CXTPResourceManager  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087fe00
//
// 0087fe00  56                   push esi
// 0087fe01  8b742414             mov esi, dword ptr [esp + 0x14]
// 0087fe05  85f6                 test esi, esi
// 0087fe07  7506                 jne 0x87fe0f
// 0087fe09  33c0                 xor eax, eax
// 0087fe0b  5e                   pop esi
// 0087fe0c  c21000               ret 0x10
// 0087fe0f  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087fe13  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087fe17  8b542408             mov edx, dword ptr [esp + 8]
// 0087fe1b  56                   push esi
// 0087fe1c  6800f88700           push 0x87f800
// 0087fe21  50                   push eax
// 0087fe22  51                   push ecx
// 0087fe23  52                   push edx
// 0087fe24  ff153c02a400         call dword ptr [0xa4023c]
// 0087fe2a  0fb706               movzx eax, word ptr [esi]
// 0087fe2d  6685c0               test ax, ax
// 0087fe30  7509                 jne 0x87fe3b
// 0087fe32  b801000000           mov eax, 1
// 0087fe37  5e                   pop esi
// 0087fe38  c21000               ret 0x10
// 0087fe3b  33d2                 xor edx, edx
// 0087fe3d  b909040000           mov ecx, 0x409
// 0087fe42  663bc1               cmp ax, cx
// 0087fe45  0f94c2               sete dl
// 0087fe48  5e                   pop esi
// 0087fe49  8bc2                 mov eax, edx
// 0087fe4b  c21000               ret 0x10
// library xtp-15.2.1/Source\Common\XTPResourceManager.cpp (function ?EnumResNameProc@CXTPResourceManager@@KGHPAUHINSTANCE__@@PBDPADJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPResourceManager.cpp
