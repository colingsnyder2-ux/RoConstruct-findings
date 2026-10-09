// from server: 88% by colin
// roc 2007-08 005b1470  unit: RBX::JointInstance  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b1470
//
// 005b1470  8b442404             mov eax, dword ptr [esp + 4]
// 005b1474  56                   push esi
// 005b1475  50                   push eax
// 005b1476  8bf1                 mov esi, ecx
// 005b1478  e893fdffff           call 0x5b1210
// 005b147d  c706bc647b00         mov dword ptr [esi], 0x7b64bc
// 005b1483  c74604b4647b00       mov dword ptr [esi + 4], 0x7b64b4
// 005b148a  c74610ac647b00       mov dword ptr [esi + 0x10], 0x7b64ac
// 005b1491  c746149c647b00       mov dword ptr [esi + 0x14], 0x7b649c
// 005b1498  c7462c8c647b00       mov dword ptr [esi + 0x2c], 0x7b648c
// 005b149f  c746447c647b00       mov dword ptr [esi + 0x44], 0x7b647c
// 005b14a6  c7465c6c647b00       mov dword ptr [esi + 0x5c], 0x7b646c
// 005b14ad  c746745c647b00       mov dword ptr [esi + 0x74], 0x7b645c
// 005b14b4  c7868c0000004c647b00 mov dword ptr [esi + 0x8c], 0x7b644c
// 005b14be  c786e800000034647b00 mov dword ptr [esi + 0xe8], 0x7b6434
// 005b14c8  8bc6                 mov eax, esi
// 005b14ca  5e                   pop esi
// 005b14cb  c20400               ret 4

struct JointInstance {
    char pad[0x100];
    JointInstance(const char*);
};

extern "C" void __stdcall Base_ctor(void*, const char*);

JointInstance::JointInstance(const char* name)
{
    Base_ctor(this, name);
    *(void**)this = (void*)0x7b64bc;
    *(void**)((char*)this + 4) = (void*)0x7b64b4;
    *(void**)((char*)this + 0x10) = (void*)0x7b64ac;
    *(void**)((char*)this + 0x14) = (void*)0x7b649c;
    *(void**)((char*)this + 0x2c) = (void*)0x7b648c;
    *(void**)((char*)this + 0x44) = (void*)0x7b647c;
    *(void**)((char*)this + 0x5c) = (void*)0x7b646c;
    *(void**)((char*)this + 0x74) = (void*)0x7b645c;
    *(void**)((char*)this + 0x8c) = (void*)0x7b644c;
    *(void**)((char*)this + 0xe8) = (void*)0x7b6434;
}
