// from server: 100% by king_originala
// roc 2008-06 00501650  unit: boost::bad_lexical_cast  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00501650
//
// 00501650  6aff                 push -1
// 00501652  6809e77c00           push 0x7ce709
// 00501657  64a100000000         mov eax, dword ptr fs:[0]
// 0050165d  50                   push eax
// 0050165e  64892500000000       mov dword ptr fs:[0], esp
// 00501665  83ec1c               sub esp, 0x1c
// 00501668  56                   push esi
// 00501669  33f6                 xor esi, esi
// 0050166b  56                   push esi
// 0050166c  8d442408             lea eax, [esp + 8]
// 00501670  6858738200           push 0x827358
// 00501675  50                   push eax
// 00501676  e895840000           call 0x509b10
// 0050167b  8d4c2410             lea ecx, [esp + 0x10]
// 0050167f  51                   push ecx
// 00501680  89742438             mov dword ptr [esp + 0x38], esi
// 00501684  e8c7280100           call 0x513f50
// 00501689  83c410               add esp, 0x10
// 0050168c  84c0                 test al, al
// 0050168e  743c                 je 0x5016cc
// 00501690  8d4c2404             lea ecx, [esp + 4]
// 00501694  46                   inc esi
// 00501695  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0050169d  ff1568248000         call dword ptr [0x802468]
// 005016a3  56                   push esi
// 005016a4  8d542408             lea edx, [esp + 8]
// 005016a8  6858738200           push 0x827358
// 005016ad  52                   push edx
// 005016ae  e85d840000           call 0x509b10
// 005016b3  8d442410             lea eax, [esp + 0x10]
// 005016b7  50                   push eax
// 005016b8  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005016c0  e88b280100           call 0x513f50
// 005016c5  83c410               add esp, 0x10
// 005016c8  84c0                 test al, al
// 005016ca  75c4                 jne 0x501690
// 005016cc  8d4c2404             lea ecx, [esp + 4]
// 005016d0  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005016d8  ff1568248000         call dword ptr [0x802468]
// 005016de  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005016e2  8bc6                 mov eax, esi
// 005016e4  5e                   pop esi
// 005016e5  64890d00000000       mov dword ptr fs:[0], ecx
// 005016ec  83c428               add esp, 0x28
// 005016ef  c3                   ret 

struct String;
extern void (__thiscall *destroyString)(String *);

struct String {
    unsigned char storage[28];
    ~String() { destroyString(this); }
};

extern String __cdecl formatString(const char *, ...);
extern bool __cdecl keyExists(const String &);

int countProcessors()
{
    int count = 0;
    for (;;) {
        String key = formatString(
            "HKEY_LOCAL_MACHINE\\HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\%d",
            count);
        if (!keyExists(key))
            break;
        ++count;
    }
    return count;
}
