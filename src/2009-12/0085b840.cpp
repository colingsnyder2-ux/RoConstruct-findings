// roc 2009-12 0085b840  unit: CXTPStatusBar  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b840
//
// 0085b840  83ec20               sub esp, 0x20
// 0085b843  56                   push esi
// 0085b844  8bf1                 mov esi, ecx
// 0085b846  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 0085b849  8b01                 mov eax, dword ptr [ecx]
// 0085b84b  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 0085b851  8d542404             lea edx, [esp + 4]
// 0085b855  52                   push edx
// 0085b856  8b5658               mov edx, dword ptr [esi + 0x58]
// 0085b859  52                   push edx
// 0085b85a  680a040000           push 0x40a
// 0085b85f  ffd0                 call eax
// 0085b861  85c0                 test eax, eax
// 0085b863  750b                 jne 0x85b870
// 0085b865  8d4c2404             lea ecx, [esp + 4]
// 0085b869  51                   push ecx
// 0085b86a  ff159cca9800         call dword ptr [0x98ca9c]
// 0085b870  8b4e50               mov ecx, dword ptr [esi + 0x50]
// 0085b873  e8b8faffff           call 0x85b330
// 0085b878  48                   dec eax
// 0085b879  394658               cmp dword ptr [esi + 0x58], eax
// 0085b87c  755f                 jne 0x85b8dd
// 0085b87e  f7462800000008       test dword ptr [esi + 0x28], 0x8000000
// 0085b885  7518                 jne 0x85b89f
// 0085b887  6a2d                 push 0x2d
// 0085b889  ff15dccb9800         call dword ptr [0x98cbdc]
// 0085b88f  8d1440               lea edx, [eax + eax*2]
// 0085b892  035624               add edx, dword ptr [esi + 0x24]
// 0085b895  03542404             add edx, dword ptr [esp + 4]
// 0085b899  8954240c             mov dword ptr [esp + 0xc], edx
// 0085b89d  eb3e                 jmp 0x85b8dd
// 0085b89f  8b4650               mov eax, dword ptr [esi + 0x50]
// 0085b8a2  50                   push eax
// 0085b8a3  8d4c2418             lea ecx, [esp + 0x18]
// 0085b8a7  e824fafeff           call 0x84b2d0
// 0085b8ac  8b4808               mov ecx, dword ptr [eax + 8]
// 0085b8af  894c240c             mov dword ptr [esp + 0xc], ecx
// 0085b8b3  8bce                 mov ecx, esi
// 0085b8b5  e8c623ffff           call 0x84dc80
// 0085b8ba  a900010000           test eax, 0x100
// 0085b8bf  741c                 je 0x85b8dd
// 0085b8c1  57                   push edi
// 0085b8c2  8b3ddccb9800         mov edi, dword ptr [0x98cbdc]
// 0085b8c8  6a31                 push 0x31
// 0085b8ca  ffd7                 call edi
// 0085b8cc  8b742410             mov esi, dword ptr [esp + 0x10]
// 0085b8d0  6a2d                 push 0x2d
// 0085b8d2  2bf0                 sub esi, eax
// 0085b8d4  ffd7                 call edi
// 0085b8d6  2bf0                 sub esi, eax
// 0085b8d8  89742410             mov dword ptr [esp + 0x10], esi
// 0085b8dc  5f                   pop edi
// 0085b8dd  8b742428             mov esi, dword ptr [esp + 0x28]
// 0085b8e1  8d542404             lea edx, [esp + 4]
// 0085b8e5  52                   push edx
// 0085b8e6  56                   push esi
// 0085b8e7  ff1564cc9800         call dword ptr [0x98cc64]
// 0085b8ed  8bc6                 mov eax, esi
// 0085b8ef  5e                   pop esi
// 0085b8f0  83c420               add esp, 0x20
// 0085b8f3  c20400               ret 4
// copied from an identical function in another client (function ?GetRect@CXTPStatusBarPane@@QBE?AVCRect@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp