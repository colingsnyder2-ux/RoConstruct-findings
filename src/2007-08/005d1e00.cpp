// from server: 43% by colin
// roc 2007-08 005d1e00  unit: RBX::Tool  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1e00
//
// 005d1e00  83ec34               sub esp, 0x34
// 005d1e03  56                   push esi
// 005d1e04  57                   push edi
// 005d1e05  81c1e0fdffff         add ecx, 0xfffffde0
// 005d1e0b  c744240800000000     mov dword ptr [esp + 8], 0
// 005d1e13  e8c8fcffff           call 0x5d1ae0
// 005d1e18  85c0                 test eax, eax
// 005d1e1a  7409                 je 0x5d1e25
// 005d1e1c  8bc8                 mov ecx, eax
// 005d1e1e  e85d21faff           call 0x573f80
// 005d1e23  eb09                 jmp 0x5d1e2e
// 005d1e25  8d4c240c             lea ecx, [esp + 0xc]
// 005d1e29  e82232eaff           call 0x475050
// 005d1e2e  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005d1e32  8bf0                 mov esi, eax
// 005d1e34  56                   push esi
// 005d1e35  8bcf                 mov ecx, edi
// 005d1e37  e89477f3ff           call 0x5095d0
// 005d1e3c  d94624               fld dword ptr [esi + 0x24]
// 005d1e3f  d95f24               fstp dword ptr [edi + 0x24]
// 005d1e42  8bc7                 mov eax, edi
// 005d1e44  d94628               fld dword ptr [esi + 0x28]
// 005d1e47  d95f28               fstp dword ptr [edi + 0x28]
// 005d1e4a  d9462c               fld dword ptr [esi + 0x2c]
// 005d1e4d  d95f2c               fstp dword ptr [edi + 0x2c]
// 005d1e50  5f                   pop edi
// 005d1e51  5e                   pop esi
// 005d1e52  83c434               add esp, 0x34
// 005d1e55  c20400               ret 4

struct Tool;

struct ToolGrip {
    char pad[0x24];
    float x;
    float y;
    float z;
};

struct ToolBase {
    char pad[0x220];
};

struct ToolImpl {
    char pad[0x24];
    float x;
    float y;
    float z;
};

extern "C" void* __stdcall sub_5D1AE0(ToolBase*);
extern "C" void __stdcall sub_573F80(void*);
extern "C" void __stdcall sub_475050(void*);
extern "C" void __stdcall sub_5095D0(void*, void*);

struct Tool {
    ToolGrip* getGrip(ToolGrip* out);
};

ToolGrip* Tool::getGrip(ToolGrip* out) {
    ToolBase* base = (ToolBase*)((char*)this - 0x220);
    ToolImpl* impl;
    void* p = sub_5D1AE0(base);
    if (p) {
        sub_573F80(p);
        impl = (ToolImpl*)p;
    } else {
        char buf[0x34];
        sub_475050(buf);
        impl = (ToolImpl*)buf;
    }
    sub_5095D0(out, impl);
    out->x = impl->x;
    out->y = impl->y;
    out->z = impl->z;
    return out;
}
