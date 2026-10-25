// from server: 100% by king_originala
// roc 2008-06 005f1ea0  unit: RBX::FaceInstance  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f1ea0
//
// 005f1ea0  83ec14               sub esp, 0x14
// 005f1ea3  53                   push ebx
// 005f1ea4  8b1d88228000         mov ebx, dword ptr [0x802288]
// 005f1eaa  55                   push ebp
// 005f1eab  56                   push esi
// 005f1eac  57                   push edi
// 005f1ead  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005f1eb1  8bf1                 mov esi, ecx
// 005f1eb3  8b0f                 mov ecx, dword ptr [edi]
// 005f1eb5  8b5704               mov edx, dword ptr [edi + 4]
// 005f1eb8  8d442410             lea eax, [esp + 0x10]
// 005f1ebc  50                   push eax
// 005f1ebd  83ec10               sub esp, 0x10
// 005f1ec0  8bc4                 mov eax, esp
// 005f1ec2  8908                 mov dword ptr [eax], ecx
// 005f1ec4  8b4f08               mov ecx, dword ptr [edi + 8]
// 005f1ec7  895004               mov dword ptr [eax + 4], edx
// 005f1eca  8b570c               mov edx, dword ptr [edi + 0xc]
// 005f1ecd  894808               mov dword ptr [eax + 8], ecx
// 005f1ed0  89500c               mov dword ptr [eax + 0xc], edx
// 005f1ed3  e858fcffff           call 0x5f1b30
// 005f1ed8  8b442424             mov eax, dword ptr [esp + 0x24]
// 005f1edc  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f1edf  83c414               add esp, 0x14
// 005f1ee2  50                   push eax
// 005f1ee3  51                   push ecx
// 005f1ee4  ffd3                 call ebx
// 005f1ee6  85c0                 test eax, eax
// 005f1ee8  0f94442428           sete byte ptr [esp + 0x28]
// 005f1eed  3d02010000           cmp eax, 0x102
// 005f1ef2  752f                 jne 0x5f1f23
// 005f1ef4  8d542414             lea edx, [esp + 0x14]
// 005f1ef8  6a01                 push 1
// 005f1efa  52                   push edx
// 005f1efb  e8404cfbff           call 0x5a6b40
// 005f1f00  8b07                 mov eax, dword ptr [edi]
// 005f1f02  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005f1f06  8b4f04               mov ecx, dword ptr [edi + 4]
// 005f1f09  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005f1f0d  83c408               add esp, 8
// 005f1f10  3bc2                 cmp eax, edx
// 005f1f12  7535                 jne 0x5f1f49
// 005f1f14  3bcd                 cmp ecx, ebp
// 005f1f16  7533                 jne 0x5f1f4b
// 005f1f18  8b4708               mov eax, dword ptr [edi + 8]
// 005f1f1b  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 005f1f1f  85c0                 test eax, eax
// 005f1f21  7f90                 jg 0x5f1eb3
// 005f1f23  8b4608               mov eax, dword ptr [esi + 8]
// 005f1f26  6aff                 push -1
// 005f1f28  50                   push eax
// 005f1f29  ffd3                 call ebx
// 005f1f2b  8b7e14               mov edi, dword ptr [esi + 0x14]
// 005f1f2e  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 005f1f31  85ff                 test edi, edi
// 005f1f33  7454                 je 0x5f1f89
// 005f1f35  807c242800           cmp byte ptr [esp + 0x28], 0
// 005f1f3a  7526                 jne 0x5f1f62
// 005f1f3c  8b4610               mov eax, dword ptr [esi + 0x10]
// 005f1f3f  85c0                 test eax, eax
// 005f1f41  7419                 je 0x5f1f5c
// 005f1f43  48                   dec eax
// 005f1f44  894610               mov dword ptr [esi + 0x10], eax
// 005f1f47  eb19                 jmp 0x5f1f62
// 005f1f49  3bcd                 cmp ecx, ebp
// 005f1f4b  7cd6                 jl 0x5f1f23
// 005f1f4d  0f8f60ffffff         jg 0x5f1eb3
// 005f1f53  3bc2                 cmp eax, edx
// 005f1f55  76cc                 jbe 0x5f1f23
// 005f1f57  e957ffffff           jmp 0x5f1eb3
// 005f1f5c  8d4d01               lea ecx, [ebp + 1]
// 005f1f5f  894e0c               mov dword ptr [esi + 0xc], ecx
// 005f1f62  8d47ff               lea eax, [edi - 1]
// 005f1f65  894614               mov dword ptr [esi + 0x14], eax
// 005f1f68  85c0                 test eax, eax
// 005f1f6a  754b                 jne 0x5f1fb7
// 005f1f6c  394610               cmp dword ptr [esi + 0x10], eax
// 005f1f6f  7410                 je 0x5f1f81
// 005f1f71  8b16                 mov edx, dword ptr [esi]
// 005f1f73  50                   push eax
// 005f1f74  6a01                 push 1
// 005f1f76  52                   push edx
// 005f1f77  ff15c0228000         call dword ptr [0x8022c0]
// 005f1f7d  33ff                 xor edi, edi
// 005f1f7f  eb36                 jmp 0x5f1fb7
// 005f1f81  837e0c00             cmp dword ptr [esi + 0xc], 0
// 005f1f85  7430                 je 0x5f1fb7
// 005f1f87  eb27                 jmp 0x5f1fb0
// 005f1f89  8d4501               lea eax, [ebp + 1]
// 005f1f8c  89460c               mov dword ptr [esi + 0xc], eax
// 005f1f8f  3dffffff7f           cmp eax, 0x7fffffff
// 005f1f94  7521                 jne 0x5f1fb7
// 005f1f96  8b06                 mov eax, dword ptr [esi]
// 005f1f98  6aff                 push -1
// 005f1f9a  50                   push eax
// 005f1f9b  ffd3                 call ebx
// 005f1f9d  8b16                 mov edx, dword ptr [esi]
// 005f1f9f  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005f1fa2  294e10               sub dword ptr [esi + 0x10], ecx
// 005f1fa5  6a00                 push 0
// 005f1fa7  6a01                 push 1
// 005f1fa9  52                   push edx
// 005f1faa  ff15c0228000         call dword ptr [0x8022c0]
// 005f1fb0  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005f1fb7  8b4608               mov eax, dword ptr [esi + 8]
// 005f1fba  50                   push eax
// 005f1fbb  ff1580228000         call dword ptr [0x802280]
// 005f1fc1  83ff01               cmp edi, 1
// 005f1fc4  7524                 jne 0x5f1fea
// 005f1fc6  85ed                 test ebp, ebp
// 005f1fc8  7413                 je 0x5f1fdd
// 005f1fca  8d9b00000000         lea ebx, [ebx]
// 005f1fd0  8b4e04               mov ecx, dword ptr [esi + 4]
// 005f1fd3  6aff                 push -1
// 005f1fd5  51                   push ecx
// 005f1fd6  ffd3                 call ebx
// 005f1fd8  83ed01               sub ebp, 1
// 005f1fdb  75f3                 jne 0x5f1fd0
// 005f1fdd  8b16                 mov edx, dword ptr [esi]
// 005f1fdf  6a00                 push 0
// 005f1fe1  6a01                 push 1
// 005f1fe3  52                   push edx
// 005f1fe4  ff15c0228000         call dword ptr [0x8022c0]
// 005f1fea  8a442428             mov al, byte ptr [esp + 0x28]
// 005f1fee  5f                   pop edi
// 005f1fef  5e                   pop esi
// 005f1ff0  5d                   pop ebp
// 005f1ff1  5b                   pop ebx
// 005f1ff2  83c414               add esp, 0x14
// 005f1ff5  c20400               ret 4

