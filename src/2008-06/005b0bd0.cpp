// from server: 100% by king_originala
// roc 2008-06 005b0bd0  unit: RBX::P8Accoutrement::?$GetSetImpl  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b0bd0
//
// 005b0bd0  8bc1                 mov eax, ecx
// 005b0bd2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b0bd6  85c9                 test ecx, ecx
// 005b0bd8  7405                 je 0x5b0bdf
// 005b0bda  83c1ec               add ecx, -0x14
// 005b0bdd  eb02                 jmp 0x5b0be1
// 005b0bdf  33c9                 xor ecx, ecx
// 005b0be1  8b9150010000         mov edx, dword ptr [ecx + 0x150]
// 005b0be7  56                   push esi
// 005b0be8  8b7010               mov esi, dword ptr [eax + 0x10]
// 005b0beb  8b1432               mov edx, dword ptr [edx + esi]
// 005b0bee  03500c               add edx, dword ptr [eax + 0xc]
// 005b0bf1  8b4008               mov eax, dword ptr [eax + 8]
// 005b0bf4  57                   push edi
// 005b0bf5  8d8c0a50010000       lea ecx, [edx + ecx + 0x150]
// 005b0bfc  ffd0                 call eax
// 005b0bfe  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005b0c02  8bf0                 mov esi, eax
// 005b0c04  56                   push esi
// 005b0c05  8bcf                 mov ecx, edi
// 005b0c07  e81426f6ff           call 0x513220
// 005b0c0c  d94624               fld dword ptr [esi + 0x24]
// 005b0c0f  d95f24               fstp dword ptr [edi + 0x24]
// 005b0c12  8bc7                 mov eax, edi
// 005b0c14  d94628               fld dword ptr [esi + 0x28]
// 005b0c17  d95f28               fstp dword ptr [edi + 0x28]
// 005b0c1a  d9462c               fld dword ptr [esi + 0x2c]
// 005b0c1d  d95f2c               fstp dword ptr [edi + 0x2c]
// 005b0c20  5f                   pop edi
// 005b0c21  5e                   pop esi
// 005b0c22  c20800               ret 8

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
        object + 0x150 +
        (*(int *)(*(char **)(object + 0x150) + index) + adjustment));
}
