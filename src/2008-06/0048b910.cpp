// from server: 100% by king_originala
// roc 2008-06 0048b910  unit: boost::any::placeholder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048b910
//
// 0048b910  85c9                 test ecx, ecx
// 0048b912  7405                 je 0x48b919
// 0048b914  8d4114               lea eax, [ecx + 0x14]
// 0048b917  eb02                 jmp 0x48b91b
// 0048b919  33c0                 xor eax, eax
// 0048b91b  8b0dfcfe9600         mov ecx, dword ptr [0x96fefc]
// 0048b921  8b11                 mov edx, dword ptr [ecx]
// 0048b923  56                   push esi
// 0048b924  8d742408             lea esi, [esp + 8]
// 0048b928  56                   push esi
// 0048b929  50                   push eax
// 0048b92a  8b420c               mov eax, dword ptr [edx + 0xc]
// 0048b92d  ffd0                 call eax
// 0048b92f  5e                   pop esi
// 0048b930  c20400               ret 4

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
