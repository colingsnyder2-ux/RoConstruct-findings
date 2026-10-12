// from server: 100% by king_originala
// roc 2008-06 004060d0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004060d0
//
// 004060d0  51                   push ecx
// 004060d1  56                   push esi
// 004060d2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004060d6  68f0dc9600           push 0x96dcf0
// 004060db  8bce                 mov ecx, esi
// 004060dd  c744240800000000     mov dword ptr [esp + 8], 0
// 004060e5  ff15d43e8000         call dword ptr [0x803ed4]
// 004060eb  8bc6                 mov eax, esi
// 004060ed  5e                   pop esi
// 004060ee  59                   pop ecx
// 004060ef  c3                   ret 

typedef void (__thiscall *Constructor)(void *, const char *);
extern Constructor construct;
extern const char message[];

void * __cdecl make_exception(void *object)
{
    volatile int state = 0;
    construct(object, message);
    return object;
}
