// from server: 100% by king_originala
// roc 2008-06 005fd820  unit: RBX::P8Tool::?$GetSetImpl  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fd820
//
// 005fd820  8bc1                 mov eax, ecx
// 005fd822  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fd826  85c9                 test ecx, ecx
// 005fd828  7405                 je 0x5fd82f
// 005fd82a  83c1ec               add ecx, -0x14
// 005fd82d  eb02                 jmp 0x5fd831
// 005fd82f  33c9                 xor ecx, ecx
// 005fd831  8b91c0010000         mov edx, dword ptr [ecx + 0x1c0]
// 005fd837  56                   push esi
// 005fd838  8b7010               mov esi, dword ptr [eax + 0x10]
// 005fd83b  8b1432               mov edx, dword ptr [edx + esi]
// 005fd83e  03500c               add edx, dword ptr [eax + 0xc]
// 005fd841  8b4008               mov eax, dword ptr [eax + 8]
// 005fd844  57                   push edi
// 005fd845  8d8c0ac0010000       lea ecx, [edx + ecx + 0x1c0]
// 005fd84c  ffd0                 call eax
// 005fd84e  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005fd852  8bf0                 mov esi, eax
// 005fd854  56                   push esi
// 005fd855  8bcf                 mov ecx, edi
// 005fd857  e8c459f1ff           call 0x513220
// 005fd85c  d94624               fld dword ptr [esi + 0x24]
// 005fd85f  d95f24               fstp dword ptr [edi + 0x24]
// 005fd862  8bc7                 mov eax, edi
// 005fd864  d94628               fld dword ptr [esi + 0x28]
// 005fd867  d95f28               fstp dword ptr [edi + 0x28]
// 005fd86a  d9462c               fld dword ptr [esi + 0x2c]
// 005fd86d  d95f2c               fstp dword ptr [edi + 0x2c]
// 005fd870  5f                   pop edi
// 005fd871  5e                   pop esi
// 005fd872  c20800               ret 8

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
        object + 0x1c0 +
        (*(int *)(*(char **)(object + 0x1c0) + index) + adjustment));
}
