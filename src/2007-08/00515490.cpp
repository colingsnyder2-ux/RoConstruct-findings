// from server: 100% by colin
// roc 2007-08 00515490  unit: G3D::_internal::DialogTemplate  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00515490
//
// 00515490  8b442404             mov eax, dword ptr [esp + 4]
// 00515494  85c0                 test eax, eax
// 00515496  7501                 jne 0x515499
// 00515498  c3                   ret 
// 00515499  8b8844020000         mov ecx, dword ptr [eax + 0x244]
// 0051549f  8b9048020000         mov edx, dword ptr [eax + 0x248]
// 005154a5  51                   push ecx
// 005154a6  52                   push edx
// 005154a7  6a02                 push 2
// 005154a9  e8b2950000           call 0x51ea60
// 005154ae  83c40c               add esp, 0xc
// 005154b1  85c0                 test eax, eax
// 005154b3  89442404             mov dword ptr [esp + 4], eax
// 005154b7  7416                 je 0x5154cf
// 005154b9  8d442404             lea eax, [esp + 4]
// 005154bd  6820010000           push 0x120
// 005154c2  50                   push eax
// 005154c3  e868faffff           call 0x514f30
// 005154c8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005154cc  83c408               add esp, 8
// 005154cf  c3                   ret 

struct DialogTemplate
{
    char pad[0x244];
    int field244;
    int field248;
};

extern "C" int __cdecl sub_51EA60(int a, int b, int c);
extern "C" void __cdecl sub_514F30(int* p, int n);

int __cdecl sub_515490(DialogTemplate* p)
{
    if (p == 0)
        return 0;

    int v = sub_51EA60(2, p->field248, p->field244);
    if (v != 0)
    {
        sub_514F30(&v, 0x120);
    }
    return v;
}
