// from server: 100% by tester
// roc 2008-06 0048b940  unit: boost::any::placeholder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b940
//
// 0048b940  85c9                 test ecx, ecx
// 0048b942  7405                 je 0x48b949
// 0048b944  8d4114               lea eax, [ecx + 0x14]
// 0048b947  eb02                 jmp 0x48b94b
// 0048b949  33c0                 xor eax, eax
// 0048b94b  8b0decfc9600         mov ecx, dword ptr [0x96fcec]
// 0048b951  8b11                 mov edx, dword ptr [ecx]
// 0048b953  56                   push esi
// 0048b954  8d742408             lea esi, [esp + 8]
// 0048b958  56                   push esi
// 0048b959  50                   push eax
// 0048b95a  8b420c               mov eax, dword ptr [edx + 0xc]
// 0048b95d  ffd0                 call eax
// 0048b95f  5e                   pop esi
// 0048b960  c20400               ret 4

struct Dispatch;

struct DispatchTable {
    void *reserved[3];
    int (__thiscall *invoke)(Dispatch *, void *, int *);
};

struct Dispatch {
    DispatchTable *table;
};

extern Dispatch *dispatcher;

struct S {
    char reserved[20];
    int f(int value);
};

int S::f(int value)
{
    void *object = this ? (void *)(reserved + 20) : 0;
    return dispatcher->table->invoke(dispatcher, object, &value);
}
