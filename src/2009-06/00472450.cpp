// roc 2009-06 00472450  unit: RBX::LDraw2Lua::LuaObjectWriter  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00472450
//
// 00472450  6aff                 push -1
// 00472452  68843d8500           push 0x853d84
// 00472457  64a100000000         mov eax, dword ptr fs:[0]
// 0047245d  50                   push eax
// 0047245e  64892500000000       mov dword ptr fs:[0], esp
// 00472465  83ec20               sub esp, 0x20
// 00472468  56                   push esi
// 00472469  8bf1                 mov esi, ecx
// 0047246b  89742404             mov dword ptr [esp + 4], esi
// 0047246f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00472473  8d4e70               lea ecx, [esi + 0x70]
// 00472476  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0047247e  c70674d98b00         mov dword ptr [esi], 0x8bd974
// 00472484  894604               mov dword ptr [esi + 4], eax
// 00472487  ff15c0e48900         call dword ptr [0x89e4c0]
// 0047248d  d9ee                 fldz 
// 0047248f  dd5610               fst qword ptr [esi + 0x10]
// 00472492  6816d28a00           push 0x8ad216
// 00472497  dd5618               fst qword ptr [esi + 0x18]
// 0047249a  8d4c240c             lea ecx, [esp + 0xc]
// 0047249e  dd5620               fst qword ptr [esi + 0x20]
// 004724a1  c644243001           mov byte ptr [esp + 0x30], 1
// 004724a6  dd5628               fst qword ptr [esi + 0x28]
// 004724a9  c7460800000000       mov dword ptr [esi + 8], 0
// 004724b0  dd5630               fst qword ptr [esi + 0x30]
// 004724b3  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004724ba  dd5638               fst qword ptr [esi + 0x38]
// 004724bd  dd5640               fst qword ptr [esi + 0x40]
// 004724c0  dd5648               fst qword ptr [esi + 0x48]
// 004724c3  dd5650               fst qword ptr [esi + 0x50]
// 004724c6  dd5658               fst qword ptr [esi + 0x58]
// 004724c9  dd5660               fst qword ptr [esi + 0x60]
// 004724cc  dd5e68               fstp qword ptr [esi + 0x68]
// 004724cf  ff15b4e48900         call dword ptr [0x89e4b4]
// 004724d5  8d4c2408             lea ecx, [esp + 8]
// 004724d9  ff15c4e48900         call dword ptr [0x89e4c4]
// 004724df  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004724e3  8bc6                 mov eax, esi
// 004724e5  5e                   pop esi
// 004724e6  64890d00000000       mov dword ptr fs:[0], ecx
// 004724ed  83c42c               add esp, 0x2c
// 004724f0  c20400               ret 4
// copied from an identical function in another client (function ??0LuaObjectWriter@@QAE@PAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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