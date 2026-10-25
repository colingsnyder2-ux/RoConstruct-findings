// from server: 100% by colin
// roc 2008-06 004c9cf0  unit: RBX::VInstance::?$NonFactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c9cf0
//
// 004c9cf0  53                   push ebx
// 004c9cf1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004c9cf5  8b0b                 mov ecx, dword ptr [ebx]
// 004c9cf7  56                   push esi
// 004c9cf8  57                   push edi
// 004c9cf9  e8b2ef0c00           call 0x598cb0
// 004c9cfe  8d5310               lea edx, [ebx + 0x10]
// 004c9d01  b909000000           mov ecx, 9
// 004c9d06  8bf0                 mov esi, eax
// 004c9d08  8bfa                 mov edi, edx
// 004c9d0a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004c9d0c  d94024               fld dword ptr [eax + 0x24]
// 004c9d0f  d95a24               fstp dword ptr [edx + 0x24]
// 004c9d12  d94028               fld dword ptr [eax + 0x28]
// 004c9d15  d95a28               fstp dword ptr [edx + 0x28]
// 004c9d18  d9402c               fld dword ptr [eax + 0x2c]
// 004c9d1b  d95a2c               fstp dword ptr [edx + 0x2c]
// 004c9d1e  d90540cc9300         fld dword ptr [0x93cc40]
// 004c9d24  d95b40               fstp dword ptr [ebx + 0x40]
// 004c9d27  5f                   pop edi
// 004c9d28  5e                   pop esi
// 004c9d29  c7434400000000       mov dword ptr [ebx + 0x44], 0
// 004c9d30  5b                   pop ebx
// 004c9d31  c3                   ret 

extern float g_float_93cc40;

struct DataBlock {
    char data[0x24];
};

struct Inner {
    char data[0x24];
    float a;
    float b;
    float c;
};

struct Sender {
    void* vtable;
    char pad[0x0C];
    char data[0x24];
    float a;
    float b;
    float c;
    float f40;
    int f44;
};

struct Obj {
    Inner* getInner();
};

void __cdecl init(Sender* out)
{
    Inner* in = ((Obj*)*(void**)out)->getInner();
    DataBlock* dst = (DataBlock*)((char*)out + 0x10);
    *(DataBlock*)dst = *(DataBlock*)in;
    ((Inner*)dst)->a = in->a;
    ((Inner*)dst)->b = in->b;
    ((Inner*)dst)->c = in->c;
    out->f40 = g_float_93cc40;
    out->f44 = 0;
}
