// from server: 100% by atomic.potato
// roc 2011-06 006d7580  unit: RBX::JointsService  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006d7580
//
// 006d7580  8b442404             mov eax, dword ptr [esp + 4]
// 006d7584  6a00                 push 0
// 006d7586  689002c700           push 0xc70290
// 006d758b  68f871c000           push 0xc071f8
// 006d7590  6a00                 push 0
// 006d7592  50                   push eax
// 006d7593  e8523d1300           call 0x80b2ea
// 006d7598  83c414               add esp, 0x14
// 006d759b  f7d8                 neg eax
// 006d759d  1bc0                 sbb eax, eax
// 006d759f  f7d8                 neg eax
// 006d75a1  c20400               ret 4

typedef int BOOL;

struct Instance;

extern "C" BOOL sub_0080B2EA(Instance*, int, const void*, const void*, int);

struct JointsService
{
    BOOL f(Instance*);
};

BOOL JointsService::f(Instance* a)
{
    return sub_0080B2EA(a, 0, (const void*)0xC071F8, (const void*)0xC70290, 0) != 0;
}
