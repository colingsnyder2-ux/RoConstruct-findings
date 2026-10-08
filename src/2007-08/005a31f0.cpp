// from server: 73% by colin
// roc 2007-08 005a31f0  unit: RBX::Teams  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a31f0
//
// 005a31f0  51                   push ecx
// 005a31f1  56                   push esi
// 005a31f2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a31f6  56                   push esi
// 005a31f7  81c1e8000000         add ecx, 0xe8
// 005a31fd  c744240800000000     mov dword ptr [esp + 8], 0
// 005a3205  e8e646e7ff           call 0x4178f0
// 005a320a  8bc6                 mov eax, esi
// 005a320c  5e                   pop esi
// 005a320d  59                   pop ecx
// 005a320e  c20400               ret 4

struct Teams {
    char pad[0xe8];
    void* field_e8;
    void* setTeam(void* value);
};

extern "C" void __stdcall sub_4178f0(void* dest, void* value);

void* Teams::setTeam(void* value) {
    sub_4178f0(&field_e8, value);
    return value;
}
