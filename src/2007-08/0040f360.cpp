// from server: 54% by colin
// roc 2007-08 0040f360  unit: CutVerb  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f360
//
// 0040f360  53                   push ebx
// 0040f361  8a5c240c             mov bl, byte ptr [esp + 0xc]
// 0040f365  84db                 test bl, bl
// 0040f367  55                   push ebp
// 0040f368  56                   push esi
// 0040f369  57                   push edi
// 0040f36a  8bf1                 mov esi, ecx
// 0040f36c  b8386d7800           mov eax, 0x786d38
// 0040f371  7505                 jne 0x40f378
// 0040f373  b8306d7800           mov eax, 0x786d30
// 0040f378  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0040f37c  85ed                 test ebp, ebp
// 0040f37e  7408                 je 0x40f388
// 0040f380  8dbd4c010000         lea edi, [ebp + 0x14c]
// 0040f386  eb02                 jmp 0x40f38a
// 0040f388  33ff                 xor edi, edi
// 0040f38a  83ec1c               sub esp, 0x1c
// 0040f38d  8bcc                 mov ecx, esp
// 0040f38f  89642434             mov dword ptr [esp + 0x34], esp
// 0040f393  50                   push eax
// 0040f394  ff1598e67700         call dword ptr [0x77e698]
// 0040f39a  57                   push edi
// 0040f39b  8bce                 mov ecx, esi
// 0040f39d  e8ae581500           call 0x564c50
// 0040f3a2  5f                   pop edi
// 0040f3a3  896e0c               mov dword ptr [esi + 0xc], ebp
// 0040f3a6  885e10               mov byte ptr [esi + 0x10], bl
// 0040f3a9  c7061c6d7800         mov dword ptr [esi], 0x786d1c
// 0040f3af  8bc6                 mov eax, esi
// 0040f3b1  5e                   pop esi
// 0040f3b2  5d                   pop ebp
// 0040f3b3  5b                   pop ebx
// 0040f3b4  c20800               ret 8

struct Verb {
    void construct(int, int);
    char pad[0x14];
};

struct CutVerb {
    char pad0[0xc];
    int field_c;
    char field_10;
    void construct(int, int);
};

void CutVerb::construct(int a, int b)
{
    extern void* g_786d38;
    extern void* g_786d30;
    extern void* g_786d1c;
    extern void* g_77e698;

    char bl = (char)a;
    void* name = bl ? &g_786d38 : &g_786d30;
    int* container = b ? (int*)((char*)b + 0x14c) : 0;

    char buf[0x1c];
    ((void (__stdcall*)(void*, void*))g_77e698)(buf, name);
    ((void (__thiscall*)(Verb*, int*))0x564c50)((Verb*)this, container);

    field_c = b;
    field_10 = bl;
    *(void**)this = &g_786d1c;
}
