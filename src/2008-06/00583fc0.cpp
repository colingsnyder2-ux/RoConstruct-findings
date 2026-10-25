// from server: 100% by colin
// roc 2008-06 00583fc0  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00583fc0
//
// 00583fc0  8bc1                 mov eax, ecx
// 00583fc2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00583fc6  85c9                 test ecx, ecx
// 00583fc8  7405                 je 0x583fcf
// 00583fca  83c1ec               add ecx, -0x14
// 00583fcd  eb02                 jmp 0x583fd1
// 00583fcf  33c9                 xor ecx, ecx
// 00583fd1  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 00583fd7  56                   push esi
// 00583fd8  8b7010               mov esi, dword ptr [eax + 0x10]
// 00583fdb  8b1432               mov edx, dword ptr [edx + esi]
// 00583fde  03500c               add edx, dword ptr [eax + 0xc]
// 00583fe1  8b4008               mov eax, dword ptr [eax + 8]
// 00583fe4  57                   push edi
// 00583fe5  8d8c0a34010000       lea ecx, [edx + ecx + 0x134]
// 00583fec  ffd0                 call eax
// 00583fee  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00583ff2  8bf0                 mov esi, eax
// 00583ff4  56                   push esi
// 00583ff5  8bcf                 mov ecx, edi
// 00583ff7  e824f2f8ff           call 0x513220
// 00583ffc  d94624               fld dword ptr [esi + 0x24]
// 00583fff  d95f24               fstp dword ptr [edi + 0x24]
// 00584002  8bc7                 mov eax, edi
// 00584004  d94628               fld dword ptr [esi + 0x28]
// 00584007  d95f28               fstp dword ptr [edi + 0x28]
// 0058400a  d9462c               fld dword ptr [esi + 0x2c]
// 0058400d  d95f2c               fstp dword ptr [edi + 0x2c]
// 00584010  5f                   pop edi
// 00584011  5e                   pop esi
// 00584012  c20800               ret 8

struct Matrix
{
    float data[9];
    Matrix(const Matrix &);
};

struct Value
{
    Matrix rotation;
    float x, y, z;
};

struct GetSetImpl
{
    char padding[8];
    const Value &(__thiscall *function)(void *);
    int adjustment;
    int index;

    Value Invoke(void *argument);
};

Value GetSetImpl::Invoke(void *argument)
{
    char *object = argument ? (char *)argument - 0x14 : 0;
    return function(
        object + 0x134 +
        (*(int *)(*(char **)(object + 0x134) + index) + adjustment));
}
