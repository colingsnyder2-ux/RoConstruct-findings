// from server: 100% by colin
// roc 2008-06 00428790  unit: MainLogManager  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00428790
//
// 00428790  6aff                 push -1
// 00428792  68c9107c00           push 0x7c10c9
// 00428797  64a100000000         mov eax, dword ptr fs:[0]
// 0042879d  50                   push eax
// 0042879e  64892500000000       mov dword ptr fs:[0], esp
// 004287a5  51                   push ecx
// 004287a6  8d0c24               lea ecx, [esp]
// 004287a9  ff15043f8000         call dword ptr [0x803f04]
// 004287af  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004287b3  83791400             cmp dword ptr [ecx + 0x14], 0
// 004287b7  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004287bf  762b                 jbe 0x4287ec
// 004287c1  8b442420             mov eax, dword ptr [esp + 0x20]
// 004287c5  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004287c9  50                   push eax
// 004287ca  52                   push edx
// 004287cb  ff1564248000         call dword ptr [0x802464]
// 004287d1  50                   push eax
// 004287d2  8b442420             mov eax, dword ptr [esp + 0x20]
// 004287d6  50                   push eax
// 004287d7  8d4c2410             lea ecx, [esp + 0x10]
// 004287db  6864048100           push 0x810464
// 004287e0  51                   push ecx
// 004287e1  ff15dc3e8000         call dword ptr [0x803edc]
// 004287e7  83c418               add esp, 0x18
// 004287ea  eb22                 jmp 0x42880e
// 004287ec  8b542420             mov edx, dword ptr [esp + 0x20]
// 004287f0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004287f4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004287f8  52                   push edx
// 004287f9  50                   push eax
// 004287fa  51                   push ecx
// 004287fb  8d54240c             lea edx, [esp + 0xc]
// 004287ff  684c048100           push 0x81044c
// 00428804  52                   push edx
// 00428805  ff15dc3e8000         call dword ptr [0x803edc]
// 0042880b  83c414               add esp, 0x14
// 0042880e  8d0c24               lea ecx, [esp]
// 00428811  ff15e03e8000         call dword ptr [0x803ee0]
// 00428817  50                   push eax
// 00428818  6a01                 push 1
// 0042881a  e801f4ffff           call 0x427c20
// 0042881f  8b0d04000000         mov ecx, dword ptr [4]
// 00428825  33c0                 xor eax, eax
// 00428827  8908                 mov dword ptr [eax], ecx
// 00428829  83c408               add esp, 8
// 0042882c  8d0c24               lea ecx, [esp]
// 0042882f  ff15143f8000         call dword ptr [0x803f14]
// 00428835  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00428839  32c0                 xor al, al
// 0042883b  64890d00000000       mov dword ptr fs:[0], ecx
// 00428842  83c410               add esp, 0x10
// 00428845  c3                   ret 

struct Text
{
    char reserved[20];
    unsigned int length;
};

struct Buffer
{
    char reserved[4];

    __declspec(dllimport) Buffer();
    __declspec(dllimport) ~Buffer() throw();
    __declspec(dllimport) const char* c_str() const;
};

extern const char* (__thiscall* text_data)(const Text*);
extern void (__cdecl* format_buffer)(Buffer*, const char*, ...);

extern const char format_with_text[];
extern const char format_without_text[];
extern void __cdecl log_message(int, const char*);







bool __cdecl func_00428790(const char* expression, const Text* text,
                          const char* file, int line)
{
    Buffer message;

    if (text->length > 0)
        format_buffer(&message, format_with_text,
                      expression, text_data(text), file, line);
    else
        format_buffer(&message, format_without_text,
                      expression, file, line);

    log_message(1, message.c_str());

    volatile unsigned int* p = 0;
    p[0] = p[1];

    return false;
}
