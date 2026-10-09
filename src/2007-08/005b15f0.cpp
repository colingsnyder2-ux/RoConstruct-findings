// from server: 100% by colin
// roc 2007-08 005b15f0  unit: RBX::JointInstance  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b15f0
//
// 005b15f0  8b442404             mov eax, dword ptr [esp + 4]
// 005b15f4  56                   push esi
// 005b15f5  50                   push eax
// 005b15f6  8bf1                 mov esi, ecx
// 005b15f8  e813fcffff           call 0x5b1210
// 005b15fd  c706fc677b00         mov dword ptr [esi], 0x7b67fc
// 005b1603  c74604f4677b00       mov dword ptr [esi + 4], 0x7b67f4
// 005b160a  c74610ec677b00       mov dword ptr [esi + 0x10], 0x7b67ec
// 005b1611  c74614dc677b00       mov dword ptr [esi + 0x14], 0x7b67dc
// 005b1618  c7462ccc677b00       mov dword ptr [esi + 0x2c], 0x7b67cc
// 005b161f  c74644bc677b00       mov dword ptr [esi + 0x44], 0x7b67bc
// 005b1626  c7465cac677b00       mov dword ptr [esi + 0x5c], 0x7b67ac
// 005b162d  c746749c677b00       mov dword ptr [esi + 0x74], 0x7b679c
// 005b1634  c7868c0000008c677b00 mov dword ptr [esi + 0x8c], 0x7b678c
// 005b163e  c786e800000074677b00 mov dword ptr [esi + 0xe8], 0x7b6774
// 005b1648  8bc6                 mov eax, esi
// 005b164a  5e                   pop esi
// 005b164b  c20400               ret 4

struct Instance {
    Instance(int);
    char pad[0xe8];
};

struct JointInstance : Instance {
    JointInstance(int);
};

JointInstance::JointInstance(int a) : Instance(a)
{
    *(int*)((char*)this + 0x00) = 0x7b67fc;
    *(int*)((char*)this + 0x04) = 0x7b67f4;
    *(int*)((char*)this + 0x10) = 0x7b67ec;
    *(int*)((char*)this + 0x14) = 0x7b67dc;
    *(int*)((char*)this + 0x2c) = 0x7b67cc;
    *(int*)((char*)this + 0x44) = 0x7b67bc;
    *(int*)((char*)this + 0x5c) = 0x7b67ac;
    *(int*)((char*)this + 0x74) = 0x7b679c;
    *(int*)((char*)this + 0x8c) = 0x7b678c;
    *(int*)((char*)this + 0xe8) = 0x7b6774;
}
