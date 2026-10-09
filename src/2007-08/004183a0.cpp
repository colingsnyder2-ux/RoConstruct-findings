// from server: 100% by colin
// roc 2007-08 004183a0  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004183a0
//
// 004183a0  8b442404             mov eax, dword ptr [esp + 4]
// 004183a4  56                   push esi
// 004183a5  8bf1                 mov esi, ecx
// 004183a7  8d4c2408             lea ecx, [esp + 8]
// 004183ab  51                   push ecx
// 004183ac  c70600000000         mov dword ptr [esi], 0
// 004183b2  c7460400000000       mov dword ptr [esi + 4], 0
// 004183b9  c7460800000000       mov dword ptr [esi + 8], 0
// 004183c0  8944240c             mov dword ptr [esp + 0xc], eax
// 004183c4  e807f60600           call 0x4879d0
// 004183c9  83c404               add esp, 4
// 004183cc  84c0                 test al, al
// 004183ce  7524                 jne 0x4183f4
// 004183d0  6a04                 push 4
// 004183d2  c74608e0424100       mov dword ptr [esi + 8], 0x4142e0
// 004183d9  c706005d4100         mov dword ptr [esi], 0x415d00
// 004183df  e8127b2100           call 0x62fef6
// 004183e4  83c404               add esp, 4
// 004183e7  85c0                 test eax, eax
// 004183e9  7406                 je 0x4183f1
// 004183eb  8b542408             mov edx, dword ptr [esp + 8]
// 004183ef  8910                 mov dword ptr [eax], edx
// 004183f1  894604               mov dword ptr [esi + 4], eax
// 004183f4  8bc6                 mov eax, esi
// 004183f6  5e                   pop esi
// 004183f7  c20800               ret 8

struct S {
    int f(int a, int b);
};

extern "C" char __cdecl sub_4879d0(int *p);
extern "C" void *__cdecl sub_62fef6(unsigned int size);

int S::f(int a, int b)
{
    int *self = (int *)this;
    self[0] = 0;
    self[1] = 0;
    self[2] = 0;
    int tmp = a;
    if (!sub_4879d0(&tmp)) {
        self[2] = 0x4142e0;
        self[0] = 0x415d00;
        void *p = sub_62fef6(4);
        if (p) {
            *(int *)p = tmp;
        }
        self[1] = (int)p;
    }
    return (int)this;
}
