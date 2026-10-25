// from server: 100% by king_originala
// roc 2008-06 004286e0  unit: MainLogManager  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004286e0
//
// 004286e0  6aff                 push -1
// 004286e2  68c9107c00           push 0x7c10c9
// 004286e7  64a100000000         mov eax, dword ptr fs:[0]
// 004286ed  50                   push eax
// 004286ee  64892500000000       mov dword ptr fs:[0], esp
// 004286f5  51                   push ecx
// 004286f6  8d0c24               lea ecx, [esp]
// 004286f9  ff15043f8000         call dword ptr [0x803f04]
// 004286ff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00428703  83791400             cmp dword ptr [ecx + 0x14], 0
// 00428707  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0042870f  762b                 jbe 0x42873c
// 00428711  8b442420             mov eax, dword ptr [esp + 0x20]
// 00428715  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00428719  50                   push eax
// 0042871a  52                   push edx
// 0042871b  ff1564248000         call dword ptr [0x802464]
// 00428721  50                   push eax
// 00428722  8b442420             mov eax, dword ptr [esp + 0x20]
// 00428726  50                   push eax
// 00428727  8d4c2410             lea ecx, [esp + 0x10]
// 0042872b  6820048100           push 0x810420
// 00428730  51                   push ecx
// 00428731  ff15dc3e8000         call dword ptr [0x803edc]
// 00428737  83c418               add esp, 0x18
// 0042873a  eb22                 jmp 0x42875e
// 0042873c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00428740  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00428744  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00428748  52                   push edx
// 00428749  50                   push eax
// 0042874a  51                   push ecx
// 0042874b  8d54240c             lea edx, [esp + 0xc]
// 0042874f  6804048100           push 0x810404
// 00428754  52                   push edx
// 00428755  ff15dc3e8000         call dword ptr [0x803edc]
// 0042875b  83c414               add esp, 0x14
// 0042875e  8d0c24               lea ecx, [esp]
// 00428761  ff15e03e8000         call dword ptr [0x803ee0]
// 00428767  50                   push eax
// 00428768  6a02                 push 2
// 0042876a  e8b1f4ffff           call 0x427c20
// 0042876f  83c408               add esp, 8
// 00428772  8d0c24               lea ecx, [esp]
// 00428775  ff15143f8000         call dword ptr [0x803f14]
// 0042877b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0042877f  32c0                 xor al, al
// 00428781  64890d00000000       mov dword ptr fs:[0], ecx
// 00428788  83c410               add esp, 0x10
// 0042878b  c3                   ret 

struct Text {
    char storage[20];
    unsigned int length;
};

struct Buffer {
    void* data;
    __declspec(dllimport) Buffer();
    __declspec(dllimport) ~Buffer() throw();
    __declspec(dllimport) const char* c_str() const;
};

extern const char* (__thiscall* textData)(const Text*);
extern void (__cdecl* formatBuffer)(Buffer*, const char*, ...);

extern const char formatWithMessage[];
extern const char formatWithoutMessage[];
extern void __cdecl writeLog(int, const char*);

bool __cdecl reportAssertion(const char* expression, const Text* message,
                            const char* filename, int line)
{
    Buffer buffer;

    if (message->length > 0)
        formatBuffer(&buffer, formatWithMessage, expression,
                     textData(message), filename, line);
    else
        formatBuffer(&buffer, formatWithoutMessage, expression, filename, line);

    writeLog(2, buffer.c_str());
    return false;
}
