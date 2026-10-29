// roc 2009-12 00402cc0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00402cc0
//
// 00402cc0  51                   push ecx
// 00402cc1  56                   push esi
// 00402cc2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00402cc6  68e8b3b700           push 0xb7b3e8
// 00402ccb  8bce                 mov ecx, esi
// 00402ccd  c744240800000000     mov dword ptr [esp + 8], 0
// 00402cd5  ff1594de9800         call dword ptr [0x98de94]
// 00402cdb  8bc6                 mov eax, esi
// 00402cdd  5e                   pop esi
// 00402cde  59                   pop ecx
// 00402cdf  c3                   ret 
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