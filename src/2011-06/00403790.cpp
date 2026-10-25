// from server: 100% by tester
// roc 2011-06 00403790  unit: RBX::VRenderHooksService::?$FactoryProduct::Creator  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00403790
//
// 00403790  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00403794  8b542404             mov edx, dword ptr [esp + 4]
// 00403798  56                   push esi
// 00403799  8bf1                 mov esi, ecx
// 0040379b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040379f  50                   push eax
// 004037a0  51                   push ecx
// 004037a1  52                   push edx
// 004037a2  ff157803a400         call dword ptr [0xa40378]
// 004037a8  33c9                 xor ecx, ecx
// 004037aa  85c0                 test eax, eax
// 004037ac  0f95c1               setne cl
// 004037af  8906                 mov dword ptr [esi], eax
// 004037b1  5e                   pop esi
// 004037b2  8bc1                 mov eax, ecx
// 004037b4  c20c00               ret 0xc

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
