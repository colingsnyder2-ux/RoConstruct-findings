// roc 2012-06 0044cce0  unit: PasteVerb  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044cce0
//
// 0044cce0  51                   push ecx
// 0044cce1  56                   push esi
// 0044cce2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044cce6  68e83bb400           push 0xb43be8
// 0044cceb  8bce                 mov ecx, esi
// 0044cced  c744240800000000     mov dword ptr [esp + 8], 0
// 0044ccf5  ff154826b200         call dword ptr [0xb22648]
// 0044ccfb  8bc6                 mov eax, esi
// 0044ccfd  5e                   pop esi
// 0044ccfe  59                   pop ecx
// 0044ccff  c3                   ret 
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