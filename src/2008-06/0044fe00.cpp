// from server: 75% by colin
// from server: 66% by colin
// roc 2008-06 0044fe00  unit: CRobloxDoc  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044fe00
//
// 0044fe00  6aff                 push -1
// 0044fe02  68c4177c00           push 0x7c17c4
// 0044fe07  64a100000000         mov eax, dword ptr fs:[0]
// 0044fe0d  50                   push eax
// 0044fe0e  64892500000000       mov dword ptr fs:[0], esp
// 0044fe15  83ec4c               sub esp, 0x4c
// 0044fe18  53                   push ebx
// 0044fe19  56                   push esi
// 0044fe1a  8b742464             mov esi, dword ptr [esp + 0x64]
// 0044fe1e  57                   push edi
// 0044fe1f  33ff                 xor edi, edi
// 0044fe21  8bce                 mov ecx, esi
// 0044fe23  897c240c             mov dword ptr [esp + 0xc], edi
// 0044fe27  ff15043f8000         call dword ptr [0x803f04]
// 0044fe2d  bb01000000           mov ebx, 1
// 0044fe32  68ec118100           push 0x8111ec
// 0044fe37  8d442418             lea eax, [esp + 0x18]
// 0044fe3b  53                   push ebx
// 0044fe3c  50                   push eax
// 0044fe3d  897c246c             mov dword ptr [esp + 0x6c], edi
// 0044fe41  895c2418             mov dword ptr [esp + 0x18], ebx
// 0044fe45  e8767c1500           call 0x5a7ac0
// 0044fe4a  83c40c               add esp, 0xc
// 0044fe4d  8bf8                 mov edi, eax
// 0044fe4f  6804010000           push 0x104
// 0044fe54  6804010000           push 0x104
// 0044fe59  8bce                 mov ecx, esi
// 0044fe5b  895c2468             mov dword ptr [esp + 0x68], ebx
// 0044fe5f  ff1584338000         call dword ptr [0x803384]
// 0044fe65  50                   push eax
// 0044fe66  8bcf                 mov ecx, edi
// 0044fe68  ff1564248000         call dword ptr [0x802464]
// 0044fe6e  50                   push eax
// 0044fe6f  ff1518228000         call dword ptr [0x802218]
// 0044fe75  8d4c2414             lea ecx, [esp + 0x14]
// 0044fe79  c644246000           mov byte ptr [esp + 0x60], 0
// 0044fe7e  ff1568248000         call dword ptr [0x802468]
// 0044fe84  6aff                 push -1
// 0044fe86  8bce                 mov ecx, esi
// 0044fe88  ff1580338000         call dword ptr [0x803380]
// 0044fe8e  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0044fe92  51                   push ecx
// 0044fe93  8bce                 mov ecx, esi
// 0044fe95  ff1550338000         call dword ptr [0x803350]
// 0044fe9b  6894798100           push 0x817994
// 0044fea0  8bce                 mov ecx, esi
// 0044fea2  ff1550338000         call dword ptr [0x803350]
// 0044fea8  8bce                 mov ecx, esi
// 0044feaa  ff15e03e8000         call dword ptr [0x803ee0]
// 0044feb0  50                   push eax
// 0044feb1  8d4c2414             lea ecx, [esp + 0x14]
// 0044feb5  e8c612fbff           call 0x401180
// 0044feba  8b08                 mov ecx, dword ptr [eax]
// 0044febc  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0044fec0  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 0044fec6  8b10                 mov edx, dword ptr [eax]
// 0044fec8  51                   push ecx
// 0044fec9  50                   push eax
// 0044feca  8b421c               mov eax, dword ptr [edx + 0x1c]
// 0044fecd  c744246802000000     mov dword ptr [esp + 0x68], 2
// 0044fed5  ffd0                 call eax
// 0044fed7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0044fedb  85c0                 test eax, eax
// 0044fedd  51                   push ecx
// 0044fede  0f95c3               setne bl
// 0044fee1  c644246400           mov byte ptr [esp + 0x64], 0
// 0044fee6  ff1544298000         call dword ptr [0x802944]
// 0044feec  84db                 test bl, bl
// 0044feee  7434                 je 0x44ff24
// 0044fef0  687c798100           push 0x81797c
// 0044fef5  8d4c2418             lea ecx, [esp + 0x18]
// 0044fef9  ff1558248000         call dword ptr [0x802458]
// 0044feff  8d542414             lea edx, [esp + 0x14]
// 0044ff03  52                   push edx
// 0044ff04  8d4c2434             lea ecx, [esp + 0x34]
// 0044ff08  c744246403000000     mov dword ptr [esp + 0x64], 3
// 0044ff10  e83b9efbff           call 0x409d50
// 0044ff15  68c81b8d00           push 0x8d1bc8
// 0044ff1a  8d442434             lea eax, [esp + 0x34]
// 0044ff1e  50                   push eax
// 0044ff1f  e868162500           call 0x6a158c
// 0044ff24  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0044ff28  5f                   pop edi
// 0044ff29  8bc6                 mov eax, esi
// 0044ff2b  5e                   pop esi
// 0044ff2c  5b                   pop ebx
// 0044ff2d  64890d00000000       mov dword ptr fs:[0], ecx
// 0044ff34  83c458               add esp, 0x58
// 0044ff37  c3                   ret 

