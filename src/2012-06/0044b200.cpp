// roc 2012-06 0044b200  unit: CDeclarationView  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044b200
//
// 0044b200  56                   push esi
// 0044b201  8b742408             mov esi, dword ptr [esp + 8]
// 0044b205  833e00               cmp dword ptr [esi], 0
// 0044b208  57                   push edi
// 0044b209  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0044b20d  7e0d                 jle 0x44b21c
// 0044b20f  68402fb500           push 0xb52f40
// 0044b214  8bcf                 mov ecx, edi
// 0044b216  ff155c26b200         call dword ptr [0xb2265c]
// 0044b21c  8b442414             mov eax, dword ptr [esp + 0x14]
// 0044b220  8b00                 mov eax, dword ptr [eax]
// 0044b222  8d4804               lea ecx, [eax + 4]
// 0044b225  ff154026b200         call dword ptr [0xb22640]
// 0044b22b  50                   push eax
// 0044b22c  8bcf                 mov ecx, edi
// 0044b22e  ff155c26b200         call dword ptr [0xb2265c]
// 0044b234  ff06                 inc dword ptr [esi]
// 0044b236  5f                   pop edi
// 0044b237  5e                   pop esi
// 0044b238  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_00435510@@YAXPAHPAUString@@PAPAUEntry@@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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