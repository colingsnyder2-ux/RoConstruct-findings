// from server: 58% by colin
// roc 2007-08 0058d2a0  unit: RBX::SoundService  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058d2a0
//
// 0058d2a0  51                   push ecx
// 0058d2a1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058d2a5  56                   push esi
// 0058d2a6  c744240400000000     mov dword ptr [esp + 4], 0
// 0058d2ae  e81d98ffff           call 0x586ad0
// 0058d2b3  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0058d2b7  50                   push eax
// 0058d2b8  8bce                 mov ecx, esi
// 0058d2ba  ff159ce67700         call dword ptr [0x77e69c]
// 0058d2c0  8bc6                 mov eax, esi
// 0058d2c2  5e                   pop esi
// 0058d2c3  59                   pop ecx
// 0058d2c4  c3                   ret 

struct SoundService {
    void* field0;
    SoundService* constructFrom(const SoundService& other);
};

extern "C" void* __cdecl sub_586AD0(const void*);
extern "C" void* __stdcall sub_77E69C(void*, void*);

SoundService* SoundService::constructFrom(const SoundService& other)
{
    field0 = 0;
    void* p = sub_586AD0(&other);
    sub_77E69C(this, p);
    return this;
}
