// from server: 100% by colin
// roc 2008-06 00410fe0  unit: VCBrowserViewExternal::?$CComObject  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00410fe0
//
// 00410fe0  83ec14               sub esp, 0x14
// 00410fe3  56                   push esi
// 00410fe4  e87ff92800           call 0x6a0968
// 00410fe9  50                   push eax
// 00410fea  8d4c240c             lea ecx, [esp + 0xc]
// 00410fee  e86ff92800           call 0x6a0962
// 00410ff3  8d442404             lea eax, [esp + 4]
// 00410ff7  50                   push eax
// 00410ff8  6868b48000           push 0x80b468
// 00410ffd  6a17                 push 0x17
// 00410fff  6a00                 push 0
// 00411001  6808658100           push 0x816508
// 00411006  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0041100e  ff1518418000         call dword ptr [0x804118]
// 00411014  8bf0                 mov esi, eax
// 00411016  85f6                 test esi, esi
// 00411018  747e                 je 0x411098
// 0041101a  8d4c2420             lea ecx, [esp + 0x20]
// 0041101e  ff15043f8000         call dword ptr [0x803f04]
// 00411024  56                   push esi
// 00411025  8d4c2424             lea ecx, [esp + 0x24]
// 00411029  6808df8000           push 0x80df08
// 0041102e  51                   push ecx
// 0041102f  ff15dc3e8000         call dword ptr [0x803edc]
// 00411035  83c40c               add esp, 0xc
// 00411038  56                   push esi
// 00411039  8d4c2424             lea ecx, [esp + 0x24]
// 0041103d  ff15e03e8000         call dword ptr [0x803ee0]
// 00411043  50                   push eax
// 00411044  6848658100           push 0x816548
// 00411049  e8e2820100           call 0x429330
// 0041104e  83c40c               add esp, 0xc
// 00411051  8d4c2420             lea ecx, [esp + 0x20]
// 00411055  8bf0                 mov esi, eax
// 00411057  ff15143f8000         call dword ptr [0x803f14]
// 0041105d  8b442404             mov eax, dword ptr [esp + 4]
// 00411061  85c0                 test eax, eax
// 00411063  7408                 je 0x41106d
// 00411065  8b10                 mov edx, dword ptr [eax]
// 00411067  50                   push eax
// 00411068  8b4208               mov eax, dword ptr [edx + 8]
// 0041106b  ffd0                 call eax
// 0041106d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00411071  85c0                 test eax, eax
// 00411073  7407                 je 0x41107c
// 00411075  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00411079  894804               mov dword ptr [eax + 4], ecx
// 0041107c  837c241400           cmp dword ptr [esp + 0x14], 0
// 00411081  740c                 je 0x41108f
// 00411083  8b542410             mov edx, dword ptr [esp + 0x10]
// 00411087  52                   push edx
// 00411088  6a00                 push 0
// 0041108a  e8cdf82800           call 0x6a095c
// 0041108f  8bc6                 mov eax, esi
// 00411091  5e                   pop esi
// 00411092  83c414               add esp, 0x14
// 00411095  c20800               ret 8
// 00411098  8b442404             mov eax, dword ptr [esp + 4]
// 0041109c  8bf0                 mov esi, eax
// 0041109e  85c0                 test eax, eax
// 004110a0  740c                 je 0x4110ae
// 004110a2  8b08                 mov ecx, dword ptr [eax]
// 004110a4  8b5104               mov edx, dword ptr [ecx + 4]
// 004110a7  50                   push eax
// 004110a8  ffd2                 call edx
// 004110aa  8b442404             mov eax, dword ptr [esp + 4]
// 004110ae  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004110b2  57                   push edi
// 004110b3  85c9                 test ecx, ecx
// 004110b5  7507                 jne 0x4110be
// 004110b7  bf03400080           mov edi, 0x80004003
// 004110bc  eb14                 jmp 0x4110d2
// 004110be  8931                 mov dword ptr [ecx], esi
// 004110c0  85f6                 test esi, esi
// 004110c2  740c                 je 0x4110d0
// 004110c4  8b06                 mov eax, dword ptr [esi]
// 004110c6  8b4804               mov ecx, dword ptr [eax + 4]
// 004110c9  56                   push esi
// 004110ca  ffd1                 call ecx
// 004110cc  8b442408             mov eax, dword ptr [esp + 8]
// 004110d0  33ff                 xor edi, edi
// 004110d2  85f6                 test esi, esi
// 004110d4  740c                 je 0x4110e2
// 004110d6  8b16                 mov edx, dword ptr [esi]
// 004110d8  8b4208               mov eax, dword ptr [edx + 8]
// 004110db  56                   push esi
// 004110dc  ffd0                 call eax
// 004110de  8b442408             mov eax, dword ptr [esp + 8]
// 004110e2  85c0                 test eax, eax
// 004110e4  7408                 je 0x4110ee
// 004110e6  8b08                 mov ecx, dword ptr [eax]
// 004110e8  8b5108               mov edx, dword ptr [ecx + 8]
// 004110eb  50                   push eax
// 004110ec  ffd2                 call edx
// 004110ee  8b442410             mov eax, dword ptr [esp + 0x10]
// 004110f2  85c0                 test eax, eax
// 004110f4  7407                 je 0x4110fd
// 004110f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004110fa  894804               mov dword ptr [eax + 4], ecx
// 004110fd  837c241800           cmp dword ptr [esp + 0x18], 0
// 00411102  740c                 je 0x411110
// 00411104  8b542414             mov edx, dword ptr [esp + 0x14]
// 00411108  52                   push edx
// 00411109  6a00                 push 0
// 0041110b  e84cf82800           call 0x6a095c
// 00411110  8bc7                 mov eax, edi
// 00411112  5f                   pop edi
// 00411113  5e                   pop esi
// 00411114  83c414               add esp, 0x14
// 00411117  c20800               ret 8

