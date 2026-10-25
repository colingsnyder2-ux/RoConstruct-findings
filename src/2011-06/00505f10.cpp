// from server: 32% by atomic.potato
// roc 2011-06 00505f10  unit: RBX::Network::Replicator::EventInvocationItem  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00505f10
//
// 00505f10  8b442408             mov eax, dword ptr [esp + 8]
// 00505f14  83e800               sub eax, 0
// 00505f17  56                   push esi
// 00505f18  744a                 je 0x505f64
// 00505f1a  83e802               sub eax, 2
// 00505f1d  7427                 je 0x505f46
// 00505f1f  83e801               sub eax, 1
// 00505f22  7577                 jne 0x505f9b
// 00505f24  8b542408             mov edx, dword ptr [esp + 8]
// 00505f28  f6420d02             test byte ptr [edx + 0xd], 2
// 00505f2c  746d                 je 0x505f9b
// 00505f2e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00505f32  8b7008               mov esi, dword ptr [eax + 8]
// 00505f35  8b4004               mov eax, dword ptr [eax + 4]
// 00505f38  8b12                 mov edx, dword ptr [edx]
// 00505f3a  56                   push esi
// 00505f3b  50                   push eax
// 00505f3c  52                   push edx
// 00505f3d  e86ea5ffff           call 0x5004b0
// 00505f42  5e                   pop esi
// 00505f43  c20c00               ret 0xc
// 00505f46  8b442408             mov eax, dword ptr [esp + 8]
// 00505f4a  f6400d02             test byte ptr [eax + 0xd], 2
// 00505f4e  744b                 je 0x505f9b
// 00505f50  8b542410             mov edx, dword ptr [esp + 0x10]
// 00505f54  8b5204               mov edx, dword ptr [edx + 4]
// 00505f57  8b00                 mov eax, dword ptr [eax]
// 00505f59  52                   push edx
// 00505f5a  50                   push eax
// 00505f5b  e810dcffff           call 0x503b70
// 00505f60  5e                   pop esi
// 00505f61  c20c00               ret 0xc
// 00505f64  8b542408             mov edx, dword ptr [esp + 8]
// 00505f68  f6420d01             test byte ptr [edx + 0xd], 1
// 00505f6c  742d                 je 0x505f9b
// 00505f6e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00505f72  8b7004               mov esi, dword ptr [eax + 4]
// 00505f75  83ec08               sub esp, 8
// 00505f78  8bd4                 mov edx, esp
// 00505f7a  8932                 mov dword ptr [edx], esi
// 00505f7c  8b4008               mov eax, dword ptr [eax + 8]
// 00505f7f  89642410             mov dword ptr [esp + 0x10], esp
// 00505f83  894204               mov dword ptr [edx + 4], eax
// 00505f86  85c0                 test eax, eax
// 00505f88  740c                 je 0x505f96
// 00505f8a  83c004               add eax, 4
// 00505f8d  ba01000000           mov edx, 1
// 00505f92  f00fc110             lock xadd dword ptr [eax], edx
// 00505f96  e8454bffff           call 0x4faae0
// 00505f9b  5e                   pop esi
// 00505f9c  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl sub_4FAAE0(void*, void*);
extern "C" void __cdecl sub_5004B0(void*, void*, void*);
extern "C" void __cdecl sub_503B70(void*, void*);

struct Arg {
    char pad0[4];
    void* a;   // +4
    void* b;   // +8
};

struct EventInvocationItem {
    char pad0[0xc];
    unsigned char flags;   // +0xc
    char pad1[0x3];
    void* ptr;             // +0x10
    void Dispatch(int op, Arg* arg);
};

void EventInvocationItem::Dispatch(int op, Arg* arg) {
    if (op != 0) {
        if ((flags & 1) != 0) return;
        void* p = arg->a;
        void* q = arg->b;
        void* tmp[2];
        tmp[0] = p;
        tmp[1] = q;
        if (q != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)q + 4), 1);
        }
        sub_4FAAE0(tmp, 0);
        return;
    }
    op -= 2;
    if (op == 0) {
        if ((flags & 2) == 0) return;
        sub_503B70(ptr, arg->a);
        return;
    }
    op -= 1;
    if (op != 0) return;
    if ((flags & 2) == 0) return;
    sub_5004B0(ptr, arg->a, arg->b);
}
