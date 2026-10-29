// roc 2010-06 004828b0  unit: RBX::LDraw2Lua::LuaObjectWriter  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004828b0
//
// 004828b0  6aff                 push -1
// 004828b2  68045a9800           push 0x985a04
// 004828b7  64a100000000         mov eax, dword ptr fs:[0]
// 004828bd  50                   push eax
// 004828be  64892500000000       mov dword ptr fs:[0], esp
// 004828c5  83ec20               sub esp, 0x20
// 004828c8  56                   push esi
// 004828c9  8bf1                 mov esi, ecx
// 004828cb  89742404             mov dword ptr [esp + 4], esi
// 004828cf  8b442434             mov eax, dword ptr [esp + 0x34]
// 004828d3  8d4e70               lea ecx, [esi + 0x70]
// 004828d6  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004828de  c706ac2fa100         mov dword ptr [esi], 0xa12fac
// 004828e4  894604               mov dword ptr [esi + 4], eax
// 004828e7  ff1504a49e00         call dword ptr [0x9ea404]
// 004828ed  d9ee                 fldz 
// 004828ef  dd5610               fst qword ptr [esi + 0x10]
// 004828f2  68fe08a000           push 0xa008fe
// 004828f7  dd5618               fst qword ptr [esi + 0x18]
// 004828fa  8d4c240c             lea ecx, [esp + 0xc]
// 004828fe  dd5620               fst qword ptr [esi + 0x20]
// 00482901  c644243001           mov byte ptr [esp + 0x30], 1
// 00482906  dd5628               fst qword ptr [esi + 0x28]
// 00482909  c7460800000000       mov dword ptr [esi + 8], 0
// 00482910  dd5630               fst qword ptr [esi + 0x30]
// 00482913  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0048291a  dd5638               fst qword ptr [esi + 0x38]
// 0048291d  dd5640               fst qword ptr [esi + 0x40]
// 00482920  dd5648               fst qword ptr [esi + 0x48]
// 00482923  dd5650               fst qword ptr [esi + 0x50]
// 00482926  dd5658               fst qword ptr [esi + 0x58]
// 00482929  dd5660               fst qword ptr [esi + 0x60]
// 0048292c  dd5e68               fstp qword ptr [esi + 0x68]
// 0048292f  ff1510a49e00         call dword ptr [0x9ea410]
// 00482935  8d4c2408             lea ecx, [esp + 8]
// 00482939  ff1500a49e00         call dword ptr [0x9ea400]
// 0048293f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00482943  8bc6                 mov eax, esi
// 00482945  5e                   pop esi
// 00482946  64890d00000000       mov dword ptr fs:[0], ecx
// 0048294d  83c42c               add esp, 0x2c
// 00482950  c20400               ret 4
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