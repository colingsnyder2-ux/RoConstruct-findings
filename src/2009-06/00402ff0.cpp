// roc 2009-06 00402ff0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00402ff0
//
// 00402ff0  51                   push ecx
// 00402ff1  56                   push esi
// 00402ff2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00402ff6  6838b1a300           push 0xa3b138
// 00402ffb  8bce                 mov ecx, esi
// 00402ffd  c744240800000000     mov dword ptr [esp + 8], 0
// 00403005  ff15e4fc8900         call dword ptr [0x89fce4]
// 0040300b  8bc6                 mov eax, esi
// 0040300d  5e                   pop esi
// 0040300e  59                   pop ecx
// 0040300f  c3                   ret 
// copied from an identical function in another client (function ?make_exception@@YAPAXPAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
typedef void (__thiscall *Constructor)(void *, const char *);
extern Constructor construct;
extern const char message[];

void * __cdecl make_exception(void *object)
{
    volatile int state = 0;
    construct(object, message);
    return object;
}