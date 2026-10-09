// from server: 100% by colin
// roc 2007-08 006e0b90  unit: CXTPDockingPaneAutoHidePanel  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0b90
//
// 006e0b90  56                   push esi
// 006e0b91  8bf1                 mov esi, ecx
// 006e0b93  83bea001000000       cmp dword ptr [esi + 0x1a0], 0
// 006e0b9a  741d                 je 0x6e0bb9
// 006e0b9c  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 006e0ba2  8b01                 mov eax, dword ptr [ecx]
// 006e0ba4  8b5058               mov edx, dword ptr [eax + 0x58]
// 006e0ba7  ffd2                 call edx
// 006e0ba9  8d4e54               lea ecx, [esi + 0x54]
// 006e0bac  e88ff9ffff           call 0x6e0540
// 006e0bb1  8bc8                 mov ecx, eax
// 006e0bb3  5e                   pop esi
// 006e0bb4  e917d8f8ff           jmp 0x66e3d0
// 006e0bb9  e846f4f4ff           call 0x630004
// 006e0bbe  8d4e54               lea ecx, [esi + 0x54]
// 006e0bc1  e87af9ffff           call 0x6e0540
// 006e0bc6  8bc8                 mov ecx, eax
// 006e0bc8  5e                   pop esi
// 006e0bc9  e902d8f8ff           jmp 0x66e3d0

struct CXTPDockingPaneAutoHidePanel
{
    char pad[0x54];
    int field_54;
    char pad2[0x1a0 - 0x58];
    void* field_1a0;
    int func_006e0b90();
};

extern "C" int __stdcall func_00630004();
extern "C" int __fastcall func_006e0540(int);
extern "C" int __fastcall func_0066e3d0(int);

int CXTPDockingPaneAutoHidePanel::func_006e0b90()
{
    if (field_1a0 != 0)
    {
        void** vtbl = *(void***)field_1a0;
        int (__fastcall *fn)(void*) = (int (__fastcall *)(void*))vtbl[0x58 / 4];
        fn(field_1a0);
    }
    else
    {
        func_00630004();
    }
    int r = func_006e0540((int)(this->pad + 0x54));
    return func_0066e3d0(r);
}
