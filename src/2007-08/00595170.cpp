// from server: 71% by colin
// roc 2007-08 00595170  unit: RBX::DropperTool  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595170
//
// 00595170  51                   push ecx
// 00595171  56                   push esi
// 00595172  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00595176  68900c7b00           push 0x7b0c90
// 0059517b  8bce                 mov ecx, esi
// 0059517d  c744240800000000     mov dword ptr [esp + 8], 0
// 00595185  ff1598e67700         call dword ptr [0x77e698]
// 0059518b  8bc6                 mov eax, esi
// 0059518d  5e                   pop esi
// 0059518e  59                   pop ecx
// 0059518f  c20400               ret 4

struct DropperTool {
    char* construct(char* p);
};

extern void* g_77e698;
extern char g_7b0c90[];

char* DropperTool::construct(char* p)
{
    char* tmp = p;
    void* v = 0;
    typedef void* (__stdcall *Fn)(void*, const char*);
    Fn f = (Fn)g_77e698;
    f(&v, g_7b0c90);
    return tmp;
}
