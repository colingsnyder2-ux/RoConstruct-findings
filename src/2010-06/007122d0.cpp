// roc 2010-06 007122d0  unit: RBX::BallBallContact  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007122d0
//
// 007122d0  53                   push ebx
// 007122d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007122d5  8b4310               mov eax, dword ptr [ebx + 0x10]
// 007122d8  2b430c               sub eax, dword ptr [ebx + 0xc]
// 007122db  56                   push esi
// 007122dc  57                   push edi
// 007122dd  6a01                 push 1
// 007122df  c1f802               sar eax, 2
// 007122e2  50                   push eax
// 007122e3  8bf9                 mov edi, ecx
// 007122e5  e8c6f8ffff           call 0x711bb0
// 007122ea  33f6                 xor esi, esi
// 007122ec  397704               cmp dword ptr [edi + 4], esi
// 007122ef  7e30                 jle 0x712321
// 007122f1  55                   push ebp
// 007122f2  8b2d0ca99e00         mov ebp, dword ptr [0x9ea90c]
// 007122f8  eb06                 jmp 0x712300
// 007122fa  8d9b00000000         lea ebx, [ebx]
// 00712300  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 00712303  2b4b0c               sub ecx, dword ptr [ebx + 0xc]
// 00712306  c1f902               sar ecx, 2
// 00712309  3bf1                 cmp esi, ecx
// 0071230b  7202                 jb 0x71230f
// 0071230d  ffd5                 call ebp
// 0071230f  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00712312  8b0cb2               mov ecx, dword ptr [edx + esi*4]
// 00712315  8b07                 mov eax, dword ptr [edi]
// 00712317  890cb0               mov dword ptr [eax + esi*4], ecx
// 0071231a  46                   inc esi
// 0071231b  3b7704               cmp esi, dword ptr [edi + 4]
// 0071231e  7ce0                 jl 0x712300
// 00712320  5d                   pop ebp
// 00712321  8bc7                 mov eax, edi
// 00712323  5f                   pop edi
// 00712324  5e                   pop esi
// 00712325  5b                   pop ebx
// 00712326  c20400               ret 4
// library openrbx-client/App\v8world\ContactManager.cpp (function ??4?$Array@PBVPrimitive@RBX@@@G3D@@QAEAAV01@ABV?$vector@PBVPrimitive@RBX@@V?$allocator@PBVPrimitive@RBX@@@std@@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ContactManager.cpp
