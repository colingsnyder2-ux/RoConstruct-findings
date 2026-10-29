// roc 2012-06 004152d0  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct::Creator  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004152d0
//
// 004152d0  51                   push ecx
// 004152d1  56                   push esi
// 004152d2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004152d6  6854a2e100           push 0xe1a254
// 004152db  8bce                 mov ecx, esi
// 004152dd  c744240800000000     mov dword ptr [esp + 8], 0
// 004152e5  ff158047b200         call dword ptr [0xb24780]
// 004152eb  8bc6                 mov eax, esi
// 004152ed  5e                   pop esi
// 004152ee  59                   pop ecx
// 004152ef  c3                   ret 
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