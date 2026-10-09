// from server: 100% by colin
// roc 2007-08 005b13b0  unit: RBX::JointInstance  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b13b0
//
// 005b13b0  8b442404             mov eax, dword ptr [esp + 4]
// 005b13b4  56                   push esi
// 005b13b5  50                   push eax
// 005b13b6  8bf1                 mov esi, ecx
// 005b13b8  e853feffff           call 0x5b1210
// 005b13bd  c7061c637b00         mov dword ptr [esi], 0x7b631c
// 005b13c3  c7460414637b00       mov dword ptr [esi + 4], 0x7b6314
// 005b13ca  c746100c637b00       mov dword ptr [esi + 0x10], 0x7b630c
// 005b13d1  c74614fc627b00       mov dword ptr [esi + 0x14], 0x7b62fc
// 005b13d8  c7462cec627b00       mov dword ptr [esi + 0x2c], 0x7b62ec
// 005b13df  c74644dc627b00       mov dword ptr [esi + 0x44], 0x7b62dc
// 005b13e6  c7465ccc627b00       mov dword ptr [esi + 0x5c], 0x7b62cc
// 005b13ed  c74674bc627b00       mov dword ptr [esi + 0x74], 0x7b62bc
// 005b13f4  c7868c000000ac627b00 mov dword ptr [esi + 0x8c], 0x7b62ac
// 005b13fe  c786e800000094627b00 mov dword ptr [esi + 0xe8], 0x7b6294
// 005b1408  8bc6                 mov eax, esi
// 005b140a  5e                   pop esi
// 005b140b  c20400               ret 4

struct JointInstance {
    char pad[0x100];
    JointInstance* construct(int);
};

JointInstance* JointInstance::construct(int arg)
{
    extern void __stdcall base_ctor(int);
    base_ctor(arg);
    *(int*)((char*)this + 0x00) = 0x7b631c;
    *(int*)((char*)this + 0x04) = 0x7b6314;
    *(int*)((char*)this + 0x10) = 0x7b630c;
    *(int*)((char*)this + 0x14) = 0x7b62fc;
    *(int*)((char*)this + 0x2c) = 0x7b62ec;
    *(int*)((char*)this + 0x44) = 0x7b62dc;
    *(int*)((char*)this + 0x5c) = 0x7b62cc;
    *(int*)((char*)this + 0x74) = 0x7b62bc;
    *(int*)((char*)this + 0x8c) = 0x7b62ac;
    *(int*)((char*)this + 0xe8) = 0x7b6294;
    return this;
}