struct TimeValue {
    __int64 seconds;
    int nanoseconds;
};

extern int __cdecl readTime(TimeValue*, int);
extern void __cdecl remainingTime(TimeValue, unsigned long*);

extern unsigned long (__stdcall * const WaitForSingleObject)(void*, unsigned long);
extern int (__stdcall * const ReleaseSemaphore)(void*, long, long*);
extern int (__stdcall * const ReleaseMutex)(void*);

struct S {
    void* semaphore;
    void* event;
    void* mutex;
    int pending;
    int consumed;
    int waiters;

    bool wait(const TimeValue*);
};

bool S::wait(const TimeValue* target)
{
    unsigned long (__stdcall *waitFunction)(void*, unsigned long) =
        WaitForSingleObject;
    unsigned long timeout;
    TimeValue now;
    bool success;

    do {
        remainingTime(*target, &timeout);
        unsigned long result = waitFunction(event, timeout);
        success = result == 0;
        if (result != 0x102)
            break;
        readTime(&now, 1);
    } while ((target->seconds == now.seconds
              ? target->nanoseconds - now.nanoseconds
              : (target->seconds > now.seconds ? 1 : -1)) > 0);

    waitFunction(mutex, 0xffffffffUL);

    int oldWaiters = waiters;
    int oldPending = pending;

    if (oldWaiters != 0) {
        if (!success) {
            if (consumed != 0)
                --consumed;
            else
                pending = oldPending + 1;
        }

        if (--waiters == 0) {
            if (consumed != 0) {
                ReleaseSemaphore(semaphore, 1, 0);
                oldWaiters = 0;
            } else if (pending != 0) {
                pending = 0;
            }
        }
    } else {
        if ((pending = oldPending + 1) == 0x7fffffff) {
            waitFunction(semaphore, 0xffffffffUL);
            consumed -= pending;
            ReleaseSemaphore(semaphore, 1, 0);
            pending = 0;
        }
    }

    ReleaseMutex(mutex);

    if (oldWaiters == 1) {
        if (oldPending != 0) {
            do {
                waitFunction(event, 0xffffffffUL);
            } while (--oldPending != 0);
        }
        ReleaseSemaphore(semaphore, 1, 0);
    }

    return success;
}
