// roc 2009-12 0084d980  unit: CXTPPrintingDialog  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084d980
//
// 0084d980  6aff                 push -1
// 0084d982  6863d69500           push 0x95d663
// 0084d987  64a100000000         mov eax, dword ptr fs:[0]
// 0084d98d  50                   push eax
// 0084d98e  51                   push ecx
// 0084d98f  53                   push ebx
// 0084d990  56                   push esi
// 0084d991  a10052b600           mov eax, dword ptr [0xb65200]
// 0084d996  33c4                 xor eax, esp
// 0084d998  50                   push eax
// 0084d999  8d442410             lea eax, [esp + 0x10]
// 0084d99d  64a300000000         mov dword ptr fs:[0], eax
// 0084d9a3  8bf1                 mov esi, ecx
// 0084d9a5  8974240c             mov dword ptr [esp + 0xc], esi
// 0084d9a9  c70644be9f00         mov dword ptr [esi], 0x9fbe44
// 0084d9af  8b8e4c010000         mov ecx, dword ptr [esi + 0x14c]
// 0084d9b5  33db                 xor ebx, ebx
// 0084d9b7  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0084d9bf  3bcb                 cmp ecx, ebx
// 0084d9c1  7409                 je 0x84d9cc
// 0084d9c3  8b01                 mov eax, dword ptr [ecx]
// 0084d9c5  8b5004               mov edx, dword ptr [eax + 4]
// 0084d9c8  6a01                 push 1
// 0084d9ca  ffd2                 call edx
// 0084d9cc  8b8e38010000         mov ecx, dword ptr [esi + 0x138]
// 0084d9d2  3bcb                 cmp ecx, ebx
// 0084d9d4  740b                 je 0x84d9e1
// 0084d9d6  e80164faff           call 0x7f3ddc
// 0084d9db  899e38010000         mov dword ptr [esi + 0x138], ebx
// 0084d9e1  8b8e54010000         mov ecx, dword ptr [esi + 0x154]
// 0084d9e7  3bcb                 cmp ecx, ebx
// 0084d9e9  740b                 je 0x84d9f6
// 0084d9eb  e8ec63faff           call 0x7f3ddc
// 0084d9f0  899e54010000         mov dword ptr [esi + 0x154], ebx
// 0084d9f6  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 0084d9fc  3bcb                 cmp ecx, ebx
// 0084d9fe  740f                 je 0x84da0f
// 0084da00  8b01                 mov eax, dword ptr [ecx]
// 0084da02  8b5004               mov edx, dword ptr [eax + 4]
// 0084da05  6a01                 push 1
// 0084da07  ffd2                 call edx
// 0084da09  899e60010000         mov dword ptr [esi + 0x160], ebx
// 0084da0f  8b8e64010000         mov ecx, dword ptr [esi + 0x164]
// 0084da15  3bcb                 cmp ecx, ebx
// 0084da17  740f                 je 0x84da28
// 0084da19  8b01                 mov eax, dword ptr [ecx]
// 0084da1b  8b5004               mov edx, dword ptr [eax + 4]
// 0084da1e  6a01                 push 1
// 0084da20  ffd2                 call edx
// 0084da22  899e64010000         mov dword ptr [esi + 0x164], ebx
// 0084da28  8b8e44010000         mov ecx, dword ptr [esi + 0x144]
// 0084da2e  3bcb                 cmp ecx, ebx
// 0084da30  7408                 je 0x84da3a
// 0084da32  8b01                 mov eax, dword ptr [ecx]
// 0084da34  8b10                 mov edx, dword ptr [eax]
// 0084da36  6a01                 push 1
// 0084da38  ffd2                 call edx
// 0084da3a  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 0084da40  3bcb                 cmp ecx, ebx
// 0084da42  740b                 je 0x84da4f
// 0084da44  e89363faff           call 0x7f3ddc
// 0084da49  899e6c010000         mov dword ptr [esi + 0x16c], ebx
// 0084da4f  8d4e70               lea ecx, [esi + 0x70]
// 0084da52  885c2418             mov byte ptr [esp + 0x18], bl
// 0084da56  e8f5feffff           call 0x84d950
// 0084da5b  8bce                 mov ecx, esi
// 0084da5d  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0084da65  e8ac68faff           call 0x7f4316
// 0084da6a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084da6e  64890d00000000       mov dword ptr fs:[0], ecx
// 0084da75  59                   pop ecx
// 0084da76  5e                   pop esi
// 0084da77  5b                   pop ebx
// 0084da78  83c410               add esp, 0x10
// 0084da7b  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPropertyGrid@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\PropertyGrid\XTPPropertyGrid.cpp