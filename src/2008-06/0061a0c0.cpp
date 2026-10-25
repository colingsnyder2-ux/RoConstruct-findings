// from server: 100% by king_originala
// roc 2008-06 0061a0c0  unit: RBX::InletTool  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a0c0
//
// 0061a0c0  6854bf9700           push 0x97bf54
// 0061a0c5  6880a06100           push 0x61a080
// 0061a0ca  e861d2f3ff           call 0x557330
// 0061a0cf  83c408               add esp, 8
// 0061a0d2  683cbf9700           push 0x97bf3c
// 0061a0d7  ff15d4228000         call dword ptr [0x8022d4]
// 0061a0dd  a16caf9500           mov eax, dword ptr [0x95af6c]
// 0061a0e2  83f8ff               cmp eax, -1
// 0061a0e5  7411                 je 0x61a0f8
// 0061a0e7  50                   push eax
// 0061a0e8  ff15a0228000         call dword ptr [0x8022a0]
// 0061a0ee  c7056caf9500ffffffff mov dword ptr [0x95af6c], 0xffffffff
// 0061a0f8  683cbf9700           push 0x97bf3c
// 0061a0fd  ff15f4218000         call dword ptr [0x8021f4]
// 0061a103  c3                   ret 

extern "C" void __cdecl ensure_initialized(void (__cdecl *)(), void *);

extern "C" {
    extern void (__stdcall *EnterCriticalSection)(void *);
    extern void (__stdcall *LeaveCriticalSection)(void *);
    extern int (__stdcall *TlsFree)(unsigned long);
}

extern unsigned long tls_index;
extern char critical_section;
extern char initialization_flag;

void cleanup()
{
    ensure_initialized((void (__cdecl *)())0x0061a080,
                       &initialization_flag);

    EnterCriticalSection(&critical_section);

    unsigned long index = tls_index;
    if (index != 0xffffffffUL) {
        TlsFree(index);
        tls_index = 0xffffffffUL;
    }

    LeaveCriticalSection(&critical_section);
}
