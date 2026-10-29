// roc 2010-06 00402d10  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00402d10
//
// 00402d10  51                   push ecx
// 00402d11  56                   push esi
// 00402d12  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00402d16  68a819c000           push 0xc019a8
// 00402d1b  8bce                 mov ecx, esi
// 00402d1d  c744240800000000     mov dword ptr [esp + 8], 0
// 00402d25  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 00402d2b  8bc6                 mov eax, esi
// 00402d2d  5e                   pop esi
// 00402d2e  59                   pop ecx
// 00402d2f  c3                   ret 
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