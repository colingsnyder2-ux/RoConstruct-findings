// from server: 100% by king_originala
// roc 2008-06 00609150  unit: RBX::VModelInstance::?$FactoryProduct  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00609150
//
// 00609150  6aff                 push -1
// 00609152  683bf47b00           push 0x7bf43b
// 00609157  64a100000000         mov eax, dword ptr fs:[0]
// 0060915d  50                   push eax
// 0060915e  64892500000000       mov dword ptr fs:[0], esp
// 00609165  51                   push ecx
// 00609166  56                   push esi
// 00609167  8bf1                 mov esi, ecx
// 00609169  83be9c01000000       cmp dword ptr [esi + 0x19c], 0
// 00609170  7567                 jne 0x6091d9
// 00609172  6a30                 push 0x30
// 00609174  e8a7770900           call 0x6a0920
// 00609179  83c404               add esp, 4
// 0060917c  89442404             mov dword ptr [esp + 4], eax
// 00609180  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00609188  85c0                 test eax, eax
// 0060918a  7409                 je 0x609195
// 0060918c  8bc8                 mov ecx, eax
// 0060918e  e83df1e6ff           call 0x4782d0
// 00609193  eb02                 jmp 0x609197
// 00609195  33c0                 xor eax, eax
// 00609197  8b8e9c010000         mov ecx, dword ptr [esi + 0x19c]
// 0060919d  89869c010000         mov dword ptr [esi + 0x19c], eax
// 006091a3  85c9                 test ecx, ecx
// 006091a5  7409                 je 0x6091b0
// 006091a7  51                   push ecx
// 006091a8  e8cd740900           call 0x6a067a
// 006091ad  83c404               add esp, 4
// 006091b0  8b869c010000         mov eax, dword ptr [esi + 0x19c]
// 006091b6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006091ba  57                   push edi
// 006091bb  b909000000           mov ecx, 9
// 006091c0  8bf2                 mov esi, edx
// 006091c2  8bf8                 mov edi, eax
// 006091c4  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006091c6  d94224               fld dword ptr [edx + 0x24]
// 006091c9  d95824               fstp dword ptr [eax + 0x24]
// 006091cc  d94228               fld dword ptr [edx + 0x28]
// 006091cf  d95828               fstp dword ptr [eax + 0x28]
// 006091d2  d9422c               fld dword ptr [edx + 0x2c]
// 006091d5  d9582c               fstp dword ptr [eax + 0x2c]
// 006091d8  5f                   pop edi
// 006091d9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006091dd  5e                   pop esi
// 006091de  64890d00000000       mov dword ptr fs:[0], ecx
// 006091e5  83c410               add esp, 0x10
// 006091e8  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*) throw();

struct Matrix {
    float elements[9];
};

struct Value {
    Matrix rotation;
    float x, y, z;
    Value();
};

struct S {
    unsigned char padding[0x19c];
    Value* value;
    void f(const Value& source);
};

void S::f(const Value& source)
{
    if (!value) {
        Value* replacement = new Value;
        Value* previous = value;
        value = replacement;
        if (previous)
            operator delete(previous);

        Value* destination = value;
        destination->rotation = source.rotation;
        destination->x = source.x;
        destination->y = source.y;
        destination->z = source.z;
    }
}
