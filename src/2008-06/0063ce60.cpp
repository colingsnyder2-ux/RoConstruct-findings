// from server: 100% by colin
// roc 2008-06 0063ce60  unit: RBX::P8SpawnLocation::?$GetSetImpl  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ce60
//
// 0063ce60  6aff                 push -1
// 0063ce62  689e917d00           push 0x7d919e
// 0063ce67  64a100000000         mov eax, dword ptr fs:[0]
// 0063ce6d  50                   push eax
// 0063ce6e  64892500000000       mov dword ptr fs:[0], esp
// 0063ce75  83ec1c               sub esp, 0x1c
// 0063ce78  56                   push esi
// 0063ce79  8bf1                 mov esi, ecx
// 0063ce7b  c70600000000         mov dword ptr [esi], 0
// 0063ce81  89742404             mov dword ptr [esp + 4], esi
// 0063ce85  c7460400000000       mov dword ptr [esi + 4], 0
// 0063ce8c  8b442430             mov eax, dword ptr [esp + 0x30]
// 0063ce90  8b10                 mov edx, dword ptr [eax]
// 0063ce92  89542408             mov dword ptr [esp + 8], edx
// 0063ce96  8b5004               mov edx, dword ptr [eax + 4]
// 0063ce99  8954240c             mov dword ptr [esp + 0xc], edx
// 0063ce9d  8b5008               mov edx, dword ptr [eax + 8]
// 0063cea0  89542410             mov dword ptr [esp + 0x10], edx
// 0063cea4  8b500c               mov edx, dword ptr [eax + 0xc]
// 0063cea7  89542414             mov dword ptr [esp + 0x14], edx
// 0063ceab  8b5010               mov edx, dword ptr [eax + 0x10]
// 0063ceae  8b4014               mov eax, dword ptr [eax + 0x14]
// 0063ceb1  89542418             mov dword ptr [esp + 0x18], edx
// 0063ceb5  8d542408             lea edx, [esp + 8]
// 0063ceb9  8d4e08               lea ecx, [esi + 8]
// 0063cebc  52                   push edx
// 0063cebd  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0063cec5  89442420             mov dword ptr [esp + 0x20], eax
// 0063cec9  c70100000000         mov dword ptr [ecx], 0
// 0063cecf  e85cfeffff           call 0x63cd30
// 0063ced4  6a28                 push 0x28
// 0063ced6  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0063cedb  e8403a0600           call 0x6a0920
// 0063cee0  83c404               add esp, 4
// 0063cee3  89442430             mov dword ptr [esp + 0x30], eax
// 0063cee7  c644242802           mov byte ptr [esp + 0x28], 2
// 0063ceec  85c0                 test eax, eax
// 0063ceee  7409                 je 0x63cef9
// 0063cef0  8bc8                 mov ecx, eax
// 0063cef2  e849deddff           call 0x41ad40
// 0063cef7  eb02                 jmp 0x63cefb
// 0063cef9  33c0                 xor eax, eax
// 0063cefb  50                   push eax
// 0063cefc  8bce                 mov ecx, esi
// 0063cefe  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0063cf03  e8e8e1ddff           call 0x41b0f0
// 0063cf08  8bce                 mov ecx, esi
// 0063cf0a  e83189f5ff           call 0x595840
// 0063cf0f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0063cf13  8bc6                 mov eax, esi
// 0063cf15  5e                   pop esi
// 0063cf16  64890d00000000       mov dword ptr fs:[0], ecx
// 0063cf1d  83c428               add esp, 0x28
// 0063cf20  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct Value {
    unsigned int data[6];

    Value();
    Value(const Value&);
};

inline Value::Value()
{
}

inline Value::Value(const Value& source)
{
    data[0] = source.data[0];
    data[1] = source.data[1];
    data[2] = source.data[2];
    data[3] = source.data[3];
    data[4] = source.data[4];
    data[5] = source.data[5];
}

struct Object {
    unsigned char data[40];
    Object();
};

struct Count {
    void* pointer;

    Count();
    ~Count();
};

inline Count::Count() : pointer(0)
{
}

struct Owner {
    void* first;
    Count second;

    Owner();
    void assign(Object*);
};

inline Owner::Owner() : first(0)
{
}

struct Holder {
    void* table;
    unsigned int reserved;
    Value value;

    Holder(const Value&);
    ~Holder();
    void set(const Value&);
};

inline Holder::Holder(const Value& source)
{
    Value copy = source;
    table = 0;
    set(copy);
}

struct S : Owner {
    Holder holder;

    S(const Value&);
    void finish();
};

S::S(const Value& source) : holder(source)
{
    assign(new Object);
    finish();
}
