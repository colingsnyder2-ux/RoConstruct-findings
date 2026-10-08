// from server: 69% by colin
// roc 2007-08 005b5720  unit: RBX::Primitive  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b5720
//
// 005b5720  56                   push esi
// 005b5721  57                   push edi
// 005b5722  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005b5726  8bf1                 mov esi, ecx
// 005b5728  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 005b572b  8d4730               lea eax, [edi + 0x30]
// 005b572e  50                   push eax
// 005b572f  e8ccc70200           call 0x5e1f00
// 005b5734  57                   push edi
// 005b5735  8bce                 mov ecx, esi
// 005b5737  e834faffff           call 0x5b5170
// 005b573c  5f                   pop edi
// 005b573d  5e                   pop esi
// 005b573e  c20400               ret 4

struct Primitive {
    char pad[0x64];
    int field_64;
    void func_005b5170(int*);
    void func_005b5720(int*);
};

extern void __stdcall func_005e1f00(int*);

void Primitive::func_005b5720(int* arg)
{
    func_005e1f00((int*)((char*)arg + 0x30));
    func_005b5170(arg);
}
