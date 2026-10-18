// from server: 87% by colin
// from server: 84% by colin
// roc 2008-06 004284e0  unit: MainLogManager  size: 249 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004284e0
//
// 004284e0  6aff                 push -1
// 004284e2  689bf17b00           push 0x7bf19b
// 004284e7  64a100000000         mov eax, dword ptr fs:[0]
// 004284ed  50                   push eax
// 004284ee  64892500000000       mov dword ptr fs:[0], esp
// 004284f5  81ec48010000         sub esp, 0x148
// 004284fb  56                   push esi
// 004284fc  57                   push edi
// 004284fd  8d442408             lea eax, [esp + 8]
// 00428501  50                   push eax
// 00428502  83c104               add ecx, 4
// 00428505  e896f6ffff           call 0x427ba0
// 0042850a  8d4c2408             lea ecx, [esp + 8]
// 0042850e  c784245801000000000000 mov dword ptr [esp + 0x158], 0
// 00428519  ff15e02f8000         call dword ptr [0x802fe0]
// 0042851f  40                   inc eax
// 00428520  50                   push eax
// 00428521  8d4c240c             lea ecx, [esp + 0xc]
// 00428525  ff1584338000         call dword ptr [0x803384]
// 0042852b  50                   push eax
// 0042852c  ff15142b8000         call dword ptr [0x802b14]
// 00428532  6aff                 push -1
// 00428534  8d4c240c             lea ecx, [esp + 0xc]
// 00428538  ff1580338000         call dword ptr [0x803380]
// 0042853e  68e8038100           push 0x8103e8
// 00428543  8d4c240c             lea ecx, [esp + 0xc]
// 00428547  51                   push ecx
// 00428548  8d542414             lea edx, [esp + 0x14]
// 0042854c  52                   push edx
// 0042854d  e80e5cfeff           call 0x40e160
// 00428552  83c40c               add esp, 0xc
// 00428555  8d4c2410             lea ecx, [esp + 0x10]
// 00428559  51                   push ecx
// 0042855a  8bc8                 mov ecx, eax
// 0042855c  ff15e03e8000         call dword ptr [0x803ee0]
// 00428562  50                   push eax
// 00428563  ff1508228000         call dword ptr [0x802208]
// 00428569  8d4c240c             lea ecx, [esp + 0xc]
// 0042856d  8bf0                 mov esi, eax
// 0042856f  ff15143f8000         call dword ptr [0x803f14]
// 00428575  83feff               cmp esi, -1
// 00428578  7419                 je 0x428593
// 0042857a  8b3d04228000         mov edi, dword ptr [0x802204]
// 00428580  f644241010           test byte ptr [esp + 0x10], 0x10
// 00428585  742f                 je 0x4285b6
// 00428587  8d542410             lea edx, [esp + 0x10]
// 0042858b  52                   push edx
// 0042858c  56                   push esi
// 0042858d  ffd7                 call edi
// 0042858f  85c0                 test eax, eax
// 00428591  75ed                 jne 0x428580
// 00428593  8d4c2408             lea ecx, [esp + 8]
// 00428597  ff15143f8000         call dword ptr [0x803f14]
// 0042859d  5f                   pop edi
// 0042859e  32c0                 xor al, al
// 004285a0  5e                   pop esi
// 004285a1  8b8c2448010000       mov ecx, dword ptr [esp + 0x148]
// 004285a8  64890d00000000       mov dword ptr fs:[0], ecx
// 004285af  81c454010000         add esp, 0x154
// 004285b5  c3                   ret 
// 004285b6  8d4c2408             lea ecx, [esp + 8]
// 004285ba  ff15143f8000         call dword ptr [0x803f14]
// 004285c0  8b8c2450010000       mov ecx, dword ptr [esp + 0x150]
// 004285c7  5f                   pop edi
// 004285c8  b001                 mov al, 1
// 004285ca  5e                   pop esi
// 004285cb  64890d00000000       mov dword ptr fs:[0], ecx
// 004285d2  81c454010000         add esp, 0x154
// 004285d8  c3                   ret 





struct String;

extern int (__thiscall *stringLength)(const String*);
extern char* (__thiscall *stringBuffer)(String*, int);
extern void (__thiscall *stringRelease)(String*, int);
extern const char* (__thiscall *stringData)(const String*);
extern void (__thiscall *stringDestroy)(String*);

extern "C" char* (__stdcall *PathAddBackslashA)(char*);
extern "C" void* (__stdcall *FindFirstFileA)(const char*, void*);
extern "C" int (__stdcall *FindNextFileA)(void*, void*);

struct String {
    char* data;
    __declspec(dllimport) ~String() throw();
    int length() const;
    char* buffer(int);
    void release(int);
    __declspec(nothrow) const char* c_str() const;
};

inline int String::length() const {
    return stringLength(this);
}

inline char* String::buffer(int n) {
    return stringBuffer(this, n);
}

inline void String::release(int n) {
    stringRelease(this, n);
}

inline const char* String::c_str() const {
    return stringData(this);
}

extern String __cdecl concatenate(const String&, const char*);

struct PathSource {
    String get();
};

struct MainLogManager {
    unsigned long prefix;
    PathSource source;
    bool hasDump();
};

bool MainLogManager::hasDump() {
    String path = source.get();
    PathAddBackslashA(path.buffer(path.length() + 1));
    path.release(-1);

    struct FindData {
        unsigned long attributes;
        unsigned char remaining[316];
    } data;

    String pattern = concatenate(path, "*.dmp");
    void* handle = FindFirstFileA(pattern.c_str(), &data);
    if (handle != reinterpret_cast<void*>(-1)) {
        int (__stdcall *next)(void*, void*) = FindNextFileA;
        do {
            if (!(data.attributes & 0x10))
                return true;
        } while (next(handle, &data));
    }
    return false;
}
