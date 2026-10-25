// from server: 100% by colin
// roc 2008-06 00608e90  unit: RBX::VModelInstance::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00608e90
//
// 00608e90  51                   push ecx
// 00608e91  6a18                 push 0x18
// 00608e93  c744240400000000     mov dword ptr [esp + 4], 0
// 00608e9b  e8807a0900           call 0x6a0920
// 00608ea0  83c404               add esp, 4
// 00608ea3  85c0                 test eax, eax
// 00608ea5  7425                 je 0x608ecc
// 00608ea7  c70070288400         mov dword ptr [eax], 0x842870
// 00608ead  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00608eb1  894808               mov dword ptr [eax + 8], ecx
// 00608eb4  8b542414             mov edx, dword ptr [esp + 0x14]
// 00608eb8  89500c               mov dword ptr [eax + 0xc], edx
// 00608ebb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00608ebf  894810               mov dword ptr [eax + 0x10], ecx
// 00608ec2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00608ec6  8901                 mov dword ptr [ecx], eax
// 00608ec8  8bc1                 mov eax, ecx
// 00608eca  59                   pop ecx
// 00608ecb  c3                   ret 
// 00608ecc  8b442408             mov eax, dword ptr [esp + 8]
// 00608ed0  33c9                 xor ecx, ecx
// 00608ed2  8908                 mov dword ptr [eax], ecx
// 00608ed4  59                   pop ecx
// 00608ed5  c3                   ret 

extern "C" void* __cdecl allocate(unsigned int);
extern unsigned char table[];

struct Object {
    void* volatile vtable;
    unsigned char pad04[4];
    volatile unsigned int value08;
    volatile unsigned int value0C;
    volatile unsigned int value10;
    unsigned char pad14[4];
};

Object** __cdecl makeObject(Object** result, unsigned int,
                           volatile unsigned int a,
                           volatile unsigned int b,
                           volatile unsigned int c)
{
    volatile unsigned int state = 0;
    Object* p = static_cast<Object*>(allocate(24));
Object* q;
    if (p) {
        p->vtable = table;
        p->value08 = a;
        p->value0C = b;
        p->value10 = c;
        q = p;
    } else
        q = 0;
    *result = q;
    return result;
}
