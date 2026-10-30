// from server: 100% by auto
// roc 2010-06 0077aee0  unit: RBX::PartDropTool  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077aee0
//
// 0077aee0  56                   push esi
// 0077aee1  57                   push edi
// 0077aee2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0077aee6  8b7710               mov esi, dword ptr [edi + 0x10]
// 0077aee9  807e1501             cmp byte ptr [esi + 0x15], 1
// 0077aeed  7718                 ja 0x77af07
// 0077aeef  33c0                 xor eax, eax
// 0077aef1  8d4e1c               lea ecx, [esi + 0x1c]
// 0077aef4  894618               mov dword ptr [esi + 0x18], eax
// 0077aef7  894e20               mov dword ptr [esi + 0x20], ecx
// 0077aefa  894624               mov dword ptr [esi + 0x24], eax
// 0077aefd  894628               mov dword ptr [esi + 0x28], eax
// 0077af00  89462c               mov dword ptr [esi + 0x2c], eax
// 0077af03  c6461502             mov byte ptr [esi + 0x15], 2
// 0077af07  807e1504             cmp byte ptr [esi + 0x15], 4
// 0077af0b  7410                 je 0x77af1d
// 0077af0d  8d4900               lea ecx, [ecx]
// 0077af10  8bc7                 mov eax, edi
// 0077af12  e849feffff           call 0x77ad60
// 0077af17  807e1504             cmp byte ptr [esi + 0x15], 4
// 0077af1b  75f3                 jne 0x77af10
// 0077af1d  e80efcffff           call 0x77ab30
// 0077af22  807e1500             cmp byte ptr [esi + 0x15], 0
// 0077af26  740d                 je 0x77af35
// 0077af28  8bc7                 mov eax, edi
// 0077af2a  e831feffff           call 0x77ad60
// 0077af2f  807e1500             cmp byte ptr [esi + 0x15], 0
// 0077af33  75f3                 jne 0x77af28
// 0077af35  b81f85eb51           mov eax, 0x51eb851f
// 0077af3a  f76648               mul dword ptr [esi + 0x48]
// 0077af3d  c1ea05               shr edx, 5
// 0077af40  0faf5650             imul edx, dword ptr [esi + 0x50]
// 0077af44  5f                   pop edi
// 0077af45  895640               mov dword ptr [esi + 0x40], edx
// 0077af48  5e                   pop esi
// 0077af49  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_fullgc)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
