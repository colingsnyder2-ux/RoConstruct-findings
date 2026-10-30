// roc 2009-12 008e3810  unit: PAVCXTShadowWnd::?$CList  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e3810
//
// 008e3810  6aff                 push -1
// 008e3812  68c8399600           push 0x9639c8
// 008e3817  64a100000000         mov eax, dword ptr fs:[0]
// 008e381d  50                   push eax
// 008e381e  83ec68               sub esp, 0x68
// 008e3821  a10052b600           mov eax, dword ptr [0xb65200]
// 008e3826  33c4                 xor eax, esp
// 008e3828  89442464             mov dword ptr [esp + 0x64], eax
// 008e382c  56                   push esi
// 008e382d  a10052b600           mov eax, dword ptr [0xb65200]
// 008e3832  33c4                 xor eax, esp
// 008e3834  50                   push eax
// 008e3835  8d442470             lea eax, [esp + 0x70]
// 008e3839  64a300000000         mov dword ptr fs:[0], eax
// 008e383f  8bf1                 mov esi, ecx
// 008e3841  56                   push esi
// 008e3842  8d4c241c             lea ecx, [esp + 0x1c]
// 008e3846  e8a509f1ff           call 0x7f41f0
// 008e384b  56                   push esi
// 008e384c  8d4c240c             lea ecx, [esp + 0xc]
// 008e3850  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 008e3858  e8737af6ff           call 0x84b2d0
// 008e385d  837e6400             cmp dword ptr [esi + 0x64], 0
// 008e3861  7413                 je 0x8e3876
// 008e3863  8d442408             lea eax, [esp + 8]
// 008e3867  50                   push eax
// 008e3868  8d4c241c             lea ecx, [esp + 0x1c]
// 008e386c  51                   push ecx
// 008e386d  8bce                 mov ecx, esi
// 008e386f  e86cfeffff           call 0x8e36e0
// 008e3874  eb27                 jmp 0x8e389d
// 008e3876  837e6000             cmp dword ptr [esi + 0x60], 0
// 008e387a  7404                 je 0x8e3880
// 008e387c  33c0                 xor eax, eax
// 008e387e  eb0e                 jmp 0x8e388e
// 008e3880  e84bc1f4ff           call 0x82f9d0
// 008e3885  6a10                 push 0x10
// 008e3887  8bc8                 mov ecx, eax
// 008e3889  e872b8f4ff           call 0x82f100
// 008e388e  50                   push eax
// 008e388f  8d54240c             lea edx, [esp + 0xc]
// 008e3893  52                   push edx
// 008e3894  8d4c2420             lea ecx, [esp + 0x20]
// 008e3898  e8610df1ff           call 0x7f45fe
// 008e389d  8d4c2418             lea ecx, [esp + 0x18]
// 008e38a1  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 008e38a9  e83c09f1ff           call 0x7f41ea
// 008e38ae  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 008e38b2  64890d00000000       mov dword ptr fs:[0], ecx
// 008e38b9  59                   pop ecx
// 008e38ba  5e                   pop esi
// 008e38bb  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008e38bf  33cc                 xor ecx, esp
// 008e38c1  e8d41af1ff           call 0x7f539a
// 008e38c6  83c474               add esp, 0x74
// 008e38c9  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTShadowWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp