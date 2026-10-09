// from server: 88% by colin
// roc 2007-08 00491a70  unit: RBX::Network::VPlayer::?$Listener  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00491a70
//
// 00491a70  56                   push esi
// 00491a71  57                   push edi
// 00491a72  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00491a76  57                   push edi
// 00491a77  8bf1                 mov esi, ecx
// 00491a79  ff159ce67700         call dword ptr [0x77e69c]
// 00491a7f  8b471c               mov eax, dword ptr [edi + 0x1c]
// 00491a82  89461c               mov dword ptr [esi + 0x1c], eax
// 00491a85  8b4720               mov eax, dword ptr [edi + 0x20]
// 00491a88  85c0                 test eax, eax
// 00491a8a  894620               mov dword ptr [esi + 0x20], eax
// 00491a8d  740c                 je 0x491a9b
// 00491a8f  83c004               add eax, 4
// 00491a92  b901000000           mov ecx, 1
// 00491a97  f00fc108             lock xadd dword ptr [eax], ecx
// 00491a9b  8b5724               mov edx, dword ptr [edi + 0x24]
// 00491a9e  895624               mov dword ptr [esi + 0x24], edx
// 00491aa1  8b7f28               mov edi, dword ptr [edi + 0x28]
// 00491aa4  85ff                 test edi, edi
// 00491aa6  897e28               mov dword ptr [esi + 0x28], edi
// 00491aa9  740c                 je 0x491ab7
// 00491aab  83c704               add edi, 4
// 00491aae  b801000000           mov eax, 1
// 00491ab3  f00fc107             lock xadd dword ptr [edi], eax
// 00491ab7  5f                   pop edi
// 00491ab8  8bc6                 mov eax, esi
// 00491aba  5e                   pop esi
// 00491abb  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct VPlayerListener {
    char pad0[0x1c];
    int field1c;
    void* field20;
    int field24;
    void* field28;

    VPlayerListener(const VPlayerListener& other);
};

VPlayerListener::VPlayerListener(const VPlayerListener& other) {
    // copy string at offset 0 via MSVCP80 basic_string copy ctor
    extern void __stdcall string_copy_ctor(void*, const void*);
    string_copy_ctor(this, &other);

    field1c = other.field1c;

    field20 = other.field20;
    if (field20 != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)field20 + 4), 1);
    }

    field24 = other.field24;

    field28 = other.field28;
    if (field28 != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)field28 + 4), 1);
    }
}
