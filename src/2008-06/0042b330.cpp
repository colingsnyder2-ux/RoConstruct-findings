// from server: 100% by atomic.potato
// roc 2008-06 0042b330  unit: RBX::Reflection::$$A6AXPBVPropertyDescriptor::V?$function::?$holder  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042b330
//
// 0042b330  8b442404             mov eax, dword ptr [esp + 4]
// 0042b334  8b4808               mov ecx, dword ptr [eax + 8]
// 0042b337  8b5004               mov edx, dword ptr [eax + 4]
// 0042b33a  51                   push ecx
// 0042b33b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0042b33f  52                   push edx
// 0042b340  8b10                 mov edx, dword ptr [eax]
// 0042b342  51                   push ecx
// 0042b343  ffd2                 call edx
// 0042b345  83c40c               add esp, 0xc
// 0042b348  c3                   ret 

struct S
{
};

void __cdecl f(void *a, void *b)
{
    typedef void (__cdecl *Fn)(void *, void *, void *);
    Fn fn = *(Fn *)a;
    fn(b, *(void **)((char *)a + 4), *(void **)((char *)a + 8));
}
