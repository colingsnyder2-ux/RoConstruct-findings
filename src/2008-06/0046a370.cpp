// from server: 100% by Espeon
// roc 2008-06 0046a370  unit: DxUserInput  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046a370
//
// 0046a370  6aff                 push -1
// 0046a372  68e3377c00           push 0x7c37e3
// 0046a377  64a100000000         mov eax, dword ptr fs:[0]
// 0046a37d  50                   push eax
// 0046a37e  64892500000000       mov dword ptr fs:[0], esp
// 0046a385  83ec10               sub esp, 0x10
// 0046a388  56                   push esi
// 0046a389  57                   push edi
// 0046a38a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0046a392  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0046a396  8bf1                 mov esi, ecx
// 0046a398  8bcf                 mov ecx, edi
// 0046a39a  ff15043f8000         call dword ptr [0x803f04]
// 0046a3a0  8d4c2408             lea ecx, [esp + 8]
// 0046a3a4  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0046a3ac  ff15043f8000         call dword ptr [0x803f04]
// 0046a3b2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0046a3b6  8b08                 mov ecx, dword ptr [eax]
// 0046a3b8  0fb75602             movzx edx, word ptr [esi + 2]
// 0046a3bc  0fb706               movzx eax, word ptr [esi]
// 0046a3bf  51                   push ecx
// 0046a3c0  52                   push edx
// 0046a3c1  50                   push eax
// 0046a3c2  8d4c2414             lea ecx, [esp + 0x14]
// 0046a3c6  685cc48100           push 0x81c45c
// 0046a3cb  51                   push ecx
// 0046a3cc  c744243401000000     mov dword ptr [esp + 0x34], 1
// 0046a3d4  ff15dc3e8000         call dword ptr [0x803edc]
// 0046a3da  83c414               add esp, 0x14
// 0046a3dd  8d542414             lea edx, [esp + 0x14]
// 0046a3e1  52                   push edx
// 0046a3e2  8d442410             lea eax, [esp + 0x10]
// 0046a3e6  50                   push eax
// 0046a3e7  8d4c2410             lea ecx, [esp + 0x10]
// 0046a3eb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0046a3f3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0046a3fb  ff15cc328000         call dword ptr [0x8032cc]
// 0046a401  8b4e04               mov ecx, dword ptr [esi + 4]
// 0046a404  50                   push eax
// 0046a405  51                   push ecx
// 0046a406  e85dbf3300           call 0x7a6368
// 0046a40b  85c0                 test eax, eax
// 0046a40d  740d                 je 0x46a41c
// 0046a40f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0046a413  52                   push edx
// 0046a414  8bcf                 mov ecx, edi
// 0046a416  ff15b83e8000         call dword ptr [0x803eb8]
// 0046a41c  8d4c2408             lea ecx, [esp + 8]
// 0046a420  ff15143f8000         call dword ptr [0x803f14]
// 0046a426  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046a42a  8bc7                 mov eax, edi
// 0046a42c  5f                   pop edi
// 0046a42d  5e                   pop esi
// 0046a42e  64890d00000000       mov dword ptr fs:[0], ecx
// 0046a435  83c41c               add esp, 0x1c
// 0046a438  c20800               ret 8

// from server: 86% by colin
struct __declspec(dllimport) String
{
    char* data;

    String() throw();
    ~String() throw();
    void __cdecl Format(const char* format, ...);
    operator const char*() const throw();
    String& operator=(const char* text);
};

struct __declspec(dllimport) PathString
{
    char* data;

    PathString() throw();
    ~PathString() throw();
    void __cdecl Format(const char* format, ...);
    operator const char*() const throw();
    PathString& operator=(const char* text);
};

extern "C" int __stdcall VerQueryValueA(
    const void* block,
    const char* subBlock,
    void** value,
    unsigned int* length);

extern "C" int __cdecl sub_7A6368(void*, void*);

struct DxUserInput
{
    unsigned short language;
    unsigned short codePage;
    void* block;

    String query(const String& name);
};

String DxUserInput::query(const String& name)
{
    String result;
    PathString path;

    path.Format("\\StringFileInfo\\%04x%04x\\%s",
                language, codePage, name.data);

    void* value = 0;
    unsigned int length = 0;

    if (VerQueryValueA(block, path, &value, &length))
        result = static_cast<const char*>(value);

    return result;
}
