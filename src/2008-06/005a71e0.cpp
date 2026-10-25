// from server: 86% by king_originala
// roc 2008-06 005a71e0  unit: RBX::Log  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a71e0
//
// 005a71e0  83ec30               sub esp, 0x30
// 005a71e3  8b0d586b9700         mov ecx, dword ptr [0x976b58]
// 005a71e9  53                   push ebx
// 005a71ea  55                   push ebp
// 005a71eb  56                   push esi
// 005a71ec  57                   push edi
// 005a71ed  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a71f1  e8eadafeff           call 0x594ce0
// 005a71f6  8b742444             mov esi, dword ptr [esp + 0x44]
// 005a71fa  8b4610               mov eax, dword ptr [esi + 0x10]
// 005a71fd  2b460c               sub eax, dword ptr [esi + 0xc]
// 005a7200  33ff                 xor edi, edi
// 005a7202  c1f802               sar eax, 2
// 005a7205  c644241401           mov byte ptr [esp + 0x14], 1
// 005a720a  3bf8                 cmp edi, eax
// 005a720c  737b                 jae 0x5a7289
// 005a720e  8b0d5c6b9700         mov ecx, dword ptr [0x976b5c]
// 005a7214  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 005a7217  8d410c               lea eax, [ecx + 0xc]
// 005a721a  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 005a721d  2b08                 sub ecx, dword ptr [eax]
// 005a721f  8d1cbd00000000       lea ebx, [edi*4]
// 005a7226  c1f902               sar ecx, 2
// 005a7229  03eb                 add ebp, ebx
// 005a722b  89442444             mov dword ptr [esp + 0x44], eax
// 005a722f  3bf9                 cmp edi, ecx
// 005a7231  720a                 jb 0x5a723d
// 005a7233  ff1590288000         call dword ptr [0x802890]
// 005a7239  8b442444             mov eax, dword ptr [esp + 0x44]
// 005a723d  8b10                 mov edx, dword ptr [eax]
// 005a723f  8b0413               mov eax, dword ptr [ebx + edx]
// 005a7242  8b08                 mov ecx, dword ptr [eax]
// 005a7244  85c9                 test ecx, ecx
// 005a7246  0f8497000000         je 0x5a72e3
// 005a724c  8b5500               mov edx, dword ptr [ebp]
// 005a724f  83c008               add eax, 8
// 005a7252  52                   push edx
// 005a7253  50                   push eax
// 005a7254  8b4104               mov eax, dword ptr [ecx + 4]
// 005a7257  ffd0                 call eax
// 005a7259  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005a725c  2b4e0c               sub ecx, dword ptr [esi + 0xc]
// 005a725f  83c408               add esp, 8
// 005a7262  c1f902               sar ecx, 2
// 005a7265  3bf9                 cmp edi, ecx
// 005a7267  7206                 jb 0x5a726f
// 005a7269  ff1590288000         call dword ptr [0x802890]
// 005a726f  8b560c               mov edx, dword ptr [esi + 0xc]
// 005a7272  c7041300000000       mov dword ptr [ebx + edx], 0
// 005a7279  8b4610               mov eax, dword ptr [esi + 0x10]
// 005a727c  2b460c               sub eax, dword ptr [esi + 0xc]
// 005a727f  47                   inc edi
// 005a7280  c1f802               sar eax, 2
// 005a7283  3bf8                 cmp edi, eax
// 005a7285  7287                 jb 0x5a720e
// 005a7287  33ff                 xor edi, edi
// 005a7289  a130c49400           mov eax, dword ptr [0x94c430]
// 005a728e  57                   push edi
// 005a728f  50                   push eax
// 005a7290  ff15a4228000         call dword ptr [0x8022a4]
// 005a7296  8d4c2410             lea ecx, [esp + 0x10]
// 005a729a  51                   push ecx
// 005a729b  e820feffff           call 0x5a70c0
// 005a72a0  8b460c               mov eax, dword ptr [esi + 0xc]
// 005a72a3  83c404               add esp, 4
// 005a72a6  3bc7                 cmp eax, edi
// 005a72a8  7409                 je 0x5a72b3
// 005a72aa  50                   push eax
// 005a72ab  e8ca930f00           call 0x6a067a
// 005a72b0  83c404               add esp, 4
// 005a72b3  8b16                 mov edx, dword ptr [esi]
// 005a72b5  52                   push edx
// 005a72b6  897e0c               mov dword ptr [esi + 0xc], edi
// 005a72b9  897e10               mov dword ptr [esi + 0x10], edi
// 005a72bc  897e14               mov dword ptr [esi + 0x14], edi
// 005a72bf  e8b6930f00           call 0x6a067a
// 005a72c4  56                   push esi
// 005a72c5  e8b0930f00           call 0x6a067a
// 005a72ca  83c408               add esp, 8
// 005a72cd  807c241400           cmp byte ptr [esp + 0x14], 0
// 005a72d2  5f                   pop edi
// 005a72d3  5e                   pop esi
// 005a72d4  5d                   pop ebp
// 005a72d5  5b                   pop ebx
// 005a72d6  741a                 je 0x5a72f2
// 005a72d8  8b0c24               mov ecx, dword ptr [esp]
// 005a72db  83c430               add esp, 0x30
// 005a72de  e91ddafeff           jmp 0x594d00
// 005a72e3  8d4c2418             lea ecx, [esp + 0x18]
// 005a72e7  e8042ce6ff           call 0x409ef0
// 005a72ec  50                   push eax
// 005a72ed  e80e32e6ff           call 0x40a500
// 005a72f2  83c430               add esp, 0x30
// 005a72f5  c3                   ret 

