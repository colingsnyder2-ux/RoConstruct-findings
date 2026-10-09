// from server: 100% by colin
// roc 2007-08 005b1410  unit: RBX::JointInstance  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b1410
//
// 005b1410  8b442404             mov eax, dword ptr [esp + 4]
// 005b1414  56                   push esi
// 005b1415  50                   push eax
// 005b1416  8bf1                 mov esi, ecx
// 005b1418  e8f3fdffff           call 0x5b1210
// 005b141d  c706ec637b00         mov dword ptr [esi], 0x7b63ec
// 005b1423  c74604e4637b00       mov dword ptr [esi + 4], 0x7b63e4
// 005b142a  c74610dc637b00       mov dword ptr [esi + 0x10], 0x7b63dc
// 005b1431  c74614cc637b00       mov dword ptr [esi + 0x14], 0x7b63cc
// 005b1438  c7462cbc637b00       mov dword ptr [esi + 0x2c], 0x7b63bc
// 005b143f  c74644ac637b00       mov dword ptr [esi + 0x44], 0x7b63ac
// 005b1446  c7465c9c637b00       mov dword ptr [esi + 0x5c], 0x7b639c
// 005b144d  c746748c637b00       mov dword ptr [esi + 0x74], 0x7b638c
// 005b1454  c7868c0000007c637b00 mov dword ptr [esi + 0x8c], 0x7b637c
// 005b145e  c786e800000064637b00 mov dword ptr [esi + 0xe8], 0x7b6364
// 005b1468  8bc6                 mov eax, esi
// 005b146a  5e                   pop esi
// 005b146b  c20400               ret 4

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
    *(int*)((char*)this + 0x00) = 0x7b63ec;
    *(int*)((char*)this + 0x04) = 0x7b63e4;
    *(int*)((char*)this + 0x10) = 0x7b63dc;
    *(int*)((char*)this + 0x14) = 0x7b63cc;
    *(int*)((char*)this + 0x2c) = 0x7b63bc;
    *(int*)((char*)this + 0x44) = 0x7b63ac;
    *(int*)((char*)this + 0x5c) = 0x7b639c;
    *(int*)((char*)this + 0x74) = 0x7b638c;
    *(int*)((char*)this + 0x8c) = 0x7b637c;
    *(int*)((char*)this + 0xe8) = 0x7b6364;
}
