// roc 2009-06 006ca230  unit: RBX::AnchorTool  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ca230
//
// 006ca230  51                   push ecx
// 006ca231  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 006ca235  56                   push esi
// 006ca236  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ca23a  c744240400000000     mov dword ptr [esp + 4], 0
// 006ca242  741a                 je 0x6ca25e
// 006ca244  80792400             cmp byte ptr [ecx + 0x24], 0
// 006ca248  8bce                 mov ecx, esi
// 006ca24a  7414                 je 0x6ca260
// 006ca24c  6800c58e00           push 0x8ec500
// 006ca251  ff15b4e48900         call dword ptr [0x89e4b4]
// 006ca257  8bc6                 mov eax, esi
// 006ca259  5e                   pop esi
// 006ca25a  59                   pop ecx
// 006ca25b  c20400               ret 4
// 006ca25e  8bce                 mov ecx, esi
// 006ca260  68f0c48e00           push 0x8ec4f0
// 006ca265  ff15b4e48900         call dword ptr [0x89e4b4]
// 006ca26b  8bc6                 mov eax, esi
// 006ca26d  5e                   pop esi
// 006ca26e  59                   pop ecx
// 006ca26f  c20400               ret 4
// copied from an identical function in another client (function ?f@S@@QAEPAUString@@PAU2@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String;

typedef String* (__thiscall *StringConstructor)(String*, const char*);
extern StringConstructor constructString;

struct S {
    char padding0[0x1c];
    int active;
    char padding1[4];
    unsigned char anchored;

    String* f(String* result);
};

String* S::f(String* result)
{
    volatile int temporary = 0;
    if (active) {
        if (anchored) {
            constructString(result, "UnAnchorCursor");
            return result;
        }
        constructString(result, "AnchorCursor");
        return result;
    }
    constructString(result, "AnchorCursor");
    return result;
}