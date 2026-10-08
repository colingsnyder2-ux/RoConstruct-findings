// from server: 100% by colin
// roc 2007-08 005d1c80  unit: RBX::Tool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1c80
//
// 005d1c80  56                   push esi
// 005d1c81  8b742408             mov esi, dword ptr [esp + 8]
// 005d1c85  6a01                 push 1
// 005d1c87  56                   push esi
// 005d1c88  81c174010000         add ecx, 0x174
// 005d1c8e  e8ad79f3ff           call 0x509640
// 005d1c93  8bc6                 mov eax, esi
// 005d1c95  5e                   pop esi
// 005d1c96  c20400               ret 4

struct Tool {
    char pad[0x174];
    int sub_509640(int, int);
    int func_005d1c80(int);
};

int Tool::func_005d1c80(int a)
{
    char* p = (char*)this + 0x174;
    ((Tool*)p)->sub_509640(a, 1);
    return a;
}
