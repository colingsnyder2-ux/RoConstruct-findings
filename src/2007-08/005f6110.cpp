// from server: 62% by colin
// roc 2007-08 005f6110  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f6110
//
// 005f6110  83ec08               sub esp, 8
// 005f6113  85c9                 test ecx, ecx
// 005f6115  7405                 je 0x5f611c
// 005f6117  8d4104               lea eax, [ecx + 4]
// 005f611a  eb02                 jmp 0x5f611e
// 005f611c  33c0                 xor eax, eax
// 005f611e  d981e8000000         fld dword ptr [ecx + 0xe8]
// 005f6124  50                   push eax
// 005f6125  b92c7e8c00           mov ecx, 0x8c7e2c
// 005f612a  d95c2408             fstp dword ptr [esp + 8]
// 005f612e  e83da1f7ff           call 0x570270
// 005f6133  85c0                 test eax, eax
// 005f6135  7415                 je 0x5f614c
// 005f6137  d9442404             fld dword ptr [esp + 4]
// 005f613b  51                   push ecx
// 005f613c  8d4c2407             lea ecx, [esp + 7]
// 005f6140  d91c24               fstp dword ptr [esp]
// 005f6143  51                   push ecx
// 005f6144  8d4810               lea ecx, [eax + 0x10]
// 005f6147  e84477e9ff           call 0x48d890
// 005f614c  83c408               add esp, 8
// 005f614f  c20400               ret 4

struct VColor3ValueFactoryProduct {
    char pad[0xe8];
    float value;
    void construct(float);
};

struct Creator {
    char pad[0x10];
    void set_value(float);
};

extern void* __cdecl get_creator(void*);

void VColor3ValueFactoryProduct::construct(float arg)
{
    void* p;
    if (this != 0)
        p = (char*)this + 4;
    else
        p = 0;
    float v = value;
    Creator* c = (Creator*)get_creator(p);
    if (c != 0)
        c->set_value(v);
}
