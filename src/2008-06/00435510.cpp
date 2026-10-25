// from server: 100% by tester
// roc 2008-06 00435510  unit: CDeclarationView  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00435510
//
// 00435510  56                   push esi
// 00435511  8b742408             mov esi, dword ptr [esp + 8]
// 00435515  833e00               cmp dword ptr [esi], 0
// 00435518  57                   push edi
// 00435519  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0043551d  7e0d                 jle 0x43552c
// 0043551f  68502e8100           push 0x812e50
// 00435524  8bcf                 mov ecx, edi
// 00435526  ff1548248000         call dword ptr [0x802448]
// 0043552c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00435530  8b00                 mov eax, dword ptr [eax]
// 00435532  8d4804               lea ecx, [eax + 4]
// 00435535  ff1564248000         call dword ptr [0x802464]
// 0043553b  50                   push eax
// 0043553c  8bcf                 mov ecx, edi
// 0043553e  ff1548248000         call dword ptr [0x802448]
// 00435544  ff06                 inc dword ptr [esi]
// 00435546  5f                   pop edi
// 00435547  5e                   pop esi
// 00435548  c3                   ret 

struct String {};
extern String& (__thiscall *append)(String*, const char*);
extern const char* (__thiscall *get_text)(const String*);
struct Entry {
    int value;
    String text;
};
void func_00435510(int* count, String* output, Entry** entry)
{
    if (*count > 0)
        append(output, ", ");
    Entry* e = *entry;
    append(output, get_text(&e->text));
    ++*count;
}
