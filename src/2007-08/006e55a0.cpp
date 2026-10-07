// roc 2007-08 006e55a0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetWhidbey  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e55a0
//
// 006e55a0  53                   push ebx
// 006e55a1  55                   push ebp
// 006e55a2  56                   push esi
// 006e55a3  57                   push edi
// 006e55a4  8bf1                 mov esi, ecx
// 006e55a6  e8455d0300           call 0x71b2f0
// 006e55ab  83be2002000000       cmp dword ptr [esi + 0x220], 0
// 006e55b2  8b3d58ee7700         mov edi, dword ptr [0x77ee58]
// 006e55b8  740b                 je 0x6e55c5
// 006e55ba  6a05                 push 5
// 006e55bc  ffd7                 call edi
// 006e55be  894678               mov dword ptr [esi + 0x78], eax
// 006e55c1  6a08                 push 8
// 006e55c3  eb02                 jmp 0x6e55c7
// 006e55c5  6a15                 push 0x15
// 006e55c7  ffd7                 call edi
// 006e55c9  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 006e55cf  e89c39f8ff           call 0x668f70
// 006e55d4  d9059c7e7900         fld dword ptr [0x797e9c]
// 006e55da  51                   push ecx
// 006e55db  d91c24               fstp dword ptr [esp]
// 006e55de  68cd000000           push 0xcd
// 006e55e3  6a05                 push 5
// 006e55e5  8be8                 mov ebp, eax
// 006e55e7  8d5e04               lea ebx, [esi + 4]
// 006e55ea  ffd7                 call edi
// 006e55ec  50                   push eax
// 006e55ed  6a0f                 push 0xf
// 006e55ef  ffd7                 call edi
// 006e55f1  50                   push eax
// 006e55f2  8bcd                 mov ecx, ebp
// 006e55f4  e8d730f8ff           call 0x6686d0
// 006e55f9  50                   push eax
// 006e55fa  6a0f                 push 0xf
// 006e55fc  ffd7                 call edi
// 006e55fe  50                   push eax
// 006e55ff  8bcb                 mov ecx, ebx
// 006e5601  e8ea2ef8ff           call 0x6684f0
// 006e5606  6a15                 push 0x15
// 006e5608  ffd7                 call edi
// 006e560a  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 006e5610  33c0                 xor eax, eax
// 006e5612  898618020000         mov dword ptr [esi + 0x218], eax
// 006e5618  898614020000         mov dword ptr [esi + 0x214], eax
// 006e561e  e84d39f8ff           call 0x668f70
// 006e5623  8bc8                 mov ecx, eax
// 006e5625  e84637f8ff           call 0x668d70
// 006e562a  b901000000           mov ecx, 1
// 006e562f  2bc1                 sub eax, ecx
// 006e5631  7443                 je 0x6e5676
// 006e5633  2bc1                 sub eax, ecx
// 006e5635  743f                 je 0x6e5676
// 006e5637  2bc1                 sub eax, ecx
// 006e5639  7566                 jne 0x6e56a1
// 006e563b  d9059c7e7900         fld dword ptr [0x797e9c]
// 006e5641  51                   push ecx
// 006e5642  d91c24               fstp dword ptr [esp]
// 006e5645  b8919b9c00           mov eax, 0x9c9b91
// 006e564a  68f3f3f700           push 0xf7f3f3
// 006e564f  c7869c000000f2f2f700 mov dword ptr [esi + 0x9c], 0xf7f2f2
// 006e5659  898648010000         mov dword ptr [esi + 0x148], eax
// 006e565f  898654010000         mov dword ptr [esi + 0x154], eax
// 006e5665  c78660010000bebed800 mov dword ptr [esi + 0x160], 0xd8bebe
// 006e566f  68d7d7e500           push 0xe5d7d7
// 006e5674  eb14                 jmp 0x6e568a
// 006e5676  d9059c7e7900         fld dword ptr [0x797e9c]
// 006e567c  51                   push ecx
// 006e567d  d91c24               fstp dword ptr [esp]
// 006e5680  68f4f1e700           push 0xe7f1f4
// 006e5685  68e5e5d700           push 0xd7e5e5
// 006e568a  898e18020000         mov dword ptr [esi + 0x218], ecx
// 006e5690  8bcb                 mov ecx, ebx
// 006e5692  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 006e569c  e84f2ef8ff           call 0x6684f0
// 006e56a1  53                   push ebx
// 006e56a2  8d4e24               lea ecx, [esi + 0x24]
// 006e56a5  e8662ef8ff           call 0x668510
// 006e56aa  5f                   pop edi
// 006e56ab  5e                   pop esi
// 006e56ac  5d                   pop ebp
// 006e56ad  5b                   pop ebx
// 006e56ae  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?RefreshMetrics@CColorSetWhidbey@CXTPDockingPaneWhidbeyTheme@XTPDockingPanePaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
