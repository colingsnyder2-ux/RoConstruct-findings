// from server: 73% by colin
// roc 2007-08 00469080  unit: RBX::LDraw2Lua::LDraw2RobloxColorMap  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00469080
//
// 00469080  51                   push ecx
// 00469081  56                   push esi
// 00469082  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00469086  83c13c               add ecx, 0x3c
// 00469089  51                   push ecx
// 0046908a  8bce                 mov ecx, esi
// 0046908c  c744240800000000     mov dword ptr [esp + 8], 0
// 00469094  ff159ce67700         call dword ptr [0x77e69c]
// 0046909a  8bc6                 mov eax, esi
// 0046909c  5e                   pop esi
// 0046909d  59                   pop ecx
// 0046909e  c20400               ret 4

struct LDraw2RobloxColorMap {
    char pad[0x3C];
    void* field_3C;
    void construct(void* other);
};

extern "C" void __stdcall string_copy_ctor(void*, void*);

void LDraw2RobloxColorMap::construct(void* other) {
    void* tmp = 0;
    string_copy_ctor((char*)this + 0x3C, &tmp);
    *(void**)other = tmp;
}
