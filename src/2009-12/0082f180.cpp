// roc 2009-12 0082f180  unit: CXTPReportSelectedRows  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082f180
//
// 0082f180  56                   push esi
// 0082f181  57                   push edi
// 0082f182  6a0f                 push 0xf
// 0082f184  e877ffffff           call 0x82f100
// 0082f189  6a10                 push 0x10
// 0082f18b  8bf8                 mov edi, eax
// 0082f18d  e86effffff           call 0x82f100
// 0082f192  6a05                 push 5
// 0082f194  8bf0                 mov esi, eax
// 0082f196  89b9e4010000         mov dword ptr [ecx + 0x1e4], edi
// 0082f19c  e85fffffff           call 0x82f100
// 0082f1a1  6a0d                 push 0xd
// 0082f1a3  8981e8010000         mov dword ptr [ecx + 0x1e8], eax
// 0082f1a9  e852ffffff           call 0x82f100
// 0082f1ae  6a05                 push 5
// 0082f1b0  8981f0010000         mov dword ptr [ecx + 0x1f0], eax
// 0082f1b6  e845ffffff           call 0x82f100
// 0082f1bb  6a11                 push 0x11
// 0082f1bd  898110020000         mov dword ptr [ecx + 0x210], eax
// 0082f1c3  e838ffffff           call 0x82f100
// 0082f1c8  6a05                 push 5
// 0082f1ca  8981f8010000         mov dword ptr [ecx + 0x1f8], eax
// 0082f1d0  89b104020000         mov dword ptr [ecx + 0x204], esi
// 0082f1d6  89b108020000         mov dword ptr [ecx + 0x208], esi
// 0082f1dc  89b118020000         mov dword ptr [ecx + 0x218], esi
// 0082f1e2  89b160020000         mov dword ptr [ecx + 0x260], esi
// 0082f1e8  89b10c020000         mov dword ptr [ecx + 0x20c], esi
// 0082f1ee  e80dffffff           call 0x82f100
// 0082f1f3  6a0d                 push 0xd
// 0082f1f5  8981fc010000         mov dword ptr [ecx + 0x1fc], eax
// 0082f1fb  e800ffffff           call 0x82f100
// 0082f200  6a0d                 push 0xd
// 0082f202  8981ec010000         mov dword ptr [ecx + 0x1ec], eax
// 0082f208  e8f3feffff           call 0x82f100
// 0082f20d  6a08                 push 8
// 0082f20f  898100020000         mov dword ptr [ecx + 0x200], eax
// 0082f215  e8e6feffff           call 0x82f100
// 0082f21a  6a07                 push 7
// 0082f21c  89811c020000         mov dword ptr [ecx + 0x21c], eax
// 0082f222  e8d9feffff           call 0x82f100
// 0082f227  6a12                 push 0x12
// 0082f229  898120020000         mov dword ptr [ecx + 0x220], eax
// 0082f22f  e8ccfeffff           call 0x82f100
// 0082f234  6a0e                 push 0xe
// 0082f236  898124020000         mov dword ptr [ecx + 0x224], eax
// 0082f23c  e8bffeffff           call 0x82f100
// 0082f241  6a0e                 push 0xe
// 0082f243  898128020000         mov dword ptr [ecx + 0x228], eax
// 0082f249  89b12c020000         mov dword ptr [ecx + 0x22c], esi
// 0082f24f  e8acfeffff           call 0x82f100
// 0082f254  6a0d                 push 0xd
// 0082f256  898130020000         mov dword ptr [ecx + 0x230], eax
// 0082f25c  89b114020000         mov dword ptr [ecx + 0x214], esi
// 0082f262  e899feffff           call 0x82f100
// 0082f267  6a11                 push 0x11
// 0082f269  898134020000         mov dword ptr [ecx + 0x234], eax
// 0082f26f  89b1f4010000         mov dword ptr [ecx + 0x1f4], esi
// 0082f275  89b938020000         mov dword ptr [ecx + 0x238], edi
// 0082f27b  89b13c020000         mov dword ptr [ecx + 0x23c], esi
// 0082f281  89b940020000         mov dword ptr [ecx + 0x240], edi
// 0082f287  89b144020000         mov dword ptr [ecx + 0x244], esi
// 0082f28d  89b948020000         mov dword ptr [ecx + 0x248], edi
// 0082f293  89b94c020000         mov dword ptr [ecx + 0x24c], edi
// 0082f299  89b150020000         mov dword ptr [ecx + 0x250], esi
// 0082f29f  e85cfeffff           call 0x82f100
// 0082f2a4  5f                   pop edi
// 0082f2a5  89b15c020000         mov dword ptr [ecx + 0x25c], esi
// 0082f2ab  898154020000         mov dword ptr [ecx + 0x254], eax
// 0082f2b1  c7815802000000000000 mov dword ptr [ecx + 0x258], 0
// 0082f2bb  5e                   pop esi
// 0082f2bc  c3                   ret 
// copied from an identical function in another client (function ?RefreshXPColors@CXTPColorManager@@AAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPColorManager.cpp