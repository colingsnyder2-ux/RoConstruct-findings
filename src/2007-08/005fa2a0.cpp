// from server: 70% by colin
// roc 2007-08 005fa2a0  unit: RBX::VSeat::?$FactoryProduct  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fa2a0
//
// 005fa2a0  8b442408             mov eax, dword ptr [esp + 8]
// 005fa2a4  83f802               cmp eax, 2
// 005fa2a7  7519                 jne 0x5fa2c2
// 005fa2a9  56                   push esi
// 005fa2aa  8b742408             mov esi, dword ptr [esp + 8]
// 005fa2ae  56                   push esi
// 005fa2af  b9e03e8b00           mov ecx, 0x8b3ee0
// 005fa2b4  ff1508e77700         call dword ptr [0x77e708]
// 005fa2ba  f6d8                 neg al
// 005fa2bc  1bc0                 sbb eax, eax
// 005fa2be  23c6                 and eax, esi
// 005fa2c0  5e                   pop esi
// 005fa2c1  c3                   ret 
// 005fa2c2  8b542404             mov edx, dword ptr [esp + 4]
// 005fa2c6  c644240800           mov byte ptr [esp + 8], 0
// 005fa2cb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fa2cf  51                   push ecx
// 005fa2d0  50                   push eax
// 005fa2d1  52                   push edx
// 005fa2d2  e82983fdff           call 0x5d2600
// 005fa2d7  83c40c               add esp, 0xc
// 005fa2da  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

struct S {
    void* f(int, int);
};

extern "C" void* __cdecl sub_5d2600(void*, int, char);

void* S::f(int a, int b)
{
    if (b == 2) {
        int* p = (int*)a;
        type_info* t = (type_info*)0x8b3ee0;
        bool r = (*t == *(type_info*)p);
        return r ? (void*)a : 0;
    }
    char c = 0;
    return sub_5d2600((void*)a, b, c);
}
