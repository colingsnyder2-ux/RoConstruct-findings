// from server: 100% by atomic.potato
// roc 2008-06 00565e00  unit: RBX::Team  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565e00
//
// 00565e00  8b442404             mov eax, dword ptr [esp + 4]
// 00565e04  6a00                 push 0
// 00565e06  68e0559400           push 0x9455e0
// 00565e0b  687c909200           push 0x92907c
// 00565e10  6a00                 push 0
// 00565e12  50                   push eax
// 00565e13  e8aeb91300           call 0x6a17c6
// 00565e18  83c414               add esp, 0x14
// 00565e1b  f7d8                 neg eax
// 00565e1d  1bc0                 sbb eax, eax
// 00565e1f  f7d8                 neg eax
// 00565e21  c20400               ret 4

extern "C" int __cdecl sub_006A17C6(void*, void*, void*, void*, void*);

struct Team
{
    int f(void*);
};

int Team::f(void* value)
{
    return sub_006A17C6(value, 0, (void*)0x92907C, (void*)0x9455E0, 0) != 0;
}
