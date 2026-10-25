// from server: 100% by king_originala
// roc 2008-06 004385f0  unit: RBX::Soundscape::VSoundId::?$XItem  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004385f0
//
// 004385f0  56                   push esi
// 004385f1  8bf1                 mov esi, ecx
// 004385f3  e870862600           call 0x6a0c68
// 004385f8  83f8ff               cmp eax, -1
// 004385fb  7506                 jne 0x438603
// 004385fd  0bc0                 or eax, eax
// 004385ff  5e                   pop esi
// 00438600  c20400               ret 4
// 00438603  6a06                 push 6
// 00438605  8bce                 mov ecx, esi
// 00438607  e8a43a2c00           call 0x6fc0b0
// 0043860c  e86f882800           call 0x6c0e80
// 00438611  83c004               add eax, 4
// 00438614  50                   push eax
// 00438615  ff15b0218000         call dword ptr [0x8021b0]
// 0043861b  e860882800           call 0x6c0e80
// 00438620  50                   push eax
// 00438621  8bce                 mov ecx, esi
// 00438623  e8381f2c00           call 0x6fa560
// 00438628  33c0                 xor eax, eax
// 0043862a  5e                   pop esi
// 0043862b  c20400               ret 4

extern "C" long (__stdcall *InterlockedIncrement)(volatile long *);
extern long * __cdecl GetSharedObject();

struct S {
    int QueryState();
    void SetMode(int);
    void SetSharedObject(long *);
    int Create(void *);
};

int S::Create(void *)
{
    if (QueryState() == -1)
        return -1;

    SetMode(6);
    InterlockedIncrement(GetSharedObject() + 1);
    SetSharedObject(GetSharedObject());
    return 0;
}
