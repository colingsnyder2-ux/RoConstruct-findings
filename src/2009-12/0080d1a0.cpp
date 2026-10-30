// roc 2009-12 0080d1a0  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080d1a0
//
// 0080d1a0  56                   push esi
// 0080d1a1  8bf1                 mov esi, ecx
// 0080d1a3  e89a921100           call 0x926442
// 0080d1a8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080d1ac  8b442408             mov eax, dword ptr [esp + 8]
// 0080d1b0  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080d1b4  894e28               mov dword ptr [esi + 0x28], ecx
// 0080d1b7  8d4e30               lea ecx, [esi + 0x30]
// 0080d1ba  c70614329f00         mov dword ptr [esi], 0x9f3214
// 0080d1c0  894624               mov dword ptr [esi + 0x24], eax
// 0080d1c3  89562c               mov dword ptr [esi + 0x2c], edx
// 0080d1c6  e865d6ffff           call 0x80a830
// 0080d1cb  8d4e54               lea ecx, [esi + 0x54]
// 0080d1ce  e85dd6ffff           call 0x80a830
// 0080d1d3  8d4e78               lea ecx, [esi + 0x78]
// 0080d1d6  e855d6ffff           call 0x80a830
// 0080d1db  8d8e9c000000         lea ecx, [esi + 0x9c]
// 0080d1e1  e84ad6ffff           call 0x80a830
// 0080d1e6  8d8ec0000000         lea ecx, [esi + 0xc0]
// 0080d1ec  e83fd6ffff           call 0x80a830
// 0080d1f1  8d8ee4000000         lea ecx, [esi + 0xe4]
// 0080d1f7  e834d6ffff           call 0x80a830
// 0080d1fc  8d8e08010000         lea ecx, [esi + 0x108]
// 0080d202  e829d6ffff           call 0x80a830
// 0080d207  8d8e2c010000         lea ecx, [esi + 0x12c]
// 0080d20d  e81ed6ffff           call 0x80a830
// 0080d212  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080d216  898654010000         mov dword ptr [esi + 0x154], eax
// 0080d21c  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 0080d226  8bc6                 mov eax, esi
// 0080d228  5e                   pop esi
// 0080d229  c21000               ret 0x10
// copied from an identical function in another client (function ??0CXTPImageManagerIcon@@QAE@IHHPAVCXTPImageManagerImageList@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp