// roc 2009-12 007a7000  unit: RBX::AnchorTool  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a7000
//
// 007a7000  51                   push ecx
// 007a7001  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 007a7005  56                   push esi
// 007a7006  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007a700a  c744240400000000     mov dword ptr [esp + 4], 0
// 007a7012  741a                 je 0x7a702e
// 007a7014  80792400             cmp byte ptr [ecx + 0x24], 0
// 007a7018  8bce                 mov ecx, esi
// 007a701a  7414                 je 0x7a7030
// 007a701c  6840d49e00           push 0x9ed440
// 007a7021  ff15f4b69800         call dword ptr [0x98b6f4]
// 007a7027  8bc6                 mov eax, esi
// 007a7029  5e                   pop esi
// 007a702a  59                   pop ecx
// 007a702b  c20400               ret 4
// 007a702e  8bce                 mov ecx, esi
// 007a7030  6830d49e00           push 0x9ed430
// 007a7035  ff15f4b69800         call dword ptr [0x98b6f4]
// 007a703b  8bc6                 mov eax, esi
// 007a703d  5e                   pop esi
// 007a703e  59                   pop ecx
// 007a703f  c20400               ret 4
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