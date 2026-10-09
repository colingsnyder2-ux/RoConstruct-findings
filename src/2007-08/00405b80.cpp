// from server: 86% by colin
// roc 2007-08 00405b80  unit: ATL::VCComClassFactory::?$CComObjectNoLock  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00405b80
//
// 00405b80  53                   push ebx
// 00405b81  56                   push esi
// 00405b82  57                   push edi
// 00405b83  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00405b87  8d7704               lea esi, [edi + 4]
// 00405b8a  56                   push esi
// 00405b8b  ff15e8d27700         call dword ptr [0x77d2e8]
// 00405b91  8bd8                 mov ebx, eax
// 00405b93  85db                 test ebx, ebx
// 00405b95  752d                 jne 0x405bc4
// 00405b97  85ff                 test edi, edi
// 00405b99  7429                 je 0x405bc4
// 00405b9b  8d4604               lea eax, [esi + 4]
// 00405b9e  c706010000c0         mov dword ptr [esi], 0xc0000001
// 00405ba4  c707c84e7800         mov dword ptr [edi], 0x784ec8
// 00405baa  385818               cmp byte ptr [eax + 0x18], bl
// 00405bad  740a                 je 0x405bb9
// 00405baf  50                   push eax
// 00405bb0  885818               mov byte ptr [eax + 0x18], bl
// 00405bb3  ff1504d37700         call dword ptr [0x77d304]
// 00405bb9  57                   push edi
// 00405bba  e8a3a02200           call 0x62fc62
// 00405bbf  83c404               add esp, 4
// 00405bc2  8bc3                 mov eax, ebx
// 00405bc4  5f                   pop edi
// 00405bc5  5e                   pop esi
// 00405bc6  5b                   pop ebx
// 00405bc7  c20400               ret 4

struct S {
    int f(int* p);
};

extern "C" int __stdcall InterlockedDecrement(int*);
extern "C" void __stdcall DeleteCriticalSection(void*);
extern "C" void __cdecl sub_62FC62(void*);

extern int G_00784EC8;

int S::f(int* p) {
    int* q = p + 1;
    int r = InterlockedDecrement(q);
    if (r == 0 && p != 0) {
        char* c = (char*)(q + 1);
        *q = (int)0xC0000001;
        *p = (int)&G_00784EC8;
        if (c[0x18] != 0) {
            c[0x18] = 0;
            DeleteCriticalSection(c);
        }
        sub_62FC62(p);
    }
    return r;
}
