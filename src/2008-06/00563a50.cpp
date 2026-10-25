// from server: 100% by king_originala
// roc 2008-06 00563a50  unit: RBX::ContentProvider  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563a50
//
// 00563a50  81ec88000000         sub esp, 0x88
// 00563a56  8d4c2404             lea ecx, [esp + 4]
// 00563a5a  e881e0f9ff           call 0x501ae0
// 00563a5f  d900                 fld dword ptr [eax]
// 00563a61  8d4c2404             lea ecx, [esp + 4]
// 00563a65  d91c24               fstp dword ptr [esp]
// 00563a68  e853f7ffff           call 0x5631c0
// 00563a6d  d90424               fld dword ptr [esp]
// 00563a70  81c488000000         add esp, 0x88
// 00563a76  c3                   ret 

struct S {
    float value;
    char storage[128];

    S();
    ~S();
};

float f()
{
    return S().value;
}
