// from server: 100% by colin
// roc 2007-08 005d1ca0  unit: RBX::Tool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1ca0
//
// 005d1ca0  56                   push esi
// 005d1ca1  8b742408             mov esi, dword ptr [esp + 8]
// 005d1ca5  6a00                 push 0
// 005d1ca7  56                   push esi
// 005d1ca8  81c174010000         add ecx, 0x174
// 005d1cae  e88d79f3ff           call 0x509640
// 005d1cb3  8bc6                 mov eax, esi
// 005d1cb5  5e                   pop esi
// 005d1cb6  c20400               ret 4

struct Tool {
    char pad[0x174];
    int sub_509640(int, int);
    int func_005d1ca0(int);
};

int Tool::func_005d1ca0(int a)
{
    char* p = (char*)this + 0x174;
    ((Tool*)p)->sub_509640(a, 0);
    return a;
}
