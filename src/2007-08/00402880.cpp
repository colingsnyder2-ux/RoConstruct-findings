// from server: 80% by colin
// roc 2007-08 00402880  unit: std::bad_alloc  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00402880
//
// 00402880  8b442404             mov eax, dword ptr [esp + 4]
// 00402884  56                   push esi
// 00402885  50                   push eax
// 00402886  8bf1                 mov esi, ecx
// 00402888  ff15d0e67700         call dword ptr [0x77e6d0]
// 0040288e  83c404               add esp, 4
// 00402891  85c0                 test eax, eax
// 00402893  750a                 jne 0x40289f
// 00402895  680e000780           push 0x8007000e
// 0040289a  e861e7ffff           call 0x401000
// 0040289f  8906                 mov dword ptr [esi], eax
// 004028a1  5e                   pop esi
// 004028a2  c20400               ret 4

extern "C" void* __cdecl malloc(unsigned int);

void __stdcall sub_401000(unsigned int code);

struct S {
    void* field0;
    void __thiscall assign(void* p);
};

void S::assign(void* p)
{
    void* q = malloc((unsigned int)p);
    if (q == 0)
        sub_401000(0x8007000e);
    field0 = q;
}
