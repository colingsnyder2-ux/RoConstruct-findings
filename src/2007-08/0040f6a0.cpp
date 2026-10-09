// from server: 64% by colin
// roc 2007-08 0040f6a0  unit: CopyVerb  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040f6a0
//
// 0040f6a0  53                   push ebx
// 0040f6a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0040f6a5  85db                 test ebx, ebx
// 0040f6a7  56                   push esi
// 0040f6a8  57                   push edi
// 0040f6a9  8bf1                 mov esi, ecx
// 0040f6ab  7408                 je 0x40f6b5
// 0040f6ad  8dbb4c010000         lea edi, [ebx + 0x14c]
// 0040f6b3  eb02                 jmp 0x40f6b7
// 0040f6b5  33ff                 xor edi, edi
// 0040f6b7  83ec1c               sub esp, 0x1c
// 0040f6ba  8bcc                 mov ecx, esp
// 0040f6bc  8964242c             mov dword ptr [esp + 0x2c], esp
// 0040f6c0  688c6d7800           push 0x786d8c
// 0040f6c5  ff1598e67700         call dword ptr [0x77e698]
// 0040f6cb  53                   push ebx
// 0040f6cc  57                   push edi
// 0040f6cd  8bce                 mov ecx, esi
// 0040f6cf  e80cffffff           call 0x40f5e0
// 0040f6d4  5f                   pop edi
// 0040f6d5  c706786d7800         mov dword ptr [esi], 0x786d78
// 0040f6db  8bc6                 mov eax, esi
// 0040f6dd  5e                   pop esi
// 0040f6de  5b                   pop ebx
// 0040f6df  c20400               ret 4

struct CopyVerb {
    char pad[0x14c];
    CopyVerb(char* name, void* container);
};

extern "C" void* __stdcall sub_77e698(void*);
extern "C" void __fastcall sub_40f5e0(void*, void*, char*);
extern char DAT_00786d78;
extern char DAT_00786d8c;

CopyVerb::CopyVerb(char* name, void* container)
{
    char* base = (char*)this;
    void* p = (container != 0) ? (char*)container + 0x14c : 0;
    char buf[0x1c];
    sub_77e698(&DAT_00786d8c);
    sub_40f5e0(base, p, name);
    *(void**)base = &DAT_00786d78;
}
