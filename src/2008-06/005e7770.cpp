// from server: 100% by king_originala
// roc 2008-06 005e7770  unit: RBX::Ball  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7770
//
// 005e7770  53                   push ebx
// 005e7771  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 005e7775  56                   push esi
// 005e7776  57                   push edi
// 005e7777  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005e777b  8bf1                 mov esi, ecx
// 005e777d  83bcbed000000000     cmp dword ptr [esi + edi*4 + 0xd0], 0
// 005e7785  750f                 jne 0x5e7796
// 005e7787  8bcb                 mov ecx, ebx
// 005e7789  e872fbffff           call 0x5e7300
// 005e778e  84c0                 test al, al
// 005e7790  0f85a9000000         jne 0x5e783f
// 005e7796  8b8cbed0000000       mov ecx, dword ptr [esi + edi*4 + 0xd0]
// 005e779d  85c9                 test ecx, ecx
// 005e779f  7420                 je 0x5e77c1
// 005e77a1  8b01                 mov eax, dword ptr [ecx]
// 005e77a3  3b03                 cmp eax, dword ptr [ebx]
// 005e77a5  751a                 jne 0x5e77c1
// 005e77a7  d94304               fld dword ptr [ebx + 4]
// 005e77aa  d85904               fcomp dword ptr [ecx + 4]
// 005e77ad  dfe0                 fnstsw ax
// 005e77af  f6c444               test ah, 0x44
// 005e77b2  7a0d                 jp 0x5e77c1
// 005e77b4  d94308               fld dword ptr [ebx + 8]
// 005e77b7  d85908               fcomp dword ptr [ecx + 8]
// 005e77ba  dfe0                 fnstsw ax
// 005e77bc  f6c444               test ah, 0x44
// 005e77bf  7b7e                 jnp 0x5e783f
// 005e77c1  8bcb                 mov ecx, ebx
// 005e77c3  e838fbffff           call 0x5e7300
// 005e77c8  84c0                 test al, al
// 005e77ca  7421                 je 0x5e77ed
// 005e77cc  8b8cbed0000000       mov ecx, dword ptr [esi + edi*4 + 0xd0]
// 005e77d3  51                   push ecx
// 005e77d4  e8a18e0b00           call 0x6a067a
// 005e77d9  83c404               add esp, 4
// 005e77dc  c784bed000000000000000 mov dword ptr [esi + edi*4 + 0xd0], 0
// 005e77e7  5f                   pop edi
// 005e77e8  5e                   pop esi
// 005e77e9  5b                   pop ebx
// 005e77ea  c20800               ret 8
// 005e77ed  83bcbed000000000     cmp dword ptr [esi + edi*4 + 0xd0], 0
// 005e77f5  7531                 jne 0x5e7828
// 005e77f7  6a0c                 push 0xc
// 005e77f9  e822910b00           call 0x6a0920
// 005e77fe  83c404               add esp, 4
// 005e7801  85c0                 test eax, eax
// 005e7803  741a                 je 0x5e781f
// 005e7805  d905dc828200         fld dword ptr [0x8282dc]
// 005e780b  c70000000000         mov dword ptr [eax], 0
// 005e7811  d95804               fstp dword ptr [eax + 4]
// 005e7814  d905ac9b8100         fld dword ptr [0x819bac]
// 005e781a  d95808               fstp dword ptr [eax + 8]
// 005e781d  eb02                 jmp 0x5e7821
// 005e781f  33c0                 xor eax, eax
// 005e7821  8984bed0000000       mov dword ptr [esi + edi*4 + 0xd0], eax
// 005e7828  8bb4bed0000000       mov esi, dword ptr [esi + edi*4 + 0xd0]
// 005e782f  8b13                 mov edx, dword ptr [ebx]
// 005e7831  8916                 mov dword ptr [esi], edx
// 005e7833  8b4304               mov eax, dword ptr [ebx + 4]
// 005e7836  894604               mov dword ptr [esi + 4], eax
// 005e7839  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005e783c  894e08               mov dword ptr [esi + 8], ecx
// 005e783f  5f                   pop edi
// 005e7840  5e                   pop esi
// 005e7841  5b                   pop ebx
// 005e7842  c20800               ret 8

#pragma float_control(precise, off)

extern float defaultFirst;
extern float defaultSecond;

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Value {
    int kind;
    float first;
    float second;

    Value();
    bool isEmpty() const;
};

inline Value::Value()
{
    float initialFirst = defaultFirst;
    kind = 0;
    first = initialFirst;
    second = defaultSecond;
}

struct Ball {
    char padding[0xD0];
    Value* values[1];

    void setValue(int index, const Value& value);
};

void Ball::setValue(int index, const Value& value)
{
    if (!values[index] && value.isEmpty())
        return;

    if (values[index] &&
        values[index]->kind == value.kind &&
        values[index]->first == value.first &&
        values[index]->second == value.second)
        return;

    if (value.isEmpty()) {
        delete values[index];
        values[index] = 0;
        return;
    }

    if (!values[index])
        values[index] = new Value;

    *values[index] = value;
}
