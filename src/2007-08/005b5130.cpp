// from server: 60% by colin
// roc 2007-08 005b5130  unit: RBX::Primitive  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b5130
//
// 005b5130  83ec30               sub esp, 0x30
// 005b5133  56                   push esi
// 005b5134  8bf1                 mov esi, ecx
// 005b5136  57                   push edi
// 005b5137  8b7e64               mov edi, dword ptr [esi + 0x64]
// 005b513a  8bcf                 mov ecx, edi
// 005b513c  e8bfaff7ff           call 0x530100
// 005b5141  8b442440             mov eax, dword ptr [esp + 0x40]
// 005b5145  81c784000000         add edi, 0x84
// 005b514b  57                   push edi
// 005b514c  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 005b5150  57                   push edi
// 005b5151  50                   push eax
// 005b5152  8d4c2414             lea ecx, [esp + 0x14]
// 005b5156  51                   push ecx
// 005b5157  8bce                 mov ecx, esi
// 005b5159  e862f8ffff           call 0x5b49c0
// 005b515e  8bc8                 mov ecx, eax
// 005b5160  e8cb8c0500           call 0x60de30
// 005b5165  8bc7                 mov eax, edi
// 005b5167  5f                   pop edi
// 005b5168  5e                   pop esi
// 005b5169  83c430               add esp, 0x30
// 005b516c  c20800               ret 8

struct Primitive {
    char pad[0x64];
    void* field_64;
    void* method_5b5130(int, int);
};

extern "C" void __cdecl sub_530100(void*);
extern "C" void* __cdecl sub_5b49c0(void*, void*, void*, void*);
extern "C" void __cdecl sub_60de30(void*);

void* Primitive::method_5b5130(int a, int b)
{
    void* p = field_64;
    sub_530100(p);
    void* q = (char*)p + 0x84;
    void* r = sub_5b49c0(this, &a, (void*)b, q);
    sub_60de30(r);
    return (void*)b;
}
