// roc 2009-12 0080a370  unit: CXTPImageManagerResource::CBitmapDC  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080a370
//
// 0080a370  8b442404             mov eax, dword ptr [esp + 4]
// 0080a374  8bd1                 mov edx, ecx
// 0080a376  85c0                 test eax, eax
// 0080a378  7403                 je 0x80a37d
// 0080a37a  8b4004               mov eax, dword ptr [eax + 4]
// 0080a37d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080a381  6a01                 push 1
// 0080a383  6aff                 push -1
// 0080a385  6aff                 push -1
// 0080a387  51                   push ecx
// 0080a388  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080a38c  51                   push ecx
// 0080a38d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080a391  51                   push ecx
// 0080a392  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080a396  51                   push ecx
// 0080a397  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0080a39b  50                   push eax
// 0080a39c  e8ef8b0900           call 0x8a2f90
// 0080a3a1  2b4208               sub eax, dword ptr [edx + 8]
// 0080a3a4  8b12                 mov edx, dword ptr [edx]
// 0080a3a6  50                   push eax
// 0080a3a7  52                   push edx
// 0080a3a8  ff155cb09800         call dword ptr [0x98b05c]
// 0080a3ae  c21800               ret 0x18
// copied from an identical function in another client (function ?Draw@CXTPImageManagerImageList@@QAEXPAVCDC@@VCPoint@@PAVCXTPImageManagerIcon@@VCSize@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp