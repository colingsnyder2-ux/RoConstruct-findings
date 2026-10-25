// from server: 100% by king_originala
// roc 2008-06 00448b10  unit: VCRenderSettings::?$EnumPropDescriptor  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448b10
//
// 00448b10  56                   push esi
// 00448b11  8bf1                 mov esi, ecx
// 00448b13  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00448b17  57                   push edi
// 00448b18  8b3e                 mov edi, dword ptr [esi]
// 00448b1a  e841aeffff           call 0x443960
// 00448b1f  8b573c               mov edx, dword ptr [edi + 0x3c]
// 00448b22  50                   push eax
// 00448b23  8b442410             mov eax, dword ptr [esp + 0x10]
// 00448b27  50                   push eax
// 00448b28  8bce                 mov ecx, esi
// 00448b2a  ffd2                 call edx
// 00448b2c  5f                   pop edi
// 00448b2d  5e                   pop esi
// 00448b2e  c20800               ret 8

struct Value {
    int convert();
};

struct Descriptor;

typedef void (__thiscall *Setter)(Descriptor*, void*, int);

struct DispatchTable {
    void* padding[15];
    Setter set;
};

struct Descriptor {
    DispatchTable* table;
    void apply(void*, Value*);
};

void Descriptor::apply(void* object, Value* value)
{
    DispatchTable* dispatch = table;
    int converted = value->convert();
    dispatch->set(this, object, converted);
}
