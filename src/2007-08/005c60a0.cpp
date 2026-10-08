// from server: 100% by colin
// roc 2007-08 005c60a0  unit: lua_exception  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c60a0
//
// 005c60a0  56                   push esi
// 005c60a1  8bf1                 mov esi, ecx
// 005c60a3  ff15f8e67700         call dword ptr [0x77e6f8]
// 005c60a9  8b442408             mov eax, dword ptr [esp + 8]
// 005c60ad  c7067c967b00         mov dword ptr [esi], 0x7b967c
// 005c60b3  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005c60b6  894e0c               mov dword ptr [esi + 0xc], ecx
// 005c60b9  8b5010               mov edx, dword ptr [eax + 0x10]
// 005c60bc  895610               mov dword ptr [esi + 0x10], edx
// 005c60bf  8a4814               mov cl, byte ptr [eax + 0x14]
// 005c60c2  884e14               mov byte ptr [esi + 0x14], cl
// 005c60c5  c6401401             mov byte ptr [eax + 0x14], 1
// 005c60c9  8bc6                 mov eax, esi
// 005c60cb  5e                   pop esi
// 005c60cc  c20400               ret 4

struct lua_exception {
    void* vfptr;
    char pad[8];
    int field_c;
    int field_10;
    char field_14;
    lua_exception* construct(lua_exception* other);
};

extern "C" void (__stdcall *sub_77e6f8)();

lua_exception* lua_exception::construct(lua_exception* other)
{
    sub_77e6f8();
    this->vfptr = (void*)0x7b967c;
    this->field_c = other->field_c;
    this->field_10 = other->field_10;
    this->field_14 = other->field_14;
    other->field_14 = 1;
    return this;
}
