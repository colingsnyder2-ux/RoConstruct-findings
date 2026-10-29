// roc 2011-06 004036e0  unit: RBX::VRenderHooksService::?$FactoryProduct::Creator  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004036e0
//
// 004036e0  51                   push ecx
// 004036e1  56                   push esi
// 004036e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004036e6  681c38cb00           push 0xcb381c
// 004036eb  8bce                 mov ecx, esi
// 004036ed  c744240800000000     mov dword ptr [esp + 8], 0
// 004036f5  ff15e42da400         call dword ptr [0xa42de4]
// 004036fb  8bc6                 mov eax, esi
// 004036fd  5e                   pop esi
// 004036fe  59                   pop ecx
// 004036ff  c3                   ret 
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