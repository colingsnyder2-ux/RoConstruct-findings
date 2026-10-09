// from server: 82% by colin
// roc 2007-08 0059e8b0  unit: RBX::HopperBin  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059e8b0
//
// 0059e8b0  51                   push ecx
// 0059e8b1  56                   push esi
// 0059e8b2  8bf1                 mov esi, ecx
// 0059e8b4  80be5c01000000       cmp byte ptr [esi + 0x15c], 0
// 0059e8bb  7447                 je 0x59e904
// 0059e8bd  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 0059e8c4  751f                 jne 0x59e8e5
// 0059e8c6  8d4604               lea eax, [esi + 4]
// 0059e8c9  50                   push eax
// 0059e8ca  b970528c00           mov ecx, 0x8c5270
// 0059e8cf  e89c19fdff           call 0x570270
// 0059e8d4  85c0                 test eax, eax
// 0059e8d6  740d                 je 0x59e8e5
// 0059e8d8  8d4c2407             lea ecx, [esp + 7]
// 0059e8dc  51                   push ecx
// 0059e8dd  8d4810               lea ecx, [eax + 0x10]
// 0059e8e0  e87b1af1ff           call 0x4b0360
// 0059e8e5  56                   push esi
// 0059e8e6  c6865c01000000       mov byte ptr [esi + 0x15c], 0
// 0059e8ed  e8def7eeff           call 0x48e0d0
// 0059e8f2  83c404               add esp, 4
// 0059e8f5  85c0                 test eax, eax
// 0059e8f7  740b                 je 0x59e904
// 0059e8f9  8bc8                 mov ecx, eax
// 0059e8fb  5e                   pop esi
// 0059e8fc  83c404               add esp, 4
// 0059e8ff  e97ce5fdff           jmp 0x57ce80
// 0059e904  5e                   pop esi
// 0059e905  59                   pop ecx
// 0059e906  c3                   ret 

struct HopperBin {
    char pad0[4];
    char pad1[0x158 - 4];
    int field_158;
    unsigned char field_15c;
    void method();
};

extern "C" int __stdcall sub_48E0D0(void*);
extern "C" void __stdcall sub_4B0360(void*, void*);
extern "C" void* __stdcall sub_570270(void*, void*);
extern "C" void __stdcall sub_57CE80(void*);

void HopperBin::method() {
    if (field_15c != 0) {
        if (field_158 == 0) {
            void* p = sub_570270((void*)0x8C5270, (char*)this + 4);
            if (p != 0) {
                char local;
                sub_4B0360((char*)p + 0x10, &local);
            }
        }
        field_15c = 0;
        int r = sub_48E0D0(this);
        if (r != 0) {
            sub_57CE80((void*)r);
        }
    }
}
