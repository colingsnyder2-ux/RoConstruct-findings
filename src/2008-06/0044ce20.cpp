// from server: 100% by colin
// roc 2008-06 0044ce20  unit: CRobloxModule  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044ce20
//
// 0044ce20  e8bbadfbff           call 0x407be0
// 0044ce25  8b8034010000         mov eax, dword ptr [eax + 0x134]
// 0044ce2b  83e801               sub eax, 1
// 0044ce2e  7417                 je 0x44ce47
// 0044ce30  83e801               sub eax, 1
// 0044ce33  752d                 jne 0x44ce62
// 0044ce35  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044ce39  8b01                 mov eax, dword ptr [ecx]
// 0044ce3b  8b10                 mov edx, dword ptr [eax]
// 0044ce3d  c744240401000000     mov dword ptr [esp + 4], 1
// 0044ce45  ffe2                 jmp edx
// 0044ce47  e89493fbff           call 0x4061e0
// 0044ce4c  84c0                 test al, al
// 0044ce4e  7412                 je 0x44ce62
// 0044ce50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044ce54  8b01                 mov eax, dword ptr [ecx]
// 0044ce56  8b10                 mov edx, dword ptr [eax]
// 0044ce58  c744240401000000     mov dword ptr [esp + 4], 1
// 0044ce60  ffe2                 jmp edx
// 0044ce62  c20400               ret 4

struct Target {
    virtual void invoke(int);
};

struct CRobloxModule {
    void f(Target*);
};

extern "C" void* __cdecl sub_407BE0();
extern "C" bool __cdecl sub_4061e0();

void CRobloxModule::f(Target* target)
{
    switch (*(int*)((char*)sub_407BE0() + 0x134)) {
    case 1:
        if (sub_4061e0())
            target->invoke(1);
        break;
    case 2:
        target->invoke(1);
        break;
    }
}
