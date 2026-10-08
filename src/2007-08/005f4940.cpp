// from server: 82% by colin
// roc 2007-08 005f4940  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f4940
//
// 005f4940  85c9                 test ecx, ecx
// 005f4942  7405                 je 0x5f4949
// 005f4944  8d5118               lea edx, [ecx + 0x18]
// 005f4947  eb02                 jmp 0x5f494b
// 005f4949  33d2                 xor edx, edx
// 005f494b  8b442408             mov eax, dword ptr [esp + 8]
// 005f494f  85c0                 test eax, eax
// 005f4951  7405                 je 0x5f4958
// 005f4953  83c00c               add eax, 0xc
// 005f4956  eb02                 jmp 0x5f495a
// 005f4958  33c0                 xor eax, eax
// 005f495a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f495e  56                   push esi
// 005f495f  8b31                 mov esi, dword ptr [ecx]
// 005f4961  52                   push edx
// 005f4962  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005f4966  52                   push edx
// 005f4967  50                   push eax
// 005f4968  8b4604               mov eax, dword ptr [esi + 4]
// 005f496b  ffd0                 call eax
// 005f496d  5e                   pop esi
// 005f496e  c20c00               ret 0xc

struct RefPropDescriptor
{
    char pad[0x18];
    int field_18;
};

struct ArgHelper
{
    int field_0;
    int field_4;
};

struct Target
{
    int method(ArgHelper* a, ArgHelper* b, ArgHelper* c);
};

int Target::method(ArgHelper* a, ArgHelper* b, ArgHelper* c)
{
    RefPropDescriptor* p = (RefPropDescriptor*)this;
    int* edx;
    if (p != 0)
        edx = &p->field_18;
    else
        edx = 0;

    int* eax;
    if (a != 0)
        eax = (int*)((char*)a + 0xc);
    else
        eax = 0;

    int* esi = (int*)*((int*)c);
    int* edx2 = (int*)b;
    int (*fn)(int*, int*, int*) = (int (*)(int*, int*, int*))esi[1];
    return fn(eax, edx2, edx);
}
