// from server: 100% by king_originala
// roc 2008-06 00420790  unit: CInstanceRecord::CNameItem  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420790
//
// 00420790  51                   push ecx
// 00420791  8b497c               mov ecx, dword ptr [ecx + 0x7c]
// 00420794  56                   push esi
// 00420795  81c110010000         add ecx, 0x110
// 0042079b  c744240400000000     mov dword ptr [esp + 4], 0
// 004207a3  ff1564248000         call dword ptr [0x802464]
// 004207a9  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004207ad  50                   push eax
// 004207ae  8bce                 mov ecx, esi
// 004207b0  ff15103f8000         call dword ptr [0x803f10]
// 004207b6  8bc6                 mov eax, esi
// 004207b8  5e                   pop esi
// 004207b9  59                   pop ecx
// 004207ba  c20800               ret 8

extern const char* (__thiscall *getText)(void*);
extern void (__thiscall *constructText)(void*, const char*);

struct NameItem {
    char padding[0x7c];
    char* instance;
    void* getName(void* result, int unused);
};

void* NameItem::getName(void* result, int unused)
{
    volatile int temporary = 0;
    const char* text = getText(instance + 0x110);
    constructText(result, text);
    return result;
}