extern "C" int __stdcall TlsSetValue(unsigned long, void*);
extern "C" void __cdecl _invalid_parameter_noinfo();
extern void __cdecl releaseMemory(void*);

struct Mutex {
    void lock();
    void unlock();
};

struct Lock {
    Mutex* mutex;
    bool locked;
};

struct CallError {
    char storage[40];
    CallError* construct();
};

extern __declspec(noreturn) void __cdecl raiseError(CallError*);
extern void __cdecl cleanupLock(Lock*);

struct CallbackTable {
    void* reserved;
    void (__cdecl *invoke)(void*, void*);
};

struct Callback {
    CallbackTable* table;
    unsigned long reserved;
    char object[1];
};

struct Values {
    void* allocation;
    unsigned long reserved[2];
    void** first;
    void** last;
    void** limit;
};

struct Callbacks {
    unsigned long reserved[3];
    Callback** first;
    Callback** last;
    Callback** limit;
};

extern Mutex* globalMutex;
extern Callbacks* globalCallbacks;
extern unsigned long tlsIndex;

void __cdecl sub_5a71e0(Values* values)
{
    Lock lock;
    lock.mutex = globalMutex;
    lock.mutex->lock();
    lock.locked = true;

    for (unsigned int i = 0;
         i < static_cast<unsigned int>(values->last - values->first);
         ++i) {
        void** value = values->first + i;
        Callback** first = globalCallbacks->first;
        Callback*** base = &globalCallbacks->first;

        if (i >= static_cast<unsigned int>(globalCallbacks->last - first))
            _invalid_parameter_noinfo();

        Callback* callback = (*base)[i];
        if (!callback->table) {
            CallError error;
            raiseError(error.construct());
        }

        callback->table->invoke(callback->object, *value);

        if (i >= static_cast<unsigned int>(values->last - values->first))
            _invalid_parameter_noinfo();

        values->first[i] = 0;
    }

    TlsSetValue(tlsIndex, 0);
    cleanupLock(&lock);

    if (values->first)
        releaseMemory(values->first);

    values->first = 0;
    values->last = 0;
    values->limit = 0;
    releaseMemory(values->allocation);
    releaseMemory(values);

    if (lock.locked)
        lock.mutex->unlock();
}
