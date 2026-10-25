// from server: 100% by king_originala
// roc 2008-06 0046ea30  unit: RBX::LDraw2Lua::LuaObjectWriter  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046ea30
//
// 0046ea30  6aff                 push -1
// 0046ea32  68443f7c00           push 0x7c3f44
// 0046ea37  64a100000000         mov eax, dword ptr fs:[0]
// 0046ea3d  50                   push eax
// 0046ea3e  64892500000000       mov dword ptr fs:[0], esp
// 0046ea45  83ec20               sub esp, 0x20
// 0046ea48  56                   push esi
// 0046ea49  8bf1                 mov esi, ecx
// 0046ea4b  89742404             mov dword ptr [esp + 4], esi
// 0046ea4f  8b442434             mov eax, dword ptr [esp + 0x34]
// 0046ea53  8d4e70               lea ecx, [esi + 0x70]
// 0046ea56  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0046ea5e  c7060cca8100         mov dword ptr [esi], 0x81ca0c
// 0046ea64  894604               mov dword ptr [esi + 4], eax
// 0046ea67  ff1560248000         call dword ptr [0x802460]
// 0046ea6d  d9ee                 fldz 
// 0046ea6f  dd5610               fst qword ptr [esi + 0x10]
// 0046ea72  6816b78000           push 0x80b716
// 0046ea77  dd5618               fst qword ptr [esi + 0x18]
// 0046ea7a  8d4c240c             lea ecx, [esp + 0xc]
// 0046ea7e  dd5620               fst qword ptr [esi + 0x20]
// 0046ea81  c644243001           mov byte ptr [esp + 0x30], 1
// 0046ea86  dd5628               fst qword ptr [esi + 0x28]
// 0046ea89  c7460800000000       mov dword ptr [esi + 8], 0
// 0046ea90  dd5630               fst qword ptr [esi + 0x30]
// 0046ea93  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0046ea9a  dd5638               fst qword ptr [esi + 0x38]
// 0046ea9d  dd5640               fst qword ptr [esi + 0x40]
// 0046eaa0  dd5648               fst qword ptr [esi + 0x48]
// 0046eaa3  dd5650               fst qword ptr [esi + 0x50]
// 0046eaa6  dd5658               fst qword ptr [esi + 0x58]
// 0046eaa9  dd5660               fst qword ptr [esi + 0x60]
// 0046eaac  dd5e68               fstp qword ptr [esi + 0x68]
// 0046eaaf  ff1558248000         call dword ptr [0x802458]
// 0046eab5  8d4c2408             lea ecx, [esp + 8]
// 0046eab9  ff1568248000         call dword ptr [0x802468]
// 0046eabf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046eac3  8bc6                 mov eax, esi
// 0046eac5  5e                   pop esi
// 0046eac6  64890d00000000       mov dword ptr fs:[0], ecx
// 0046eacd  83c42c               add esp, 0x2c
// 0046ead0  c20400               ret 4

struct String {
    char storage[28];
    String();
    String(const char *);
    ~String();
};

extern void (__thiscall *stringDefaultConstructor)(String *);
extern void (__thiscall *stringTextConstructor)(String *, const char *);
extern void (__thiscall *stringDestructor)(String *);

__forceinline String::String()
{
    stringDefaultConstructor(this);
}

__forceinline String::String(const char *value)
{
    stringTextConstructor(this, value);
}

__forceinline String::~String()
{
    stringDestructor(this);
}

const char initialText[11] = {
    0, 0, '\xf1', '\x68', '\xe3', '\x88',
    '\xb5', '\xf8', '\xe4', '\x3e', '\x41'
};

struct Base {
    virtual ~Base();
};

struct LuaObjectWriter : Base {
    void *output;
    int count;
    int index;
    double values[12];
    String text;

    LuaObjectWriter(void *);
    virtual ~LuaObjectWriter();
};

LuaObjectWriter::LuaObjectWriter(void *destination)
    : output(destination), text()
{
    values[0] = 0.0;
    values[1] = 0.0;
    values[2] = 0.0;
    values[3] = 0.0;
    count = 0;
    values[4] = 0.0;
    index = 0;
    values[5] = 0.0;
    values[6] = 0.0;
    values[7] = 0.0;
    values[8] = 0.0;
    values[9] = 0.0;
    values[10] = 0.0;
    values[11] = 0.0;
    String temporary(initialText);
}
