// roc 2009-12 007f5f90  unit: CRobloxControlColorSelector  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f5f90
//
// 007f5f90  8b8190000000         mov eax, dword ptr [ecx + 0x90]
// 007f5f96  85c0                 test eax, eax
// 007f5f98  7404                 je 0x7f5f9e
// 007f5f9a  8bd0                 mov edx, eax
// 007f5f9c  eb28                 jmp 0x7f5fc6
// 007f5f9e  8b9188000000         mov edx, dword ptr [ecx + 0x88]
// 007f5fa4  85d2                 test edx, edx
// 007f5fa6  7f22                 jg 0x7f5fca
// 007f5fa8  56                   push esi
// 007f5fa9  8bb15c010000         mov esi, dword ptr [ecx + 0x15c]
// 007f5faf  85f6                 test esi, esi
// 007f5fb1  740c                 je 0x7f5fbf
// 007f5fb3  8b562c               mov edx, dword ptr [esi + 0x2c]
// 007f5fb6  85d2                 test edx, edx
// 007f5fb8  7f0b                 jg 0x7f5fc5
// 007f5fba  8b5628               mov edx, dword ptr [esi + 0x28]
// 007f5fbd  eb06                 jmp 0x7f5fc5
// 007f5fbf  8b9184000000         mov edx, dword ptr [ecx + 0x84]
// 007f5fc5  5e                   pop esi
// 007f5fc6  85d2                 test edx, edx
// 007f5fc8  743f                 je 0x7f6009
// 007f5fca  85c0                 test eax, eax
// 007f5fcc  7526                 jne 0x7f5ff4
// 007f5fce  8b8188000000         mov eax, dword ptr [ecx + 0x88]
// 007f5fd4  85c0                 test eax, eax
// 007f5fd6  7f1c                 jg 0x7f5ff4
// 007f5fd8  8b915c010000         mov edx, dword ptr [ecx + 0x15c]
// 007f5fde  85d2                 test edx, edx
// 007f5fe0  740c                 je 0x7f5fee
// 007f5fe2  8b422c               mov eax, dword ptr [edx + 0x2c]
// 007f5fe5  85c0                 test eax, eax
// 007f5fe7  7f0b                 jg 0x7f5ff4
// 007f5fe9  8b4228               mov eax, dword ptr [edx + 0x28]
// 007f5fec  eb06                 jmp 0x7f5ff4
// 007f5fee  8b8184000000         mov eax, dword ptr [ecx + 0x84]
// 007f5ff4  8b542404             mov edx, dword ptr [esp + 4]
// 007f5ff8  52                   push edx
// 007f5ff9  50                   push eax
// 007f5ffa  e811ffffff           call 0x7f5f10
// 007f5fff  8bc8                 mov ecx, eax
// 007f6001  e87a9b0100           call 0x80fb80
// 007f6006  c20400               ret 4
// 007f6009  33c0                 xor eax, eax
// 007f600b  c20400               ret 4
// copied from an identical function in another client (function ?GetImage@CXTPControl@@UBEPAVCXTPImageManagerIcon@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp