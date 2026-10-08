// from server: 90% by colin
// roc 2007-08 00671dd0  unit: CPropertyGridItemBrickColor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671dd0
//
// 00671dd0  56                   push esi
// 00671dd1  57                   push edi
// 00671dd2  8bf1                 mov esi, ecx
// 00671dd4  e897f4ffff           call 0x671270
// 00671dd9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00671ddd  57                   push edi
// 00671dde  ff15c8d27700         call dword ptr [0x77d2c8]
// 00671de4  85c0                 test eax, eax
// 00671de6  894608               mov dword ptr [esi + 8], eax
// 00671de9  741b                 je 0x671e06
// 00671deb  57                   push edi
// 00671dec  8d4e04               lea ecx, [esi + 4]
// 00671def  c7460c01000000       mov dword ptr [esi + 0xc], 1
// 00671df6  ff156cdd7700         call dword ptr [0x77dd6c]
// 00671dfc  5f                   pop edi
// 00671dfd  b801000000           mov eax, 1
// 00671e02  5e                   pop esi
// 00671e03  c20400               ret 4
// 00671e06  5f                   pop edi
// 00671e07  33c0                 xor eax, eax
// 00671e09  5e                   pop esi
// 00671e0a  c20400               ret 4

extern "C" __declspec(dllimport) void* __stdcall GetModuleHandleA(const char*);
extern "C" __declspec(dllimport) void* __stdcall LoadLibraryA(const char*);

struct CPropertyGridItemBrickColor {
    void sub_671270();
    int sub_671DD0(const char*);
};

int CPropertyGridItemBrickColor::sub_671DD0(const char* name) {
    sub_671270();
    void* h = GetModuleHandleA(name);
    *(void**)((char*)this + 8) = h;
    if (h) {
        *(int*)((char*)this + 0xc) = 1;
        LoadLibraryA(name);
        return 1;
    }
    return 0;
}