struct Text;
struct String;

extern void (__thiscall *text_construct)(Text*);
extern void (__thiscall *text_destroy)(Text*);
extern char* (__thiscall *text_buffer)(Text*, int);
extern void (__thiscall *text_release)(Text*, int);
extern void (__thiscall *text_append)(Text*, const char*);
extern const char* (__thiscall *text_data)(const Text*);

extern void (__thiscall *string_construct)(String*, const char*);
extern void (__thiscall *string_destroy)(String*);
extern const char* (__thiscall *string_data)(const String*);

extern unsigned long (__stdcall *GetShortPathNameA)(
    const char*, char*, unsigned long);
extern void (__stdcall *SysFreeString)(unsigned short*);

struct __declspec(dllimport) Text
{
    char* data;
    Text();
    ~Text();
    char* buffer(int);
    void release(int);
    void append(const char*);
    const char* c_str() const;
};

struct String
{
    unsigned char storage[28];
    String(const char*);
    ~String();
    const char* c_str() const;
};

inline String::String(const char* s) { string_construct(this, s); }
inline String::~String() { string_destroy(this); }
inline const char* String::c_str() const { return string_data(this); }

String __cdecl make_name(int, const char*);

struct Wide
{
    unsigned short* data;
    Wide(const char*);
    ~Wide();
    operator unsigned short*() const;
};

inline Wide::~Wide() { SysFreeString(data); }
inline Wide::operator unsigned short*() const { return data; }

struct Error
{
    unsigned char storage[40];
    Error(const String&);
    Error(const Error&);
    ~Error();
};

struct Interface
{
    virtual void __stdcall slot0() = 0;
    virtual void __stdcall slot1() = 0;
    virtual void __stdcall slot2() = 0;
    virtual void __stdcall slot3() = 0;
    virtual void __stdcall slot4() = 0;
    virtual void __stdcall slot5() = 0;
    virtual void __stdcall slot6() = 0;
    virtual long __stdcall copy(unsigned short*) = 0;
};

struct Document
{
    unsigned char padding[148];
    Interface* object;
};

Text __cdecl copy_document(Document* document, const char* suffix)
{
    Text result;
    GetShortPathNameA(make_name(1, "Test").c_str(),
                      result.buffer(260), 260);
    result.release(-1);
    result.append(suffix);
    result.append(".rbxl");

    long hr = document->object->copy(Wide(result.c_str()));

    if (hr != 0)
        throw Error(String("Failed to copy document"));

    return result;
}
