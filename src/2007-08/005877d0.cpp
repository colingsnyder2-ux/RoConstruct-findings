// from server: 100% by colin
// roc 2007-08 005877d0  unit: RBX::Reflection::EnumDescriptor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005877d0
//
// 005877d0  8b81ec000000         mov eax, dword ptr [ecx + 0xec]
// 005877d6  85c0                 test eax, eax
// 005877d8  7426                 je 0x587800
// 005877da  d98108010000         fld dword ptr [ecx + 0x108]
// 005877e0  83ec0c               sub esp, 0xc
// 005877e3  d95c2408             fstp dword ptr [esp + 8]
// 005877e7  d98104010000         fld dword ptr [ecx + 0x104]
// 005877ed  d95c2404             fstp dword ptr [esp + 4]
// 005877f1  d98100010000         fld dword ptr [ecx + 0x100]
// 005877f7  d91c24               fstp dword ptr [esp]
// 005877fa  50                   push eax
// 005877fb  e8de830a00           call 0x62fbde
// 00587800  c3                   ret 

struct RBX_Reflection_EnumDescriptor {
    void func_005877d0();
};

extern "C" void __stdcall func_0062fbde(int, float, float, float);

void RBX_Reflection_EnumDescriptor::func_005877d0()
{
    int v = *(int*)((char*)this + 0xec);
    if (v) {
        float f3 = *(float*)((char*)this + 0x108);
        float f2 = *(float*)((char*)this + 0x104);
        float f1 = *(float*)((char*)this + 0x100);
        func_0062fbde(v, f1, f2, f3);
    }
}
