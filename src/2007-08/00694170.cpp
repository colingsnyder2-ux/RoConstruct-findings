// from server: 100% by colin
// roc 2007-08 00694170  unit: CXTPStatusBar  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00694170
//
// 00694170  56                   push esi
// 00694171  57                   push edi
// 00694172  8bf1                 mov esi, ecx
// 00694174  ff1558d57700         call dword ptr [0x77d558]
// 0069417a  8b3d14ee7700         mov edi, dword ptr [0x77ee14]
// 00694180  33c0                 xor eax, eax
// 00694182  894608               mov dword ptr [esi + 8], eax
// 00694185  894620               mov dword ptr [esi + 0x20], eax
// 00694188  89461c               mov dword ptr [esi + 0x1c], eax
// 0069418b  8d460c               lea eax, [esi + 0xc]
// 0069418e  50                   push eax
// 0069418f  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 00694196  ffd7                 call edi
// 00694198  83c628               add esi, 0x28
// 0069419b  56                   push esi
// 0069419c  ffd7                 call edi
// 0069419e  5f                   pop edi
// 0069419f  5e                   pop esi
// 006941a0  c3                   ret 

struct CXTPStatusBar {
    void construct();
    char pad[0x28];
};

extern "C" void (__stdcall *sub_77D558)();
extern "C" void (__stdcall *sub_77EE14)(void*);

void CXTPStatusBar::construct() {
    sub_77D558();
    void (__stdcall *fn)(void*) = sub_77EE14;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x1c) = 0;
    *(int*)((char*)this + 0x24) = -1;
    fn((char*)this + 0xc);
    fn((char*)this + 0x28);
}
