// from server: 100% by auto
// roc 2007-08 006654c0  unit: CRobloxTreeCtrl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006654c0
//
// 006654c0  53                   push ebx
// 006654c1  8b1dd8ec7700         mov ebx, dword ptr [0x77ecd8]
// 006654c7  56                   push esi
// 006654c8  57                   push edi
// 006654c9  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006654cd  57                   push edi
// 006654ce  8bf1                 mov esi, ecx
// 006654d0  8b4634               mov eax, dword ptr [esi + 0x34]
// 006654d3  8b4020               mov eax, dword ptr [eax + 0x20]
// 006654d6  6a02                 push 2
// 006654d8  680a110000           push 0x110a
// 006654dd  50                   push eax
// 006654de  ffd3                 call ebx
// 006654e0  85c0                 test eax, eax
// 006654e2  7517                 jne 0x6654fb
// 006654e4  8b7634               mov esi, dword ptr [esi + 0x34]
// 006654e7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006654ea  57                   push edi
// 006654eb  6a03                 push 3
// 006654ed  680a110000           push 0x110a
// 006654f2  51                   push ecx
// 006654f3  ffd3                 call ebx
// 006654f5  5f                   pop edi
// 006654f6  5e                   pop esi
// 006654f7  5b                   pop ebx
// 006654f8  c20400               ret 4
// 006654fb  8b16                 mov edx, dword ptr [esi]
// 006654fd  50                   push eax
// 006654fe  8b4210               mov eax, dword ptr [edx + 0x10]
// 00665501  8bce                 mov ecx, esi
// 00665503  ffd0                 call eax
// 00665505  5f                   pop edi
// 00665506  5e                   pop esi
// 00665507  5b                   pop ebx
// 00665508  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetPrevItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
