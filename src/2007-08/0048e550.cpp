// from server: 100% by colin
// roc 2007-08 0048e550  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048e550
//
// 0048e550  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048e554  e83700f8ff           call 0x40e590
// 0048e559  85c0                 test eax, eax
// 0048e55b  7424                 je 0x48e581
// 0048e55d  56                   push esi
// 0048e55e  8bb038010000         mov esi, dword ptr [eax + 0x138]
// 0048e564  85f6                 test esi, esi
// 0048e566  7418                 je 0x48e580
// 0048e568  56                   push esi
// 0048e569  e8c282ffff           call 0x486830
// 0048e56e  83c404               add esp, 4
// 0048e571  85c0                 test eax, eax
// 0048e573  740b                 je 0x48e580
// 0048e575  e8b6190700           call 0x4fff30
// 0048e57a  dd9e60010000         fstp qword ptr [esi + 0x160]
// 0048e580  5e                   pop esi
// 0048e581  c3                   ret 

struct DescribedBase;

struct ClassDescriptor
{
    char pad[0x138];
    void* field138;
};

struct Target
{
    void* field160;
};

extern "C" void* __fastcall sub_40e590(void*);
extern "C" void* __cdecl sub_486830(void*);
extern "C" double __cdecl sub_4fff30();

void func_0048e550(void* arg)
{
    void* p = sub_40e590(arg);
    if (p)
    {
        void* q = *(void**)((char*)p + 0x138);
        if (q)
        {
            void* r = sub_486830(q);
            if (r)
            {
                double d = sub_4fff30();
                *(double*)((char*)q + 0x160) = d;
            }
        }
    }
}
