// from server: 83% by colin
// roc 2007-08 00587810  unit: RBX::Reflection::EnumDescriptor  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587810
//
// 00587810  51                   push ecx
// 00587811  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 00587817  85c0                 test eax, eax
// 00587819  7504                 jne 0x58781f
// 0058781b  b001                 mov al, 1
// 0058781d  59                   pop ecx
// 0058781e  c3                   ret 
// 0058781f  8d4c2403             lea ecx, [esp + 3]
// 00587823  51                   push ecx
// 00587824  50                   push eax
// 00587825  e8ba830a00           call 0x62fbe4
// 0058782a  83f824               cmp eax, 0x24
// 0058782d  b001                 mov al, 1
// 0058782f  7404                 je 0x587835
// 00587831  8a442403             mov al, byte ptr [esp + 3]
// 00587835  59                   pop ecx
// 00587836  c3                   ret 

struct EnumDescriptor {
    char pad[0xf4];
    int field_f4;
    bool func_00587810();
};

extern "C" int __cdecl func_0062fbe4(int, char*);

bool EnumDescriptor::func_00587810()
{
    int v = field_f4;
    if (v == 0)
        return true;
    char b;
    if (func_0062fbe4(v, &b) == 0x24)
        return true;
    return b != 0;
}
