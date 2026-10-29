// roc 2009-12 00402d50  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00402d50
//
// 00402d50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00402d54  8b542404             mov edx, dword ptr [esp + 4]
// 00402d58  56                   push esi
// 00402d59  8bf1                 mov esi, ecx
// 00402d5b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00402d5f  50                   push eax
// 00402d60  51                   push ecx
// 00402d61  52                   push edx
// 00402d62  ff15c4b39800         call dword ptr [0x98b3c4]
// 00402d68  33c9                 xor ecx, ecx
// 00402d6a  85c0                 test eax, eax
// 00402d6c  0f95c1               setne cl
// 00402d6f  8906                 mov dword ptr [esi], eax
// 00402d71  5e                   pop esi
// 00402d72  8bc1                 mov eax, ecx
// 00402d74  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@S@ns_ROCX000001@@QAEHKKPBD@Z)

namespace ns_ROCX000001 {
// from server: 100% by tester
typedef void *HANDLE;
typedef unsigned long DWORD;
typedef int BOOL;

extern "C" HANDLE __declspec(dllimport) __stdcall OpenEventA(DWORD, BOOL, const char *);

struct S
{
    HANDLE value;
    int f(DWORD access, DWORD inherit, const char *name);
};

int S::f(DWORD access, DWORD inherit, const char *name)
{
    HANDLE h = OpenEventA(access, inherit, name);
    value = h;
    return h != 0;
}
}
