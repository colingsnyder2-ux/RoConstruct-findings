// from server: 79% by colin
// roc 2007-08 005f6310  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f6310
//
// 005f6310  51                   push ecx
// 005f6311  85c9                 test ecx, ecx
// 005f6313  7405                 je 0x5f631a
// 005f6315  8d4104               lea eax, [ecx + 4]
// 005f6318  eb02                 jmp 0x5f631c
// 005f631a  33c0                 xor eax, eax
// 005f631c  56                   push esi
// 005f631d  8bb1e8000000         mov esi, dword ptr [ecx + 0xe8]
// 005f6323  50                   push eax
// 005f6324  b97c7d8c00           mov ecx, 0x8c7d7c
// 005f6329  e8429ff7ff           call 0x570270
// 005f632e  85c0                 test eax, eax
// 005f6330  740e                 je 0x5f6340
// 005f6332  56                   push esi
// 005f6333  8d4c240b             lea ecx, [esp + 0xb]
// 005f6337  51                   push ecx
// 005f6338  8d4810               lea ecx, [eax + 0x10]
// 005f633b  e840e3ffff           call 0x5f4680
// 005f6340  5e                   pop esi
// 005f6341  59                   pop ecx
// 005f6342  c20400               ret 4

struct RBXName {
    void* data;
};

struct CreatorBase {
    void* vtable;
};

struct FactoryProduct {
    char pad[0xe8];
    void* field_e8;
    void construct(void* arg);
};

extern "C" void* __stdcall sub_570270(void* arg1, void* arg2);
extern "C" void __fastcall sub_5f4680(void* ecx, void* edx, void* arg);

void FactoryProduct::construct(void* arg)
{
    void* p;
    if (this != 0)
        p = (char*)this + 4;
    else
        p = 0;

    void* esi = field_e8;
    void* result = sub_570270((void*)0x8c7d7c, p);
    if (result != 0)
    {
        sub_5f4680((char*)result + 0x10, 0, esi);
    }
}
