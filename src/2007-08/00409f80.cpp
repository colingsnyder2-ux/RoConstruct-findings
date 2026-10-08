// from server: 100% by colin
// roc 2007-08 00409f80  unit: VCApp::?$CComObject  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00409f80
//
// 00409f80  e89bf9ffff           call 0x409920
// 00409f85  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 00409f8b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00409f8f  8901                 mov dword ptr [ecx], eax
// 00409f91  33c0                 xor eax, eax
// 00409f93  c20800               ret 8

struct VCApp {
    char pad[0xec];
    int value;
};

extern VCApp* __cdecl sub_409920();

int __stdcall sub_409f80(int, int* out)
{
    VCApp* p = sub_409920();
    *out = p->value;
    return 0;
}
