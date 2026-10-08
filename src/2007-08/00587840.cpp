// from server: 71% by colin
// roc 2007-08 00587840  unit: RBX::Reflection::EnumDescriptor  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587840
//
// 00587840  51                   push ecx
// 00587841  8b81f4000000         mov eax, dword ptr [ecx + 0xf4]
// 00587847  85c0                 test eax, eax
// 00587849  7504                 jne 0x58784f
// 0058784b  32c0                 xor al, al
// 0058784d  59                   pop ecx
// 0058784e  c3                   ret 
// 0058784f  8d0c24               lea ecx, [esp]
// 00587852  51                   push ecx
// 00587853  50                   push eax
// 00587854  e891830a00           call 0x62fbea
// 00587859  83e824               sub eax, 0x24
// 0058785c  f7d8                 neg eax
// 0058785e  1ac0                 sbb al, al
// 00587860  230424               and eax, dword ptr [esp]
// 00587863  59                   pop ecx
// 00587864  c3                   ret 

struct EnumDescriptor {
    bool isEnum();
};

extern int __cdecl func_0062fbea(int* out, int value);

bool EnumDescriptor::isEnum()
{
    int value = *(int*)((char*)this + 0xf4);
    if (value == 0)
        return false;
    int out;
    func_0062fbea(&out, value);
    return (out - 0x24) != 0;
}
