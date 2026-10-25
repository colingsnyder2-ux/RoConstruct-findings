// from server: 100% by tester
// roc 2010-06 00730130  unit: lua_exception  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00730130
//
// 00730130  56                   push esi
// 00730131  8bf1                 mov esi, ecx
// 00730133  ff1518a99e00         call dword ptr [0x9ea918]
// 00730139  8b442408             mov eax, dword ptr [esp + 8]
// 0073013d  c706e0dba400         mov dword ptr [esi], 0xa4dbe0
// 00730143  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00730146  894e0c               mov dword ptr [esi + 0xc], ecx
// 00730149  8b5010               mov edx, dword ptr [eax + 0x10]
// 0073014c  895610               mov dword ptr [esi + 0x10], edx
// 0073014f  8a4814               mov cl, byte ptr [eax + 0x14]
// 00730152  884e14               mov byte ptr [esi + 0x14], cl
// 00730155  c6401401             mov byte ptr [eax + 0x14], 1
// 00730159  8bc6                 mov eax, esi
// 0073015b  5e                   pop esi
// 0073015c  c20400               ret 4

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
