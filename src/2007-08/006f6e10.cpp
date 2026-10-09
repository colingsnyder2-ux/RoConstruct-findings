// from server: 79% by colin
// roc 2007-08 006f6e10  unit: VCEdit::?$CXTMaskEditT  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f6e10
//
// 006f6e10  56                   push esi
// 006f6e11  8bf1                 mov esi, ecx
// 006f6e13  8d8e84000000         lea ecx, [esi + 0x84]
// 006f6e19  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f6e1f  8d8e80000000         lea ecx, [esi + 0x80]
// 006f6e25  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f6e2b  8d4e7c               lea ecx, [esi + 0x7c]
// 006f6e2e  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f6e34  8d4e78               lea ecx, [esi + 0x78]
// 006f6e37  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f6e3d  8d4e74               lea ecx, [esi + 0x74]
// 006f6e40  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f6e46  8d4e70               lea ecx, [esi + 0x70]
// 006f6e49  ff15bcdd7700         call dword ptr [0x77ddbc]
// 006f6e4f  8bce                 mov ecx, esi
// 006f6e51  e82c150400           call 0x738382
// 006f6e56  f644240801           test byte ptr [esp + 8], 1
// 006f6e5b  7409                 je 0x6f6e66
// 006f6e5d  56                   push esi
// 006f6e5e  e8ff8df3ff           call 0x62fc62
// 006f6e63  83c404               add esp, 4
// 006f6e66  8bc6                 mov eax, esi
// 006f6e68  5e                   pop esi
// 006f6e69  c20400               ret 4

struct CXTMaskEditT {
    char pad[0x70];
    int f70;
    int f74;
    int f78;
    int f7c;
    int f80;
    int f84;
    void sub_738382();
    void* destroy(unsigned int flags);
};

extern "C" void __stdcall sub_77ddbc(int* p);
extern "C" void __stdcall sub_62fc62(void* p);

void* CXTMaskEditT::destroy(unsigned int flags) {
    sub_77ddbc(&f84);
    sub_77ddbc(&f80);
    sub_77ddbc(&f7c);
    sub_77ddbc(&f78);
    sub_77ddbc(&f74);
    sub_77ddbc(&f70);
    sub_738382();
    if (flags & 1) {
        sub_62fc62(this);
    }
    return this;
}
