// roc 2009-12 0047c510  unit: RBX::LDraw2Lua::LuaObjectWriter  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047c510
//
// 0047c510  6aff                 push -1
// 0047c512  68a4e89200           push 0x92e8a4
// 0047c517  64a100000000         mov eax, dword ptr fs:[0]
// 0047c51d  50                   push eax
// 0047c51e  64892500000000       mov dword ptr fs:[0], esp
// 0047c525  83ec20               sub esp, 0x20
// 0047c528  56                   push esi
// 0047c529  8bf1                 mov esi, ecx
// 0047c52b  89742404             mov dword ptr [esp + 4], esi
// 0047c52f  8b442434             mov eax, dword ptr [esp + 0x34]
// 0047c533  8d4e70               lea ecx, [esi + 0x70]
// 0047c536  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0047c53e  c706841e9b00         mov dword ptr [esi], 0x9b1e84
// 0047c544  894604               mov dword ptr [esi + 4], eax
// 0047c547  ff15e8b69800         call dword ptr [0x98b6e8]
// 0047c54d  d9ee                 fldz 
// 0047c54f  dd5610               fst qword ptr [esi + 0x10]
// 0047c552  6856fd9900           push 0x99fd56
// 0047c557  dd5618               fst qword ptr [esi + 0x18]
// 0047c55a  8d4c240c             lea ecx, [esp + 0xc]
// 0047c55e  dd5620               fst qword ptr [esi + 0x20]
// 0047c561  c644243001           mov byte ptr [esp + 0x30], 1
// 0047c566  dd5628               fst qword ptr [esi + 0x28]
// 0047c569  c7460800000000       mov dword ptr [esi + 8], 0
// 0047c570  dd5630               fst qword ptr [esi + 0x30]
// 0047c573  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0047c57a  dd5638               fst qword ptr [esi + 0x38]
// 0047c57d  dd5640               fst qword ptr [esi + 0x40]
// 0047c580  dd5648               fst qword ptr [esi + 0x48]
// 0047c583  dd5650               fst qword ptr [esi + 0x50]
// 0047c586  dd5658               fst qword ptr [esi + 0x58]
// 0047c589  dd5660               fst qword ptr [esi + 0x60]
// 0047c58c  dd5e68               fstp qword ptr [esi + 0x68]
// 0047c58f  ff15f4b69800         call dword ptr [0x98b6f4]
// 0047c595  8d4c2408             lea ecx, [esp + 8]
// 0047c599  ff15e4b69800         call dword ptr [0x98b6e4]
// 0047c59f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0047c5a3  8bc6                 mov eax, esi
// 0047c5a5  5e                   pop esi
// 0047c5a6  64890d00000000       mov dword ptr fs:[0], ecx
// 0047c5ad  83c42c               add esp, 0x2c
// 0047c5b0  c20400               ret 4
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