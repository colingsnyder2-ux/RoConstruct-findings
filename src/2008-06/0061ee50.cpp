// from server: 100% by king_originala
// roc 2008-06 0061ee50  unit: RBX::Lua::LuaArguments  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061ee50
//
// 0061ee50  64a100000000         mov eax, dword ptr fs:[0]
// 0061ee56  6aff                 push -1
// 0061ee58  68b9fe7c00           push 0x7cfeb9
// 0061ee5d  50                   push eax
// 0061ee5e  64892500000000       mov dword ptr fs:[0], esp
// 0061ee65  83ec44               sub esp, 0x44
// 0061ee68  56                   push esi
// 0061ee69  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 0061ee6d  b9ccf78000           mov ecx, 0x80f7cc
// 0061ee72  8bc6                 mov eax, esi
// 0061ee74  8a10                 mov dl, byte ptr [eax]
// 0061ee76  3a11                 cmp dl, byte ptr [ecx]
// 0061ee78  751a                 jne 0x61ee94
// 0061ee7a  84d2                 test dl, dl
// 0061ee7c  7412                 je 0x61ee90
// 0061ee7e  8a5001               mov dl, byte ptr [eax + 1]
// 0061ee81  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061ee84  750e                 jne 0x61ee94
// 0061ee86  83c002               add eax, 2
// 0061ee89  83c102               add ecx, 2
// 0061ee8c  84d2                 test dl, dl
// 0061ee8e  75e4                 jne 0x61ee74
// 0061ee90  33c0                 xor eax, eax
// 0061ee92  eb05                 jmp 0x61ee99
// 0061ee94  1bc0                 sbb eax, eax
// 0061ee96  83d8ff               sbb eax, -1
// 0061ee99  85c0                 test eax, eax
// 0061ee9b  753d                 jne 0x61eeda
// 0061ee9d  8b442458             mov eax, dword ptr [esp + 0x58]
// 0061eea1  8b08                 mov ecx, dword ptr [eax]
// 0061eea3  8b4104               mov eax, dword ptr [ecx + 4]
// 0061eea6  83c004               add eax, 4
// 0061eea9  83781810             cmp dword ptr [eax + 0x18], 0x10
// 0061eead  7205                 jb 0x61eeb4
// 0061eeaf  8b4004               mov eax, dword ptr [eax + 4]
// 0061eeb2  eb03                 jmp 0x61eeb7
// 0061eeb4  83c004               add eax, 4
// 0061eeb7  8b542460             mov edx, dword ptr [esp + 0x60]
// 0061eebb  50                   push eax
// 0061eebc  52                   push edx
// 0061eebd  e8be33ffff           call 0x612280
// 0061eec2  83c408               add esp, 8
// 0061eec5  b801000000           mov eax, 1
// 0061eeca  5e                   pop esi
// 0061eecb  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0061eecf  64890d00000000       mov dword ptr fs:[0], ecx
// 0061eed6  83c450               add esp, 0x50
// 0061eed9  c3                   ret 
// 0061eeda  b978848100           mov ecx, 0x818478
// 0061eedf  8bc6                 mov eax, esi
// 0061eee1  8a10                 mov dl, byte ptr [eax]
// 0061eee3  3a11                 cmp dl, byte ptr [ecx]
// 0061eee5  751a                 jne 0x61ef01
// 0061eee7  84d2                 test dl, dl
// 0061eee9  7412                 je 0x61eefd
// 0061eeeb  8a5001               mov dl, byte ptr [eax + 1]
// 0061eeee  3a5101               cmp dl, byte ptr [ecx + 1]
// 0061eef1  750e                 jne 0x61ef01
// 0061eef3  83c002               add eax, 2
// 0061eef6  83c102               add ecx, 2
// 0061eef9  84d2                 test dl, dl
// 0061eefb  75e4                 jne 0x61eee1
// 0061eefd  33c0                 xor eax, eax
// 0061eeff  eb05                 jmp 0x61ef06
// 0061ef01  1bc0                 sbb eax, eax
// 0061ef03  83d8ff               sbb eax, -1
// 0061ef06  85c0                 test eax, eax
// 0061ef08  7531                 jne 0x61ef3b
// 0061ef0a  8b442458             mov eax, dword ptr [esp + 0x58]
// 0061ef0e  8b08                 mov ecx, dword ptr [eax]
// 0061ef10  db410c               fild dword ptr [ecx + 0xc]
// 0061ef13  8b542460             mov edx, dword ptr [esp + 0x60]
// 0061ef17  83ec08               sub esp, 8
// 0061ef1a  dd1c24               fstp qword ptr [esp]
// 0061ef1d  52                   push edx
// 0061ef1e  e8dd32ffff           call 0x612200
// 0061ef23  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0061ef27  83c40c               add esp, 0xc
// 0061ef2a  b801000000           mov eax, 1
// 0061ef2f  5e                   pop esi
// 0061ef30  64890d00000000       mov dword ptr fs:[0], ecx
// 0061ef37  83c450               add esp, 0x50
// 0061ef3a  c3                   ret 
// 0061ef3b  56                   push esi
// 0061ef3c  8d442408             lea eax, [esp + 8]
// 0061ef40  6808228300           push 0x832208
// 0061ef45  50                   push eax
// 0061ef46  e8c5abeeff           call 0x509b10
// 0061ef4b  83c40c               add esp, 0xc
// 0061ef4e  50                   push eax
// 0061ef4f  8d4c2424             lea ecx, [esp + 0x24]
// 0061ef53  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0061ef5b  e8f0addeff           call 0x409d50
// 0061ef60  68c81b8d00           push 0x8d1bc8
// 0061ef65  8d4c2424             lea ecx, [esp + 0x24]
// 0061ef69  51                   push ecx
// 0061ef6a  e81d260800           call 0x6a158c

extern "C" int __cdecl strcmp(const char *, const char *);
#pragma intrinsic(strcmp)

struct String
{
    unsigned int proxy;
    union
    {
        char buffer[16];
        char *pointer;
    };
    unsigned int length;
    unsigned int capacity;

    ~String();
};

struct Error
{
    char storage[40];

    Error(const String &);
    Error(const Error &);
    ~Error();
};

extern String __cdecl Function00509b10(const char *, ...);
extern "C" void __cdecl Function00612280(void *, const char *);
extern "C" void __cdecl Function00612200(void *, double);

int __cdecl Function0061ee50(void **object, const char *name, void *state)
{
    if (strcmp(name, "Name") == 0)
    {
        String *text = (String *)((char *)*(void **)((char *)*object + 4) + 4);
        Function00612280(state, text->capacity >= 16 ? text->pointer : text->buffer);
        return 1;
    }

    if (strcmp(name, "Value") == 0)
    {
        Function00612200(state, (double)*(int *)((char *)*object + 12));
        return 1;
    }

    throw Error(Function00509b10("%s is not a valid member", name));
}