struct Link {
    void* unused;
    void* previous;
};

struct State {
    void* previous;
    Link* link;
    void* context;
    int active;

    State(void*);
};

struct Object;

struct ObjectTable {
    int (__stdcall* query)(Object*, const void*, void**);
    unsigned long (__stdcall* addRef)(Object*);
    unsigned long (__stdcall* release)(Object*);
};

struct Object {
    ObjectTable* table;
};

struct String {
    void* data;
};

extern "C" void* __cdecl get_state();
extern "C" void __stdcall release_state(int, void*);
extern "C" int (__stdcall* CoCreateInstance)(
    const void*, Object*, unsigned long, const void*, void**);

extern const unsigned char classId[];
extern const unsigned char interfaceId[];
extern const char errorFormat[];
extern const char logContext[];

extern void (__thiscall* constructString)(String*);
extern void (__cdecl* formatString)(String*, const char*, ...);
extern const char* (__thiscall* stringText)(String*);
extern void (__thiscall* destroyString)(String*);

extern void __cdecl logMessage(int, int, int);

int __stdcall function(void*, Object** output)
{
    State state(get_state());
    Object* object = 0;

    int result = CoCreateInstance(
        classId, 0, 23, interfaceId, reinterpret_cast<void**>(&object));

    if (result) {
        constructString(reinterpret_cast<String*>(&output));
        formatString(reinterpret_cast<String*>(&output), errorFormat, result);

        result = reinterpret_cast<int (__cdecl*)(int, int, int)>(logMessage)(
            reinterpret_cast<int>(logContext),
            reinterpret_cast<int>(
                stringText(reinterpret_cast<String*>(&output))),
            result);

        destroyString(reinterpret_cast<String*>(&output));

        if (object)
            object->table->release(object);

        if (state.link)
            state.link->previous = state.previous;

        if (state.active)
            release_state(0, state.context);

        return result;
    }

    Object* temporary = object;
    if (object)
        object->table->addRef(object);

    Object* current = object;
    int copied;
    if (!output) {
        copied = static_cast<int>(0x80004003UL);
    } else {
        *output = temporary;
        if (temporary) {
            temporary->table->addRef(temporary);
            current = object;
        }
        copied = 0;
    }

    if (temporary) {
        temporary->table->release(temporary);
        current = object;
    }

    if (current)
        current->table->release(current);

    if (state.link)
        state.link->previous = state.previous;

    if (state.active)
        release_state(0, state.context);

    return copied;
}
