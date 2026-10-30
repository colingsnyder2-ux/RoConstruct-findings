// roc 2010-06 00747950  unit: RBX::AnchorTool  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00747950
//
// 00747950  51                   push ecx
// 00747951  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 00747955  56                   push esi
// 00747956  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0074795a  c744240400000000     mov dword ptr [esp + 4], 0
// 00747962  741a                 je 0x74797e
// 00747964  80792400             cmp byte ptr [ecx + 0x24], 0
// 00747968  8bce                 mov ecx, esi
// 0074796a  7414                 je 0x747980
// 0074796c  683812a500           push 0xa51238
// 00747971  ff1510a49e00         call dword ptr [0x9ea410]
// 00747977  8bc6                 mov eax, esi
// 00747979  5e                   pop esi
// 0074797a  59                   pop ecx
// 0074797b  c20400               ret 4
// 0074797e  8bce                 mov ecx, esi
// 00747980  682812a500           push 0xa51228
// 00747985  ff1510a49e00         call dword ptr [0x9ea410]
// 0074798b  8bc6                 mov eax, esi
// 0074798d  5e                   pop esi
// 0074798e  59                   pop ecx
// 0074798f  c20400               ret 4
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