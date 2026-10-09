// from DeepSeek/server: 100% by colin
// roc 2007-08 00530880  unit: RBX::VModelInstance::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00530880
//
// 00530880  56                   push esi
// 00530881  6a00                 push 0
// 00530883  68c08f8900           push 0x898fc0
// 00530888  8bf1                 mov esi, ecx
// 0053088a  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00530890  684c1f8800           push 0x881f4c
// 00530895  6a00                 push 0
// 00530897  50                   push eax
// 00530898  e899041000           call 0x630d36
// 0053089d  83c414               add esp, 0x14
// 005308a0  85c0                 test eax, eax
// 005308a2  7417                 je 0x5308bb
// 005308a4  57                   push edi
// 005308a5  8bbebc000000         mov edi, dword ptr [esi + 0xbc]
// 005308ab  8bce                 mov ecx, esi
// 005308ad  e87ef6ffff           call 0x52ff30
// 005308b2  3bc7                 cmp eax, edi
// 005308b4  5f                   pop edi
// 005308b5  7404                 je 0x5308bb
// 005308b7  33c0                 xor eax, eax
// 005308b9  5e                   pop esi
// 005308ba  c3                   ret 
// 005308bb  b801000000           mov eax, 1
// 005308c0  5e                   pop esi
// 005308c1  c3                   ret 

struct VModelInstance {
    char pad[0xbc];
    void* field_bc;
    int isModel();
};

extern "C" void* __cdecl sub_630d36(void* a, void* b, void* c, void* d, void* e);
extern "C" void* __fastcall sub_52ff30(VModelInstance* self);

int VModelInstance::isModel()
{
    void* p = sub_630d36(field_bc, 0, (void*)0x881f4c, (void*)0x898fc0, 0);
    if (p != 0) {
        void* saved = field_bc;
        void* r = sub_52ff30(this);
        if (r != saved) {
            return 0;
        }
    }
    return 1;
}
