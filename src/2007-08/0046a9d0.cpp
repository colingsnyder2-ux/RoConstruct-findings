// from server: 61% by colin
// roc 2007-08 0046a9d0  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046a9d0
//
// 0046a9d0  51                   push ecx
// 0046a9d1  8b4160               mov eax, dword ptr [ecx + 0x60]
// 0046a9d4  83c15c               add ecx, 0x5c
// 0046a9d7  85c0                 test eax, eax
// 0046a9d9  7413                 je 0x46a9ee
// 0046a9db  8b5108               mov edx, dword ptr [ecx + 8]
// 0046a9de  2bd0                 sub edx, eax
// 0046a9e0  c1fa06               sar edx, 6
// 0046a9e3  7409                 je 0x46a9ee
// 0046a9e5  6a00                 push 0
// 0046a9e7  e884ffffff           call 0x46a970
// 0046a9ec  59                   pop ecx
// 0046a9ed  c3                   ret 
// 0046a9ee  33c0                 xor eax, eax
// 0046a9f0  59                   pop ecx
// 0046a9f1  c3                   ret 

struct LDraw2RobloxMapRoot {
    char pad[0x5c];
    int* begin;
    char pad2[4];
    int* end;
    int func_0046a970(int);
    int method();
};

int LDraw2RobloxMapRoot::method()
{
    int* b = begin;
    if (b != 0) {
        int* e = end;
        if ((e - b) >> 6 != 0) {
            return func_0046a970(0);
        }
    }
    return 0;
}
