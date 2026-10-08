// from server: 75% by colin
// roc 2007-08 005e67e0  unit: RBX::VFlag::?$FactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e67e0
//
// 005e67e0  8b442404             mov eax, dword ptr [esp + 4]
// 005e67e4  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005e67e7  8b9168010000         mov edx, dword ptr [ecx + 0x168]
// 005e67ed  56                   push esi
// 005e67ee  8b7008               mov esi, dword ptr [eax + 8]
// 005e67f1  8b1432               mov edx, dword ptr [edx + esi]
// 005e67f4  035004               add edx, dword ptr [eax + 4]
// 005e67f7  8b00                 mov eax, dword ptr [eax]
// 005e67f9  8d8c0a68010000       lea ecx, [edx + ecx + 0x168]
// 005e6800  5e                   pop esi
// 005e6801  ffe0                 jmp eax

struct FactoryProduct {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
};

int __cdecl call_target(FactoryProduct* self);

int __cdecl func(FactoryProduct* self)
{
    int* p = *(int**)((char*)self + 0x10);
    int edx = *(int*)((char*)p + 0x168);
    int esi = *(int*)((char*)self + 8);
    edx = *(int*)((char*)edx + esi);
    edx += *(int*)((char*)self + 4);
    int eax = *(int*)self;
    int ecx = (int)((char*)p + 0x168);
    return ((int (__cdecl*)(int))eax)(edx + ecx);
}
