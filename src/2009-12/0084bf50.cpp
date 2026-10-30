// roc 2009-12 0084bf50  unit: CXTPDrawHelpers  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084bf50
//
// 0084bf50  83ec28               sub esp, 0x28
// 0084bf53  8b542430             mov edx, dword ptr [esp + 0x30]
// 0084bf57  8b02                 mov eax, dword ptr [edx]
// 0084bf59  89442408             mov dword ptr [esp + 8], eax
// 0084bf5d  8b442434             mov eax, dword ptr [esp + 0x34]
// 0084bf61  56                   push esi
// 0084bf62  8bf1                 mov esi, ecx
// 0084bf64  8b4a04               mov ecx, dword ptr [edx + 4]
// 0084bf67  894c2410             mov dword ptr [esp + 0x10], ecx
// 0084bf6b  660fb6c8             movzx cx, al
// 0084bf6f  66c1e108             shl cx, 8
// 0084bf73  66894c2414           mov word ptr [esp + 0x14], cx
// 0084bf78  8bc8                 mov ecx, eax
// 0084bf7a  c1e908               shr ecx, 8
// 0084bf7d  c1e810               shr eax, 0x10
// 0084bf80  660fb6c9             movzx cx, cl
// 0084bf84  660fb6c0             movzx ax, al
// 0084bf88  66c1e108             shl cx, 8
// 0084bf8c  66c1e008             shl ax, 8
// 0084bf90  66894c2416           mov word ptr [esp + 0x16], cx
// 0084bf95  6689442418           mov word ptr [esp + 0x18], ax
// 0084bf9a  8b4208               mov eax, dword ptr [edx + 8]
// 0084bf9d  33c9                 xor ecx, ecx
// 0084bf9f  66894c241a           mov word ptr [esp + 0x1a], cx
// 0084bfa4  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0084bfa7  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084bfab  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0084bfaf  660fb6d0             movzx dx, al
// 0084bfb3  894c2420             mov dword ptr [esp + 0x20], ecx
// 0084bfb7  8bc8                 mov ecx, eax
// 0084bfb9  c1e810               shr eax, 0x10
// 0084bfbc  66c1e208             shl dx, 8
// 0084bfc0  660fb6c0             movzx ax, al
// 0084bfc4  c1e908               shr ecx, 8
// 0084bfc7  6689542424           mov word ptr [esp + 0x24], dx
// 0084bfcc  66c1e008             shl ax, 8
// 0084bfd0  660fb6d1             movzx dx, cl
// 0084bfd4  6689442428           mov word ptr [esp + 0x28], ax
// 0084bfd9  8b442430             mov eax, dword ptr [esp + 0x30]
// 0084bfdd  33c9                 xor ecx, ecx
// 0084bfdf  66c1e208             shl dx, 8
// 0084bfe3  6689542426           mov word ptr [esp + 0x26], dx
// 0084bfe8  66894c242a           mov word ptr [esp + 0x2a], cx
// 0084bfed  894c2404             mov dword ptr [esp + 4], ecx
// 0084bff1  c744240801000000     mov dword ptr [esp + 8], 1
// 0084bff9  85c0                 test eax, eax
// 0084bffb  7403                 je 0x84c000
// 0084bffd  8b4004               mov eax, dword ptr [eax + 4]
// 0084c000  33d2                 xor edx, edx
// 0084c002  394c2440             cmp dword ptr [esp + 0x40], ecx
// 0084c006  8d4c2404             lea ecx, [esp + 4]
// 0084c00a  0f94c2               sete dl
// 0084c00d  52                   push edx
// 0084c00e  6a01                 push 1
// 0084c010  51                   push ecx
// 0084c011  6a02                 push 2
// 0084c013  8d54241c             lea edx, [esp + 0x1c]
// 0084c017  52                   push edx
// 0084c018  50                   push eax
// 0084c019  8bce                 mov ecx, esi
// 0084c01b  e890e2ffff           call 0x84a2b0
// 0084c020  5e                   pop esi
// 0084c021  83c428               add esp, 0x28
// 0084c024  c21400               ret 0x14
// copied from an identical function in another client (function ?GradientFillFast@CXTPDrawHelpers@@AAEXPAVCDC@@PBUtagRECT@@KKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp