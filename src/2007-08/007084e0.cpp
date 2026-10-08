// from server: 100% by colin
// roc 2007-08 007084e0  unit: CXTColorHex  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007084e0
//
// 007084e0  8b442404             mov eax, dword ptr [esp + 4]
// 007084e4  8b8920010000         mov ecx, dword ptr [ecx + 0x120]
// 007084ea  6a00                 push 0
// 007084ec  50                   push eax
// 007084ed  e83e69f8ff           call 0x68ee30
// 007084f2  33c0                 xor eax, eax
// 007084f4  c20800               ret 8

struct CHexHelper {
    int __thiscall invoke(int a, int b);
};

struct CXTColorHex {
    char pad[0x120];
    CHexHelper* helper;
    int method(int a, int b);
};

int CXTColorHex::method(int a, int b) {
    helper->invoke(a, 0);
    return 0;
}
