// from server: 100% by colin
// roc 2007-08 005b1530  unit: RBX::JointInstance  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b1530
//
// 005b1530  8b442404             mov eax, dword ptr [esp + 4]
// 005b1534  56                   push esi
// 005b1535  50                   push eax
// 005b1536  8bf1                 mov esi, ecx
// 005b1538  e8d3fcffff           call 0x5b1210
// 005b153d  c7065c667b00         mov dword ptr [esi], 0x7b665c
// 005b1543  c7460454667b00       mov dword ptr [esi + 4], 0x7b6654
// 005b154a  c746104c667b00       mov dword ptr [esi + 0x10], 0x7b664c
// 005b1551  c746143c667b00       mov dword ptr [esi + 0x14], 0x7b663c
// 005b1558  c7462c2c667b00       mov dword ptr [esi + 0x2c], 0x7b662c
// 005b155f  c746441c667b00       mov dword ptr [esi + 0x44], 0x7b661c
// 005b1566  c7465c0c667b00       mov dword ptr [esi + 0x5c], 0x7b660c
// 005b156d  c74674fc657b00       mov dword ptr [esi + 0x74], 0x7b65fc
// 005b1574  c7868c000000ec657b00 mov dword ptr [esi + 0x8c], 0x7b65ec
// 005b157e  c786e8000000d4657b00 mov dword ptr [esi + 0xe8], 0x7b65d4
// 005b1588  8bc6                 mov eax, esi
// 005b158a  5e                   pop esi
// 005b158b  c20400               ret 4

struct Instance {
    Instance(const char*);
};

struct JointInstance : Instance {
    JointInstance(const char*);
};

JointInstance::JointInstance(const char* name)
    : Instance(name)
{
    *(int*)((char*)this + 0x00) = 0x7b665c;
    *(int*)((char*)this + 0x04) = 0x7b6654;
    *(int*)((char*)this + 0x10) = 0x7b664c;
    *(int*)((char*)this + 0x14) = 0x7b663c;
    *(int*)((char*)this + 0x2c) = 0x7b662c;
    *(int*)((char*)this + 0x44) = 0x7b661c;
    *(int*)((char*)this + 0x5c) = 0x7b660c;
    *(int*)((char*)this + 0x74) = 0x7b65fc;
    *(int*)((char*)this + 0x8c) = 0x7b65ec;
    *(int*)((char*)this + 0xe8) = 0x7b65d4;
}
