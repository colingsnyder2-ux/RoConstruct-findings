// from server: 100% by colin
// roc 2008-06 0063dde0  unit: RBX::AnchorTool  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063dde0
//
// 0063dde0  51                   push ecx
// 0063dde1  83791c00             cmp dword ptr [ecx + 0x1c], 0
// 0063dde5  56                   push esi
// 0063dde6  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0063ddea  c744240400000000     mov dword ptr [esp + 4], 0
// 0063ddf2  741a                 je 0x63de0e
// 0063ddf4  80792400             cmp byte ptr [ecx + 0x24], 0
// 0063ddf8  8bce                 mov ecx, esi
// 0063ddfa  7414                 je 0x63de10
// 0063ddfc  6898a28400           push 0x84a298
// 0063de01  ff1558248000         call dword ptr [0x802458]
// 0063de07  8bc6                 mov eax, esi
// 0063de09  5e                   pop esi
// 0063de0a  59                   pop ecx
// 0063de0b  c20400               ret 4
// 0063de0e  8bce                 mov ecx, esi
// 0063de10  6888a28400           push 0x84a288
// 0063de15  ff1558248000         call dword ptr [0x802458]
// 0063de1b  8bc6                 mov eax, esi
// 0063de1d  5e                   pop esi
// 0063de1e  59                   pop ecx
// 0063de1f  c20400               ret 4

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
