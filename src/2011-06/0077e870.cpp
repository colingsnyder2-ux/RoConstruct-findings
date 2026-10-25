// from server: 100% by tester
// roc 2011-06 0077e870  unit: lua_exception  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e870
//
// 0077e870  56                   push esi
// 0077e871  8bf1                 mov esi, ecx
// 0077e873  ff15600aa400         call dword ptr [0xa40a60]
// 0077e879  8b442408             mov eax, dword ptr [esp + 8]
// 0077e87d  c7062c78ab00         mov dword ptr [esi], 0xab782c
// 0077e883  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0077e886  894e0c               mov dword ptr [esi + 0xc], ecx
// 0077e889  8b5010               mov edx, dword ptr [eax + 0x10]
// 0077e88c  895610               mov dword ptr [esi + 0x10], edx
// 0077e88f  8a4814               mov cl, byte ptr [eax + 0x14]
// 0077e892  884e14               mov byte ptr [esi + 0x14], cl
// 0077e895  c6401401             mov byte ptr [eax + 0x14], 1
// 0077e899  8bc6                 mov eax, esi
// 0077e89b  5e                   pop esi
// 0077e89c  c20400               ret 4

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
