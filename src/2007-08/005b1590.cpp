// from server: 100% by colin
// roc 2007-08 005b1590  unit: RBX::JointInstance  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b1590
//
// 005b1590  8b442404             mov eax, dword ptr [esp + 4]
// 005b1594  56                   push esi
// 005b1595  50                   push eax
// 005b1596  8bf1                 mov esi, ecx
// 005b1598  e873fcffff           call 0x5b1210
// 005b159d  c7062c677b00         mov dword ptr [esi], 0x7b672c
// 005b15a3  c7460424677b00       mov dword ptr [esi + 4], 0x7b6724
// 005b15aa  c746101c677b00       mov dword ptr [esi + 0x10], 0x7b671c
// 005b15b1  c746140c677b00       mov dword ptr [esi + 0x14], 0x7b670c
// 005b15b8  c7462cfc667b00       mov dword ptr [esi + 0x2c], 0x7b66fc
// 005b15bf  c74644ec667b00       mov dword ptr [esi + 0x44], 0x7b66ec
// 005b15c6  c7465cdc667b00       mov dword ptr [esi + 0x5c], 0x7b66dc
// 005b15cd  c74674cc667b00       mov dword ptr [esi + 0x74], 0x7b66cc
// 005b15d4  c7868c000000bc667b00 mov dword ptr [esi + 0x8c], 0x7b66bc
// 005b15de  c786e8000000a4667b00 mov dword ptr [esi + 0xe8], 0x7b66a4
// 005b15e8  8bc6                 mov eax, esi
// 005b15ea  5e                   pop esi
// 005b15eb  c20400               ret 4

struct JointInstance {
    char pad[0x100];
    JointInstance(const char*);
};

struct Base {
    void init(const char*);
};

JointInstance::JointInstance(const char* name)
{
    ((Base*)this)->init(name);
    *(int*)((char*)this + 0x00) = 0x7b672c;
    *(int*)((char*)this + 0x04) = 0x7b6724;
    *(int*)((char*)this + 0x10) = 0x7b671c;
    *(int*)((char*)this + 0x14) = 0x7b670c;
    *(int*)((char*)this + 0x2c) = 0x7b66fc;
    *(int*)((char*)this + 0x44) = 0x7b66ec;
    *(int*)((char*)this + 0x5c) = 0x7b66dc;
    *(int*)((char*)this + 0x74) = 0x7b66cc;
    *(int*)((char*)this + 0x8c) = 0x7b66bc;
    *(int*)((char*)this + 0xe8) = 0x7b66a4;
}
