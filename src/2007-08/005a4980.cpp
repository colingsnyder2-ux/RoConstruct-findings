// from server: 100% by colin
// roc 2007-08 005a4980  unit: RBX::Humanoid  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4980
//
// 005a4980  81c1fcfeffff         add ecx, 0xfffffefc
// 005a4986  51                   push ecx
// 005a4987  e82464fdff           call 0x57adb0
// 005a498c  8b4030               mov eax, dword ptr [eax + 0x30]
// 005a498f  83c404               add esp, 4
// 005a4992  c3                   ret 

struct Sub {
    char pad[0x30];
    int field30;
};

extern "C" Sub* __cdecl func_0057adb0(void* p);

struct Humanoid {
    char pad[0x104];
    int getField30();
};

int Humanoid::getField30()
{
    Sub* s = func_0057adb0((char*)this - 0x104);
    return s->field30;
}
